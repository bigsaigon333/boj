#include <bits/stdc++.h>
using namespace std;

int main()
{
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int C[21];

  for (int i = 1; i <= 20; i++)
  {
    C[i] = i;
  }

  for (int i = 0; i < 10; i++)
  {
    int first, last;
    cin >> first >> last;

    while (first < last)
    {
      int temp = C[first];
      C[first++] = C[last];
      C[last--] = temp;
    }
  }

  for (int i = 1; i <= 20; i++)
  {
    cout << C[i] << " ";
  }
}
