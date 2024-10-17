#include <iostream>
#include <string>

using namespace std; 

const string USER_PROMPT = "Enter a positive non-zero integer: ";
const string INVALID_INPUT = "Invalid input";


void get_input(long &number) {
  cout << USER_PROMPT;
  cin >> number;
  while (number <= 0) {
    cout << INVALID_INPUT << endl;
    cout << USER_PROMPT;
    cin >> number;
  }
}


int main() {
  long first_hail = 0;
  get_input(first_hail);
  cout << first_hail << endl;
  long hailing = 0;
  while (first_hail > 1) {
    if (first_hail > 1) {
      long even_check;
      even_check = first_hail % 2;
      if (even_check == 0) {
        first_hail = first_hail / 2;
      } else if (even_check == 1) {
        first_hail = (first_hail * 3) + 1;
      }
      cout << first_hail << endl;
    }
  }

  return 0;
}
