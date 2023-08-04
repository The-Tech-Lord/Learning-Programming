int cube(int a) {
    return a * a * a;
}

float complexMath(int a, int b, int c) {
    a = b - c * a;
    a = b * a - c;
    c = b + a;
    for(int i = 0; i < 9; i++) {
        a = a / 5 + 50;
        b = cube(b) + 10;
        c = cube(c) - 5;
    }
    return a + c - b;
}