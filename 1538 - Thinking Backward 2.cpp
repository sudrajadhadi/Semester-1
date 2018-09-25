#include <iostream>
#include <stdio.h>
#include <math.h>
using namespace std;
typedef long long LL;

LL solve(LL B, LL C) {
	LL D = B*B - 4LL*C;
	if (D>=0) {
		LL sqrtD = (LL)sqrt((double)D);
		if (sqrtD*sqrtD == D && (-B + sqrtD)%2 == 0) return (-B + sqrtD)/2;
	}
	return -1LL;
}

int main ()
{
	LL N;
	int cases = 1;
	while (cin >> N, N >= 0)
	{
		bool status = 0;
		cout << "Case " << cases << ":" << endl;
		if (N==1) puts ("0 0 0");
		else
        {
			for (LL m = 0; m < 100; m++)
			{
				LL E = 2LL*m*(m-1LL) + 2LL;
				if (E <= N)
				{
					for (LL p = 99; p>=0; p--)
					{
						LL B = 4LL*m + 6LL*p - 1LL;
						LL C = 3LL*p*(p-1LL) + 6LL*m*p + E;
						if (C<=N)
						{
							C = C - N;
							LL n = solve(B,C);
							if (n >= 0LL && n < 20000LL)
							{
								printf ("%lld %lld %lld\n",m,n,p);
								status = 1;
							}
						}
					}
				}
			}
			if (!status) puts("Impossible.");
		}
		cases++;
	}
	return 0;
}
