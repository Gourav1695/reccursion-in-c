#include <stdio.h>
int rsum(int);
int main()
{
    int num, sum;
    int n;
    printf("Enter number:");
    scanf("%d", &num);
    sum = rsum(num);
    printf("Sum ofs digits is %d\n", sum);
    return 0;
}
int rsum(int n)
{
    int s, remain;

    if (n != 0)

    {
        remain = n % 10;
        s = remain + rsum(n / 10);
    }
    else
        return 0;
    return s;
}