#include <iostream>
#include <vector>

long long tribo(int n, std::vector<long long>& memo)
{
    if (memo[n] != -1) return memo[n];

    return memo[n] = tribo(n - 1, memo) + tribo(n - 2, memo) + tribo(n - 3, memo);
}

int main()
{
    int n;
    std::cin >> n;

    std::vector<long long> memo(n);
    memo.assign(n, -1);

    memo[0] = 0;
    memo[1] = 0;
    memo[2] = 1;

    std::cout << tribo(n - 1, memo) << std::endl;
}
