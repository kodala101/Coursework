//#include <iostream>
//#include "console.h"
//#include "simpio.h"
//
//using namespace std;
//
//void getGcd(int maxx, int minn) {
//	if (maxx % minn == 0) {
//		cout << minn << endl;
//	}
//	else {
//		getGcd(minn, maxx % minn);
//	}
//}
//
//int main() {
//	int a = getInteger("Enter first number: ");
//	int b = getInteger("Enter second number: ");
//	if (a <= 0 || b <= 0) {
//		cout << "numbers must be positive" << endl;
//		while (a <= 0 && b <= 0) {
//			a = getInteger("Enter first number: ");
//			b = getInteger("Enter second number: ");
//		}
//	}
//	int maxx = max(a, b);
//	int minn = min(a, b);
//
//	getGcd(maxx, minn);
//
//	return 0;
//}