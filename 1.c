// Q1. Write a c program to take input of two numbers, find their sum, product and sum of the squares using function.

#include<stdio.h>
int sum(int, int);
int product(int, int);
int sum_of_squares(int, int);
void main() {
    int a, b;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    sum(a, b);
    printf("Sum of two numbers is %d\n", sum(a, b));
    product(a, b);
    printf("product of two numbers is %d\n", product(a, b));
    sum_of_squares(a, b);
    printf("sum_of_squares of two numbers is %d\n", sum_of_squares(a, b));

}
int sum(int a, int b){
    int sum;
    sum = a + b;
    return sum;
}
int product(int a, int b){
    int product;
    product = a * b;
    return product;
}
int sum_of_squares(int a, int b){
    int sum_of_squares;
    sum_of_squares = (a*a) + (b*b);
    return sum_of_squares;
}