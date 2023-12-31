#include <iostream>
#include <vector>

std::vector<int> quicksort(std::vector<int> &array) {

  if (array.size() < 2) return array;

  int sentinel = array[(array.size() - 1) / 2];

  std::vector<int> less, greater;

  for (const auto &element : array) {
    if (element == sentinel) continue;
    if (element <= sentinel)
      less.push_back(element);
    else
      greater.push_back(element);
  }

  std::vector<int> sorted_less = quicksort(less);
  std::vector<int> sorted_greater = quicksort(greater);

  std::vector<int> sorted;

  sorted.insert(sorted.begin(), sorted_less.begin(), sorted_less.end());
  sorted.push_back(sentinel);
  sorted.insert(sorted.end(), sorted_greater.begin(), sorted_greater.end());

  return sorted;
}
int main() {
  std::vector<int> unsorted_array = {
      69, 60, 38, 82, 99, 15, 8,  94, 30, 42, 35, 40, 63, 1,  49,
      66, 93, 83, 20, 32, 87, 6,  78, 17, 2,  61, 91, 25, 7,  4,
      97, 31, 23, 67, 95, 47, 55, 92, 37, 59, 73, 81, 74, 41, 39};

  std::vector<int> sorted_array;

  sorted_array = quicksort(unsorted_array);

  for (const auto &element : sorted_array) {
    std::cout << element << " ";
  }

  std::cout << "\n";
}
