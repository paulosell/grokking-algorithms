#include <iostream>

void countdown(int i) {
  std::cout << i << "\n";

  if (i <= 1) return;

  countdown(i - 1);
}

int main() { countdown(5); }
