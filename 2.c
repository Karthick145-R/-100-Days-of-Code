#include<stdio.h>
#include<string.h>
void main()
{
      //WITHOUT POINTER
      char str1[50];
      int l;
      printf("Enter the string : ");
      gets(str1);
      l=strlen(str1);
      printf("The length of the string is  :  %d ",l);

      //WITH POINTER
      char str2[50], *p;
      int i,count=0;
      printf("\nEnter the string : ");
      gets(str2);
      p=str2;
      while(*p!='\0'){
            count++;
            p++;
      }
      printf("Length = %d", count);
}
