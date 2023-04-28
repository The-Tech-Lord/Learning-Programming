int factorial(int input) {
	if (input == 1 || input == 0)
		return 1;
	else
		return input * factorial(input - 1);
}
