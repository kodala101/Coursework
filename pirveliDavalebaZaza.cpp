//#include <iostream>
//#include <vector>
//#include <map>
//
//using namespace std;
//
//main() {
//	int n;
//	cin >> n;
//
//	int m;
//	cin >> m;
//
//	vector<int> elems;
//	int max = 0;
//	for (int i = 0; i < n; i++) {
//		int x;
//		cin >> x;
//		if (x > max) max = x;
//		elems.push_back(x);
//	}
//
//	vector<int> sieve(max + 1, 0);
//	for (int i = 2; i <= max; i++) {
//		if (sieve[i] == 0) {
//			sieve[i] = i;
//			for (long long j = (long long)i * i; j <= max; j += i) {
//				if (sieve[j] == 0) sieve[j] = i;
//			}
//		}
//	}
//
//	map<int, int> primeDivisorsAndDegrees;
//	for (int i = 0; i < n; i++) {
//		int save = elems[i];
//		map<int, int> primeDivisorsAndDegreesOne;
//		while (save > 1) {
//			primeDivisorsAndDegreesOne[sieve[save]]++;
//			save = save/sieve[save];
//		}
//		for (pair<int, int> p : primeDivisorsAndDegreesOne) {
//			if (p.second > primeDivisorsAndDegrees[p.first]) primeDivisorsAndDegrees[p.first] = p.second;
//		}
//	}
//
//	long long numbOfDivisors = 1;
//	for (pair<int, int> p : primeDivisorsAndDegrees) numbOfDivisors = (numbOfDivisors * (p.second + 1)) % m;
//	
//	cout << ((numbOfDivisors - n) % m + m) % m;
//}
