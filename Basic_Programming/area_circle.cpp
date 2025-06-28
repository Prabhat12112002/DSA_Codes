#include<iostream>
using namespace std;

float area_circle(int radius){
    float pi = 3.1416;
    float area = pi*radius*radius;
    
    return area;
}

void print_area(float radius){
    cout<<"Enter the radius of circle: ";
    cin>>radius;

    float area = area_circle(radius);
    cout<<"Area of circle is: "<<area;

}

int main(){
    
    float radius;
    print_area(radius);

    return 0;
}