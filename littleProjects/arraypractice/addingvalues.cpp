#include <iostream>

using namespace std;

int findSum (int firstArray[]) {
  int result = 0;
  for (int index = 0; index < 6; index++){
    result += firstArray [index];
  }
  return result;
}

int main () {
  int firstArray [6];

  cout << "enter five numbers and I'll tell what they add up to: ";
  for (int index = 0; index < 6; index++){
    cin >> firstArray [index];
  }
  cout << "Your result: "
    <<findSum(firstArray)
    <<endl;

  return 0;
}
