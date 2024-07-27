/*https://qiita.com/hmito/items/9b35a2438a8b8ee4b5af*/

#include <memory>

//raw pointer
void func_01(int len)
{
    int* ptr = nullptr;

    if (len > 0)
    {
        ptr = new int[len];
    }

    for (int i = 0; i < len; ++i)
    {
        ptr[i] = i * i;
    }

    delete[] ptr;
}

//smart pointer
void func_02(int len)
{
    std::unique_ptr<int[]> ptr;

    if (len > 0)
    {
        ptr = std::make_unique<int[]>(len);
    } 

    for (int i = 0; i < len; ++i)
    {
        ptr[i] = i * i;
    }
}


int main()
{
    func_01(4);
    func_01(-3);

    func_02(4000);
    func_02(-99);
}
