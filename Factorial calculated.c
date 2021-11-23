#include<stdio.h>
int main()
{
    int number,fact = 1,i;
    printf("Enter your factorial number is :");
    scanf("%d",&number);

    for(i=1;i<=number;i++)
    {
        fact = fact*i;
    }
    printf("%d ! is : %d\n",number,fact);
    getch();
}
