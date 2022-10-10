#include<stdio.h>
void main()
{
    int i,len1,len2,result;
    printf("Length of first piece:");
    scanf("%d",&len1);
    printf("Length of second piece:");
    scanf("%d",&len2);
    void common(int len1,int len2);
    common(len1,len2);
    
}
void common(int len1,int len2)
{
    int i,result;
    for(i=1;i<=len1 && i<=len2;i++)
    {
        if(len1%i==0 && len2%i==0)
        {
            result=i;
        }
    }printf("Equal width=%d",result);
}
