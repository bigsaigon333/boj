#include <bits/stdc++.h>
using namespace std;

int N, Y, M, T, arr[10005];

int main()
{
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  cin >> N;

  for (int i = 0; i < N; i++)
  {
    cin >> T;
    Y += ((T / 30) + 1) * 10;
    M += ((T / 60) + 1) * 15;
  }

  if (Y < M)
  {
    cout << "Y " << Y;
  }
  else if (M < Y)
  {
    cout << "M " << M;
  }
  else
  {
    cout << "Y M " << M;
  }
}
