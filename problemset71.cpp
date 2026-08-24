//#include "vector.h"
//#include <iostream>
//#include "console.h"
//#include "simpio.h"
//
//using namespace std;
//
//const int SENTINEL = -1;
//
//int sum(int x, int y) {
//	return x + y;
//}
//
//int mult(int x, int y) {
//	return x * y;
//}
//
//int xorr(int x, int y) {
//	return x ^ y;	//es raari
//}
//
//int fold(int defaultValue, Vector<int> values, int (combine)(int, int)) {
//	int dasareturnebeli = defaultValue;
//	foreach (int x in values) dasareturnebeli = combine(dasareturnebeli, x);
//	return dasareturnebeli;
//}
//
//int main() {
//	Vector<int> numbers;
//	while (true) {
//		int y = getInteger("Enter number: ");
//		if (y == SENTINEL) break;
//		numbers.add(y);
//	}
//	cout << "sum: " << fold(0, numbers, sum) << endl;
//	cout << "mult: " << fold(1, numbers, mult) << endl;
//	cout << "xor: " << fold(0, numbers, xorr) << endl;
//
//	return 0;
//}