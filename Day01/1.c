#include<stdio.h>
void main()
{
      int arr[10],n,i;
      printf("Enter the n value : ");
      scanf("%d",&n);
      printf("Enter the elements : \n");
      for(i=0;i<n;i++){
            scanf("%d",&arr[i]);
      }
      printf("The reverse array of elements are : \n" );
       for(i=n-1;i>=0;i--){
            printf("%d\n",arr[i]);
      }
}
