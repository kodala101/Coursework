//#include <iostream>
//#include <vector>
//#include <map>
//#include <set>
//#include <algorithm>
//
//using namespace std;
//
//int genBitMask(string s) {
//	int x = 0;
//	for (char c : s) x ^= 1 << (c - 'a');
//	return x;
//}
//
//main() {
//	int n;
//	cin >> n;
//
//	map<int, int> freq;
//	long long y = 0;
//
//	for (int i = 0; i < n; i++) {
//		string s;
//		cin >> s;
//
//		int bitMask = genBitMask(s);
//
//		y += freq[bitMask];
//		for (int b = 0; b < 26; b++) {
//			int diffOne = bitMask ^ (1 << b);
//			y += freq[diffOne];
//		}
//
//		freq[bitMask]++;
//	}
//
//	cout << y;
//}