#include <stdio.h>
//MARY NJERI NYORO

main(int a, char*b[])
{
    int num = 0, sum = 0, temp=0;
    printf("write down a positive integer\n");
    scanf("%d", & num);

    while (num > 0){
        temp = num%10;
        num = num/10;
        sum = sum + temp;

    }
    printf("The sum of the digits are %d\n", sum);
    return 0;

}