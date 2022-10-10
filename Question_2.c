#include<stdio.h>
int a[10][10],b[10][10],c[10][10],d[10][10],n1,n2,m1,i,j,m2,n,m;
void main()
{
    int flag=1;
    printf("...Matrix 1....\n");
    printf("enter the number of rows :");
    scanf("%d",&n1);
    printf("enter the number of col:");
    scanf("%d",&m1);
    printf("...Matrix 2....\n");
    printf("enter the number of rows :");
    scanf("%d",&n2);
    printf("enter the number of col:");
    scanf("%d",&m2);
    printf("enter the elements of 1st matrix:");
    void mat(int,int,int[][10]);
    void print(int,int,int[][10]);
    mat(n1,m1,a);
    print(n1,m1,a);
    printf("enter the elements of 2st matrix:");
    mat(n2,m2,b);
    print(n2,m2,b);
    void add(int a[][10],int b[][10],int c[10][10],int n1,int m1);
    if(n1==n2 && m1==m2)
    { 
    add(a,b,c,n,m);
    printf(".....The result of Addition...\n");
    print(n1,m1,c);
    }
    else
    {
    printf("Cannot perform Addition\n");
    }
     void mult(int a[][10],int b[][10],int d[][10],int n1,int n2,int m2);
     if(n1==m2)
     {
         mult(a,b,d,n1,n2,m2);
     }
     else 
     {
         printf("....CAnnot perform Multiplication\n");
     }
     void multdisplay(int n1,int m2,int d[][10]);
     multdisplay(n1,m2,d);
    
    //void identity(int a[10][10],int n,int m,int flag);
    //identity(a,n,m,flag);
   // void identity(int b[10][10],int n,int m);
    void identity(int a[10][10],int n,int m);
    identity(a,n,m);
   // identity(b,n,m);
   void display(int flag);
    display(flag);
}

void add(int a[][10],int b[][10],int c[][10],int n,int m)
{
    int i,j;
   
        for(i=0;i<n1;i++)
        {
                for(j=0;j<m1;j++)
                {
                    c[i][j]=a[i][j]+b[i][j];
    
                }
        }
}
    
void mat(int n,int m,int a[][10])
{
    int i,j;
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            scanf("%d",&a[i][j]);
        }
        
    }
}
void print(int n,int m,int a[][10])
{
    int i,j;
    //if(n1==n2 && m1==m2)
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            printf("%d\t",a[i][j]);
        }
    printf("\n");
    }
}
void mult(int a[][10],int b[][10],int d[10][10],int n1,int n2,int m2)
{
   int i,j,k;
   for(i=0;i<n1;i++)
   {
       for(j=0;j<m2;j++)
       {
           d[i][j]=0;
           for(k=0;k<n2;k++)
           {
               d[i][j]=d[i][j]+a[i][k]*b[k][j];
           }
       }
}
}
void multdisplay(int n1,int m2,int d[10][10])
{
printf("....Multiplication Result....\n");
for(i=0;i<n1;i++)
{
    for(j=0;j<m2;j++)
    {
        printf("%d\t",d[i][j]);
    }
    printf("\n");
}
}
void identity(int a[10][10],int n,int m)
{
    int flag=1,i,j;
    
    for(i=0;i<n;i++)
{
    for(j=0;j<m;j++)
    {
        if(i==j && a[i][j]!=1)
        {
            flag=0;
        }
        else if(i!=j && a[i][j]!=0)
        {
            flag=0;
        }
    }
   
    
}
}
void display(int flag)
{

 if(flag==0)
    {
        printf("It is a IDENTITY MATRIX\n");
    }
    else 
    {
        printf("IT is not an identity matrix");
    }
}











