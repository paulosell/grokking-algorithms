#include <iostream>
#include <vector>

int recursive_count(std::vector<int> &array) {

  if (array.empty()) return 0;

  array.erase(array.begin());

  return 1 + recursive_count(array);
}

int main() {

  std::vector<int> array = {1, 2, 3, 4, 5, 6, 7, 8};
  int size = 0;

  size = recursive_count(array);

  std::cout << "array size: " << size << "\n";
}
