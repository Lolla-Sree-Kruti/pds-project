#include<stdio.h>
#include<math.h>

void GetRoots(double a, double b, double c){
    double D= pow(b,2)-4*a*c;
    double x=(-b+sqrt(D))/(2*a);
    double y=(-b-sqrt(D))/(2*a);
    double Re=-b/(2*a);
    double Im= sqrt(-D)/(2*a);
    if(a==0){
        double x=-c/b;
        printf("This is a Linear Equation with Root %lf !\n", x);
    }
    if(D==0 && a!=0){
    printf("The Roots are identical and are equal to %lf !\n", x);
    }
    else if(D>0 && a!=0){
    printf("The Roots are Real and are equal to %lf and %lf !\n", x, y);
    }
    else if(D<0 && a!=0){
    printf("The Roots are Complex and are equal to %lf+%lfi and %lf-%lfi !\n", Re, Im, Re, Im);
    }
}
void main(){
    char yn;
    do{
    printf("**Welcome To Quadratic Equation Solver!**\n");
    double a, b, c;
    printf("Enter coefficient of quadratic term a \n");
    scanf("%lf", &a);
    printf("Enter coefficient of linear term b \n");
    scanf("%lf", &b);
    printf("Enter coefficient of constant term c \n");
    scanf("%lf", &c);
    
    GetRoots(a,b,c);

    printf("Solve another equation? Enter y/n \n");
    scanf(" %c", &yn);
    }
    while(yn =='y');
    
    printf("Have a nice day!\n");
}