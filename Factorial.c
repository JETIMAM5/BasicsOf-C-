#include <stdio.h>
#include <stdlib.h>

int main()
{
    int enteredNumber;
    int factroial = 1;

    printf("Enter the number that will be used in the factorial procces: ");
    scanf("%d", &enteredNumber);

    // Control for negativity
    if (enteredNumber < 0) {
        printf("Factorial procces cannot be used with negative numbers.\n");
        return 1;
    }

    for (int i = 1; i <= enteredNumber; ++i) {
        factroial *= i;
    }

    printf("%d Factorial of the number: %d\n", enteredNumber, factroial);
}
