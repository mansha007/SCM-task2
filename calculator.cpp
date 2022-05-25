#include<iostream>
using namespace std;

int addition(int num1 , int num2){
    return num1+num2;
}
int subtract(int num1 , int num2){
    return num1-num2;
}
int multiply(int num1 , int num2){
    return num1*num2;
}
int divide( float num1 , float num2){
    return num1/num2;
}
int addition(int num1 , int num2 , int num3){
    return num1+num2+num3;
}
int subtract(int num1 , int num2 , int num3){
    return num1-num2-num3;
}
int multiply(int num1 , int num2 , int num3){
    return num1*num2*num3;
}
int divide( float num1 , float num2 , float num3){
    return (num1/num2)/num3;    
}

int main(){
    int a , b , oper , c; 
    cout<<"1 for add , 2 for subtract , 3 for multiply , 4 for divide"<<endl;
    cin>>a>>b>>c>>oper;
    switch (oper)
    {
    case 1:
        cout<<addition(a,b,c);
        break;
    case 2:
        cout<<subtract(a,c);
        break;
    case 3:
        cout<<multiply(a,b,c);
        break;
    case 4:
        cout<<divide(a,b);
        break;
    }

}