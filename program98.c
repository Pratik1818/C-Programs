/*
  input :  4 

  output :   a  b  c  d   


 */

#include<stdio.h>
//  ASCII
//American Standard Code for Information Interchange

void Display(int iNo)                  //N
{ 
    if(iNo<0)                               //updator
    {
        iNo = -iNo;
    }

   int iCnt = 0;
   char  ch  = 'a';

  for(iCnt = 1 ; iCnt <=iNo ; iCnt++ ,   ch++)
  {
       printf("%c\t",ch );        //Dynamic
        
  }
  printf("\n");

}

int main()
{
 int iValue = 0;

 printf("Enter Number\n");
 scanf("%d",&iValue);

 Display(iValue);









    return 0;

}
