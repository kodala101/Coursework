////#include <bits/stdc++.h>
//#include <iostream>
//#include <vector>
//#include <map>
//#include <set>
//
//using namespace std;
//
//main() {
//	int n;
//	cin >> n;
//
//	int k;
//	cin >> k;
//
//	vector<int> elems(n + 1,  0);
//
//	map<int, int> dens;
//	set<int> once;
//
//	int t;
//	for (int i = 1; i <= n; i++) {
//		cin >> t;
//		elems[i] = t;
//		dens[t]++;
//		if (dens[t] == 1) {
//			once.insert(t);
//		}
//		else {
//			once.erase(t);
//		}
//		if (i < k) continue;
//		if (once.size() == 0) {
//			cout << "Nothing" << endl;
//		}
//		else {
//			cout << *once.rbegin() << endl;
//		}
//		int out = elems[i - k + 1];
//		dens[out]--;
//		if (dens[out] == 1) once.insert(out);
//		else once.erase(out);
//	}
//}