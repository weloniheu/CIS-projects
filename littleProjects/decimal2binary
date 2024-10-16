#include <iostream>
#include <string>

using namespace std;
 
int main() {
 int userInput = 0;
 cout << "Write a positive Interger: ";
 cin >> userInput;
 string number = "";
 while (userInput >= 1) {
   int binary = userInput % 2;
   if (binary == 1){
     number = "1" + number ;
   } else { if (binary == 0){
     number = "0" + number;
   } }
   userInput = userInput / 2;
   if (userInput == 0){
     cout << number << endl;
   }
 }
return 0;
}
 
