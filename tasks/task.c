#include <stdio.h>
#include <stdlib.h> // for atoi

int main(int argc, char *argv[]) {
    
    //int num1, num2;
    if (argc != 3) {
        printf("Usage: %s  <num1> <num2>\n", argv[0]);
    }
    
    // Prompt the user for input
        //printf("Enter the first number: ");
        //scanf("%d", &num1);


    int num1 = atoi(argv[1]);
    int num2 = atoi(argv[2]);
    //printf("Enter the second number: ");
    //scanf("%d", &num2);

    // Calculate and print the sum
    int sum = num1 + num2;
    printf("Sum: %d\n", sum);

    return 0; // Exit successfully
}
