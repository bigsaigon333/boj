#include <bits/stdc++.h>
using namespace std;

bool test(string str1, string str2)
{
  int occur['z' - 'a' + 1] = {};

  for (char c : str1)
  {
    occur[c - 'a']++;
  }

  for (char c : str2)
  {
    occur[c - 'a']--;
  }

  for (int o : occur)
  {
    if (o != 0)
    {
      return false;
    }
  }

  return true;
}

int main()
{
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int N;
  cin >> N;

  while (N--)
  {
    string str1, str2;
    cin >> str1 >> str2;
    bool isPossible = str1.size() == str2.size() ? test(str1, str2) : false;

    cout << (isPossible ? "Possible" : "Impossible") << '\n';
  }
}
