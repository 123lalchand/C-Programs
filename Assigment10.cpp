#include<iostream>
using namespace std;
int main(){
    int lenght=2,width=4;
    float area,perimeter;
    area = lenght*width;
    perimeter=2*(lenght+width);
    cout << "\nLength ="<<lenght<<" and width = "<<width<<" area of rectangle= "<<area;
    cout << "\nLength ="<<lenght<<" and width = "<<width<<" perimeter of rectangle= "<<perimeter;
    return 0;
}