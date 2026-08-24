//#include <iostream>
//#include <vector>
//#include <map>
//#include <set>
//#include <algorithm>
//
//using namespace std;
//
//main() {
//	int w;
//	int h;
//	int n;
//	cin >> w;
//	cin >> h;
//	cin >> n;
//
//	set<int> x;
//	x.insert(0);
//	x.insert(w);
//	set<int> y;
//	y.insert(0);
//	y.insert(h);
//	multiset<int> Xsegments;
//	Xsegments.insert(w);
//	multiset<int> Ysegments;
//	Ysegments.insert(h);
//
//	while (n--) {
//		char c;
//		cin >> c;
//
//		int z;
//		cin >> z;
//
//		if (c == 'V') {
//			x.insert(z);
//			auto it = x.upper_bound(z);
//			int r = *it;
//			auto itt = prev(it);
//			int l = *itt;
//			Xsegments.erase(Xsegments.find(r - l));
//			Xsegments.insert(z - l);
//			Xsegments.insert(r - z);
//		}
//		else {
//			y.insert(z);
//			auto it = y.upper_bound(z);
//			int r = *it;
//			auto itt = prev(it);
//			int l = *itt;
//			Ysegments.erase(Ysegments.find(r - l));
//			Ysegments.insert(z - l);
//			Ysegments.insert(r - z);
//		}
//
//		cout << ( (*Xsegments.rbegin()) * (*Ysegments.rbegin()) ) << '\n';
//	}
//}