#include <bits/stdc++.h>
using namespace std;

#define f(i, num) for(int i=0; i<num; i++)
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

int main()
{
	int a, b, t1, t2, t, ans;

	read(t);
	f(z, t)
	{
		ans = 0;
		read2(a, b);
		F_(i, 9, -1, 1)
		{
			t1 = (a/((int)(pow(10, i)))) % 10;
			t2 = (b/((int)(pow(10, i)))) % 10;

			ans = ans*10 + (t1+t2)%10;
		}
		printf("%d\n", ans);
	}
}