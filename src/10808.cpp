#include <bits/stdc++.h>
using namespace std;

int N[100];

int main()
{
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  string S;

  cin >> S;

  for (int i = 0; i < S.size(); i++)
  {
    N[S[i] - 'a']++;
  }

  for (int i = 0; i < 26; i++)
  {
    cout << N[i] << " ";
  }
}
