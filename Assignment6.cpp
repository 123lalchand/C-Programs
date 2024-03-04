#include<iostream>
using namespace std;
int main(){
    int num1=5,num2=2,sum,sub,mult,div,rem;
    sum = num1+num2;
    sub = num1-num2;
    mult = num1*num2;
    div = num1/num2;
    rem = num1%num2;
    cout<<"Sum of "<<num1<<" and "<<num2<<" = "<<sum;
    cout<<"\nSum of "<<num1<<" and "<<num2<<" = "<<sub;
    cout<<"\nSum of "<<num1<<" and "<<num2<<" = "<<mult;
    cout<<"\nSum of "<<num1<<" and "<<num2<<" = "<<div;
    cout<<"\nSum of "<<num1<<" and "<<num2<<" = "<<rem;
    return 0;
}