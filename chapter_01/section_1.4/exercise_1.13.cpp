#include <iostream>

int main()
{
    int sum = 0;
    for (int i = 50; i <= 100; ++i)
    {
        sum += i;
    }

    std::cout << "Sum of 50 to 100 (inclusive) is: "
              << sum << std::endl;

   for (int i = 10; i >= 0; --i)
   {
       std::cout << "Now it is " << i << std::endl;
   }
}
