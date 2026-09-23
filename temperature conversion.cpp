#include<iostream>
int main()
{
    double temp;
    char unit;
    std::cout<<"K=kelvin\n";
    std::cout<<"C=celcius\n";
    std::cout<<"what temperature unit would you like to convert to";
    std::cin>>unit;

    if(unit=='K'){
        std::cout<<"enter temperature in celcius";
        std::cin>>temp;
        temp=temp+273;
        std::cout<<"temperature is"<<temp<<"K\n";
    }
    else if(unit=='C'){
        std::cout<<"enter temperature in kelvin";
        std::cin>>temp;
        temp=temp-273;
        std::cout<<"temperature is"<<temp<<"C\n";
    }
    return 0;


}