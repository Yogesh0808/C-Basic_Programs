//to find the largest of the float numbers(3)
#include<stdio.h>
#include<conio.h>
main(){
  float a,b,c;
  printf("\n Enter the 3 numbers:");
  scanf("%f%f%f",&a,&b,&c);
  printf("\n Largest Value is:");
  if(a>b){
    if(a>c)
      printf("%f",a);
    else
      printf("%f",c);
    }
  else{
    if(b>c)
      printf("%f",b);
    else
      printf("%f",c); 
  }
  getch();
  
}

