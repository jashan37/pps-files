


    #include <stdio.h>

int main() {
    int number, originalNumber, remainder, result = 0;

    // Taking input from the user
    printf("Enter a number: ");
    scanf("%d", &number);

    originalNumber = number;

    // Calculating result
    while (originalNumber != 0) {
        remainder = originalNumber % 10;
        result += remainder * remainder * remainder;
        originalNumber /= 10;
    }

    // Checking if the number is Armstrong
    if (result == number)
        printf("%d is an Armstrong number.\n", number);
    else
        printf("%d is not an Armstrong number.\n", number);

    return 0;
}

   
  

// int a, b,sum ;

// printf("enter L :");
// scanf("%d", &a);

// printf("enter W :");
// scanf("%d", &b);

// sum = 2 * (a + b);

//     printf("perimeter of rectangle : %d" , sum);

// int n, sum ;
// printf("enter the n :");
// scanf("%d", &n);

// sum = n*n*n;

// printf("the cude of n : %d ", sum);

// float num1, num2, num3, average;

// printf("Enter the first number: ");
// scanf("%f", &num1);

// printf("Enter the second number: ");
// scanf("%f", &num2);

// printf("Enter the third number: ");
// scanf("%f", &num3);

// average = (num1 + num2 + num3) / 2;

// printf("The average is: %f", average);

// char ch;

// printf("enter a character:");
// scanf("%c", &ch);

// if (isdigit(ch))
// {
//     printf("%c is a digit.\n", ch);
// }
// else
// {
//     printf("%c is not a digit.\n", ch);
// }
//     float num1, num2;

//     // Taking input from the user for two numbers
//     printf("Enter two numbers separated by a space: ");
//     scanf("%f %f", &num1, &num2);

//     // Checking which number is smaller
//     float smallest = (num1 < num2) ? num1 : num2;

//     // Displaying the result
//     printf("The smallest number is: %.2f\n", smallest);