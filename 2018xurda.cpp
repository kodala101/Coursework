//#include "vector.h"
//#include "console.h"
//
//using namespace std;
//
//Vector< Vector<int> > allSubVectorsOfCSH(Vector<int>& cshBills) {
//	Vector< Vector<int> > all;
//	if (cshBills.isEmpty()) {
//		Vector<int> empty;
//		all.add(empty);
//		return all;
//	}
//	int x = cshBills[0];
//	cshBills.remove(0);
//	Vector< Vector<int> > v = allSubVectorsOfCSH(cshBills);
//	for (Vector <int> y : v) {
//		Vector<int> copy = y;
//		copy.add(x);
//		all.add(y);
//		all.add(copy);
//	} 
//	return all;
//}
//
//Vector< Vector<int> > allSubVectorsOfCST(Vector<int>& cstBills) {
//	Vector< Vector<int> > all;
//	if (cstBills.isEmpty()) {
//		Vector<int> empty;
//		all.add(empty);
//		return all;
//	}
//	int x = cstBills[0];
//	cstBills.remove(0);
//	Vector< Vector<int> > v = allSubVectorsOfCSH(cstBills);
//	for (Vector <int> y : v) {
//		Vector<int> copy = y;
//		copy.add(x);
//		all.add(y);
//		all.add(copy);
//	}
//	return all;
//}
//
//int sumOfVectors(Vector<int> v) {
//	int x = 0;
//	for (int y : v) x += y;
//	return x;
//}
//
//bool giveChange(Vector<int>& cshBills, Vector<int>& cstBills, int price) {
//	if (cshBills.isEmpty() || price == 0) return false;
//	Vector< Vector<int> > v = allSubVectorsOfCSH(cshBills);
//	Vector< Vector<int> > vv = allSubVectorsOfCSH(cstBills);
//	for (int i = 0; i < v.size(); i++) {
//		for (int j = 0; j < vv.size(); j++) {
//			if (sumOfVectors(v[i]) == price) return true;
//			if (sumOfVectors(v[i]) > price && sumOfVectors(vv[j]) == sumOfVectors(v[i]) - price) return true;
//		}
//	}
//	return false;
//}
//
//int main() {
//	int price = 10;
//	Vector<int> cshBills;
//	cshBills.add(5);
//	cshBills.add(15);
//	Vector<int> cstBills;
//	cstBills.add(10);
//	cout << giveChange(cshBills, cstBills, price) << endl;
//	return 0;
//}