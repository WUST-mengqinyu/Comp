#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

const int maxn = 1e5 + 10;
int a[maxn], s[10];

int main()
{
	int n, k;
	scanf("%d%d", &n, &k);
	for(int i = 0; i < k; i ++)
	{
		int t, x;
		scanf("%d", &t);
		while(t --)
		{
			scanf("%d", &x);
			a[x] |= (1 << i);
		}
	}
	for(int i = 1; i <= n; i ++) s[a[i]] ++;
	int res = n;
	res -= s[0];
	int tmp = min({s[1], s[2], s[4]});
	res -= 2 * tmp;
	s[1] -= tmp, s[2] -= tmp, s[4] -= tmp;
	for(int i = 1; i <= 4; i *= 2)
	{
		int x = i, y = 7 ^ i;
		int tmp = min(s[x], s[y]);
		res -= tmp;
		s[x] -= tmp, s[y] -= tmp;
	}
	for(int i = 1; i <= 4; i *= 2)
	{
		for(int j = i * 2; j <= 4; j *= 2)
		{
			int tmp = min(s[i], s[j]);
			res -= tmp;
			s[i] -= tmp, s[j] -= tmp;
		}
	}
	printf("%d\n", res);
	return 0;
}
