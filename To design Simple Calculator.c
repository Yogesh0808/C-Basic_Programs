//Simple Calculator 
#include<stdio.h>
#include<conio.h>
void main(){
  float a,b,r;
  int ch;
  printf("Enter the Value of A");
  scanf("%f",&a);
  printf("Enter the Value of B");
  scanf("%f",&b);
  printf("\n\n  Mathematical operations");
  printf("\n _________________________________");
  printf("\n\t 1 -> ADD");
  printf("\n\t 2 -> SUBTRACT");
  printf("\n\t 3 -> MULTIPLY");
  printf("\n\t 4 -> DIVIDE");
  printf("\n Enter Your Choice");
  scanf("%d",&ch);
    switch(ch){
      case 1:r=a+b;
              break;
      case 2:r=a-b;
              break;
      case 3:r=a*b;
              break;
      case 4:r=a/b;
              break;    
    }
    printf("\n the Result is %f",r);
    getch();
}
