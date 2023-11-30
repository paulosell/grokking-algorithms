#include <iostream>
#include <vector>

int binary_search(std::vector<int> &list, int target) {

  int low = 0;
  int high = list.size() - 1;

  while (low <= high) {
    int middle = (low + high) / 2;
    int guess = list[middle];

    if (guess == target) return middle;
    high = (guess > target) ? middle - 1 : high;
    low = (guess < target) ? middle + 1 : low;
  }

  return -1;
}
int main() {

  int index;
  std::vector<int> list = {1, 3, 5, 7, 9};

  index = binary_search(list, 1);
  std::cout << "Index of '1' is " << index << "\n";

  index = binary_search(list, 5);
  std::cout << "Index of '5' is " << index << "\n";
}
