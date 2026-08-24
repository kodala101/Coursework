//#include "set.h"
//#include <vector>
//#include <iostream>
//#include "console.h"
//
//using namespace std;
//
//Set< vector<int> > allSubSets(vector<int> v) {
//	Set< vector<int> > all;
//	if (v.size() == 0) {
//		vector<int> empty;
//		all.add(empty);
//		return all;
//	}
//	int x = v[0];
//	v.erase(v.begin() + 0);
//	Set< vector<int> > sth = allSubSets(v);
//	Set< vector<int> > copy;
//	for (vector<int> s : sth) {
//		s.push_back(x);
//		copy.add(s);
//	}
//	return all + sth + copy;
//}
//
//bool ifCanGet(Set< vector<int> > all, int x) {
//	for (vector<int> s : all) {
//		int z = 0;
//		for (int y : s) z += y;
//		if (z == x) return true;
//	}
//	return false;
//}
//
//int main() {
//	vector<int> v = {1, 2, 3, 4};
//	cout << ifCanGet(allSubSets(v), 5) << endl;
//	return 0;
//}