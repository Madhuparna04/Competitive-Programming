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
	int a[6], sum=0;
	f(i, 6)
	{
		read(a[i]);
		sum+=a[i];
	}


	f(i, 6)
		f(j, 6)
			f(k, 6)
			{
				int t1 = a[i]+a[j]+a[k];
				if(i!=j && j!=k && i!=k && t1==sum-t1)
				{
					printf("YES\n");
					return 0;
				}
			}

	printf("NO\n");
}