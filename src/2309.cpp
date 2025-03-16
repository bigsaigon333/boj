#include <bits/stdc++.h>
using namespace std;

int MAX_VALUE = 1000;
int main()
{
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int N[9];
  int total = 0;

  for (int i = 0; i < 9; i++)
  {
    cin >> N[i];
    total += N[i];
  }
  sort(N, N + 9);

  for (int i = 0; i < 9; i++)
  {
    for (int j = i + 1; j < 9; j++)
    {
      if (total - N[i] - N[j] == 100)
      {
        for (int k = 0; k < 9; k++)
        {
          if (k == i || k == j)
          {
            continue;
          }

          cout << N[k] << '\n';
        }
        return 0;
      }
    }
  }
}
