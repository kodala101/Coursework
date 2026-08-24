//#include <iostream>
//#include <vector>
//#include <map>
//#include <set>
//#include <algorithm>
//
//using namespace std;
//
//long long sum(vector<int> v) {
//	long long s = 0;
//	for (int i = 0; i < v.size(); i++) s += v[i];
//	return s;
//}
//
//main() {
//	int n, q;
//	cin >> n >> q;
//
//	vector<int> elems(n, 0);
//	for (int i = 0; i < n; i++) cin >> elems[i];
//
//	long long firstSum = sum(elems);
//
//	long long allSet = -1;
//	vector<bool> changeAfterPrevTypeTwo(n, true);
//
//	while (q--) {
//		int type;
//		cin >> type;
//		if (type == 1) {
//			int ind;
//			cin >> ind;
//			ind--;
//
//			if (changeAfterPrevTypeTwo[ind]) {
//				int save = elems[ind];
//				cin >> elems[ind];
//				firstSum = firstSum - save + elems[ind];
//				cout << firstSum << '\n';
//			}
//			else {
//				cin >> elems[ind];
//				firstSum = firstSum - allSet + elems[ind];
//				cout << firstSum << '\n';
//				changeAfterPrevTypeTwo[ind] = true;
//			}
//		}
//		else {
//			int dig;
//			cin >> dig;
//			allSet = dig;
//			firstSum = (long long)n * dig;
//			fill(changeAfterPrevTypeTwo.begin(), changeAfterPrevTypeTwo.end(), false);
//			cout << firstSum << '\n';
//		}
//	}
//}
//
////1 2 3 4 5
////1 1 5
////2 10
////1 5 11
////1 4 1
////2 1
