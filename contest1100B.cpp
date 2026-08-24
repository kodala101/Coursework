//#include <iostream>
//#include <vector>
//#include <map>
//#include <set>
//#include <algorithm>
//
//using namespace std;
//
//main() {
//	int n, m;
//	cin >> n >> m;
//
//	/*set<int> s;
//	multiset<int> ms;
//
//	for (int i = 0; i < m; i++) {
//		int x;
//		cin >> x;
//		s.insert(x);
//		ms.insert(x);
//		if (s.size() == n) {
//			cout << '1';
//
//			multiset<int> neww;
//			set_difference(ms.begin(), ms.end(), s.begin(), s.end(), inserter(neww, neww.begin()));
//			ms = neww;
//			s.clear();
//			s.insert(ms.begin(), ms.end());
//		}
//		else {
//			cout << '0';
//		}
//	}*/
//
//	map<int, int> freq;
//	for (int i = 0; i < m; i++) {
//		int x;
//		cin >> x;
//		freq[x]++;
//		if (freq.size() == n) {
//			cout << '1';
//			for (auto it = freq.begin(); it != freq.end();) {
//				it->second--;
//				if (it->second == 0)
//					it = freq.erase(it);
//				else
//					++it;
//			}
//		}
//		else {
//			cout << '0';
//		}
//	}
//}