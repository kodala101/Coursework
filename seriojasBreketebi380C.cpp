////#include <bits/stdc++.h>
//#include <climits> 
//#include <iostream>
//#include <vector>
//#include <set>
//
//using namespace std;
//
//struct node {
//	int open;
//	int closed;
//	int matched;
//};
//
//int vecSize(int x) {
//	int size = 1;
//	while (size < x) size *= 2;
//	return 2 * size;
//}
//
//node merge(node n1, node n2) {
//	int newPairs = min(n1.open, n2.closed);
//	node par;
//	par.matched = n1.matched + n2.matched + newPairs;
//	par.open = n1.open - newPairs + n2.open;
//	par.closed = n1.closed + n2.closed - newPairs;
//	return par;
//}
//
//void buildTree(vector< node >& segment, string& s) {
//	for (int i = 0; i < s.length(); i++) {
//		node n;
//		if (s[i] == '(') {
//			n.closed = 0;
//			n.matched = 0;
//			n.open = 1;
//		}
//		else {
//			n.open = 0;
//			n.closed = 1;
//			n.matched = 0;
//		}
//		segment[i + segment.size()/2] = n;
//	}
//
//	for (int j = segment.size()/2 - 1; j > 0; j--) {
//		int left = 2 * j;
//		int right = 2 * j + 1;
//		segment[j] = merge(segment[left], segment[right]);
//	}
//}
//
//void q(int l, int r, int n, vector<node>& ans, vector<node>& segment, int cur) {
//	if (r - l + 1 == n) {
//		ans.push_back(segment[cur]);
//		return;
//	}
//	if (l <= n / 2) {
//		q(l, n / 2, n / 2, ans, segment, cur * 2);
//	}
//	if (r > n / 2) {
//		q(n / 2, r, n / 2, ans, segment, cur * 2 + 1);
//	}
//	return;
//}
//
//main() {
//	string s;
//	cin >> s;
//
//	int queries;
//	cin >> queries;
//
//	int size = vecSize(s.length());
//	vector< node > segment(size);
//	buildTree(segment, s);
//
//	while (queries--) {
//		int l, r;
//		cin >> l >> r;
//
//		vector<node> ans;
//		q(l, r, size / 2, ans, segment, 1);
//
//		node res = ans[0];
//		for (int i = 1; i < ans.size(); i++) {
//			res = merge(res, ans[i]);
//		}
//
//		cout << res.matched * 2 << endl;
//	}
//}