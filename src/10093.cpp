#include <bits/stdc++.h>
using namespace std;

int main()
{
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  long long A, B;

  cin >> A >> B;

  if (A == B)
  {
    cout << 0;
    return 0;
  }

  if (B < A)
  {
    long long temp = A;
    A = B;
    B = temp;
  }

  cout << B - A - 1 << '\n';

  for (long long i = A + 1; i < B; i++)
  {
    cout << i << " ";
  }
}
