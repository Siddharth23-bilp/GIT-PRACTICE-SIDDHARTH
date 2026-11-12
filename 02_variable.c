#include<stdio.h> // once in a file we mention a library we dont need to use it again, same for int main
int main() {// we can also use, void main, than we dont write ,return 0,
    int age = 19;
    printf("age is: %d \n",age);//if we dont apply \n the % also print
    float pi = 3.14;
    printf("value of pi is: %f \n",pi);
    char star = '*'; // we use "" or '' while using char function
    printf("star is : %c \n", star);
    return 0;
}
// the \n is used to make the result to print in new line 
// the %d is use for int , the %c is used for char , the %f is used for float 