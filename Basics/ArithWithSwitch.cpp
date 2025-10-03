#include<iostream>
using namespace std;
int main(){
    int a,b;
    char op;
    cout<<"Enter two numbers:";
    cin>>a>>op>>b;
    switch(op){
        case '+':cout<<"Sum of two numbers:"<<a+b;
                break;
        case '-':cout<<"Subtraction of numbers:"<<a-b;
                break;
        case '*':cout<<"Multiplication of numbers:"<<a*b;
                break;
        case '/':cout<<"Division of two numbers:"<<a/b;
                break;
        case '%':cout<<"Modulo division of two numbers:"<<a%b;
                break;
        default:cout<<"Enter valid operator.";
               break;
    }

}
