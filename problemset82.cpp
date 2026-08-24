//#include <vector>
//#include <iostream>
//#include "console.h"
//
//using namespace std;
//
//bool canCompositeWith(int value, vector<int>& kup) {
//	if (value == 0) return true;
//	if (value < 0) return false;
//	for (int x : kup) {
//		return canCompositeWith(value - x, kup);
//	}
//	return false;
//}
//
//int main() {
//	vector<int> kup = { 5, 10 };
//	cout << canCompositeWith(15, kup) << endl;
//	return 0;
//}