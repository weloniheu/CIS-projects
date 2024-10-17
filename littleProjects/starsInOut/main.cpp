#include <iostream>
#include <string>
#include "stars.h"
#include <cmath>

using namespace std;

/*const string PROMPT = "Enter a number: ";
const string INVALID_INPUT = "Invalid input";
const char STAR = '*';*/

void printStars(int n){
  string stars = "";
  stars = STAR;
  cout << stars;
}
  

int main(){
  int expo = 0;
  cout << PROMPT;
  cin >> expo;
    if (expo < 0) {
      cout << INVALID_INPUT << endl;
    }
  int n = -1;
  int up = 2;
  int rows = 1;
  while (n < expo) {
    while (up <= rows) {
      up++;
      printStars(n);
      }
    cout << endl;
    rows = rows * 2;
    n++;
  }
  up = 1;
  rows = rows / 8;
  while (n > 0) {
    while (up <= rows) {
      printStars(n);
      up++;
    }
    up = 1;
    cout << endl;
    rows = rows / 2;
    n--;
  }
  return 0;
}
