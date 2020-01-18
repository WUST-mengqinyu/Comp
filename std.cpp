#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

const int maxn = 10;

int n, k, col[maxn];
int res = 0x3f3f3f3f;

vector<int> ve[3];

bool check()
{
    for(int i = 0; i < n; i ++)
    {
        for(int x = 0; x < k; x ++) {
            bool flag = 0;
            for(auto p : ve[x]) if(p == i) flag = 1;
            if(!flag) continue;
            for(auto p : ve[x]) if(p != i && col[p] == col[i]) return false;
        }
    }
    return true;
}

void dfs(int dep, int num)
{
    if (dep != n) num = max(col[dep], num);
    if(dep == n)
    {
        // cout << num << ' ' ;
        if(check()) res = min(res, num);
        return ;
    }
    for(int i = 0; i <= num + 1; i ++)
    {
        col[dep + 1] = i;
        dfs(dep + 1, num);
    }
}

int main()
{
    scanf("%d%d", &n, &k);
    for(int i = 0; i < k; i ++)
    {
        int t, x;
        scanf("%d", &t);
        while(t --)
        {
            scanf("%d", &x);
            x --;
            ve[i].push_back(x);
        }
    }
    col[0] = 0;
    dfs(0, 0);
    printf("%d\n", res + 1);
    return 0;
}
