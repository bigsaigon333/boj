#include <bits/stdc++.h>
using namespace std;

int n, freq[7];

int main()
{
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  for (int i = 0; i < 3; i++)
  {
    cin >> n;
    freq[n]++;
  }

  int *mep = max_element(freq + 1, freq + 7);
  int m = mep - freq;

  if (*mep == 3)
  {
    cout << (10000 + m * 1000);
  }
  else if (*mep == 2)
  {
    cout << (1000 + m * 100);
  }
  else
  {
    for (int i = 6; i >= 1; i--)
    {
      if (freq[i])
      {
        cout << i * 100;
        break;
      }
    }
  }
}
