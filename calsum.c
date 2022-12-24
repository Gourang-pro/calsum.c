#include<stdio.h>
#include<conio.h>

int main()
{
    void calsum(int,int);
    int no1,no2;

    printf("ENTER THE no1  :");
    scanf("%d",&no1);

    printf("ENTER THE no2  :");
    scanf("%d",&no2);

    calsum(no1,no2);

}

    void calsum(int no1,int no2)

{
    int sum = no1+no2;
    printf("sum:%d",sum);

}





