#include <bits/stdc++.h>
using namespace std;

int func2(int arr[], int N)
{
  int count[105] = {};

  for (int i = 0; i < N; i++)
  {
    if (arr[100 - arr[i]] > 0)
    {
      return 1;
    }
    arr[i]++;
  }

  return 0;
}

int main()
{
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int arr[3] = {1, 52, 48};

  cout << func2(arr, 3) << '\n';
}
