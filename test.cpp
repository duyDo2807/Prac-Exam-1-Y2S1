#include <iostream>
#include <vector>

using namespace std;

int fib(int n) {
    static vector<int> fib_values;
    if (n == 0 || n == 1) {
        return 0;
    }
    if (fib_values.size() > n-2) {
        cout << "found fib " << n << "value " << fib_values.at(n-2) << endl;
        return fib_values.at(n-2);
    }
    int result = fib(n-1) + fib(n-2);
    fib_values.push_back(result);
    return result;
}

int main() {
    int x = fib(5);
    int y = fib(5);
    return 0;
}