#include <iostream>
#include <assert.h>
using namespace std;

int main() {
	alignas(32) int b[4];
	assert(alignof(b) == 32);
}