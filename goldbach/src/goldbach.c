#include <stdio.h>

long long prime(long long numb) {
    int divisor , isprime=1 ;
    for (divisor=2 ; divisor<numb ; divisor++) {
        if (numb%divisor==0) {
            isprime=0 ;
        }
    }
    return isprime ;
}    






long long goldbach(long long numb) {
    long long  p , q ;
    int f=0 ;
         while (1) {
            for(p=2 ; p<=numb/2 ; p++) {
                if (prime(p)!=0) {
                    q=numb-p ;
                     if (prime(q)!=0) {
                        printf("%lld=%lld+%lld\n", numb , p , q )  ;
                        f=1 ;
                        break ;
                     }              
                    else {
                        continue ;
                    }    
                    }   
                else {
                    continue ;    
                }           
                
                }  
                if (f==1) {
                    break ;
                }      
            }
    return 1 ;    
}       
    








    int main(void) { 

     long long num = 0 ;
     long long x , pr ;
     char letter ;
     while (1) {
     printf("Give me a number\n") ;

     x = scanf("%lld", &num ) ;
     if (num < 0 || num>10000000000) { 
        printf(" Number should be in the range [0,10000000000]\n") ;
                return 1 ;
     }   
    else if (x==EOF) {
        printf(" EOF detected, exiting\n") ;
        return 0 ;
    }    
    else if (num != (long long) num) {
         printf(" Invalid input: expected an integer\n") ; 
        return 1 ;
    }
    else {
            printf("Give me a letter. p or g\n") ;
            scanf(" %c", &letter) ;
                if (letter=='p') {
                     pr=prime(num) ;
                     if (pr!=0) {
                    printf("%lld is prime\n" , num) ;
                     }
                     else {
                        printf("%lld is not prime\n" , num) ;
                     }     
                }
                else if (letter=='g') {
                     if (num % 2 == 0 && num>=2) {
                        goldbach(num) ;   
                     }
                    else {
                        printf(" Goldbach's conjecture is applicable only to even numbers greater than 2!\n") ;
                        continue ;
                    }
                }
                else {
                    printf(" Invalid choice: expected 'p' or 'g'\n") ;
                    return 1 ;

                }   
        }
        }     
     }       
    
    







