#include <stdio.h>

int modulus(int a, int b)
{
    int result;
    result = a / b;
    int remain = a - b * (result);
    return remain;
}

int main()
{
    modulus(10, 3);
    printf("Modulus of 10 and 3 is: %d\n", modulus(10, 3));
    return 0;
}