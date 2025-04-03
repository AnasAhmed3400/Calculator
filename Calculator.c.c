#include<stdio.h>
#include<stdlib.h>
#include<math.h>

void addition();
void subtraction();
void multiplication();
void division();
void square();
void power();
void cube();
void squareRoot();
void COS();
void SIN();
void TAN();
void Modulus();
void Factorial();
void QuadraticEquation();
void Log();

int main()
{
    char var,o;
    int num;
    
    printf("\t\t************Welcome to my scientific Calculator************\t\t\n");
    printf(" \n \n If you want to open this calculator! press 'o' button. \n\n");
    scanf("%c",&var);
    if(var == 'o')
    {
        printf("\n Thanks for turn on this calculator !! \n \n \n");
     
     
     printf("1.Addition \n");
     printf("2.subttraction \n");
     printf("3.multiplication \n");
     printf("4.division \n");
     printf("5.square \n");
     printf("6.power \n");
     printf("7.cube \n");
     printf("8.squareRoot \n");
     printf("9.SIN() \n");
     printf("10.COS() \n");
     printf("11.TAN() \n");
     printf("12.Modulus \n");
     printf("13.Factorial \n");
     printf("14.QuadraticEquation");
     printf("15.Log \n");


    }
     
     while(1)
     {
         int choice;
         printf(" \n \n Choose the function you want to perform :");
         scanf("%d",&choice);
         
         switch(choice){
             case 1:
             addition();
             break;
             case 2:
             subtraction();
             break;
             case 3:
             multiplication();
             break;
             case 4:
             division();
             break;
             case 5:
             square();
             break;
             case 6:
             power();
             break;
             case 7:
             cube();
             break;
             case 8:
             squareRoot();
             break;
             case 9:
             SIN();
             break;
             case 10:
             COS();
             break;
             case 11:
             TAN();
             break;
             case 12:
             Modulus();
             break;
             case 13:
             Factorial();
             break;
             case 14:
             QuadraticEquation();
             case 15:
             Log();
             
             break;
            
             
             default:
             printf("!! KINDLY CHOOSE OPERATOR FROM THE ABOVE  !!");
             
             
         }
     }
     return 0;
    
     }
     
     void addition(){
         
         int a,b,sum;
         printf("Enter first number :");
         scanf("%d", &a);
         printf("Enter second number :");
         scanf("%d", &b);
         sum = a+b;
         printf("sum = %d",sum);
     }
     
     void subtraction(){
         
         int a,b,Answer;
         printf("Enter first number :");
         scanf("%d", &a);
         printf("Enter second number :");
         scanf("%d", &b);
         Answer = a-b;
         printf("Answer = %d",Answer);
     }
     
     void multiplication(){
         
         int a,b,product;
         printf("Enter first number :");
         scanf("%d", &a);
         printf("Enter second number :");
         scanf("%d", &b);
         product = a*b;
         printf("product = %d",product);
     }
     
     void division(){
         
         int a,b,Answer;
         printf("Enter first number :");
         scanf("%d", &a);
         printf("Enter second number :");
         scanf("%d", &b);
         Answer = a/b;
         printf("Answer = %d",Answer);
     }
     
     void square(){
         
         int a,b,square;
         printf("Enter a number :");
         scanf("%d", &a);
         square = a*a;
         printf("square of %d = %d",a,square);
     }
     
     
     void power(){
         
         double base, exponent;

    printf("Enter the base: ");
    scanf("%lf", &base);
    
    printf("Enter the exponent: ");
    scanf("%lf", &exponent);

    double result = pow(base, exponent);

    printf("Result = %f\n", result);
     }
     
     void cube(){
         
         double b;
         printf("Enter a number :");
         scanf("%lf", &b);
         double res=pow(b,3);
         printf("cube of %.2lf = %.2lf ",b,res);
     } 
     
     void squareRoot(){
         
         float a;
         printf("Enter a number");
         scanf("%f", &a);
         float squareRoot ;
         squareRoot = sqrt(a);
         printf("%f",squareRoot);
     }
     
     void SIN(){
         
         double angleInDegrees;

    printf("Enter an angle in degrees: ");
    scanf("%lf", &angleInDegrees);

    double angleInRadians = angleInDegrees * (M_PI / 180.0);

    double sineValue = sin(angleInRadians);

    printf("Sine of %.2lf degrees is %.2lf\n", angleInDegrees, sineValue);
    printf(" \n The given answer is in Radians");


     }
     
     void COS(){

    double angleInDegrees;

    printf("Enter an angle in degrees: ");
    scanf("%lf", &angleInDegrees);

    double angleInRadians = angleInDegrees * (M_PI / 180.0);

    double sineValue = sin(angleInRadians);

    printf("Sine of %.2lf degrees is %.2lf\n", angleInDegrees, sineValue);

    printf(" \n The given answer is in Radians");

}
     
     void TAN(){
         
    double angleInDegrees;

    printf("Enter an angle in degrees: ");
    scanf("%lf", &angleInDegrees);

    double angleInRadians = angleInDegrees * (M_PI / 180.0);

    double tangentValue = tan(angleInRadians);

    printf("Tangent of %.2lf degrees is %.2lf\n", angleInDegrees, tangentValue);
    printf(" \n The given answer is in Radians");

     }
     
     void Modulus(){
         
         int a,b,Modulus;
         printf("Enter first number :");
         scanf("%d", &a);
         printf("Enter second number :");
         scanf("%d", &b);
         Modulus = a%b;
         printf("Answer = %d",Modulus);
     }
     
     void Factorial(){
         
         int i,n,Factorial = 1;
        
         printf("Enter a number :");
          scanf("%d", &n);
         for(i=1;i<=n;i++){
             
             Factorial = Factorial*i;
         }
         printf("Factorial = %d \n", Factorial);
     }
     
     void QuadraticEquation(){
         
          int num;
    printf("\t \t \t which formula do you want to use \t \t \t \n \n");
    printf("\t \t \t PRESS 1 for +ve formula or PRESS 0 for -ve formula : \t \t \t");
    scanf("%d",&num);
    if(num == 1){
    double a,b,c;
 
 printf("Enter the coefficient of a ");
 scanf("%lf",&a);
 printf("Enter the coefficient of b");
 scanf("%lf",&b);
 printf("Enter the coefficient of c ");
 scanf("%lf",&c);
 double x1 = (-b + sqrt(b * b - 4 * a * c)) / (2 * a);
        printf("%.2lf \n",x1);
    }
    
    else if(num ==0){
    double a,b,c;
        printf("Enter the coefficient of a ");
 scanf("%lf",&a);
 printf("Enter the coefficient of b ");
 scanf("%lf",&b);
 printf("Enter the coefficient of c ");
 scanf("%lf",&c);
    
  double x2 = (-b + sqrt(b * b - 4 * a * c)) / (2 * a);
  printf("%.2lf \n",x2);
    }
    else{
    printf(" \n \t \t \t Please enter the correct operator  \t \t \t");
    }
    
     }
    
    void Log(){
    
    double value, result;

    printf("Enter a positive value: ");
    scanf("%lf", &value);

    if (value <= 0) {
        printf("Error: The input value must be positive.\n");

    result = log10(value);

    printf("The base-10 logarithm of %.2f is %.4f\n", value, result);

     }
     
    }
     
     
     
     
     
