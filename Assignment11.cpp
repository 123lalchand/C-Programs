#include<iostream>
using namespace std;
int main(){
    int num1=2,num2=4,c;
    cout << "\n num1 = "<<num1<<" num2 = "<<num2;
     c = num1;
    num1=num2;
    num2=c;
    cout << "\n num1 = "<<num1<<" num2 = "<<num2;
    return 0;
}