#include<stdio.h>
#include<limits.h>
int fun(int a[],int n, int i)
{
    if(n==0)
    {
        return INT_MIN;
    }
    int max=fun(a,n-1,i+1);
    if(a[i]>max)
    {
        return max=a[i];
    }
    else{
        return max;
    }

}
int main()
{
  int n;
  scanf("%d",&n);
  int a[n];
  for(int i=0;i<n;i++)
  {
    scanf("%d",&a[i]);
  }
  int max=fun(a,n,0);
  for(int i=0;i<n;i++)
  {
    a[i]=max-a[i];
    printf("%d ",a[i]);
  }

    return 0;
}