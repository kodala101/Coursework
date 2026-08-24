//#include <iostream>
//#include <vector>
//#include <climits>
//
//using namespace std;
//
//struct Triplet {
//	int r, g, b;
//};
//
//Triplet paintTree(bool b, string& s, int& posInStr) {
//	Triplet res = { 0, 0, 0 };
//
//	if (s[posInStr] == '0') {
//		posInStr++;
//		res.r = 0;
//		res.g = 1;
//		res.b = 0;
//	}
//	else if (s[posInStr] == '1') {
//		posInStr++;
//		Triplet resOfChild = paintTree(b, s, posInStr);
//		if (b) {
//			res.r = max(resOfChild.g, resOfChild.b);
//			res.g = 1 + max(resOfChild.r, resOfChild.b);
//			res.b = max(resOfChild.g, resOfChild.r);
//		}
//		else {
//			res.r = min(resOfChild.g, resOfChild.b);
//			res.g = 1 + min(resOfChild.r, resOfChild.b);
//			res.b = min(resOfChild.g, resOfChild.r);
//		}
//	}
//	else {
//		posInStr++;
//		Triplet resOfChildOne = paintTree(b, s, posInStr);
//		Triplet resOfChildTwo = paintTree(b, s, posInStr);
//
//		int rgb = resOfChildOne.g + resOfChildTwo.b;
//		int rbg = resOfChildOne.b + resOfChildTwo.g;
//		res.r = b ? max(rgb, rbg) : min(rgb, rbg);
//
//		int grb = 1 + resOfChildOne.r + resOfChildTwo.b;
//		int gbr = 1 + resOfChildOne.b + resOfChildTwo.r;
//		res.g = b ? max(grb, gbr) : min(grb, gbr);
//
//		int brg = resOfChildOne.r + resOfChildTwo.g;
//		int bgr = resOfChildOne.g + resOfChildTwo.r;
//		res.b = b ? max(brg, bgr) : min(brg, bgr);
//	}
//
//	return res;
//}
//
//main() {
//	string s;
//	cin >> s;
//
//	int posInStr = 0;
//	Triplet forMax = paintTree(true, s, posInStr);
//	posInStr = 0;
//	Triplet forMin = paintTree(false, s, posInStr);
//
//	int maxAns = INT_MIN;
//	if (forMax.r > maxAns) maxAns = forMax.r;
//	if (forMax.g > maxAns) maxAns = forMax.g;
//	if (forMax.b > maxAns) maxAns = forMax.b;
//
//	int minAns = INT_MAX;
//	if (forMin.r < minAns) minAns = forMin.r;
//	if (forMin.g < minAns) minAns = forMin.g;
//	if (forMin.b < minAns) minAns = forMin.b;
//
//	cout << maxAns << " " << minAns;
//}
