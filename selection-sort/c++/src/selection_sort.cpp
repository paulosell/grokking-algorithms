#include <iostream>
#include <vector>

int find_smallest(const std::vector<int> &unsorted_array) {

  int smallest = unsorted_array[0];
  int smallest_idx = 0;
  int i;

  for (i = 0; i < unsorted_array.size(); i++) {
    if (unsorted_array[i] < smallest) {
      smallest = unsorted_array[i];
      smallest_idx = i;
    }
  }

  return smallest_idx;
}

std::vector<int> selection_sort(std::vector<int> &unsorted_array) {

  std::vector<int> sorted_array;

  while (!unsorted_array.empty()) {

    // add smallest value to new array
    int smallest = find_smallest(unsorted_array);
    sorted_array.push_back(unsorted_array[smallest]);

    // remove smallest value from old array
    unsorted_array.erase(unsorted_array.begin() + smallest);
  }

  return sorted_array;
}

int main() {

  std::vector<int> unsorted_array = {5, 3, 6, 2, 10};
  std::vector<int> sorted_array;

  sorted_array = selection_sort(unsorted_array);

  for (const auto &element : sorted_array) {
    std::cout << element << " ";
  }

  std::cout << "\n";
}
