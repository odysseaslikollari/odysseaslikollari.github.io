include <stdio.h>

long long prime(long long numb) {          //Χρήση long long ώστε η συνάρτηση να δέχεται ακέραιους αριθμούς εως 10.000.000.000 
    long long divisor , isprime=1 ;         // Xρήση long long ώστε το πρόγραμμα να εκτελείται πιο γρήγορα
    if (numb==0 || numb==1) {             
        isprime=0 ;
    } 
    for (divisor=2 ; divisor*divisor<=numb ; divisor++) {
        if (numb%divisor==0) {
            isprime=0 ;
            break ;
        }
    }
    return isprime ;
}    






long long goldbach(long long numb) {   //Χρήση long long ώστε η συνάρτηση να δέχεται ακέραιους αριθμούς εως 10.000.000.000                                                                                      
    long long  p , q ;
         while (1) {
            for(p=2 ; p<=numb/2 ; p++) {
                if (prime(p)!=0) {
                    q=numb-p ;
                     if (prime(q)!=0) {
                        printf("%lld=%lld+%lld\n", numb , p , q )  ; //Χρήση lld εφόσον οι μεταβλήτες δηλώνονται με long long
                        return 1;
                     }              
                    else {
                        continue ;
                    }    
                }       
                else {
                    continue ;    
                }           
                
                }  
                }      
    return 0 ;    
}  
    








    int main(void) {     //Tο void αναγκάστηκα να το βάλω εξαιτίας της δοσμένης εντολής 'gcc -O0 -m32 -Wall -Wextra -Werror -pedantic -o goldbach goldbach.c'

     long long num = 0 ;
     long long x , y , pr ;
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
        else if (num != (long long) num) {       //Χρησιμοποίησα την συγκεκριμένη εξίσωση για να εξασφαλίσω ότι το num δεν είναι δεκαδικός
                 printf(" Invalid input: expected an integer\n") ; 
                return 1 ;
        }
        else {
            printf("Give me a letter. p or g\n") ;
            y=scanf(" %c", &letter) ;   // "%c" διότι η μεταβλητή letter είναι χαρακτήρας
            if (y==EOF) {
                printf("EOF detected,exiting\n") ;
                return 0 ;
            }
                
                if (letter=='p') {
                     pr=prime(num) ;
                     if (pr!=0) {
                    printf("%lld is prime\n" , num) ;      //Χρησιμοποίησα lld εφόσον η μεταβλήτη num δηλώνεται με long long                                                                     
                     }
                     else {
                        printf("%lld is not prime\n" , num) ;                                                                       
                     }     
                }
                else if (letter=='g') {
                     if (num % 2 == 0 && num>2) { // Έλεγχος αν ο αριθμός ειναι άρτιος και μεγαλύτερος του 2
                        goldbach(num) ; 
                        continue ;  
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
          continue ;  
        }     
        return 0 ;  
     }