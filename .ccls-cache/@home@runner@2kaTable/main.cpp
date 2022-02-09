#include <iostream>

using namespace std;

int main() {

  int i, a, n;
  cout << " Which table do you want to print? " << endl;
  cin >> n;
  for(i = 1; i <= 10; i++){
	a = i * n;
	cout <<" 2 x " << i << " = " << a << endl;
  }
 	 return 0;
}