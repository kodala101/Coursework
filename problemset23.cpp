//#include <iostream>
//#include "console.h"
//#include "simpio.h"
//#include <string>
//
//using namespace std;
//
//int division(string n) {
//	if (n.length() == 1) {
//		return (n[0] - '0') % 7;
//	}
//	else {
//		return (division(n.substr(0, n.size() - 1)) * 10 + (n[n.size() - 1] - '0') % 7) % 7;
//	}
//}
//
//int main() {
//	cout << division("342") << endl;
//	return 0;
//}