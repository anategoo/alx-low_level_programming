#include "main.h"

/**
 * _pow_recursion - returns the value of x raised to the power of y
 * @x: value to raise
 * @y: power
 *
 * Return: result of the power
 */
int _pow_recursion(int x, int y) {
    if (y < 0) {
        return -1; // If y is negative, return -1 (error condition).
    }
    if (y == 0) {
        return 1; // Any number raised to the power of 0 is 1.
    }

    return x * _pow_recursion(x, y - 1); // Recursively compute x^y as x * x^(y-1).
}
