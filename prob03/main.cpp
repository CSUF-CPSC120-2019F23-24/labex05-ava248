// Random Rectangle

#include <iostream>
#include <cstring>
#include <cstdlib>
#include <ctime>

int main()
{


  const int LENGTH = 40;

  std::string max;

  unsigned seed = time(0);
  srand(seed);
  int length = rand() % LENGTH + 1;

  max.assign(length, '#');
  std::cout << max << std::endl;
  std::cout << max << std::endl;
  std::cout << max << std::endl;


  return 0;
}
