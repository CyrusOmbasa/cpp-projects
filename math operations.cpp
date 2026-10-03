#include<iostream>
#include<cmath>
const double PI=3.14159;
int main()
{
    double height;
    double radius;
    double circumfrence;
    double area;
    double SA;

    std::cout<<"enter the radius";
    std::cin>>radius;

     std::cout<<"enter height";
    std::cin>>height;
    

    circumfrence=PI*radius*2;
    std::cout<<circumfrence;

    area=PI*pow(radius,2);
    std::cout<<area;


SA=circumfrence*height+area;
std::cout<<"surface area is "<<SA;
return 0;

}