
#include<stdio.h>

int main()
{
    int a;
    int a1,b1;

    printf("----------------------------------Mega Calculator---------------------------------- \n");
    printf("For special operators ( Like :- power , square root , etc..),Enter \" 1 \" \n ");
    printf("For common operators ( Like :- add , subtract, etc .. ), Enter \" 2 \" \n");
    printf("For Design operators, Enter \" 3 \" \n");
    printf("Enter your option : ");
    scanf("%d",&a);

    printf("-----------------------------------------------------------------------------------\n");

    if(a == 1){
        while(1){

            printf("your options are :-\n");
            printf("1.power \n");
            printf("2.square root \n");
            printf("3.is a prime or not \n");
            printf("4.prime number in a range \n");
            printf("5.factorial of the given number \n");
            printf("6.fibonacci series up to n \n");
            printf("7.is perfect or not \n");
            printf("8.is palindrome or not \n");
            printf("9.is armstrong or not \n");
            printf("10.is a strong or not \n");
            printf("11.Exit\n");

            printf("Enter your choice:");
            scanf("%d",&a1);

            if(a1 == 11){
            break;
        }
            printf("-----------------------------------------------------------------------------------\n");
            if(a1 == 1) {
                int pow,f,r = 1;
                printf("Plz Enter the number you want to power :");
                scanf("%d",&pow);
                printf("Plz Enter the power :");
                scanf("%d",&f);

                while(f != 0) {
                    r = r * pow;
                    f = f - 1;
                }
                printf("--------------------------------------------------\n");
                printf("%d is the power of %d \n",r,pow);
                printf("--------------------------------------------------\n");
            }
            if(a1 == 2) {
                int sr;
                printf("Plz Enter the number you want to square root : ");
                scanf("%d",&sr);

                for(int i = 1; i <= 100 ; i++) {
                    if( sr / i == i) {
                        printf("--------------------------------------------------\n");
                        printf("%d is the number \n",i);
                        printf("--------------------------------------------------\n");
                    }
                }
            }
            if(a1 == 3) {
                int p,count;
                printf("Enter the prime number to check :");
                scanf("%d",&p);

                for(int i = 2; i <= p / 2; i++){
                    if(p % i == 0){
                        count++;
                    }
                }

                if(count > 0){
                    printf("--------------------------------------------------\n");
                    printf("%d is not a prime number \n",p);
                    printf("--------------------------------------------------\n");
                }
                else{
                    printf("--------------------------------------------------\n");
                    printf("%d is a prime number \n",p);
                    printf("--------------------------------------------------\n");
                }
            }
            if(a1 == 4) {
                int start, end;
    
                printf("Enter the start of the range: ");
                scanf("%d", &start);
    
                printf("Enter the end of the range: ");
                scanf("%d", &end);
    
                if (start > end) {
                    printf("Invalid range! Start should be less than or equal to end.\n");
                    break;
                }

                printf("-----------------------------------------------------------------------------------\n");
                printf("Prime numbers between %d and %d are: \n", start, end);
                for (int num = start; num <= end; num++) {
                    if (num < 2) continue;
                    int is_prime = 1;
                    for (int i = 2; i * i <= num; i++) {
                        if (num % i == 0) {
                            is_prime = 0;
                            break;
                        }
                    }
                    
                    if (is_prime) {
                        printf("%d \n", num);
                    }
                }
                printf("\n");
                printf("-----------------------------------------------------------------------------------\n");
            }
            if(a1 == 5) {
                int num, factorial = 1;
                printf("enter a positive integer = ");
                scanf("%d", &num);
                if (num < 0) {
                    printf("factorial is not defined for negative numbers");
                } 
                else {
                    for (int i = 1; i <= num; ++i) {
                        factorial *= i;
                    }
                    printf("--------------------------------------------------\n");
                    printf("factorial of %d = %d\n", num, factorial);
                    printf("--------------------------------------------------\n");
                }
            }
            if(a1 == 6) {
                int n, a = 0, b = 1, sum;
                printf("enter a positive integer = ");
                scanf("%d", &n);
                printf("fibonacci series: ");
                printf("--------------------------------------------------\n");
                for (int i = 1; i <= n; ++i) {
                    if(i == 1) { 
                        printf("%d, ", a);
                        continue;
                    }
                    if(i == 2) { 
                        printf("%d, ", b);
                        continue;
                    } 
                    sum = a + b;
                    a = b;
                    b = sum;
                    printf("%d, ", sum);
                } 
                printf("\n");
                printf("--------------------------------------------------\n");
            }
            if(a1 == 7) {
                int num, sum = 0;
                printf("enter a positive integer = ");
                scanf("%d", &num);
                for (int i = 1; i <= num / 2; ++i) {
                    if (num % i == 0) {
                        sum += i;
                    }
                }
                if (sum == num && num != 0) {
                    printf("--------------------------------------------------\n");
                    printf("%d is a perfect number.\n", num);
                    printf("--------------------------------------------------\n");
                } 
                else {
                    printf("--------------------------------------------------\n");
                    printf("%d is not a perfect number.\n", num);
                    printf("--------------------------------------------------\n");
                }
            }
            if(a1 == 8) {
                int n,k,num,rev=0;
                printf("enter the number = ");
                scanf("%d",&n);
                num=n;
                while(n!=0){
                    k=n%10;
                    n=n/10;
                    rev=rev*10+k;
                }       
                if(rev==num) { 
                    printf("--------------------------------------------------\n");
                    printf("it's Palindrome \n");
                    printf("--------------------------------------------------\n");
                }
                else { 
                    printf("--------------------------------------------------\n");
                    printf("it's NOT Palindrome \n");
                    printf("--------------------------------------------------\n");
                }
            }
            if(a1 == 9) {
                int n,Num, remainder, result = 0;
                printf("enter a three number = ");
                scanf("%d", &n);
                Num = n;
                while (Num != 0) {
                    remainder = Num % 10;
                    result += remainder * remainder * remainder;
                    Num /= 10;
                }
                if (result == n){
                    printf("--------------------------------------------------\n");
                    printf("%d is an Armstrong number.\n", n);
                    printf("--------------------------------------------------\n");
                }
                else{
                    printf("--------------------------------------------------\n");
                    printf("%d is not an Armstrong number.\n", n);
                    printf("--------------------------------------------------\n");
                }
            }
            if(a1 == 10){
                int n,num, digit, sum = 0, factorial, i;
                printf("enter a number = ");
                scanf("%d", &n);
                num = n;
                while (n > 0) {
                    digit = n % 10;
                    factorial = 1;
                    for (i = 1; i <= digit; i++) {
                        factorial *= i;
                    }
                    sum += factorial;
                    n /= 10;
                }
                if (sum== num) {
                    printf("--------------------------------------------------\n");
                    printf("%d is a Strong number.\n", num);
                    printf("--------------------------------------------------\n");
                } 
                else {
                    printf("--------------------------------------------------\n");
                    printf("%d is not a Strong number.\n", num);
                    printf("--------------------------------------------------\n");
                }
            }

        }
    }
    if(a == 2){
        int x,r,y,z;
        
        printf("Enter the first number :");
        scanf("%d",&x);
        r = x ;
        while(1) {
            printf("--------------------------------------------------------------------\n");
            printf("your options are:- \n");
            printf("1.add\n");
            printf("2.subtract\n");
            printf("3.multiply\n");
            printf("4.divide\n");
            printf("5.Exit");
            printf("Plz enter the operators to use:");
            scanf("%d",&y);

            printf("-------------------------------------------------------------------\n");
            printf("Plz enter the next number:");
            scanf("%d",&z);

            if(y == 1) {
                r = r + z ;
            }
            if(y == 2) {
                r = r - z ;
            }
            if(y == 3) {
                r = r * z ;
            }
            if(y == 4) {
                r = r / z ;
            }
            if(y == 5) {
                break;
            }

            printf("%d is the current answer \n ",r);

        }
        printf("-------------------------------------------------------------------------------------------------\n ");
        printf("%d is the answer ",r);

    }
    if(a == 3){
        int choice, n;
        
        while(1){
            printf("------------------------------------------------------------------\n");
            printf("\nChoose a pattern to print:\n");
            printf("1. Pyramid\n");
            printf("2. Square\n");
            printf("3. Right-angled Triangle\n");
            printf("4. Inverted Pyramid\n");
            printf("5. Hollow Square\n");
            printf("6. Cross\n");
            printf("7. Checkerboard\n");
            printf("8. Exit\n");
            printf("Enter your choice: ");
            scanf("%d", &choice);
            
            if (choice == 8) {
                printf("Exiting program.\n");
                break;
            }
            printf("------------------------------------------------------------------\n");

            printf("Enter the size of the pattern: ");
            scanf("%d", &n);

            printf("------------------------------------------------------------------\n");
            if(choice == 1){
                for (int i = 1; i <= n; i++) {
                    for (int j = 1; j <= n - i; j++) {
                        printf(" ");
                    }
                    for (int k = 1; k <= (2 * i - 1); k++) {
                        printf("*");
                    }
                    printf("\n");
                }
            }
            if(choice == 2){
                for (int i = 0; i < n; i++) {
                    for (int j = 0; j < n; j++) {
                        printf("* ");
                    }
                    printf("\n");
                }
            }
            if(choice == 3){
                for (int i = 1; i <= n; i++) {
                    for (int j = 1; j <= i; j++) {
                        printf("* ");
                    }
                    printf("\n");
                }
            }
            if(choice == 4){
                for (int i = n; i >= 1; i--) {
                    for (int j = 1; j <= n - i; j++) {
                        printf(" ");
                    }
                    for (int k = 1; k <= (2 * i - 1); k++) {
                        printf("*");
                    }
                    printf("\n");
                }
            }
            if(choice == 5){
                for (int i = 0; i < n; i++) {
                    for (int j = 0; j < n; j++) {
                        if (i == 0 || i == n - 1 || j == 0 || j == n - 1){
                            printf("* ");
                        }
                        else{
                            printf("  ");
                        }
                    }
                    printf("\n");
                }
            }
            if(choice == 6){
                for (int i = 0; i < n; i++) {
                    for (int j = 0; j < n; j++) {
                        if (i == j || i + j == n - 1){
                            printf("* ");
                        }
                        else{
                            printf("  ");
                        }
                    }
                    printf("\n");
                }
            }
            if(choice == 7){
                for (int i = 0; i < n; i++) {
                    for (int j = 0; j < n; j++) {
                        if ((i + j) % 2 == 0){
                            printf("* ");
                        }
                        else{
                            printf("  ");
                        }
                    }
                    printf("\n");
                }
            }
            printf("------------------------------------------------------------------\n");        
        }
        
    }
    return 0;

}