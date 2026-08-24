////#include <bits/stdc++.h>
//#include <climits> 
//#include <iostream>
//#include <vector>
//#include <set>
//
//using namespace std;
//
//main() {
//	int n;
//	cin >> n;
//
//	int m;
//	cin >> m;
//
//	set<int> knights;
//	for (int i = 1; i <= n; i++) knights.insert(i);
//
//
//	vector<int> ans(n, 0);
//
//	while (m--) {
//		int starting;
//		cin >> starting;
//
//		int end;
//		cin >> end;
//
//		int winner;
//		cin >> winner;
//	    
//		auto it = knights.lower_bound(starting);
//		while (it != knights.end() && *it <= end) {
//			if (*it != winner) {
//				ans[*it - 1] = winner;
//				it = knights.erase(it);
//			}
//			else {
//				++it;
//			}
//		}
//	}
//
//	for (int i = 0; i < ans.size(); i++) cout << ans[i] << " ";
//}
