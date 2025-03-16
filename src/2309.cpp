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

  bool isFound = false;
  for (int i = 0; i < 9; i++)
  {
    for (int j = i + 1; j < 9; j++)
    {
      if (total - N[i] - N[j] == 100)
      {
        N[i] = MAX_VALUE;
        N[j] = MAX_VALUE;
        isFound = true;
        break;
      }

      if (isFound)
      {
        break;
      }
    }
  }

  for (int i = 0; i < 9; i++)
  {
    for (int j = i + 1; j < 9; j++)
    {
      if (N[i] > N[j])
      {
        int temp = N[i];
        N[i] = N[j];
        N[j] = temp;
      }
    }
  }

  for (int i = 0; i < 7; i++)
  {
    cout << N[i] << '\n';
  }
}
