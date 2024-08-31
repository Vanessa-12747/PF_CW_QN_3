int reduce(int &num, int &denom) {
    if (num <= 0 || denom <= 0) {
        return 0;
    }

    int divisor = gcd(num, denom);

    num /= divisor;
    denom /= divisor;

    return 1;
}
