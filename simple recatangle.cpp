#include<iostream>
int main()
{
   int rows;
   int columns;
   int symbol;

   std::cout<<"enter number of rows";
   std::cin>>rows;

   std::cout<<"enter number of columns";
   std::cin>>columns;

   std::cout<<"enter symbol";
   std::cin>>symbol;

   for(int i=1;i<=rows;i++){
    for(int j=1;j<=columns;j++){
        std::cout<<symbol;
    }
    std::cout<<'\n';
   }
}



