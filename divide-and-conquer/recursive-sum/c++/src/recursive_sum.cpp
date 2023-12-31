#include <iostream>
#include <vector>

int recursive_sum(std::vector<int> &array) {

  if (array.empty()) return 0;

  int first = array[0];
  array.erase(array.begin());

  return first + recursive_sum(array);
}

int main() {
  std::vector<int> array = {2, 4, 6};
  int sum = 0;

  sum = recursive_sum(array);

  std::cout << "sum: " << sum << "\n";
}
