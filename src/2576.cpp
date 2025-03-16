#include <bits/stdc++.h>
using namespace std;
int MIN_INITIAL_VALUE = 1000;

int main()
{
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int N[7];
  int sum = 0;
  int min = MIN_INITIAL_VALUE;
  int temp;

  for (int i = 0; i < 7; i++)
  {
    cin >> temp;
    if (temp % 2 == 0)
    {
      continue;
    }
    sum += temp;
    if (min > temp)
    {
      min = temp;
    }
  }

  if (min == MIN_INITIAL_VALUE)
  {
    cout << -1;
    return 0;
  }

  cout << sum << '\n'
       << min;
}
