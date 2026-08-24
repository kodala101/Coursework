//#include "set.h"
//#include "strlib.h"
//#include "grid.h"
//#include "console.h"
//
//using namespace std;
//
//void onlyDual(Grid<bool>& likes) {
//	for (int i = 0; i < likes.numRows(); i++) {
//		for (int j = 0; j < likes.numCols(); j++) {
//			if (likes[i][j] == true && likes[j][i] == false) likes[i][j] = false;
//			if (i == j) likes[i][j] = false;
//		}
//	}
//}
//
//bool allFalse(Grid<bool>& likes) {
//	for (int i = 0; i < likes.numRows(); i++) {
//		for (int j = 0; j < likes.numCols(); j++) {
//			if (likes[i][j]) return false;
//		}
//	}
//	return true;
//}
//
//int maxPairs(Grid<bool>& likes) {
//	if (allFalse(likes)) {
//
//	}
//}
//
//int main() {
//	Grid<bool> likes(3, 3);
//	likes[0][0] = false;
//	likes[0][1] = true;
//	likes[0][2] = true;
//	likes[1][0] = true;
//	likes[1][1] = false;
//	likes[1][2] = true;
//	likes[2][0] = false;
//	likes[2][1] = true;
//	likes[2][2] = false;
//
//	onlyDual(likes);
//
//	int 
//
//	cout << maxPairs(likes) << endl;
//
//	return 0;
//}