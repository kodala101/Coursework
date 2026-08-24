//#include <iostream>
//#include <vector>
//#include <map>
//#include <set>
//#include <algorithm>
//#include <queue>
//
//using namespace std;
//
//main() {
//	int n;
//	cin >> n;
//
//	map<int, int> m;
//	priority_queue < pair<int, int> > pq;
//	for (int i = 0; i < n; i++) {
//		int x;
//		cin >> x;
//		m[x]++;
//	}
//
//	for (pair<int, int> p : m) pq.push(make_pair(p.second, p.first));
//
//	vector< vector<int> > allVecs;
//	while (pq.size() > 2) {
//		vector<int> v;
//		pair<int, int> p1 = pq.top();
//		pq.pop();
//		pair<int, int> p2 = pq.top();
//		pq.pop();
//		pair<int, int> p3 = pq.top();
//		pq.pop();
//
//		v.push_back(p1.second);
//		v.push_back(p2.second);
//		v.push_back(p3.second);
//
//		sort(v.rbegin(), v.rend());
//		allVecs.push_back(v);
//
//		p1.first--;
//		p2.first--;
//		p3.first--;
//
//		if (p1.first != 0) pq.push(p1);
//		if (p2.first != 0) pq.push(p2);
//		if (p3.first != 0) pq.push(p3);
//	}
//
//	cout << allVecs.size() << endl;
//	for (int i = 0; i < allVecs.size(); i++) {
//		for (int j = 0; j < 3; j++) cout << allVecs[i][j] << " ";
//		cout << endl;
//	}
//}