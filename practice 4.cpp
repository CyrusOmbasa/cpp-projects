#include<iostream>
int main()
{
    char op;
    double x;
    double y;
    double result;
    std::cout<<"enter either (+,-,*,/)";
    std::cin>>op;

    std::cout<<"enter x";
    std::cin>>x;

     std::cout<<"enter y";
    std::cin>>y;

    switch(op)
    {
        case '+':
        result=x+y;
        std::cout<<result;
        break;

         case '-':
        result=x-y;
        std::cout<<result;
        break;

         case '*':
        result=x*y;
        std::cout<<result;
        break;

         case '/':
        result=x/y;
        std::cout<<result;
        break;


    }
    return 0;
}