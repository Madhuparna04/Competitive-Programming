#include <bits/stdc++.h>
using namespace std;

#define f(i, num) for(int i=0; i<num; i++) //0 - based indexing
#define f1(i, num) for(int i=1; i<=num; i++) //1 - based indexing
#define F(i, lower, upper, step) for(int i=lower; i<upper; i+=step)
#define F_(i, upper, lower, step) for(int i=upper; i>lower; i-=step)

#define read(num) scanf("%d", &num)
#define read2(num1, num2) scanf("%d%d", &num1, &num2)
#define read3(num1, num2, num3) scanf("%d%d%d", &num1, &num2, &num3)
#define reads(str) scanf("%s", str)
#define readc(ch) scanf("%c", &ch)

#define M 1000000007
#define pb push_back
#define mp make_pair

#define pii pair<int, int>
#define vi vector<int>
#define ll long long

int n;
int dp[5009][5009];
char s[5009];

int ans(int i, int ind)
{
	if(ind < 0)
		return 0;

	if(i==n)
		return 1;

	if(dp[i][ind] != -1)
		return dp[i][ind];

	if(s[i-1] == 'f')
		return ans(i+1, ind+1);

	return dp[i][ind] = (ans(i+1, ind) + ans(i, ind-1))%M;
}

int main()
{
	memset(dp, -1, sizeof(dp));
	read(n);
	f(i, n)
	{
		readc(s[5008]);
		readc(s[i]);
	}

	printf("%d\n", ans(1, 0));
}