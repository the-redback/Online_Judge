/**
 *    @author     : Maruf Tuhin
 *    @School     : CUET CSE 11
 *    @Topcoder   : the_redback
 *    @CodeForces : the_redback
 *    @UVA        : the_redback
 *    @link       : http://www.fb.com/maruf.2hin
 */
#include<cstdio>
#include<cstring>
#include<cstdlib>
#include<cctype>
#include<cmath>
#include<iostream>
#include<fstream>
#include<string>
#include<vector>
#include<queue>
#include<map>
#include<algorithm>
#include<set>
#include<sstream>
#include<stack>
using namespace std;

#define ppb pop_back
#define pb(x) push_back(x)
#define all(x) x.begin(),x.end()
#define mem(a,b) memset(a,b,sizeof(a))
#define inf 1000000000
#define eps 1e-9
#define NN 400010

struct SpamChecker{
string spamCheck(string s, int g, int b)
{
    //string ret;
    int sum=0;
    for(int i=0;i<s.size();i++)
    {
        if(s[i]=='o')
            sum+=g;
        else
            sum-=b;
        if(sum<0)
            return "SPAM";
    }
    return "NOT SPAM";
}

// BEGIN CUT HERE
	public:
	void run_test(int Case) { if ((Case == -1) || (Case == 0)) test_case_0(); if ((Case == -1) || (Case == 1)) test_case_1(); if ((Case == -1) || (Case == 2)) test_case_2(); if ((Case == -1) || (Case == 3)) test_case_3(); if ((Case == -1) || (Case == 4)) test_case_4(); if ((Case == -1) || (Case == 5)) test_case_5(); }
	private:
	template <typename T> string print_array(const vector<T> &V) { ostringstream os; os << "{ "; for (typename vector<T>::const_iterator iter = V.begin(); iter != V.end(); ++iter) os << '\"' << *iter << "\","; os << " }"; return os.str(); }
	void verify_case(int Case, const string &Expected, const string &Received) { cerr << "Test Case #" << Case << "..."; if (Expected == Received) cerr << "PASSED" << endl; else { cerr << "FAILED" << endl; cerr << "\tExpected: \"" << Expected << '\"' << endl; cerr << "\tReceived: \"" << Received << '\"' << endl; } }
	void test_case_0() { string Arg0 = "ooooxxxo"; int Arg1 = 2; int Arg2 = 3; string Arg3 = "SPAM"; verify_case(0, Arg3, spamCheck(Arg0, Arg1, Arg2)); }
	void test_case_1() { string Arg0 = "ooooxxxo"; int Arg1 = 3; int Arg2 = 4; string Arg3 = "NOT SPAM"; verify_case(1, Arg3, spamCheck(Arg0, Arg1, Arg2)); }
	void test_case_2() { string Arg0 = "xooooooooooooooooooooooooooo"; int Arg1 = 1000; int Arg2 = 1; string Arg3 = "SPAM"; verify_case(2, Arg3, spamCheck(Arg0, Arg1, Arg2)); }
	void test_case_3() { string Arg0 = "oxxxxxxxxxxxxxxxxxxxxxxxxxxxx"; int Arg1 = 1000; int Arg2 = 1; string Arg3 = "NOT SPAM"; verify_case(3, Arg3, spamCheck(Arg0, Arg1, Arg2)); }
	void test_case_4() { string Arg0 = "ooxoxoxooxoxxoxoxooxoxoxoxxoxx"; int Arg1 = 15; int Arg2 = 17; string Arg3 = "SPAM"; verify_case(4, Arg3, spamCheck(Arg0, Arg1, Arg2)); }
	void test_case_5() { string Arg0 = "oooxoxoxoxoxoxooxooxoxooxo"; int Arg1 = 16; int Arg2 = 18; string Arg3 = "NOT SPAM"; verify_case(5, Arg3, spamCheck(Arg0, Arg1, Arg2)); }

// END CUT HERE

};

// BEGIN CUT HERE
int main()
{
SpamChecker ___test;
___test.run_test(-1);
int gbase;
cin>>gbase; // erase this line if you are not using dev-cpp! :)
return 0;
}
// END CUT HERE
