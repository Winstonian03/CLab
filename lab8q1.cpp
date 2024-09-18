#include <stdio.h>

void fun1(double a, double b){
    printf("%lf plus %lf equals %lf", a, b, a + b);
}

void fun2(double a, double b){
    printf("%lf minus %lf equals %lf", a, b, a - b);
}

void fun3(double a, double b){
    printf("%lf multiplied by %lf equals %lf", a, b, a * b);
}

void fun4(double a, double b){
    printf("%lf divided by %lf equals %lf", a, b, a / b);
}

void (*func_ptr[4])(double a, double b);

int main(){
    int option;
    double a, b;

    func_ptr[0] = fun1;
    func_ptr[1] = fun2;
    func_ptr[2] = fun3;
    func_ptr[3] = fun4;
    while (1)
    {
        puts("\nEnter two numbers followed by a function number you want");
        puts("0 = add, 1 = subtract, 2 = multiply, 3 = divide\n");
        scanf("%lf %lf %d", &a, &b, &option);

        if((option >= 0) && (option <= 3))
        { 
            (*func_ptr[option])(a , b);
        }
        puts(" ");

    }
    

    return 0;
}