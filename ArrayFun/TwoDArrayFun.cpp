#include <iostream>

using namespace std;

const int ROWS = 2;
const int COLS = 3;
const int TTT_SIZE = 3;

// the compiler needs to know the size of all dimensions except the first
void printArray(const int[][COLS], int, int);
void printArray(const char[][COLS], int, int);
void initializeBoard(char [][TTT_SIZE], int = TTT_SIZE, int = TTT_SIZE); //note that rows and columns are optional

int main() {
	int myInts[ROWS][COLS] = {{1, 2, 3}, {4, 5, 6}};
	char board[TTT_SIZE][TTT_SIZE];
	int userRow = 0, userCol = 0;
	
	// task: write a function that initializes the TTT board to all blanks 'B'
	initializeBoard(board);
	// task: write a function that prints the TTT board
	// overload printArray() to do this
	printArray(board, TTT_SIZE, TTT_SIZE);
	
	// task: prompt the user for a row and col coordinate pair that represents where they would like to place an 'X'
	cout << "Please enter a row and column to place your symbol: ";
	cin >> userRow >> userCol;
	board[userRow][userCol] = 'X';
	printArray(board, TTT_SIZE, TTT_SIZE);

	printArray(myInts, ROWS, COLS);

	return 0;
}

void initializeBoard(char arr[][TTT_SIZE], int rows, int cols) {
	int i = 0, j = 0;

	for (i = 0; i < rows; i++) {
		for (j = 0; j < cols; j++) {
			arr[i][j] = 'B';
		}
	}

}

void printArray(const char arr[][COLS], int rows, int cols) {
	int i = 0, j = 0;
	// i is used as the row index
	// j is used as the column index
	
	// task: change the nested for loop so that it prints the output in a grid like structure
	
	for (i = 0; i < rows; i++) {
		for (j = 0; j < cols; j++) {
			cout << arr[i][j] << " "; // index twice because it is 2D
		}
		cout << endl;
	}
	cout << endl;

}

void printArray(const int arr[][COLS], int rows, int cols) {
	int i = 0, j = 0;
	// i is used as the row index
	// j is used as the column index
	
	// task: change the nested for loop so that it prints the output in a grid like structure
	
	for (i = 0; i < rows; i++) {
		for (j = 0; j < cols; j++) {
			cout << arr[i][j] << " "; // index twice because it is 2D
		}
		cout << endl;
	}
	cout << endl;

}
