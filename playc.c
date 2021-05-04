#include <stdio.h>
int main() {
  
  
  // declare variables
  
  char name[100];
  int age;
  
  
  // promt the user for their name and age
  
  printf("what is your name");
  
  // &name[0]  same as name  which is below
  scanf("%s", name);
  
  
  
  
    printf("what is your age ");
  
  scanf("%d", &age);
  
  
  
  
  // pointer is an address to variable location. &age is pointer to int age variable
  
  // * is a pointer 
  
  
  
  // use some logical and rational operator
  printf("Your age is %d.\n", age);
  
  if(age >= 0 && age <= 12)
    printf("your just a babay.\n");
    
    else if(age >= 13 && age <= 19)
        printf("your in a  teen age.\n");
        
          
    else if(age >= 20 && age <= 40)
        printf("your in a  middle age.\n");
        
          
    else if(age >41)
        printf("your old");
    
    
    // declare some variables using pointers
    // explain how the  number 3 pointer declaration and how its value was resolved
    
    int number1 = 100;
    int number2 = 0;
    // pointer  
    
   int*number3 = &number1;
   
   printf("Number 1 is %d and Number 2 is %d.\n", number1, number2);
   
 //   printf("Number 3 is %d.n" , number3); //this is a memory address.
 // passing memory address is essential.
   
   
   printf("Number 3 is %d" , *number3);
    
  
   return 1;
}
