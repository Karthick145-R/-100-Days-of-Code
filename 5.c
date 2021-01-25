#include<stdio.h>
void main()
{
      int a[10][10],b[10][10],c[10][10],i,j,m,n;
      printf("Enter m and n : ");
      scanf("%d%d",&m,&n);
      printf("Enter matrix 1 : \n");
      for(i=0;i<m;i++){
            for(j=0;j<n;j++){
                  scanf("%d",(*(a+i)+j));
            }
      }
      printf("Enter matrix 2 : \n");
      for(i=0;i<m;i++){
            for(j=0;j<n;j++){
                  scanf("%d",(*(b+i)+j));
            }
      }
      printf("\nMatrix Subtraction is : \n");
      for(i=0;i<m;i++){
            for(j=0;j<n;j++){
                  *(*(c+i)+j)=*(*(a+i)+j)-*(*(b+i)+j);
                  printf("%d      ",*(*(c+i)+j));
            }
            printf("\n");
      }
}
