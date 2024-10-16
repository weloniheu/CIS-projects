#include <iostream>
#include <vector>

using namespace std;

const char BLACK_SQUARE = '+';

const char RED_SQUARE = '-';



int main() {
  int rowV = 0;
  int columnV = 0;
  cout << "Enter number of rows: ";
  cin >> rowV;
  cout << "Enter number of columns: ";
  cin >> columnV;
  vector<vector<char>> vect (rowV, vector<char> (columnV));
  for (int row = 0; row < rowV; row++){
    for (int col = 1; col < columnV; col = col + 2){
      vect[row][col] = RED_SQUARE;
    }
  }
  for (int row = 0; row < rowV; row = row + 2){
    for (int col = 0; col < columnV; col = col + 2){
      vect [row][col] = BLACK_SQUARE;
    }
  }
  for (int row = 1; row < rowV; row = row + 2){
    for (int col = 0; col < columnV; col = col + 2){
      vect [row][col] = RED_SQUARE;
    }
  }
  for (int row = 1; row < rowV; row = row + 2){
    for (int col = 1; col < columnV; col = col + 2){
      vect [row][col] = BLACK_SQUARE;
    }
  }
  for (int row = 0; row < rowV; row++){
    for (int col = 0; col < columnV; col++){
      cout << vect[row][col];
    }
    cout << endl;
  }
return 0;
}
