#include <stdio.h>

int main(){
    
 float b , h  , ruselta  ;
   printf("entree la base :");
     scanf("%f", &b);
  
   printf("entree hauteur :");
     scanf("%f" , &h);
  
     ruselta = ( b * h ) / 2 ;
  
   printf("ruselta = ( %f * %f ) / 2 = %.2f " , b , h , ruselta );
     ruselta2 = b*3 ;
   printf("perimetre= %f * 3 = %.2f " , b , ruselta2 );
   
   
   
   
   return 0;
}