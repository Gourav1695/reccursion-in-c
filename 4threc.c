#include<stdio.h>
void factorize(int ,int );

int main(){
    int num;
    printf("Enetr a number : ");
    scanf("%d",&num);
    printf("Prime factor are:");
    factorize(num,2);

    return 0;
}
void factorize(int n,int i)
{
    if(i<=n)
    {
        if (n%i==0)
        {
            printf("%d",i);
            n=n/i;

        }
        else
        i++;
        factorize(n,i);


    }
    

}