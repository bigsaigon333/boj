#include <bits/stdc++.h>
using namespace std;

const int MAX = 5005;
int N, K, data[MAX], prv[MAX], nxt[MAX];

int main()
{
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  cin >> N >> K;

  if (N == 1)
  {
    cout << "<1>";
    return 0;
  }

  for (int i = 1; i <= N; i++)
  {
    data[i] = i;
    prv[i] = i - 1;
    nxt[i - 1] = i;
  }
  prv[1] = N;
  nxt[N] = 1;

  cout << '<';

  int cur = 0;
  while (nxt[cur] != prv[cur])
  {
    for (int i = 0; i < K; i++)
    {
      cur = nxt[cur];
    }

    cout << data[cur] << ", ";
    nxt[prv[cur]] = nxt[cur];
    prv[nxt[cur]] = prv[cur];
  }

  cout << data[nxt[cur]] << '>';
}
