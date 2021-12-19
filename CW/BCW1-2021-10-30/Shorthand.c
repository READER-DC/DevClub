#include <stdio.h>

// +, -, *, /, %
// ++, --

int main() {
    int value = 42;

    value = value + 10; // value += 10;
    value = value - 10; // value -= 10;
    value = value * 10; // value *= 10;
    value = value / 10; // value /= 10;

    value = value + 1; // value += 1; value++;
    value = value - 1; // value -= 1; value--;

    return 0;
}