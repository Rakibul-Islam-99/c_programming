#include<stdio.h>
int main()
{
  int n;
  scanf("%d",&n);
  int a[n];
  for(int i=1;i<=n;i++)
  {
    scanf("%d",&a[i]); 
  }

   for(int i=1;i<=n;i++)
  {
    for(int j=i+1;j<=n;j++)
    {
        if(a[i]>a[j])
    {
     int temp=a[i];
    a[i]=a[j];
    a[j]=temp;

    }
    
    }
     
  }

  if(n%2==0)
   {
    int middle_man1,middle_man2;
    middle_man1=a[n/2];
    middle_man2=a[(n/2)+1];
    printf("%d %d",middle_man1,middle_man2);
   }
   else{
    int middle_man1;
    middle_man1=a[(n+1)/2];
    printf("%d",middle_man1);

    
   }



    return 0;
}