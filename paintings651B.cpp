//#include <iostream>
//#include <vector>
//#include <map>
//#include <set>
//#include <algorithm>
//
//using namespace std;
//
//main() {
//	int n;
//	cin >> n;
//
//	map<int, int> freq;
//	for (int i = 0; i < n; i++) {
//		int x;
//		cin >> x;
//		freq[x]++;
//	}
//
//	int max = 0;
//	for (pair<int, int> p : freq) {
//		if (p.second > max) max = p.second;
//	}
//
//	cout << n - max;
//}