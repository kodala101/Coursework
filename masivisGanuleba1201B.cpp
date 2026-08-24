////#include <bits/stdc++.h>
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
//	vector<int> elems;
//	long long sum = 0;
//	long long largest = INT_MIN;
//	for (int i = 0; i < n; i++) {
//		long long x;
//		cin >> x;
//		elems.push_back(x);
//		sum += x;
//		if (x > largest) largest = x;
//	}
//
//	if (sum % 2 != 0) {
//		cout << "NO";
//		return 0;
//	}
//
//	if (largest <= sum - largest) {
//		cout << "YES";
//	}
//	else {
//		cout << "NO";
//	}
//	return 0;
//}