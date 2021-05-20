#include <stdio.h>
#include <cs50.h>

int main(void) {

int pattern;
int height;

pattern = get_int("Enter type of pattern (1 or 2)\n");
height = get_int("Number of rows\n");

if (pattern==1) {
 
 for (int row=1;row<=height;row++) {
      
     for(int column=row;column<=height;column++) {
       printf("#");
       }
 printf("\n");
}

}else { 

 for (int row=1;row<=height;row++) {
   
    for(int i=row;i<height;i++){
    printf(" ");
    }
for (int column=1;column<=row;column++){
   printf("#");
}
printf("\n");
}
 }
}
