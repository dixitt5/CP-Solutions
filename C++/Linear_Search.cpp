#include <iostream>
 using namespace std;
void linear(int a[], int n) {
  int temp = -1;
  for (int i = 0; i < 6; i++) {
    if (a[i] == n) {
      cout << "Element found at place: " << i + 1 << endl;
      temp = 0;
      break;
    }
  }
  if (temp == -1) {
    cout << "Element Not Found" << endl;
  }
}
int main() {
  int arr[6];
  cout << "Please enter 6 elements of the Array" << endl;
  for (int i = 0; i < 6; i++) {
    cin >> arr[i];
  }
  cout << "Please enter an element to search" << endl;
  int num;
  cin >> num;
  linear(arr, num);
  return 0;
}
