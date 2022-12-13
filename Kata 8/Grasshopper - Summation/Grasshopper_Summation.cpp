int summation(int num) {
    int sum{ 0 };
    while (num > 0) {
        sum += num;
        --num;
    }
    return sum;
}