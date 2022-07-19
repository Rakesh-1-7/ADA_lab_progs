#include <stdio.h>

int gcd(int m, int n)
{
    if (n == 0)
        return m;
    else
        gcd(n, m % n);
}

int main()
{
    int num1, num2;
    printf("Enter 2 numbers : ");
    scanf("%d%d", &num1, &num2);
    printf("The gcd of %d and %d is %d.", num1, num2, gcd(num1, num2));
    return 0;
}
