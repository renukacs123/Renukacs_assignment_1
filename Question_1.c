#include<stdio.h>
int n,rev=0,rem,c;
void main()
{
    int x,a,b,c,d,e;
    printf("Enter the Number of digits:");
    scanf("%d",&x);
    if(x>5)
    {
       printf("Upto 5 digit number is valid");
    }
    else
    {
        printf("Enter the number:");
        scanf("%d",&n);
        printf("\nThe number is:%d\n",n);
    }
    
    void fivedigi(int a,int b,int c,int d,int e);
    fivedigi(a,b,c,d,e);
    
}
void fivedigi(int a,int b,int c,int d,int e)
{
if(n>=0)
{
    a=n/1000;
        if(a==1)
            printf("  one");
        else if(a==2) 
            printf("  two");
        else if(a==3)
            printf("  three");
        else if(a==4)
            printf("  four");
        else if(a==5)
            printf("  five");
        else if(a==6)
            printf(" six");
        else if(a==7)
            printf("  Seven");
        else if(a==8)
            printf("  Eight");
        else if(a==9)
            printf("  Nine");
       else if(a==0)
            printf("  Zero");
    b=(n/100)%10;
        if(b==1)
            printf("  one");
        else if(b==2) 
            printf("  two");
        else if(b==3)
            printf("  three");
        else if(b==4)
            printf("  four");
        else if(b==5) 
            printf("  five");
        else if(b==6)
            printf("  six");
        else if(b==7)
            printf("  Seven");
        else if(b==8)
            printf("  Eight");
        else if(b==9)
            printf("  Nine");
       else if(b==0)
            printf("  Zero");
    c=(n%100)/10;
        if(c==1)
            printf("  one");
        else if(c==2) 
            printf("  two");
        else if(c==3)
            printf("  three");
        else if(c==4)
            printf("  four");
        else if(c==5)
            printf("  five");
        else if(c==6)
            printf("  six");
        else if(c==7)
            printf("  Seven");
        else if(c==8)
            printf("  Eight");
        else if(c==9)
            printf("  Nine");
       else if(c==0)
            printf("  Zero");
        
    d=(n%100)%10;
      //printf("\nFour  integers are:%d\n%d\n%d\n%d",a,b,c,d); 
        if(d==1)
            printf("  one");
        else if(d==2) 
            printf("  two");
        else if(d==3)
            printf("  three");
        else if(d==4)
            printf("  four");
        else if(d==5)
            printf("  five");
        else if(d==6)
            printf("  six");
        else if(d==7)
            printf("  Seven");
        else if(d==8)
            printf("  Eight");
        else if(d==9)
            printf("  Nine");
       else if(d==0)
            printf("  Zero");
        
      e=(n/1000)%10;
            if(e==1)
            printf("  one");
        else if(e==2) 
            printf("  two");
        else if(e==3)
            printf("  three");
        else if(e==4)
            printf("  four");
        else if(e==5)
            printf("  five");
        else if(e==6)
            printf("  six");
        else if(e==7)
            printf("  Seven");
        else if(e==8)
            printf("  Eight");
        else if(e==9)
            printf("  Nine");
       else if(e==0)
            printf("  Zero");
}
}
