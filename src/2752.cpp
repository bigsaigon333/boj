#include <bits/stdc++.h>
using namespace std;

int main()
{
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int N[3];

  cin >> N[0] >> N[1] >> N[2];

  sort(N, N + 3);

  for (int i = 0; i < 3; i++)
  {
    cout << N[i] << " ";
  }
}
