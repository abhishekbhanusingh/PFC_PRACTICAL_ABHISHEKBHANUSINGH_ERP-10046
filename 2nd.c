#include <stdio.h>                     //Abhishek bhanu singh(10046)

void swap(int *a, int *b)
{
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}

int main()
{
    int a, b;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    swap(&a, &b);

    printf("After swapping:\n");
    printf("a = %d, b = %d", a, b);

    return 0;
}
//output
// Enter two numbers: 4
// 7
// After swapping:
// a = 7, b = 4