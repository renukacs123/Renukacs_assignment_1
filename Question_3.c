#include<stdio.h>
void main()
{
    int age[50],i,n;
    char name[50];
    printf("Enter the number of employees:");
    scanf("%d",&n);
    printf("Enter the ages of %d employees:\n",n);
    for(i=0;i<n;i++)
        {
            scanf("\n%d",&age[i]);
        }
    printf("The employees list:\n");
    for(i=0;i<n;i++)
    {
        printf("\n%d",age[i]);
    }
    void sort(int age[50],int n);
    sort(age,n);
    
}
void sort(int age[50],int n)
{
  int i,j,temp;
  for(i=0;i<=n-1;i++)
  {
      for(j=i+1;j<=n;j++)
      {
          if(age[i]>age[j])
          {
              temp=age[i];
              age[i]=age[j];
              age[j]=temp;
          }
      }
  }
  printf("\nThe sorted age is:\n");
  for(i=0;i<n;i++)
  {
      printf("%d\n",age[i]);
  }
  printf("Enter the lower age of the employee:%d\n",age[0]);
  printf("Enter the upper age of the employee:%d\n",age[n-1]);
 
}


