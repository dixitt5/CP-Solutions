#include <iostream.h>

using namespace std;
int main() {
  int n = 0, a = 0, b = 2;
  int c;
  int mod;
  cout << "Fibonacci series with the first 2 numbers as 0 and 2 is: ";
  cout << a << ", " << b;
  for (n = 0; n < 10; n++) {
    c = b + a;
    cout << ", ";
    cout << c;
    a = b;
    b = c;
  }
  return 0;
}
