// Your task is to create a function that does four basic mathematical operations.

// The function should take three arguments - operation(string / char), value1(number), value2(number).
// The function should return result of numbers after applying the chosen operation.

int basicOp(char op, int val1, int val2) {
    switch (op) {
    case '+':
        return val1 + val2;
    case '-':
        return val1 - val2;
    case '*':
        return val1 * val2;
    case '/':
        return val1 / val2;
    default:
        return -1;
    }
    return 0;
}