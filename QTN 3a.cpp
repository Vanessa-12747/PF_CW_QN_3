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
