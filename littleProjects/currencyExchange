#include <iostream>

using namespace std;

const float DOLLAR = 1;

const float QUARTER = .25;

const float DIME = .1;

const float NICKEL = .05;

const float PENNY = .01;

int main() {
  float amountDue = 0;
  float counterDo = 0;
  float counterQ = 0;
  float counterD = 0;
  float counterN = 0;
  float counterP = 0;
  cout << "Enter the amount Due: ";
  cin >> amountDue;
  cout << endl;
  float amountRecieved = 0;
  cout << "Enter the amount recieved: ";
  cin >> amountRecieved;
  cout << endl;
  if (amountRecieved < amountDue) {
    cout << "Insufficient amount received";
  }
  float change = amountRecieved - amountDue;
  while (change >= DOLLAR) {
    change = change - DOLLAR;
    counterDo = counterDo + 1;
    if (change <= .999) {
      if (counterDo > 1) {
        cout << counterDo << " dollars" << endl;
      } else {
        cout << counterDo << " dollar" << endl;
      }
    }
  }
  while (change >= QUARTER) {
    change = change - QUARTER;
    counterQ = counterQ + 1;
    if (change <= .249) {
      if (counterQ > 1) {
        cout << counterQ << " quarters" << endl;
      } else {
        cout << counterQ << " quarter" << endl;
      }
    }
  }
  while (change >= DIME - .001) {
    change = change - DIME;
    counterD = counterD + 1;
    if (change <= .099) {
      if (counterD > 1) {
        cout << counterD << " dimes" << endl;
      } else {
        cout << counterD << " dime" << endl;
      }
    }
  }
  while (change >= NICKEL - .001) {
    change = change - NICKEL;
    counterN = counterN + 1;
    if (change <= .049) {
      if (counterN > 1) {
        cout << counterN << " nickels" << endl;
      } else {
        cout << counterN << " nickel" << endl;
      }
    }
  }
  while (change > PENNY - .001) {
    change = change - PENNY;
    counterP = counterP + 1;
    if (change <= .009) {
      if (counterP > 1) {
        cout << counterP << " pennies" << endl;
      } else {
        cout << counterP << " penny" << endl;
      }
    }
  }
  
  
return 0;
}
