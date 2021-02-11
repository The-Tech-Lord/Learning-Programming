#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <windows.h>
#include <stdbool.h>

// This C File was Created by "The Programming M16A4"

// Arrow Key Implementation
#define KEY_UP 72
#define KEY_DOWN 80
#define KEY_LEFT 75
#define KEY_RIGHT 77

int x, y, appleX, appleY;
int height = 20, width = 30;
enum sDirection { UP, DOWN, LEFT, RIGHT };
enum sDirection dir;
int tailX[100]; int tailY[100]; int nTail;
bool gameover = false;
int score;
int keyBuffer[1];

void Setup() {
	system("mode con: cols=31 lines=25");
	x = width / 2;
	y = height / 2;
	appleX = rand() % width;
	appleY = rand() % height;
}

void DrawBoard() {
	system("cls");
	for (int i = 0; i < width + 1; i++) { printf("#"); } printf("\n");

	for (int i = 0; i < height; i++) {
		for (int j = 0; j < width; j++) {
			if (j == 0) {
				printf("#");
			} else if (i == y && j == x) {
				printf("%c", 254);
			} else if (i == appleY && j == appleX) {
				printf("F");
			} else {
				// Prints out the Tail
				bool print = false;
				for (int k = 0; k < nTail; k++) {
					if (tailX[k] == j && tailY[k] == i) {
						printf("%c", 254); print = true;
					}
				}
				if (!print) { printf(" "); }
			}
			if (j == width - 1) { printf("#"); }
		}
		printf("\n");
	}

	for (int i = 0; i < width + 1; i++) { printf("#"); } printf("\n");
	printf("Score: %d\t", score); printf("Length: %d\n", nTail);
}

int Movement() {
	if (kbhit()) {
		switch(getch()) {
			case 'w':
				if (keyBuffer[0] == DOWN && nTail > 0) {
					dir = DOWN;
					return 0;
				}
				dir = UP;
				keyBuffer[0] = UP;
				break;
			case 'a':
				if (keyBuffer[0] == RIGHT && nTail > 0) {
					dir = RIGHT;
					return 0;
				}
				dir = LEFT;
				keyBuffer[0] = LEFT;
				break;				
			case 's':
				if (keyBuffer[0] == UP && nTail > 0) {
					dir = UP;
					return 0;
				}
				dir = DOWN;
				keyBuffer[0] = DOWN;
				break;				
			case 'd':
				if (keyBuffer[0] == LEFT && nTail > 0) {
					dir = LEFT;
					return 0;
				}
				dir = RIGHT;
				keyBuffer[0] = RIGHT;
				break;
			case KEY_UP:
				if (keyBuffer[0] == DOWN && nTail > 0) {
					dir = DOWN;
					return 0;
				}
				dir = UP;
				keyBuffer[0] = UP;
				break;
			case KEY_LEFT:
				if (keyBuffer[0] == RIGHT && nTail > 0) {
					dir = RIGHT;
					return 0;
				}
				dir = LEFT;
				keyBuffer[0] = LEFT;
				break;
			case KEY_DOWN:
				if (keyBuffer[0] == UP && nTail > 0) {
					dir = UP;
					return 0;
				}
				dir = DOWN;
				keyBuffer[0] = DOWN;
				break;
			case KEY_RIGHT:
				if (keyBuffer[0] == LEFT && nTail > 0) {
					dir = LEFT;
					return 0;
				}
				dir = RIGHT;
				keyBuffer[0] = RIGHT;
				break;
		}
	}
	return 0;
}

bool Logic() {
	// Stores the Coordinates of the Tail Segments
	for (int i = 0; i < (nTail - 1); i++) {
		tailX[i] = tailX[i + 1];
		tailY[i] = tailY[i + 1];
	}
	tailX[nTail - 1] = x;
	tailY[nTail - 1] = y;

	switch(dir) {
		case UP: y--; break;
		case LEFT: x--; break;
		case DOWN: y++; break;
		case RIGHT: x++; break;
	}

	//Tests for a Border Crash
	if (x > width - 1 || x < 1 || y > height - 1 || y < 0) {
		gameover = true;
		return gameover;
	}
	// Tests for Snake Crash
	for (int i = 0; i < nTail; i++) {
		if (tailX[i] == x && tailY[i] == y) {
			gameover = true;
			return gameover;
		}
	}

	if (x == appleX && y == appleY) {
		score += 10;
		appleX = rand() % width;
		appleY = rand() % height;
		nTail++;
	}
	return true;
}

int main() {
	Setup();
	while (!gameover) {
		DrawBoard();
		Movement();
		Logic();
		Sleep(50);
	}

	// Game Over Screen
	if (score > 1) {
		system("cls"); system("mode con: cols=50 lines=2");
		printf("Your score was %d!!! That's better than zero!", score);
	} else {
		system("cls"); system("mode con: cols=60 lines=2");
		printf("Your score was %d... seriously, how can one suck so badly!?!", score);
	}
	Sleep(1000 * 8);
}