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
//	int size;
//	cin >> size;
//
//	vector<int> elems;
//	vector<int> same;
//	for (int i = 0; i < size; i++) {
//		int x;
//		cin >> x;
//		elems.push_back(x);
//		same.push_back(x);
//	}
//
//	sort(same.begin(), same.end());
//
//	string s;
//	cin >> s;
//
//	int start = -1;
//	int end = -1;
//	for (int i = 0; i < s.length(); i++) {
//		if (s[i] == '1' && start == -1) start = end = i;
//		if (s[i] == '1' && start != -1) end++;
//		if (s[i] == '0' && start != -1 && end != -1) {
//			sort(elems.begin() + start, elems.begin() + end + 1);
//			start = end = -1;
//		}
//	}
//	if (start != -1 && end != -1) sort(elems.begin() + start, elems.end());
//
//	if (same == elems) {
//		cout << "YES";
//	}
//	else {
//		cout << "NO";
//	}
//}