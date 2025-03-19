#include <bits/stdc++.h>
using namespace std;

const int MAX_N = 100005;
const int MAX_A = 1000005;

int n, a[MAX_N], occur[MAX_A], x, ans;

int main()
{
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  cin >> n;

  for (int i = 0; i < n; i++)
  {
    cin >> a[i];
    occur[a[i]] = 1;
  }

  cin >> x;

  for (int i = 0; i < n; i++)
  {
    if (occur[a[i]] && x - a[i] != a[i] && x - a[i] >= 0 && x - a[i] < MAX_A && occur[x - a[i]])
    {
      ans++;
      occur[a[i]] = 0;
      occur[x - a[i]] = 0;
    }
  }

  cout << ans;
}
