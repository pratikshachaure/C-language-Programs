 #include<stdio.h>
void main()
{
    int num,count=0;
    printf("Enter your number ");
    scanf("%d",&num);
    for(int i=1;i<=num;i++)
    {
    if(num%i==0)
    {
        count++;
    }
    }
    if(count==2)
    {
        printf("%d:- Number is Prime ",num);
    }
    else
    {
         printf("%d:- Number is Not Prime ",num);
    }
}
