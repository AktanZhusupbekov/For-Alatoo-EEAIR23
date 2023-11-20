#include <iostream>

bool isPrime(int n) {
    if (n <= 1) {
        return false;
    }
    for (int i = 2; i * i <= n; ++i) {
        if (n % i == 0) {
            return false;
        }
    }
    return true;
}

int findNextPrime(int N) {
    int nextPrime = N + 1;
    while (!isPrime(nextPrime)) {
        ++nextPrime;
    }
    return nextPrime;
}

int main() {
    // Input: positive number N
    int N;
    std::cout << "Enter a positive number N: ";
    std::cin >> N;

    // Find and display the next prime number greater than N
    int nextPrime = findNextPrime(N);
    std::cout << "The next prime number greater than " << N << " is: " << nextPrime << std::endl;

    return 0;
}

