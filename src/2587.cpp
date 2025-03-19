#include <bits/stdc++.h>
using namespace std;

int N[5], sum;

int main()
{
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  for (int i = 0; i < 5; i++)
  {
    cin >> N[i];
    sum += N[i];
  }

  sort(N, N + 5);

  cout << sum / 5 << '\n'
       << N[2];
}
