#!/bin/bash
set -eou pipefail

cat <<EOF > /tmp/main.cpp 
#include <bits/stdc++.h>
using namespace std;
int main(){}
EOF

x=$(g++ -std=c++11 /tmp/main.cpp -o /tmp/main.o -H 2>&1 | grep bits/stdc++.h)
directory=`echo $x | awk '{ print $NF }'`

mkdir -p bits
cp $directory bits/
cd bits
g++ -std=c++11 stdc++.h

# Speed up compiler time of c++
# ./bits-script.sh

# and use > #include "bits/stdc++.h"
