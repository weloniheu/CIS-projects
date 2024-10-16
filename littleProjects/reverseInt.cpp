#include <iostream>

using namespace std;

const string PROMPT = "Enter an integer to reverse: ";
const string INVALID_INPUT = "Invalid input";

void get_input(long &number) {
  cout << PROMPT;
  cin >> number;
  cout << endl;
  while (number <= 0) {
    cout << INVALID_INPUT << endl;
    cout << PROMPT;
    cin >> number;
    cout << endl;
  }
}
int main(){
  long number = 0;
	get_input(number);
  cout << number;
  long read = 10;
  long length = 1;
  if (number < 10) {
    cout << " reversed is " << number << endl;
  }
  while (read < number) {
    length++;
    read = read * 10;
  }
  long count = 0;
  long reverse = 0;
  long success = 0;
  while (count < length) {
    reverse = number % 10;
    number = number / 10;
    count++;
    read = read / 10;
    reverse = reverse * read;
    success = success + reverse;
    if (number < 10 && number != 0) {
      success = success + number;
      cout << " reversed is " << success << endl;
    }
  }
  
  return 0;

}
