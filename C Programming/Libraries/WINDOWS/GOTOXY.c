#include <windows.h>
#include <stdio.h>

void gotoxy(int x, int y) {
    COORD coord;
    coord.X = x;
    coord.Y = y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}

int main() {
    gotoxy(50, 20);
    Sleep(100 * 1000);
}