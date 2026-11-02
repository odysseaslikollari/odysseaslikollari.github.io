#include <math.h>
#include <stdio.h>
    int main() { 

     int num = 0 ;
     long long pr , gb ;
     char letter ;
     printf("Give me a number"\n) ;

     x= scanf("%d", &num ) ;
     if (num < 0 || num>10000000000) { 
        printf(" Number should be in the range [0,10000000000] "\n) ;
        return 1 ;
     }
     else {
        if (x!=0) {
            if (x=EOF) {
                printf(" EOF detected, exiting ")
                return 0 ;
            }
            else {
                printf(" Invalid input: expected an integer "\n) ; 
                return 1 ;
            }   
        }        
        else {
            printf("Give me a letter. p or g "\n) ;
            scanf("%c", &letter) ;
                if (letter='p') {
                     pr=prime(num) ;
                     if (isprime!=0) {
                    printf("%d is prime" , num) ;
                     else {
                        printf("%d is not prime" , num) ;
                     }     
                }
                else if (letter='g') {
                     if (num%2=0 & num>=2) {
                         gb=goldbach(num) ;   
                     }
                    else {
                        printf(" Goldbach's conjecture is applicable only to even numbers greater than 2! ") ;
                        continue ;
                    }
                }
                else {
                    printf(" Invalid choice: expected 'p' or 'g' ") ;
                    return 1 ;

                }   
        }
        }     
     }       
    }





int prime(int numb) {
    int divisor , isprime=1 ;
    for (divisor=2 ; divisor<numb ; divisor++) {
        if (numb%divisor==0) {
            isprime=0 ;
        }
    }
    return isprime ;
}    






int goldbach(int numb) {
    int p , q ;
         while (1) {
            for(p=2 ; p<=numb/2 ; p++) {
                if (prime(p)!=0) {
                    q=numb-p ;
                     if prime(q)!=0 {
                        printf("%d=%d+%d", numb , p , q )  ;
                        break ;          
                    else {
                        continue ;
                    }    
                    }   
                else {
                    continue ;    
                }
            }
        
         }    
        
    }
}















    

        













