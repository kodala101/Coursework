////#include <bits/stdc++.h>
//#include <climits> 
//#include <iostream>
//#include <vector>
//#include <set>
//
//using namespace std;
//
//main() {
//    int n;
//    cin >> n;
//
//	vector<int> capacities;
//    vector<int> waterNow;
//    set<int> notFull;
//    for (int i = 0; i < n; i++) {
//        capacities.push_back(0);
//        cin >> capacities[i];
//        notFull.insert(i);
//        waterNow.push_back(0);
//    }
//
//    int numQuest;
//    cin >> numQuest;
//
//    while (numQuest--) {
//        int type;
//        cin >> type;
//        if (type == 2) {
//            int which;
//            cin >> which;
//            cout << waterNow[which - 1] << endl;
//        }
//        else {
//            int ves;
//            int wat;
//            cin >> ves;
//            cin >> wat;
//
//            set<int>::iterator it = notFull.lower_bound(ves - 1);
//            while (wat > 0) {
//                if (it == notFull.end()) break;
//                if (wat >= capacities[*it] - waterNow[*it]) {    //*it ras aketebs??
//                    wat = wat - (capacities[*it] - waterNow[*it]);
//                    waterNow[*it] = capacities[*it];
//                    it = notFull.erase(it++);   //tu washala shemdegze gadasvla ragat unda??
//                }
//                else {
//                    waterNow[*it] += wat;
//                    wat = 0;
//                }
//            }
//        }
//    }
//}
