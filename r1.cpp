#include <iostream>
#include <cmath>

int sumPower(int n, int acc = 0) {
    if (n == 0) {
        return acc;
    } else {
    return sumPower(n - 1, pow(n, n) + acc);
    }
}