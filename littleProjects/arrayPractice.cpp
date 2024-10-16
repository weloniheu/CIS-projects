#include <iostream>
#include "array_minimum.h"

using namespace std;

const int SIZE = 5;


int main(){
  int array[SIZE];
  
  string yes;
  cout << "Do you want me to find the minimum, Write yes to continue, No to cancel: ";
  cin >> yes;
  if (yes == "yes") { 
    
    cout << "Write 5 Values: ";
    for (int value = 0; value < SIZE; value++) {
      cin >> array[value];
    }
    cout << endl;
    int minimum = array[0];
    for (int value = 0; value < SIZE; value++) {
      if (minimum < 0){
        if (minimum > array[value]){
          minimum = array[value];
        }
      }
      if (array[value] < minimum) {
        minimum = array[value];
      }
      if (value == 4) {
        cout << "Minimun!: " << minimum << endl;
      }
    } 
  } else if (yes != "yes"){
    cout << "Okay sorry for wasting your time have a good day" << endl;
  }
  

return 0;
}
