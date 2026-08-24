////#include <bits/stdc++.h>
//#include <iostream>
//#include <vector>
//#include <map>
//#include <set>
//#include <algorithm>
//
//using namespace std;
//
//struct node {
//	int start;
//	int end;
//	node* left;
//	node* right;
//	int coloredNodesInInterval[5];
//	char lazyProp[5];
//};
//
//void buildTree(string& s, node*& base, int leftInd, int rightInd) {
//	if (base == NULL) {
//		base = new node;
//		base->start = leftInd;
//		base->end = rightInd;
//		for (int i = 0; i < 5; i++) {
//			base->coloredNodesInInterval[i] = 0;
//			base->lazyProp[i] = 'a' + i;
//		}
//		base->left = NULL;
//		base->right = NULL;
//	}
//
//	if (rightInd - leftInd == 1) {
//		base->coloredNodesInInterval[s[leftInd] - 'a'] = 1;
//		return;
//	}
//
//	buildTree(s, base->left, leftInd, (rightInd + leftInd) / 2);	
//	buildTree(s, base->right, (rightInd + leftInd) / 2, rightInd);
//
//	for (int i = 0; i < 5; i++) { 
//		base->coloredNodesInInterval[i] = 
//			base->left->coloredNodesInInterval[i] + 
//			base->right->coloredNodesInInterval[i];
//	}
//}
//
//void propagation(node*& base) {
//	if (base == NULL || (base->left == NULL && base->right == NULL)) return;
//
//	int save[5] = {0,0,0,0,0};
//	for (int i = 0; i < 5; i++) {
//		save[base->lazyProp[i] - 'a'] += base->left->coloredNodesInInterval[i];
//		base->left->lazyProp[i] = base->lazyProp[base->left->lazyProp[i] - 'a'];
//	}
//	for (int i = 0; i < 5; i++) {
//		base->left->coloredNodesInInterval[i] = save[i];
//	}
//	
//	int savee[5] = {0,0,0,0,0};
//	for (int i = 0; i < 5; i++) {
//		savee[base->lazyProp[i] - 'a'] += base->right->coloredNodesInInterval[i];
//		base->right->lazyProp[i] = base->lazyProp[base->right->lazyProp[i] - 'a'];
//	}
//	for (int i = 0; i < 5; i++) {
//		base->right->coloredNodesInInterval[i] = savee[i];
//	}
//	
//	for (int i = 0; i < 5; i++) {
//		base->lazyProp[i] = 'a' + i;
//	}
//}
//
//void paint(int& p, char& x, char& y, node*& base) {
//	if (base == NULL) return;
//	if (base->coloredNodesInInterval[x - 'a'] > p) {
//		propagation(base);
//		paint(p, x, y, base->left);
//		if (p > 0) paint(p, x, y, base->right);
//		for (int i = 0; i < 5; i++) {
//			if (base->left != NULL && base->right != NULL) {
//				base->coloredNodesInInterval[i] =
//					base->left->coloredNodesInInterval[i] +
//					base->right->coloredNodesInInterval[i];
//			}
//		}
//	}
//	else {
//		for (int i = 0; i < 5; i++) {
//			if (base->lazyProp[i] == x) base->lazyProp[i] = y;
//		}
//		base->coloredNodesInInterval[y - 'a'] = base->coloredNodesInInterval[y - 'a'] + base->coloredNodesInInterval[x - 'a'];
//		p -= base->coloredNodesInInterval[x - 'a'];
//		base->coloredNodesInInterval[x - 'a'] = 0;
//	}
//}
//
//void print(node*& base) {
//	if (base == NULL) return;
//	if (base->end - base->start == 1) {
//		for (int i = 0; i < 5; i++) {
//			if (base->coloredNodesInInterval[i] == 1) cout << (char)('a' + i);
//		}
//	}
//	propagation(base);
//	print(base->left);
//	print(base->right);
//}
//
//int main() {
//	int n, m;
//	cin >> n >> m;
//
//	string s;
//	cin >> s;
//
//	node* base = NULL;
//	buildTree(s, base,  0, s.length());
//
//	while (m--) {
//		int p;
//		cin >> p;
//
//		char x, y;
//		cin >> x >> y;
//
//		paint(p, x, y, base);
//	}
//
//	print(base);
//	return 0;
//}