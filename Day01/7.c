#include<stdio.h>
#include<conio.h>
struct student{
      char name[50];
      int roll_number;
      int sem;
      char sub[50];
 };
void main()
{
      struct student s[3];
      int i;
      printf("Enter the enrollment details  \n");
      for(i=0;i<2;i++){
            printf("Enter Information for student %d \n",i+1);
            printf("Enter name : ");
            scanf("%s",s[i].name);
            printf("\nEnter roll number : ");
            scanf("%d",&s[i].roll_number);
            printf("\nEnter sem : ");
            scanf("%d",&s[i].sem);
            printf("\nEnter subject : ");
            scanf("%s",s[i].sub);
            printf("\n");
      }
      printf("Display  the enrollment details : \n");
      for(i=0;i<2;i++){
            printf("Information for student %d \n" , i+1);
            printf("Name is  : %s",s[i].name);
            printf("\nRoll number is :%d ",s[i].roll_number);
            printf("\nSem : %d ",s[i].sem);
            printf("\nSubject : %s",s[i].sub);
            printf("\n\n");
      }
}
