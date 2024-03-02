#include <iostream>

int main() {
  long long n, m, a;
  std::cin >> n >> m >> a;

  long long length = (n + a - 1) / a;
  long long width = (m + a - 1) / a;

  std::cout << length * width;
  
  return 0;
}
