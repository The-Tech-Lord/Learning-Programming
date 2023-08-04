#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

// This C File was Created by "The Programming M16A4"

void displayBoard();
int checkWin();
void insert();

//Display's the board
char board[3][3] = { { ' ', ' ', ' ' }, { ' ', ' ', ' ' }, { ' ', ' ', ' ' } };
// { (0,0) 1 , (0,1) 2 , (0.2) 3 }
// { (1,0) 4 , (1,1) 5 , (1,2) 6 }
// { (2,0) 7 , (2,1) 8 , (2,2) 9 }
char boardRecord[3][3] = { { 1, 2, 3 }, { 4, 5, 6 }, { 7, 8, 9 } }; // Keeps track of the board

int i, choice, player = 1;
char mark;
int main() {
	do {
		displayBoard();

		player = (player % 2) ? 1 : 2;
		mark = (player == 1) ? 'X' : 'O';

		printf("\nPlayer %d, enter a number: ", player);
		scanf("%d", &choice);

		insert();
		i = checkWin();
		player++;
	} while (i == -1);
	displayBoard();

	if (i == 1) { printf("\nCongratulations Player %d!! You Won!!", --player); Sleep(6000); 
	} else { printf("\nGame Over"); Sleep(6000); }
}

void insert() {
	switch(choice) {
		case 1: if (boardRecord[0][0] == 'X' || boardRecord[0][0] == 'O') {
					Sleep(1000);
					printf("\nInvalid Move, Your Turn Will Be Skipped Player %d\n", player);
					Sleep(2000);
					break;
				} else if (player == 1) {
					boardRecord[0][0] = mark;
					board[0][0] = mark;
					break;
				} else {
					boardRecord[0][0] = mark;
					board[0][0] = mark;
					break;
				}
		case 2: if (boardRecord[0][1] == 'X' || boardRecord[0][1] == 'O') {
					Sleep(1000);
					printf("\nInvalid Move, Your Turn Will Be Skipped Player %d\n", player);
					Sleep(2000);
					break;
				} else if (player == 1) {
					boardRecord[0][1] = mark;
					board[0][1] = mark;
					break;
				} else {
					boardRecord[0][1] = mark;
					board[0][1] = mark;
					break;
				}
		case 3: if (boardRecord[0][2] == 'X' || boardRecord[0][2] == 'O') {
					Sleep(1000);
					printf("\nInvalid Move, Your Turn Will Be Skipped Player %d\n", player);
					Sleep(2000);
					break;
				} else if (player == 1) {
					boardRecord[0][2] = mark;
					board[0][2] = mark;
					break;
				} else {
					boardRecord[0][2] = mark;
					board[0][2] = mark;
					break;
				}
		case 4: if (boardRecord[1][0] == 'X' || boardRecord[1][0] == 'O') {
					Sleep(1000);
					printf("\nInvalid Move, Your Turn Will Be Skipped Player %d\n", player);
					Sleep(2000);
					break;
				} else if (player == 1) {
					boardRecord[1][0] = mark;
					board[1][0] = mark;
					break;
				} else {
					boardRecord[1][0] = mark;
					board[1][0] = mark;
					break;
				}
		case 5: if (boardRecord[1][1] == 'X' || boardRecord[1][1] == 'O') {
					Sleep(1000);
					printf("\nInvalid Move, Your Turn Will Be Skipped Player %d\n", player);
					Sleep(2000);
					break;
				} else if (player == 1) {
					boardRecord[1][1] = mark;
					board[1][1] = mark;
					break;
				} else {
					boardRecord[1][1] = mark;
					board[1][1] = mark;
					break;
				}
		case 6: if (boardRecord[1][2] == 'X' || boardRecord[1][2] == 'O') {
					Sleep(1000);
					printf("\nInvalid Move, Your Turn Will Be Skipped Player %d\n", player);
					Sleep(2000);
					break;
				} else if (player == 1) {
					boardRecord[1][2] = mark;
					board[1][2] = mark;
					break;
				} else {
					boardRecord[1][2] = mark;
					board[1][2] = mark;
					break;
				}
		case 7: if (boardRecord[2][0] == 'X' || boardRecord[2][0] == 'O') {
					Sleep(1000);
					printf("\nInvalid Move, Your Turn Will Be Skipped Player %d\n", player);
					Sleep(2000);
					break;
				} else if (player == 1) {
					boardRecord[2][0] = mark;
					board[2][0] = mark;
					break;
				} else {
					boardRecord[2][0] = mark;
					board[2][0] = mark;
					break;
				}
		case 8: if (boardRecord[2][1] == 'X' || boardRecord[2][1] == 'O') {
					Sleep(1000);
					printf("\nInvalid Move, Your Turn Will Be Skipped Player %d\n", player);
					Sleep(2000);
					break;
				} else if (player == 1) {
					boardRecord[2][1] = mark;
					board[2][1] = mark;
					break;
				} else {
					boardRecord[2][1] = mark;
					board[2][1] = mark;
					break;
				}
		case 9: if (boardRecord[2][2] == 'X' || boardRecord[2][2] == 'O') {
					Sleep(1000);
					printf("\nInvalid Move, Your Turn Will Be Skipped Player %d\n", player);
					Sleep(2000);
					break;
				} else if (player == 1) {
					boardRecord[2][2] = mark;
					board[2][2] = mark;
					break;
				} else {
					boardRecord[2][2] = mark;
					board[2][2] = mark;
					break;
				}
	}
}

void displayBoard() {
	int hr = 196, vr = 179; // ASCII Characters
	system("cls"); // For Windows
	// system("clear"); // For Linux / Unix
	printf("\t\b\b%c  %c\t\b\b\b\b%c  %c  %c\n\t\b\b\b\b", board[0][0], vr, board[0][1], vr, board[0][2]);
	for (int i = 0; i < 17; i++) { printf("%c", hr); } printf("\n");
	printf("\t\b\b%c  %c\t\b\b\b\b%c  %c  %c\n\t\b\b\b\b", board[1][0], vr, board[1][1], vr, board[1][2]);
	for (int i = 0; i < 17; i++) { printf("%c", hr); } printf("\n");
	printf("\t\b\b%c  %c\t\b\b\b\b%c  %c  %c", board[2][0], vr, board[2][1], vr, board[2][2]);
}

int checkWin() {
	// Horizontal
	if (boardRecord[0][0] == boardRecord[0][1] && boardRecord[0][1] == boardRecord[0][2]) { return 1; }
	if (boardRecord[1][0] == boardRecord[1][1] && boardRecord[1][1] == boardRecord[1][2]) {	return 1; }
	if (boardRecord[2][0] == boardRecord[2][1] && boardRecord[2][1] == boardRecord[2][2]) {	return 1; }

	// Vertical
	if (boardRecord[0][0] == boardRecord[1][0] && boardRecord[1][0] == boardRecord[2][0]) { return 1; }
	if (boardRecord[0][1] == boardRecord[1][1] && boardRecord[1][1] == boardRecord[2][1]) { return 1; }
	if (boardRecord[0][2] == boardRecord[1][2] && boardRecord[1][2] == boardRecord[2][2]) { return 1; }

	// Diagonal
	if (boardRecord[0][0] == boardRecord[1][1] && boardRecord[1][1] == boardRecord[2][2]) { return 1; }
	if (boardRecord[0][2] == boardRecord[1][1] && boardRecord[1][1] == boardRecord[2][0]) { return 1; }

	// Checks for Empty Boxes
	for (int row = 0; row < 3; row++) {
		for (int column = 0; column < 3; column++) {
			if (board[row][column] == ' ') { return -1; } // Game is still continuing
		}
	}
	return 0;
}
