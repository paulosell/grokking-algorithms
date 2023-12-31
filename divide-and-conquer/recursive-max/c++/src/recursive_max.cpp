#include <iostream>
#include <vector>

int recursive_max(std::vector<int> &array) {

  if (array.empty()) throw std::invalid_argument("Array is empty");
  if (array.size() == 1) return array[0];

  int max = array[0];

  array.erase(array.begin());

  int new_max = recursive_max(array);

  return max > new_max ? max : new_max;
}

int main() {

  std::vector<int> array = {1, 5, 10, 25, 16, 1};
  std::vector<int> negative_array = {-1, -5, -10, -25, -16};
  int max = 0;

  max = recursive_max(array);
  std::cout << "array max value: " << max << "\n";

  max = recursive_max(negative_array);
  std::cout << "array max value: " << max << "\n";
}
