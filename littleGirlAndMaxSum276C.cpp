////#include <bits/stdc++.h>
//#include <iostream>
//#include <vector>
//#include <algorithm>
//
//using namespace std;
//
//main() {
//	int n;
//	cin >> n;
//
//	int q;
//	cin >> q;
//
//	vector<int> elems(n + 1, 0);
//
//	for (int i = 1; i <= n; i++) cin >> elems[i];
//
//	vector<int> diff(n + 2, 0);
//
//	while (q--) {
//		int l;
//		cin >> l;
//
//		int r;
//		cin >> r;
//
//		diff[l]++;
//		diff[r + 1]--;
//	}
//
//	vector<int> prefSum(n + 1, 0);
//	for (int i = 1; i <= n; i++) {
//		prefSum[i] = prefSum[i - 1] + diff[i];
//	}
//
//	sort(prefSum.begin() + 1, prefSum.end());
//	sort(elems.begin() + 1, elems.end());
//
//	long long sum = 0;
//	for (int i = 1; i <= n; i++) sum += (long long)prefSum[i] * (long long)elems[i];
//
//	cout << sum;
//}