#include <bits/stdc++.h>
using namespace std;

int main()
{
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int N, max = 0, maxIndex;

  for (int i = 0; i < 9; i++)
  {
    cin >> N;
    if (N > max)
    {
      max = N;
      maxIndex = i + 1;
    }
  }

  cout << max << '\n'
       << maxIndex;
}
