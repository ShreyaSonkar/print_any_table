#include <iostream>

using namespace std;

int main() {
  int i, a, n;
  cout << " Which table do you want to print? " << endl;
  cin >> n;
  cout << " Here is the table of: " << n << endl;
  for(i = 1; i <= 10; i++){
	a = i * n;
	cout << n << " x " << i << " = " << a << endl;
  }
 	return 0;
}