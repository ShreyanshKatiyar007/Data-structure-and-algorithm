#include<iostream>
using namespace std;

int main(){

    int a;
    cout<<"Enter the value of first number:"<<endl;
    cin>>a;

    int b;
    cout<<"Enter the value of second number:"<<endl;
    cin>>b;

    int op;
    cout<<"Enter the operation number you want to perform--->";
    cout<<"Addition - 1"<<endl<<"Subtraction - 2"<<endl<<"Multiplication - 3"<<endl<<"Divison - 4"<<endl<<"Module - 5"<<endl;
    cin>>op;

    switch (op){
        case 1: cout<<"Addition: "<<a+b<<endl;
        break;

        case 2: cout<<"Subtraction: "<<a-b<<endl;
        break;

        case 3: cout<<"Multiplication: "<<a*b<<endl;
        break;

        case 4: cout<<"Division: "<<a/b<<endl;
        break;

        case 5: cout<<"Modules: "<<(a%b)<<endl;
        break;

        default: cout<<"invalid input";
    }
}
