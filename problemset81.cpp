//#include <vector>
//#include <iostream>
//#include "console.h"
//
//using namespace std;
//
//int smallest(vector<int>& v) {
//	if (v.size() == 1) return v[0];
//	int x = v.back();
//	v.pop_back();
//	int y = smallest(v);
//	if (x <= smallest(v)) return x;
//	return y;
//}
//
//int main() {
//	vector<int> v = { 3, 2, 1, 5 };
//	cout << smallest(v) << endl;
//	return 0;
//} 