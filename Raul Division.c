int main() {
    int dividend, divisor, quotient;


    printf("Rauly's trying to change the code!!!");
    printf("Enter dividend: ");
    scanf("%d", &dividend);

    printf("Enter divisor: ");
    scanf("%d", &divisor);

    // Check for division by zero
    if (divisor == 0) {
        printf("Error: Division by zero is not allowed.\n");
        return 1; // Indicate an error
    }

    quotient = dividend / divisor;


    return 0;