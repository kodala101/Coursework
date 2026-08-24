////#include <bits/stdc++.h>
//#include <iostream>
//#include <vector>
//#include <map>
//#include <set>
//#include <algorithm>
//
//using namespace std;
//
//main() {
//	freopen("input.txt", "r", stdin);
//	freopen("output.txt", "w", stdout);
//
//	int n;
//	cin >> n;
//
//	vector<int> elems(n + 1, 0);
//	for (int i = 1; i <= n; i++) cin >> elems[i];
//
//	sort(elems.begin(), elems.end());
//
//	/*int i = 1;
//	int j = n;
//	int res = 0;
//	while (elems[j] > 2 * elems[i]) {
//		if (elems[j] * 1.0 / elems[i + 1] < elems[j - 1] * 1.0 / elems[i]) {
//			i++;
//		}
//		else {
//			j--;
//		}
//		res++;
//	}
//
//	cout << res;*/					//ratomaa es araswori ver vigeb
//
//	int res = 0;
//	int r = 1;
//	for (int l = 1; l <= n; l++) {
//		while (r <= n && elems[r] <= 2 * elems[l]) r++;
//		res = max(res, r - l);
//	}
//
//	cout << n - res;
//}
//
//// 4 5 3 8 3 7
//// 3 3 4 5 7 8 