#include<iostream>
using namespace std;
int main(){
    int radius=2;
    float area,perimeter;
    const float pi = 3.14;
    area = pi*radius*radius;
    perimeter=2*pi*radius;
    cout << "\nradius "<<radius<<" area of circle= "<<area;
    cout << "\nradius "<<radius<<" perimeter of circle"<<perimeter;
    return 0;
}