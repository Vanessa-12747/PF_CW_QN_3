#include <iostream>
using namespace std;

// Function to calculate the sum of all integers between first and last, inclusive
int sum_from_to(int first, int last) {
    int sum = 0;

    if (first > last) {
        // Swap values if first is greater than last
        int temp = first;
        first = last;
        last = temp;
    }

    for (int i = first; i <= last; ++i) {
        sum += i;
    }

    return sum;
}

// Function to find the greatest common divisor (GCD)
int gcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

// Function to reduce the fraction (num/denom)
int reduce(int &num, int &denom) {
    if (num <= 0 || denom <= 0) {
        return 0;  // Failure if any of the values is non-positive
    }

    int divisor = gcd(num, denom);

    num /= divisor;
    denom /= divisor;

    return 1;  // Success
}

// Main function to test sum_from_to and reduce
int main() {
    // Test sum_from_to
    int first = 5, last = 10;
    cout << "Sum from " << first << " to " << last << " is: " << sum_from_to(first, last) << endl;

    // Test reduce
    int num = 42, denom = 56;
    if (reduce(num, denom)) {
        cout << "The reduced fraction is: " << num << "/" << denom << endl;
    } else {
        cout << "Failed to reduce the fraction." << endl;
    }

    return 0;
}
