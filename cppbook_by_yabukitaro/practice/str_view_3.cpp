#include <vector>
#include <chrono>
#include <cstring>
#include <string>
#include <string_view>
#include <iostream>





int cout_match(const std::string& seq, const std::vector<std::string>& ptrns)
{
    int cnt = 0;
    //const char* _seq = seq.c_str();
    for (const auto& ptrn : ptrns)
    {
        if (strstr(seq.c_str(), ptrn.c_str())) ++cnt;
    }
    return cnt;
}   

int count_match_sv(std::string_view seq, std::vector<std::string_view>& ptrns)
{
    int cnt = 0;
    for (const auto& ptrn : ptrns)
    {
        if (seq.find(ptrn) != std::string_view::npos) ++cnt;
    }
    return cnt;
}


int count_match_sv2(std::string_view seq, std::vector<std::string_view>& ptrns)
{
    int cnt = 0;
    for (const auto& ptrn : ptrns)
    {
        if (strstr(std::string(seq).c_str(), std::string(ptrn).c_str())) ++cnt;
    }
    return cnt;
}

int main()
{    
    const size_t n = 1000000;
    const std::vector<std::string> ptrns = {"ABCD", "EFGH", "IJKL", "MNOP", "QRST"};
    const std::string seq = "CCABCDDCEFHGABMNOPCCDABCD";
    
    int res;
    auto t1 = std::chrono::high_resolution_clock::now();
    
    for (size_t i = 0; i <n; ++i)
    {    
        res = cout_match(seq, ptrns);
    }

    auto t2 = std::chrono::high_resolution_clock::now();
    auto d12 = std::chrono::duration_cast<std::chrono::microseconds>(t2 - t1).count();
    std::cout << "c_str + strstr: " << d12 << " " << res << std::endl;
    
    std::vector<std::string_view> sv_prtns;
    for (auto& ptrn : ptrns)
    {
        sv_prtns.push_back(ptrn);
    }
   
    std::string_view seq_sv = static_cast<std::string_view>(seq);

    int _res;
    auto t3 = std::chrono::high_resolution_clock::now();
    
    for (size_t i = 0; i < n; ++i)
    {
        _res = count_match_sv(seq_sv, sv_prtns);
    }

    auto t4 = std::chrono::high_resolution_clock::now();
    auto d43 = std::chrono::duration_cast<std::chrono::microseconds>(t4 - t3).count(); 
    std::cout << "string_view + find: " << d43 << " " << _res << std::endl;
    
    int __res;
    auto t5 = std::chrono::high_resolution_clock::now();
    
    for (size_t i = 0; i < n; ++i)
    {
        __res = count_match_sv2(seq_sv, sv_prtns);
    }

    auto t6 = std::chrono::high_resolution_clock::now();
    auto d65 = std::chrono::duration_cast<std::chrono::microseconds>(t6 - t5).count(); 
    std::cout << "string_view + find -> c_str: " << d65 << " " << __res << std::endl;
}

