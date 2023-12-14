#include <iostream>

void greeting2(char *name) { std::cout << "How are you " << name << "?\n"; }

void bye() { std::cout << "Ok, bye!\n"; }

void greeting(char *name) {

  std::cout << "Hello, " << name << "!\n";
  greeting2(name);
  std::cout << "getting ready to say bye...\n";
  bye();
}

int main() { greeting((char *)"John Doe"); }
