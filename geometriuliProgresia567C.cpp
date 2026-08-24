////#include <bits/stdc++.h>
//#include <iostream>
//#include <vector>
//#include <map>
//
//using namespace std;
//
//main() {
//	long long n;
//	cin >> n;
//
//	long long k;
//	cin >> k;
//
//	map<long long, long long> left;
//	map<long long, long long> right;
//
//	vector<long long> elems(n + 1 , 0);
//	for (int i = 1; i <= n; i++) {
//		cin >> elems[i];
//		right[elems[i]]++;
//	}
//
//	long long sum = 0;
//	for (int i = 1; i <= n; i++) {
//		right[elems[i]]--;
//
//		if (elems[i] % k == 0) {
//			long long leftNum = left[elems[i] / k];
//			long long rightNum = right[elems[i] * k];
//			sum += leftNum * rightNum;
//		}
//
//		left[elems[i]]++;
//	}
//
//	cout << sum;
//}