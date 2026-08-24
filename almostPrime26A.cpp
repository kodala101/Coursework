//#include <iostream>
//#include <vector>
//
//using namespace std;
//
//main() {
//	int n;
//	cin >> n;
//
//	vector<int> v(n + 1, 0);
//	for (int i = 2; i <= n; i++) {
//		if (v[i] == 0) {
//			for (int j = i; j <= n; j += i) v[j]++;
//		}
//	}
//
//	int num = 0;
//	for (int i = 1; i <= n; i++) {
//		if (v[i] == 2) num++;
//	}
//
//	cout << num;
//}