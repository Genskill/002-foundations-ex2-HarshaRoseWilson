#include <stdio.h>
#include <cs50.h>
int main(void){
float a;
float b;
float c;
a = get_float("Side 1 ");
b = get_float("Side 2 ");
c = get_float("Side 3 ");
if (a>b){
         if (a>c){
                  if (b*b + c*c ==a*a){
                  printf("yes\n");}
                  else{
                  printf("No\n");}
                 }
        else {
                 if (a*a + b*b == c*c){
                    printf("Yes\n");}
                 else {
                    printf("No\n");}
             }}
else {
         if (b>c){
                  if (a*a + c*c == b*b){
                  printf("Yes\n");}
                  else {
                  printf("No\n");}
                  }
         else{
                if (a*a + b*b == c*c){
                  printf("Yes\n");}
                else{ printf("No\n");}
             }
     
     }}
