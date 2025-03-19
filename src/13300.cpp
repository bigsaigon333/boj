#include <bits/stdc++.h>
using namespace std;

int N, K, S[2][7], room;

int main()
{
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  cin >> N >> K;

  for (int i = 0; i < N; i++)
  {
    int sex, grade;
    cin >> sex >> grade;

    S[sex][grade]++;
  }

  for (int s = 0; s <= 1; s++)
  {
    for (int g = 1; g <= 6; g++)
    {
      room += (S[s][g] + K - 1) / K;
    }
  }

  cout << room;
}
