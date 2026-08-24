////#include <bits/stdc++.h>
//#include <iostream>
//#include <vector>
//
//using namespace std;
//
//struct segmentTree {
//	int size;
//	vector<long long> tree;
//	vector<long long> lazyProp;
//};
//
//void treeInit(segmentTree& st, int n) {
//	st.size = 1;
//	while (st.size < n) st.size *= 2;
//	st.tree.assign(2 * st.size, 0);
//	st.lazyProp.assign(2 * st.size, 0);
//}
//
//void push(segmentTree& st, int curr, int currLeft, int currRight) {
//	if (st.lazyProp[curr] == 0 || currLeft == currRight) return;
//	st.tree[2 * curr] += st.lazyProp[curr];
//	st.lazyProp[2 * curr] += st.lazyProp[curr];
//	st.tree[2 * curr + 1] += st.lazyProp[curr];
//	st.lazyProp[2 * curr + 1] += st.lazyProp[curr];
//	st.lazyProp[curr] = 0;
//}
//
//void range_add(segmentTree& st, int left, int right, int value, int curr, int currLeft, int currRight) {
//	if (left > currRight || right < currLeft) return;
//	if (currRight <= right && left <= currLeft) {
//		st.tree[curr] += value;
//		st.lazyProp[curr] += value;
//		return;
//	}
//
//	push(st, curr, currLeft, currRight);
//	int mid = (currLeft + currRight) / 2;
//
//	range_add(st, left, right, value, 2 * curr, currLeft, mid);
//	range_add(st, left, right, value, 2 * curr + 1, mid + 1, currRight);
//}
//
//long long get(segmentTree& st, int i, int curr, int currLeft, int currRight) {
//	if (currLeft == currRight) return st.tree[curr];
//	push(st, curr, currLeft, currRight);
//	int mid = (currLeft + currRight) / 2;
//	if (i <= mid) return get(st, i, 2 * curr, currLeft, mid);
//	return get(st, i, 2 * curr + 1, mid + 1, currRight);
//}
//
//void resetTree(segmentTree& st) {
//	fill(st.tree.begin(), st.tree.end(), 0);
//	fill(st.lazyProp.begin(), st.lazyProp.end(), 0);
//}
//
//int main() {
//	int n, m;
//	cin >> n >> m;
//
//	vector< vector<int> > countriesSections(n + 1);
//	for (int i = 1; i <= m; i++) {
//		int x;
//		cin >> x;
//		countriesSections[x].push_back(i);
//	}
//
//	vector<int> desiredMeteors(n + 1);
//	for (int i = 1; i <= n; i++) {
//		int x;
//		cin >> x;
//		desiredMeteors[i] = x;
//	}
//
//	int k;
//	cin >> k;
//
//	vector< vector<int> > showers (k + 1);
//
//	for (int i = 1; i <= k; i++) {
//		int l, r, a;
//		cin >> l >> r >> a;
//		vector<int> v;
//		v.push_back(l);
//		v.push_back(r);
//		v.push_back(a);
//		showers[i] = v;
//	}
//
//	vector<int> low(n + 1, 1);
//	vector<int> high(n + 1, k + 1);
//	vector<int> ans(n + 1, -1);
//
//	segmentTree segTree;
//	treeInit(segTree, m);	//& rato ara
//
//	while (true) {
//		vector< vector<int> > countriesByMids(k + 1);
//		bool ifDone = true;
//		for (int i = 1; i <= n; i++) {
//			if (low[i] < high[i]) {
//				ifDone = false;
//				int mid = (low[i] + high[i]) / 2;
//				countriesByMids[mid].push_back(i);
//			}
//		}
//		if (ifDone) break;
//
//		resetTree(segTree);
//
//		for (int i = 1; i <= k; i++) {
//			int l = showers[i][0];
//			int r = showers[i][1];
//			int a = showers[i][2];
//
//			if (l <= r) {
//				range_add(segTree, l, r, a, 1, 1, segTree.size);
//			}
//			else {
//				range_add(segTree, l, m, a, 1, 1, segTree.size);
//				range_add(segTree, 1, r, a, 1, 1, segTree.size);
//			}
//
//			for (int country : countriesByMids[i]) {
//				long long allMeteors = 0;
//				for (int sector : countriesSections[country]) {
//					allMeteors += get(segTree, sector, 1, 1, segTree.size);
//					if (allMeteors >= desiredMeteors[country]) break;
//				}
//
//				if (allMeteors >= desiredMeteors[country]) {
//					high[country] = i;
//					ans[country] = i;
//				}
//				else {
//					low[country] = i + 1;
//				}
//			}
//		}
//	}
//
//	for (int i = 1; i <= n; i++) {
//		if (ans[i] == -1) {
//			cout << "NIE" << endl;
//		}
//		else {
//			cout << ans[i] << endl;
//		}
//	}
//
//	return 0;
//} 