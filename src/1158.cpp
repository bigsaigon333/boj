#include <bits/stdc++.h>
using namespace std;

const int MAX = 5005;
int N, K, prv[MAX], nxt[MAX];
vector<int> v;

int main()
{
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  cin >> N >> K;

  for (int i = 1; i <= N; i++)
  {
    prv[i] = (i == 1) ? N : i - 1;
    nxt[i] = (i == N) ? 1 : i + 1;
  }

  int i = 1;
  for (int cur = 1; N > 0; cur = nxt[cur])
  {
    if (i++ % K == 0)
    {
      nxt[prv[cur]] = nxt[cur];
      prv[nxt[cur]] = prv[cur];
      N--;
      v.push_back(cur);
    }
  }

  cout << "<";
  for (size_t i = 0; i < v.size(); i++)
  {
    cout << v.at(i) << ((i == v.size() - 1) ? ">" : ", ");
  }
}
