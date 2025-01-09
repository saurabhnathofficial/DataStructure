#include <iostream>
#include <limits.h>
#include <vector>
using namespace std;

void pattern() {

  for (int i = 0; i < 5; i++) {
    for (int j = 0; j < 5; j++) {
      cout << "*";
    }
    cout << endl;
  }

  cout << endl;

  for (int i = 0; i < 5; i++) {
    for (int j = 0; j < i + 1; j++) {
      cout << "*";
    }
    cout << endl;
  }
  cout << endl;

  for (int i = 0; i <= 5; i++) {
    for (int j = 1; j <= 5 - i; j++) {
      cout << "*";
    }
    cout << endl;
  }
  cout << endl;
  for (int i = 1; i <= 5; i++) {
    for (int j = 1; j < i + 1; j++) {
      cout << i;
    }
    cout << endl;
  }

  cout << endl;

  for (int i = 0; i <= 5; i++) {
    for (int j = 1; j <= 5 - i; j++) {
      cout << j;
    }
    cout << endl;
  }
}

void countDigit() {
  int n;
  cout << "Enter the number: ";
  cin >> n;
  int count = 0;
  while (n != 0) {
    n = n / 10;
    count++;
  }
  cout << "Number of digits: " << count;
}

void reverse_number() {
  int n;
  cout << "enter a number: ";
  cin >> n;
  int reverse = 0;
  while (n != 0) {
    int digit = n % 10;
    reverse = reverse * 10 + digit;
    n = n / 10;
  }
  cout << reverse;
}

int main(){


    reverse_number();
    return 0;

}