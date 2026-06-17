#include <stdio.h>

int main() {
    int num, i, a;

    printf("Enter a number: ");
    scanf("%d", &num);

    printf("How many next numbers to be squared: ");
    scanf("%d", &a);

    for (i = 0; i < a; i++) {
        int n = num + i;
        printf("Square of %d = %d\n", n, n * n);
    }

    return 0;
}