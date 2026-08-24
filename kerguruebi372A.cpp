//#include <iostream>
//#include <vector>
//#include <map>
//#include <set>
//#include <algorithm>
//
//using namespace std;
//
//main() {
//    int n;
//    cin >> n;
//
//    vector<int> sizes(n, 0);
//    for (int i = 0; i < n; i++) cin >> sizes[i];
//
//    sort(sizes.begin(), sizes.end());
//    reverse(sizes.begin(), sizes.end());
//
//    set<int> held;
//    int kang = 0;
//    for (int i = 1; i < n; i++) {
//        for (int j = i - 1; j >= 0; j--) {
//            if (held.find(sizes[j]) == held.end() && sizes[j] >= 2 * sizes[i]) {
//                held.insert(sizes[j]);
//                held.insert(sizes[i]);
//                kang++;
//                break;
//            }
//        }
//    }
//
//    cout << n - kang;
//}