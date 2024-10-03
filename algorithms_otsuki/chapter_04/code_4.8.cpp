#include <iostream>
#include <vector>


long long fibo(int n, std::vector<long long>& memo)
{
    if (memo[n] != -1) return memo[n];
    return memo[n] = fibo(n - 1, memo) + fibo(n - 2, memo);
}

int main()
{ 
    std::vector<long long> memo;
    memo.assign(50, -1);
    memo[0] = 0;
    memo[1] = 1;
    
    fibo(49, memo);

    for (int n = 0; n < 50; ++n)
    {
        std::cout << "fibo " << n << " = " << memo[n] << std::endl;
    }
 }

