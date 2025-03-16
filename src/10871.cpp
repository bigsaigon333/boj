#include <iostream>

int main()
{
  std::ios::sync_with_stdio(false);
  std::cin.tie(nullptr);

  int N, X;
  std::cin >> N >> X;

  for (int i = 0; i < N; i++)
  {
    int temp;
    std::cin >> temp;

    if (temp < X)
    {
      std::cout << temp << " ";
    }
  }
}
