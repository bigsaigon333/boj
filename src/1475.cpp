#include <bits/stdc++.h>
using namespace std;

int main()
{
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int N;
  cin >> N;

  int o[10] = {};

  while (N)
  {
    int n = N % 10;
    o[n]++;

    N /= 10;
  }

  o[6] = (o[6] + o[9] + 1) / 2;

  cout << *max_element(o, o + 9);
}
