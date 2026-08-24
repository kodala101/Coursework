//#include <iostream>
//#include <vector>
//#include <map>
//#include <set>
//#include <algorithm>
//#include <stack>
//
//using namespace std;
//
//main() {
//	int n;
//	cin >> n;
//
//	stack<int> s;
//
//	int x = 0;
//
//	vector<int> v(n + 1, 0);
//
//	for (int i = 0; i < n; i++) {
//		int elem;
//		cin >> elem;
//		if (i == 0) {
//			s.push(elem);
//			v[elem] = 0;
//		}
//		else {
//			if (s.top() > elem) {
//				s.push(elem);
//				v[elem] = 1;
//				x = max(x, 1);
//			}
//			else {
//				int popedMax = 0;
//				while (s.size() > 0 and s.top() < elem) {
//					popedMax = max(popedMax, v[s.top()]);
//					s.pop();
//				}
//				s.push(elem);
//				v[elem] = popedMax + 1;
//				if (s.size() == 1) v[elem] = 0;
//				x = max(x, v[elem]);
//			}
//		}
//	}
//
//	cout << x;
//}
//
////10 9 7 8 6 5 3 4 2 1