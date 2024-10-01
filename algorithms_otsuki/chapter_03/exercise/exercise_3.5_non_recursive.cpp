#include <iostream>
#include <vector>
#include <random>
#include <algorithm>

/*taken from https://github.com/drken1215/book_algorithm_solution/blob/master/solutions/chap03.md#35-abc-081-b---shift-only*/


std::random_device engine;
std::uniform_int_distribution<int> dist {1, 10000};
void fill_vector(std::vector<int>& v)
{
    auto gen = [&](){ return dist(engine); };
    std::generate(v.begin(), v.end(), gen);
}


void show(const std::vector<int>& v)
{
    for (auto e : v)
        std::cout << e << ",";
    std::cout << std::endl;
}


int how_many_times(int n)
{
    int exp = 0;
    while (!(n % 2)) n /= 2, ++exp;

    return exp;
}


int main()
{
    int n;

    std::cin >> n;
    
    if ((!std::cin) && (n > 1))
    {
        std::cout << "invalid input" << std::endl;
        return 1;
    }

    std::vector<int> a(n);
    fill_vector(a);
    show(a);
     
    int result = 100000;
    for (int i : a)
    {
        result = std::min(result, how_many_times(i));
    }
    
    std::cout << result << std::endl;

    return 0;
}
