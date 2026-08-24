//#include <iostream>
//#include <vector>
//#include <map>
//#include <set>
//#include <algorithm>
//
//using namespace std;
//
//int main() {
//	int n;
//	cin >> n;
//
//	map<int, int> m;
//	for (int i = 0; i < n; i++) {
//		long long l;
//		cin >> l;
//		int mask = 0;
//		while (l != 0) {
//			int one = l % 10;
//			mask |= 1 << (9 - one);
//			l /= 10;
//		}
//		m[mask]++;
//	}
//
//	long long ans = 0;
//	for (pair<int, int> p : m) {
//		for (pair<int, int> p1 : m) {
//			if (p.first == p1.first) {
//				ans += p.second * (p.second - 1);
//			}
//			else {
//				if ((p.first & p1.first) != 0) ans += (long long)p.second * p1.second;
//			}
//		}
//	}
//
//	cout << ans / 2;
//
//	return 0;
//}
