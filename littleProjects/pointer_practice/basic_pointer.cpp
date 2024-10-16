#include <iostream>

using namespace std;

void by_reference(int &a){
  a = a + 1;
}

int main() {

  int myInt = 5;
  int *firstPointer = &myVariable;

  int copiedViaPointer = *firstPointer;

  cout << copiedViaPointer << endl;

  return 0;
  
}
