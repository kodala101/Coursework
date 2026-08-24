//#include "grid.h"
//#include <vector>
//#include "console.h"
//
//using namespace std;
//
//bool isClique(Grid<bool> graph, vector<int> indices) {
//	if (indices.size() == 0 || indices.size() == 1) return true;
//	for (int i = 0; i < indices.size() - 1; i++) {
//		for (int j = i + 1; j < indices.size(); j++) {
//			if (!graph[i][j]) return false;
//		}
//	}
//	return true;
//}
//
//int maxSizeClique(Grid<bool>& graph) {
//
//}
//
//int main() {
//	Grid<bool> gr(3, 3);
//	gr[0][0] = true;
//	gr[0][1] = true;
//	gr[0][2] = true;
//	gr[1][0] = true;
//	gr[1][1] = true;
//	gr[1][2] = true;
//	gr[2][0] = true;
//	gr[2][1] = true;
//	gr[2][2] = true;
//
//	vector<int> indicies = { 0, 1, 2 };
//
//	cout << isClique(gr, indicies) << endl;
//	cout << maxSizeClique(gr) << endl;
//
//	return 0;
//}