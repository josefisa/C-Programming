/* Created by Jose Emanuel.
 The objetive of this script is to solve 50 exercises in:
 "https://w3resource.com/c-programming-exercises/"
 First part: Basic Declaraations and Expressions.
 main fun call every other function, which is the one where the solution for the exercice is.
 The name of the function coincide with the exercise number:
 */


#include <stdio.h>
#include <stdlib.h>

int one(){
    //Print name, DOB, and mobile number
    printf("First exercise: Print name, DOB, and mobile number\n");
    printf("Name    : José Emanuel\n");
    printf("DOB     : April 3, 1998\n");
    printf("Mobile  : +58 4565461313\n\n");
    return 0;
}

int four(){
    /*     Write a C program to print the following characters in reverse.
    Test Characters: 'X', 'M', 'L'
    Expected Output:
    The reverse of XML is LMX
    */
    char c1 = 'X';
    char c2 = 'M';
    char c3 = 'L';
    printf("The reverse of %c%c%c is %c%c%c\n", c1,c2,c3,c3,c2,c1);
    return 0;
}

int seven(){
    //Display multiple variables of various types

    int a = 125;
    int b = 12345;
    long ax = 1234567890;
    short s = 4043;
    float x = 2.13459;
    double dx = 1.1415927;
    char c = 'W';
    unsigned long ux = 2541567890;

    int sum_a_c = a + c;
    printf("a + c is: %d\n", sum_a_c);

    double sum_x_c = c + x;
    printf("x + c is: %f\n", sum_x_c);

    int new_dx = dx;
    long sum_int_dx_ax = new_dx + ax; 
    printf("((int) dx) + ax is: %ld\n", sum_x_c);
    //Or even:
    printf("((int) dx) + ax is: %ld\n", ((int) dx) + ax );

    printf("a + x : %f\n", a + x);
    printf("s + b = %i\n", s + b);
    printf("ax +b = %ld\n", ax + b);
    printf("ax +c = %ld\n", ax +c);
    printf("ax + ux = %lu\n", ax + ux);

    return 0;
}

int ten(){
    //Calculate product of two integers
    int x, y;
    printf("\nInput the first number: ");
    scanf("%d", &x);

    printf("\nInpute the second number: ");
    scanf("%d", &y);

    printf("\nProduct of those two is: %d\n", x*y);

    return 0;
}

int thirty(){
    //Find the maximun of three integers.
    int x, y, z, ans;
    printf("Program will give you the maximun of three numbers you input.");
    printf("\nInput the first number: ");
    scanf("%d", &x);
    printf("\nInput the second number: ");
    scanf("%d", &y);
    printf("\nInput the third number: ");
    scanf("%d", &z);

    //This is simpler.
    ans = (x  + y + abs(x-y))  / 2;
    ans = (z + ans + abs(ans-z)) / 2;
    printf("\nThe largest number is: %d\n", ans);

    return 0;
}

int sixty(){
    int amm, rem; //Ammount and Remainder.

    printf("\nPlease type the ammount of money:");
    scanf("%d", &amm);

    printf("\n%d Notes of 100$: \n", amm / 100);
    rem = amm % 100;
    printf("%d Notes of 50$: \n", rem / 50);
    rem = rem % 50;
    printf("%d Notes of 20$: \n", rem / 20);
    rem = rem % 20;
    printf("%d Notes of 10$: \n", rem / 10);
    rem = rem % 10;
    printf("%d Notes of 5$: \n", rem / 5);
    rem = rem % 5;
    printf("%d Notes of 2$: \n", rem / 2);
    rem = rem % 2;
    printf("%d Notes of 1$: \n", rem / 1);

    return 0;
}

int ninety(){

    int p, q, r, s;

    printf("\nThis is the password varification");
    printf("\nInsert value p: ");
    scanf("%d", &p);
    printf("\nInsert value q: ");
    scanf("%d", &q);
    printf("\nInsert value r: ");
    scanf("%d", &r);
    printf("\nInsert value s: ");
    scanf("%d", &s);

    if ( ((s%2) == 0) || (p>0 && q>0 && r>0)  ) {
        printf("Wrong values");
        exit(1);
    }

    if ( (q>r) &&    (s > r)   &&( (r+s)>(p+q)) ){
        printf("Correct Values");
    } else {
        printf("Wrong values");
    }

    return 0;
}

int twentytwo(){
    int i, numbers[5], sum =0;
    
    printf("\nInput the first number: ");
    scanf("%d", &numbers[0]);
    printf("\nInput the second number: ");
    scanf("%d", &numbers[1]);
    printf("\nInput the third number: ");
    scanf("%d", &numbers[2]);
    printf("\nInput the fourth number: ");
    scanf("%d", &numbers[3]);
    printf("\nInput the fifth number: ");
    scanf("%d", &numbers[4]);

    for (i = 0; i<5; i++){
        if((numbers[i]%2) !=0){
            sum += numbers[i];
        }
    }

    printf("The sum of all even numbers is: %d", sum);
    return 0;
}

int twentyfive(){
    //Get month name from number (1-12)

    const char *months[] = {"January","February","March","April","May","June",
        "July","Ausgust","September","October","November","December"};
    
    int i;
    printf("\nType the month number: ");
    scanf("%d", &i);
    i -= 1; //To look in the array.

    printf("\nThe %d month is: %s",(i+1),months[i]);
    return 0;
}


void main(){
    //The only reason of this function is to call every other function.

    //one();
    //four();
    //seven();
    //ten();
    //thirty();
    //sixty();
    //ninety();
    //twentytwo();
    twentyfive();
    


}