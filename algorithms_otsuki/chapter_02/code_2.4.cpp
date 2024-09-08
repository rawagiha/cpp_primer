#include <algorithm>
#include <iostream>
#include <vector>
#include <cmath>
#include <limits>
#include <random>

const double lim = std::numeric_limits<double>::max();


std::random_device engine;
std::uniform_int_distribution<int> dist {1, 10000};
void fill_vector(std::vector<int>& v)
{
    auto gen = [&](){ return dist(engine); };
    std::generate(v.begin(), v.end(), gen);
}


double cals_dist(
    const double x1,
    const double y1,
    const double x2,
    const double y2
)
{
    return std::sqrt((x1 - x2) * (x1 - x2) + (y1 - y2) * (y1 - y2));
}

int main()
{
    int n;
    bool valid = false;
    do
    {
        std::cin >> n;
        if (std::cin) valid = true;
        else
        {
            std::cout << "invalid input" << std::endl;
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        }
    } while (!valid);
    
    std::vector<int> x(n), y(n);
    
    fill_vector(x);
    fill_vector(y);
    
    double min_dist = lim;
    double dist_ij = -1;
    int _i_ = -1, _j_ = -1, cnt = 0;
    for (int i = 0; i < n; ++i)
    {
        for (int j = i + 1; j < n; ++j)
        {
            dist_ij = cals_dist(x[i], y[i], x[j], y[j]);
            if (dist_ij < min_dist)
            {
                min_dist = dist_ij;
                _i_ = i;
                _j_ = j;
            }

            ++cnt;
        }
    }

    std::cout << "(" << x[_i_] << "," << y[_i_] 
              << "),  (" << x[_j_] << "," << y[_j_] << ")" << std::endl;
    std::cout << min_dist << std::endl;
}
