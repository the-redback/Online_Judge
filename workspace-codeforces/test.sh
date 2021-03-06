#!/bin/bash
DBG=""
while getopts ":d" opt; do
  case $opt in
    d)
      echo "-d was selected; compiling in DEBUG mode!" >&2
      DBG=-Dredback
      ;;
    \?)
      echo "Invalid option: -$OPTARG" >&2
      ;;
  esac
done

if ! g++ -std=c++17 $DBG $%full%$ -o $%file%$.o; then
    exit
fi

INPUT_NAME=in
OUTPUT_NAME=ans
MY_NAME=my_output

if [[ "$(uname 2>/dev/null)" == "Linux" ]]; then
  time_cmd=$(which time)
else
  time_cmd=$(which gtime)
fi

rm -R $MY_NAME* &>/dev/null
for test_file in $INPUT_NAME*
do
    i=$((${#INPUT_NAME}))
    test_case=${test_file:$i}
    if ! $time_cmd -o time.out -f "(%es)" ./$%file%$.o < $INPUT_NAME$test_case | tee $MY_NAME$test_case >/dev/null; then
        echo [1m[31mSample test \#$test_case: Runtime Error[0m `cat time.out`
        echo ========================================
        echo Sample Input \#$test_case
        cat $INPUT_NAME$test_case
    else
        if diff --brief --ignore-space-change $MY_NAME$test_case $OUTPUT_NAME$test_case; then
            echo [1m[32mSample test \#$test_case: Accepted[0m `cat time.out`
        else
            echo [1m[31mSample test \#$test_case: Wrong Answer[0m `cat time.out`
            echo ========================================
            echo Sample Input \#$test_case
            cat $INPUT_NAME$test_case
            echo ========================================
            echo Sample Output \#$test_case
            cat $OUTPUT_NAME$test_case
            echo ========================================
            echo My Output \#$test_case
            cat $MY_NAME$test_case
            echo ========================================
        fi
    fi
done
