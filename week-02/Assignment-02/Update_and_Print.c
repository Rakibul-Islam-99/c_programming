#include<stdio.h>
int main()
{
  int n;
  scanf("%d",&n);
  int ar[n],i;
  for(i=0;i<n;i++){
    scanf("%d",&ar[i]);

  }
  int x,v;
  scanf("%d%d",&x,&v);
  for(i=n-1;i>=0;i--){
        if(i==x){
            ar[i]=v;
        }
    printf("%d ",ar[i]);
  }



    return 0;
}
