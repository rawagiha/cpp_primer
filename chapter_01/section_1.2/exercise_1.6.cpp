#include <iostream>

int main()
{
    std::cout << "Enter two numbers:" << std::endl;
    int v1 = 0, v2 = 0;
    std::cin >> v1 >> v2;
    std::cout << "The sum of " << v1; //statement ends here
              
              // << " and " << v2; (no left-hand operand for operator <<)
    //add osstream obj as left-hand operand and remove ;
    std::cout << " and " << v2          
              << " is " << v1 + v2 << std::endl;
    
    return 0;
}
