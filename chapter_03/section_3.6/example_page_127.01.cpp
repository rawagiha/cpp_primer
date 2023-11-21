#include <iostream>

void show(int arr[3][4])
{
    for (size_t i = 0; i != 3; ++i)
    {
        for (size_t j = 0; j != 4; ++j)
        {
            std::cout << "(" << i << ", " << j << ") is " << arr[i][j] << std::endl;  
        }
    }
}

int main()
{
    int ia[3][4] =
    {
      {0, 1, 2, 3},
      {4, 4, 6, 7},
      {8, 9, 10, 11}  
    };

    int ib[3][4] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11};

    int ic[3][4] = {{0}, {4}, {8}};

    int id[3][4] = {0, 3, 6, 9};

    show(ia); 
    show(ib);
    show(ic);
    show(id);
}
