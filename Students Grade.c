//To Display the Student Grade
#include<stdio.h>
#include<conio.h>
void main(){
  float avg;
  printf("Enter the average mark of the student");
  scanf("%f",&avg);
    if(avg>=75)
      printf("\n\t Student's grade is A");
    else if(avg>=50)
      printf("\n\t Student's grade is B");
    else if(avg>=25)
      printf("\n\t Student's grade is C");
    else
      printf("\n\t Student's grade is F");
  getch();

}

