#include <iostream>
using namespace std;
int main() {
 
  // Creating a SIMPLE CALCULATOR
  // Sum
  int x , y, add, subt, multi, divide, mod;
  
  cout << "---------------------"<< endl;
  cout << "*****CALCULATOR7*****"<< endl;
  cout << "---------------------"<< endl;
  cout << endl;
  cout << endl;  
  cout << "Thank you for using MarWilMat's calculator. \n-You will be asked to enter   two numbers that will be used to complete calculations. \n-Simply press the enter/return key after entering a value." << endl;
  cout << endl;
  cout << "Enter your first number: ";
  cin >> x;
  cout << "Enter your second number: ";
  cin >> y;
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
