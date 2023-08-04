#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>

int main() {
    uint8_t number1 = 255; printf("%d\n", number1);
    uint16_t number2 = 65535; printf("%d\n", number2);
    uint32_t number3 = 4294967295; printf("%u\n", number3);
    uint64_t number4 = 9223372036854775807; printf("%llu\n", number4);
}