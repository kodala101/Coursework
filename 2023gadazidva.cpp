//#include "console.h"
//#include <vector>;
//#include <iostream>
//#include <algorithm>
//
//using namespace std;
//
//bool helper(vector<int> weights, vector<int> sums, int target) {
//	if (weights.empty()) return true;
//
//	int save = weights.back();
//	weights.pop_back();
//
//	for (int i = 0; i < sums.size(); i++) {
//		if (sums[i] + save > target) continue;
//		sums[i] += save;
//		if (helper(weights, sums, target)) return true;
//		sums[i] -= save;
//	}
//	weights.push_back(save);
//	return false;
//}
//
//bool canDivideBoxes(int n, vector<int> weights) {
//	if (n <= 0) return false;
//	if (n == 1) return true;
//	int all = 0;
//	for (int x : weights) all += x;
//	if (all % n != 0) return false;
//	int target = all / n;
//	vector<int> sums(n, 0);
//	return helper(weights, sums, target);
//}
//
//int main() {
//	vector<int> weights = { 1, 2, 17, 2, 19 };
//	int n = 3;
//	cout << weights << endl;;
//	return 0;
//}