/******************
Name: Gal Neeman
ID: 331981365
Assignment: ex2
*******************/

#include <stdio.h>

int main() {
    int exit = 0;
    while (!exit) {
        printf(
            "Choose an option:\n\t1. Happy Face\n\t2. Balanced Number\n\t3. Generous Number\n\t4. Circle Of Joy\n\t5. "
            "Happy Numbers\n\t6. Festival Of Laughter\n\t7. Exit\n");
        int choice;
        scanf("%d", &choice);
        switch (choice) {
            // Case 1: Draw Happy Face with given symbols for eyes, nose and mouse
            /* Example:
            * n = 3:
            * 0   0
            *   o
            * \___/
            */
            case 1:
                printf("Enter symbols for the eyes, nose, and mouth:\n");
                char eye, nose, mouth;
                scanf(" %c %c %c", &eye, &nose, &mouth);
                printf("Enter faze size:\n");
                int size;
                while (scanf("%d", &size) && (size < 1 || size % 2 == 0)) {
                    printf("The face's size must be an odd and positive number, please try again:\n");
                }
                printf("%c", eye);
                for (int i = 0; i < size; i++) {
                    printf(" ");
                }
                printf("%c\n", eye);
                for (int i = 0; i < size / 2 + 1; i++) {
                    printf(" ");
                }
                printf("%c\n", nose);
                printf("\\");
                for (int i = 0; i < size; i++) {
                    printf("%c", mouth);
                }
                printf("/\n");
                break;
            // Case 2: determine whether the sum of all digits to the left of the middle digit(s)
            // and the sum of all digits to the right of the middle digit(s) are equal
            /* Examples:
            Balanced: 1533, 450810, 99
            Not blanced: 1552, 34
            Please notice: the number has to be bigger than 0.
            */
            case 2:
                int num, rightSum = 0, leftSum = 0, digitCounter = 0;
                printf("Enter a number:\n");
                while (scanf("%d", &num) && num < 1) {
                    printf("Only positive number is allowed, please try again:\n");
                }
                int temp = num;
                while (temp > 0) {
                    digitCounter++;
                    temp /= 10;
                }
                for (int i = 0; i < digitCounter / 2; i++) {
                    rightSum += num % 10;
                    num /= 10;
                }
                if (digitCounter % 2 == 1) num /= 10;
                for (int i = 0; i < digitCounter / 2; i++) {
                    leftSum += num % 10;
                    num /= 10;
                }
                if (rightSum == leftSum) {
                    printf("This number is balanced and brings harmony!\n");
                } else {
                    printf("This number isn't balanced and destroys harmony.\n");
                }
                break;
                // Case 3: determine whether the sum of the proper divisors (od an integer) is greater than the number itself
                /* Examples:
                Abudant: 12, 20, 24
                Not Abudant: 3, 7, 10
                Please notice: the number has to be bigger than 0.
                */
            case 3:

            default:

                break;



            // Case 4: determine wether a number is a prime.
            /* Examples:
            This one brings joy: 3, 5, 11
            This one does not bring joy: 15, 8, 99
            Please notice: the number has to be bigger than 0.
            */


            // Happy numbers: Print all the happy numbers between 1 to the given number.
            // Happy number is a number which eventually reaches 1 when replaced by the sum of the square of each digit
            /* Examples:
            Happy :) : 7, 10
            Not Happy :( : 5, 9
            Please notice: the number has to be bigger than 0.
            */
        }
    }

    // Festival of Laughter: Prints all the numbers between 1 the given number:
    // and replace with "Smile!" every number that divided by the given smile number
    // and replace with "Cheer!" every number that divided by the given cheer number
    // and replace with "Festival!" every number that divided by both of them
    /* Example:
    6, smile: 2, cheer: 3 : 1, Smile!, Cheer!, Smile!, 5, Festival!
    */
    return 0;
}
