#include <bits/stdc++.h>
using namespace std;

const int MAX_N = 100005;
const int MAX_A = 1000005;

int n, a[MAX_N], x, ans;
// occur[x-a[i]] out of bound 문제를 단순화 하기 위해 MAX_X 크기로 occur을 선언한다
bool occur[2 * MAX_A];

int main()
{
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  cin >> n;

  for (int i = 0; i < n; i++)
  {
    cin >> a[i];
  }

  cin >> x;

  for (int i = 0; i < n; i++)
  {
    if (x - a[i] >= 0 && occur[x - a[i]])
    {
      ans++;
      occur[x - a[i]] = false;
    }
    else
    {
      occur[a[i]] = true;
    }
  }

  cout << ans;
}
