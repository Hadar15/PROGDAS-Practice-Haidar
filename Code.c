
#include <stdio.h>
#include "addSubtract.h"
#include "multiplication.h"
#include "division.h"

int main() {
    int a, b;
    char opr;

    printf("Masukan ekspresi matematika sederhana : ");
    scanf("%d %c %d", &a, &opr, &b);

    switch (opr) {
        case '+':
            printf("%d", add(a,b));
            break;
        case '-':
            printf("%d", subtract(a,b));
            break;
        case '*':
            printf("%d", multiplication(a,b));
            break;
        case '/':
            printf("%d", division(a,b));
            break;
        case ':':
            printf("%d", division(a,b));
            break;
    
        default:
            break;
    }

    return 0;
}
