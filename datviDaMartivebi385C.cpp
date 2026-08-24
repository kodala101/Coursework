////#include <bits/stdc++.h>
//
//using namespace std;
//
//vector<int> sieve(10000001, 0);
//vector<int> v(10000001, 0);
//vector<int> pref(10000001, 0);
//
//main() {
//	int n;
//	cin >> n;
//
//	vector<int> elems(n + 1, 0);
//	for (int i = 1; i <= n; i++) cin >> elems[i];
//
//	int m;
//	cin >> m;
//
//	for (long long i = 2; i <= 10000000; i++) {
//		if (sieve[i] == 0) {
//			sieve[i] = i;
//			for (long long j = i * i; j <= 10000000; j += i) sieve[j] = i;
//		}
//	}
//
//	for (int i = 1; i <= n; i++) {
//		int save = elems[i];
//		while (save > 1) {
//			int p = sieve[save];
//			v[p]++;
//			while (save % p == 0) save /= p;
//		}
//	}
//
//	for (int i = 1; i <= 10000000; i++) {
//		pref[i] = pref[i - 1] + v[i];
//	}
//
//	while (m--) {
//		int l;
//		cin >> l;
//
//		int r;
//		cin >> r;
//
//		if (r > 10000000) r = 10000000;
//		if (l > 10000000) l = 10000000;
//
//		cout << pref[r] - pref[l - 1] << "\n";
//	}
//}

