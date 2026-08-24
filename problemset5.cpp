//#include "grid.h"
//#include "random.h"
//#include "console.h"
//#include "grid.h"
//
//using namespace std;
//
//void createMineFieldProbability(Grid<bool>& board, double probability) {
//	for (int i = 0; i < board.numRows(); i++) {
//		for (int j = 0; j < board.numCols(); j++) {
//			board[i][j] = randomChance(probability);
//		}
//	}
//}
//
//void createMineFieldWithCout(Grid<bool>& board, int numMines) {
//	for (int i = 0; i < numMines; i++) {
//		while (true) {
//			int rowIndex = randomInteger(0, board.numRows() - 1);
//			int colIndex = randomInteger(0, board.numCols() - 1);
//			if (!board[rowIndex][colIndex]) {
//				board[rowIndex][colIndex] = true;
//				break;
//			}
//		}
//	}
//}
//
//void calculateHints(Grid<bool>& board, Grid<int>& hintBoard) {
//	for (int i = 0; i < board.numRows(); i++) {
//		for (int j = 0; j < board.numCols(); j++) {
//			if (board[i][j] == true) hintBoard[i][j] = -1;
//		}
//	}
//	for (int i = 0; i < board.numRows(); i++) {
//		for (int j = 0; j < board.numCols(); j++) {
//			if (board[i][j] != true) {
//				int bombs = 0;
//				for (int k = -1; k <= 1; k++) {
//					for (int h = -1; h <= 1; h++) {
//						if (board.inBounds(i + k, j + h) && board[i + k][j + h] == true) bombs++;
//					}
//				}
//				hintBoard[i][j] = bombs;
//			}
//		}
//	}
//}
//
//void getTopLeftRectangleSums(Grid<int>& rectangleSums, Grid<bool>& mines) {
//	for (int i = 0; i < mines.numRows(); i++) {
//		for (int j = 0; j < mines.numCols(); j++) {
//			int x = 0;
//			for (int k = 0; k <= i; k++) {
//				for (int h = 0; h <= j; h++) {
//					if (mines[k][h] == true) x++;
//				}
//			}
//			rectangleSums[i][j] = x;
//		}
//	}
//}
//
//int getBombsInRecangle(Grid<int>& rectangleSums, int x1, int y1, int x2, int y2) {
//	int bombs = 0;
//	int onYBombs = rectangleSums[x2][y2];
//	int leftBombs = 0;
//	int upBombs = 0;
//	int cornBombs = 0;
//	if (rectangleSums.inBounds(x2, y1 - 1)) leftBombs = rectangleSums[x2][y1 - 1];
//	if (rectangleSums.inBounds(x1 - 1, y2)) upBombs = rectangleSums[x1 - 1][y2];
//	if (rectangleSums.inBounds(x1 - 1, y1 - 1)) cornBombs = rectangleSums[x1 - 1][y1 - 1];
//	bombs = onYBombs - leftBombs - upBombs + cornBombs;
//	return bombs;
//}
//
//
//int main() {
//	Grid<bool> board(5, 6);
//	Grid<int> hintBoard(5, 6);
//	createMineFieldProbability(board, 0.4);
//	//createMineFieldWithCout(board, 10);
//	//calculateHints(board, hintBoard);
//	getTopLeftRectangleSums(hintBoard, board);
//	for (int i = 0; i < board.numRows(); i++) {
//		for (int j = 0; j < board.numCols(); j++) {
//			cout << board[i][j] << ' ';
//		}
//		cout << endl;
//	} 
//	cout << endl;
//	for (int i = 0; i < hintBoard.numRows(); i++) {
//		for (int j = 0; j < hintBoard.numCols(); j++) {
//			cout << hintBoard[i][j] << ' ';
//		}
//		cout << endl;
//	}
//	cout << endl;
//	cout << getBombsInRecangle(hintBoard, 0, 2, 3, 4) << endl;
//
//	return 0;
//}