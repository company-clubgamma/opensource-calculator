#include <bits/stdc++.h>
using namespace std;

int add(int num1, int num2) {
  return num1 + num2;
}

int multiply(int num1, int num2) {
  return num1 * num2; 
}

int main() {
  int first;
  cout << "Enter first number: ";
  cin >> first;
  
  int second;
  cout << "Enter second number: ";
  cin >> second;
  
  cout << "Addition is : " << add(first, second);
  cout << "Multiplication is : " << multiply(first, second);
  
  return 0;
}
