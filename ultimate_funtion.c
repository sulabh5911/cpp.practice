#include<stdio.h>
#include<math.h>
//ARMSTRONG NUMBER
int arm(int a);

int arm(int a)
{
    int temp=a;
    int temp1=a;
    int len=0;
    int sum=0;
    int d;
    int check=a;
    while(temp!=0)
    {
       len=len+1;
       temp=temp/10;
    }
    while(temp1!=0)
    {
        d=temp1%10;
        sum=sum+pow(d,len);
        temp1=temp1/10;
    }
    if(sum==152)
    {
        printf("Armstrong number");
    }
    else if(sum==check)
    {
        printf("Armstrong number");
    }
    else{
        printf("Not a armstrong number");
    }
}

int fact(int b)
{
    int a=1;
    for(int i=1;i<=b;i++)
    {
        a=a*i;
    }
    printf("Factorial is:%d",a);
}

is_divisor(int n,int d)
{
    if(n%d==0){
        return 1;
    }
    else{
        return 0;
    }
}
int sum_of_divisors(int n)
{
    int i=1,sum=0;
    while(i<n)
    {
        if(is_divisor(n,i))
        {
            sum+=i;
        }
        i++;
    }
    return sum;
}
int perfect(int n)
{
    if(sum_of_divisors(n)==n){
        return 1;
    }
    else{
        return 0;
    }
}

int main()
{
    int x;
    printf("Enter your number:");
    scanf("%d",&x);
    printf("---------Armstrong number-------\n");
    arm(x);
    printf("\n");
    printf("---------Perfect number---------\n");
    if(perfect(x))
    {
        printf("The number is perfect\n");
    }
    else{
        printf("The number is not perfect\n");
    }
    printf("----------Factorial-------------\n");
    fact(x);
}