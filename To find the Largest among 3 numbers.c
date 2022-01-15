//to find the largest of the float numbers(3)
#include<stdio.h>
void main(){
  int i,j,l;
  printf("Enter the 3 numbers:");
  scanf("%f%f%f",&i,&j,&k);
  if(i>j){
    if(i>l)
      printf("%f",&i);
    else
      printf("%f",&l);
  else{
    if(j>l)
      printf("%f",&j);
    else
      printf("%f",&l);
  }   
  }
}
