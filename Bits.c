#include <math.h>
#include <stdio.h>
#include <stdlib.h>

void Int2Bin(int number){
 long checkno = pow (2,32);
 int rem = number;
 char binary[33];
 for(int i= 32; i >= 0; i--) {
   if (checkno <= rem ){

     binary[32- i]= '1';
     rem = rem - checkno;
   }
   else{
     binary[32-i]= '0';
   }

   checkno = checkno /2;

 }

 for(int i = 0; i <=32;i++){
    printf("%c",binary[i]);

 }
 printf("\n");


}

void Int2Hex(int number){
  long checkno = pow(16,8);
  //printf("%ld",checkno);
  int rem = number;
  int temp = 0 ;
  char hex[8];
  for(int i = 8; i >= 0; i--){
    if( rem > checkno ){
      temp = rem / checkno;
      rem = rem % checkno;
      
    }else{
      temp = 0;
    }

    
    checkno = checkno / 16;
    

      


    if ( temp > 9 ){
       hex[7 - i]= 'A' + (temp - 10) ;
    }
    else{
       hex[7 - i]= '0'+ (temp ) ;
    }

    

  }
  for(int i = 0; i <=7;i++){
     printf("%c",hex[i]);

  }

}




int main(int n, char *args[n]) {
    int inputnumber = atoi(args[1]) ;
    if (n == 2 ) {
        printf("Binary:\n");
        Int2Bin(inputnumber);
        printf("Hexidecimal:\n");
        Int2Hex(inputnumber);
        printf("\n");
    }

    return 0;
}
