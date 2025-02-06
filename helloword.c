#include <stdio.h>
// # include<math.h>
int main()
{ int day;
    printf("enter day (1-7) :");
    scanf("%d", &day);

    switch (day)
    {


    case 1 : printf("monday \n");
              break;
    case 2 : printf("tuesday \n");
              break;
    case 3 : printf("wednesday \n");
              break;
    case 4 : printf("thursday \n");
              break;
    case 5 : printf("friday \n");
              break;
    case 6 : printf("saturday \n");
              break;
    case 7 : printf("sunday \n");
              break;
    
    default : printf( "sry \n");
    }


    return 0;
}


  //printf("########                         \n");
  //printf("       #                      \n");
  //printf("       #                                    \n");
  //printf(" #     #                   \n");
  //printf("  #####                         ");
  //return 0;


//-----------------------------------------------------------------------

/*int x ;
printf (" enter number : ");
scanf("%d",&x);
printf("%d \n ", x>9 && x<100);
*/
//----------------------------------------------------------------------
// when even = 1
// when odd = 0

/*int x;
printf("enter a number : ");
scanf("%d", &x);
printf("%d", x % 2 == 0);*/

//--------------------------------------------------------------------------
// printf("hello world \n");
// for next line add \n
// like printf("hello world \n");
// int age = 22;
// char star = '*';
// float pi =  3.14;
/*int age = 22;
 printf("age is %d \n", age);
 char addtherate = '@';
 printf("addtherate is %c \n", addtherate);
 float pi = 3.14;
 printf( "pi is %f \n", pi);
 */
//--------------------------------------------------------------
/*  int a, b;
  printf("enter a : ");
  scanf("%d", &a);

   printf("enter b : ");
   scanf("%d", &b); */

// printf("sum is : %d", a * b);
// printf("sum is : %d", a - b);
// printf("sum is : %d", a / b);

// int sum = a + b ;
//  printf("sum is : %d", sum);
// area of square
/*    int side ;

    printf("enter side :");
    scanf("%d", &side);

    printf("area of sqaure : %d", side * side);
*/
//----------------------------------------------------------
/*   float radius ;

      printf("enter radius :");
      scanf("%f", &radius);

      printf("radius of circle: %f", 3.14 * radius * radius);
*/
// to find 3*3 in math.h file-----------------------
// int a = 2;
// int b = 3;
// int power = pow(b,a);
// printf("%d", power);
// to find remainder
// printf("%d ", 16%10);
// to put qustion print 4==4
// true = 1 flase = 0
// 4 > 3 = 1
// not equal to !=
// equal tp ==
// (4>3)&&(5<2)
// || its mean or
// a-= b;

// chapter 2 qustion 1------------------------------------
/* float num1, num2, num3, average;

printf("Enter the first number: ");
scanf("%f", &num1);

printf("Enter the second number: ");
scanf("%f", &num2);

printf("Enter the third number: ");
scanf("%f", &num3);

average = (num1 + num2 + num3 ) / 2;

printf("The average is: %f", average);
*/

// chapter 1 qustion 2----------------------------------------------
/* int a, cube;
 printf("enter the value to find the cude of value : ");
 scanf("%d", &a);
 cube=a*a*a;
 printf("cube of you value : %d", cube); */

// ch 2  qustion 2 ----------------------------------------------

/*char ch;

printf("enter a character:");
scanf("%c", &ch);

if(isdigit(ch)) {
  printf("%c is a digit.\n",ch );
} else {
  printf("%c is not a digit.\n", ch);
}*/

// chapter 1 qustion 1 --------------------------------------

/*  int a, b, sum, add;

printf("Enter the length of rectangle: ");
scanf("%d", &a);

printf("Enter the width of rectangle: ");
scanf("%d", & b);

add= a+b;
sum= 2*add;

printf("perimeter of rectangle: %d", sum);

  */
//------------------------------------------------------------
/*
int age;
printf("enter age: ");
scanf("%d", &age);

age >= 18 ? printf("You can vote \n ") : printf("you cannot vote \n");
*/
//-------------------------------------------------------------------
/*  int day;
    printf("enter day (1-7) :");
    scanf("%d", &day);

    switch (day)
    {


    case 1 : printf("monday \n");
              break;
    case 2 : printf("tuesday \n");
              break;
    case 3 : printf("wednesday \n");
              break;
    case 4 : printf("thursday \n");
              break;
    case 5 : printf("friday \n");
              break;
    case 6 : printf("saturday \n");
              break;
    case 7 : printf("sunday \n");

    default : printf( "sry \n");
    }

*/
//-------------------------------------------------------------------
// int marks;
// printf("enter you marks :");
// scanf("%d", &marks);
// marks > 30 ? printf("congratuliations you pass "): printf("better luck next time you fail");

//           int marks;
//           printf("enter the marks:");
//           scanf("%d", &marks);

//           if(marks <30 ){
//           printf(" C \n");
//           }
//           else if (marks >= 30 && marks < 70) {
//           printf(" B \n");
//           }
//           else if (marks >= 70 && marks < 90) {
//           printf("A \n");
//           }
//           else {
//           printf("A+ \n");
//           }
// for( int i =1; i<= 10000; i = i+1){
//   printf("arsh \n ");
// }
//-----------------------------------------------------------------------
// int i,n;
// printf("enter the first number :");
// scanf("%d", &i);

// printf("enter the second number :");
// scanf("%d", &n);

// while (i<=n)
// {
//   printf("%d\n ", i);
//   i++;
// }
// int i=1;
// do
// {
//   printf(" %d\n", i);
//   i++;
// } while (i<=5);

//  to make code for table ----------------------------->
// int n;
// printf("enter number:");
// scanf("%d", &n);

// for (int i=1; i<=10; i++)
// {
//   printf("%d\n",n*i);
// }
// ---------------------------------------------------------------------------------
//  int rows= 50;
//  int cols=50;

//  for ( int i=0; i < rows; i++){

//   for (int j = 0; j < cols ; j++){
//      printf("*");
//   }

//   printf("\n");
//  }
