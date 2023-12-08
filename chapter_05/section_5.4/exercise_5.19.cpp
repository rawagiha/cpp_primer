#include <iostream>
#include <string>

int main()
{
   std::string rsp;
   
   do
   {
        std::cout << "Enter 2 strings to compare:\n";
        
        std::string str1, str2;
        std::cin >> str1 >> str2;

        if (str2 < str1)
            std::cout << str2 << " < " << str1 << std::endl;
        else
            std::cout << str1 << " < " << str2 << std::endl; 


        std::cout << "Want to compare more? Enter yes or no:\n";
        
        std::cin.clear();
        std::cin.ignore();

        std::cin >> rsp;
   }
   while(!rsp.empty() && (rsp[0] != 'n' && rsp[0] != 'N'));   
}
