#include <vector>
#include <chrono>
#include <string>
#include <string_view>
#include <iostream>





struct ReadOnly
{
    std::string_view seq;

    ReadOnly(const std::string& str)
    {
        seq = static_cast<std::string_view>(str);
    }
};

void prep_readonly(std::vector<ReadOnly>& ro, const std::vector<std::string>& inputs, const size_t n)
{
    for (size_t i = 0; i < n; ++i)
    {
        for (const auto& str : inputs)
        {
            ro.emplace_back(str);
        }    
    }   
}


int main()
{    
    const size_t n = 10000;
    const std::vector<std::string> inputs = {"ABCD", "EFGH", "IJKL", "MNOP", "QRST"};

    std::vector<ReadOnly> output;
    auto t1 = std::chrono::high_resolution_clock::now();
    prep_readonly(output, inputs, n);
    
    char y = std::string{output[6].seq.substr(0, 1)}[0];
    std::cout << y << std::endl; 
    auto t2 = std::chrono::high_resolution_clock::now();
    auto d12 = std::chrono::duration_cast<std::chrono::microseconds>(t2 - t1).count();
    std::cout << "str vec push: " << d12 << std::endl;

}
