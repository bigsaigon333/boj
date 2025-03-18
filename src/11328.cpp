#include <bits/stdc++.h>
using namespace std;

bool test(string str1, string str2)
{
  int occur['z' - 'a' + 1] = {};

  for (int i = 0; i < str1.size(); i++)
  {
    occur[str1[i] - 'a']++;
    occur[str2[i] - 'a']--;
  }

  for (int i = 0; i < 'z' - 'a' + 1; i++)
  {
    if (occur[i] != 0)
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
