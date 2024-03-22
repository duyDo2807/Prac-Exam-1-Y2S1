#include <iostream>
#include <cmath>

int sum_of_powers(int n, int acc = 0) {
    if (n == 0) {
        return acc;
    } else {
    return sum_of_powers(n - 1, pow(n, n) + acc);
    }
}