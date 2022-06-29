#include <iostream>
using namespace std;

void chooseCal(){
  cout << "[1] - Addition" << endl;
  cout << "[2] - Subtraction" << endl;
  cout << "[3] - Multiplication" << endl;
  cout << "[4] - Division" << endl;
}


int main() {

  // Creating a SIMPLE CALCULATOR
  // Sum
  int x , y, add, subt, multi, divide, mod, choice;

  cout << "---------------------"<< endl;
  cout << "*****CALCULATOR*****"<< endl;
  cout << "---------------------"<< endl;
  cout << endl;
  cout << endl;

  /// I would like to create a switch here to choose which type of calculation the user wants to preform here
  cout << "Thank you for using MarWilMat's calculator. \nPlease enter the calculation from the list below" << endl;
  cout << endl;
  chooseCal();
  cout << endl;
  cout << "Please make a selection: ";
  cin >> choice;
  cout << endl;

  cout << "Your numbers are -> " << x << " and -> " << y << endl;
  cout << endl;

  // since we cant use loops or switches, we are going to display all 5

  // Addition
  add = x + y;
  cout << "Addition: " << x << " + " << y << " = " << add <<endl;

  //Subtraction
  subt = x - y;
  cout << "Subtraction: " << x << " - " << y << " = " << subt <<endl;

  //Multiplication
  multi = x * y;
  cout << "Multiplication: " << x << " x " << y << " = " << multi <<endl;

  // Division
  divide = x / y;
  cout << "Division: " << x << " / " << y << " = " << divide <<endl;

    // Modulo
  mod = x % y;
  cout << "Modulo: " << x << " % " << y << " = " << mod <<endl;
  cout << endl;

  cout << "Thank you, Run again!";
  }
