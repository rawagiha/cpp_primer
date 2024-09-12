#include <vector>
#include <chrono>
#include <string>
#include <string_view>
#include <iostream>


struct SubSeq
{
    std::string _s;    
};

struct SubSeqV
{
    std::string_view _s;
};

SubSeq str_by_ref_0(const std::string& str)
{
    SubSeq subs;
    str.size();
    subs._s = str.substr(6, 10);
    
    return subs;
}

SubSeqV str_by_view_0(std::string_view str_v)
{
    SubSeqV subs;
    str_v.size();
    subs._s = str_v.substr(6, 10);

    return subs;
}

int main()
{    
    const size_t n = 10000;
    const std::string seq = "IthinkThisIsAPenButIamAStone.";

    std::vector<std::string> s_vec;
    s_vec.reserve(n);
    auto t1 = std::chrono::high_resolution_clock::now();
    for (size_t i = 0; i < n; ++i)
    {
        s_vec.push_back(seq);
    }
    auto t2 = std::chrono::high_resolution_clock::now();
    auto d12 = std::chrono::duration_cast<std::chrono::microseconds>(t2 - t1).count();
    std::cout << "str vec push: " << d12 << std::endl;

    std::vector<std::string_view> sv_vec;
    sv_vec.reserve(n);
    auto t3 = std::chrono::high_resolution_clock::now();
    for (size_t i = 0; i < n; ++i)
    {
        sv_vec.push_back(seq);
    }
    auto t4 = std::chrono::high_resolution_clock::now();
    auto d34 = std::chrono::duration_cast<std::chrono::microseconds>(t4 - t3).count();
    std::cout << "str_view vec push: " << d34 << std::endl;
     
    std::vector<SubSeq> subseq_vec;
    subseq_vec.reserve(n);
    auto t5 = std::chrono::high_resolution_clock::now();
    for (size_t i = 0; i < n; ++i)
    {
        subseq_vec.push_back(str_by_ref_0(seq));
    }
    auto t6 = std::chrono::high_resolution_clock::now();
    auto d56 = std::chrono::duration_cast<std::chrono::microseconds>(t6 - t5).count();
    std::cout << "str by ref: " << d56 << std::endl;
    std::cout << subseq_vec[5]._s << std::endl;
    
    std::vector<SubSeqV> subseq_v_vec;
    subseq_v_vec.reserve(n);
    auto t7 = std::chrono::high_resolution_clock::now();
    for (size_t i = 0; i < n; ++i)
    {
        subseq_v_vec.push_back(str_by_view_0(seq));
    }
    auto t8 = std::chrono::high_resolution_clock::now();
    auto d87 = std::chrono::duration_cast<std::chrono::microseconds>(t8 - t7).count();
    std::cout << "str by view: " << d87 << std::endl;
    std::cout << subseq_v_vec[5]._s << std::endl;
}
