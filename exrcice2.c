#include <stdio.h>

int main(){
    
 float  c ;  //drt float 7it t9dr tkon darajt l7arara bi fasila
   printf("entree la temperature °C :");
     scanf("%f", &c);
    
 if( c < 38 && c > 25 ){
     printf("votre temperature est normale. ");
 }else if(c >= 38 && c <= 42){
     printf("vous avez de la fievre.");
 }else if (c > 42){
     printf("imposibel!");
 }else if (c < 25){
     printf("imposibel!");
 }
   return 0;
}