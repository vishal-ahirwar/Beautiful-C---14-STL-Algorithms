// copyright@vishal Ahirwar.all rights reserved.
#include <iostream>
#include <vector>
#include <time.h>
#include <algorithm>
#include <string>
bool isOdd(const uint64_t &value)
{
    return value % 2 != 0;
};
bool isEven(const uint64_t &value)
{
    return value % 2 == 0;
};
template <typename T>
void printVector(const T &t)
{
    printf("{");
    for (auto c : t)
    {
        std::cout << c << " ";
    };
    printf("}\n");
}
int main()
{
    srand(time(NULL));
    std::vector<uint64_t> inputs{};
    for (int i = 0; i < 100; ++i)
    {
        inputs.push_back(rand() % 10 + 1);
    };
    // // for(uint64_t i:inputs)std::cout<<i<<" ";
    // printf("\n");
    // std::cout << "sizeof inputs vector : " << inputs.size() << "\n";
    // std::cout << "Which Number you want to count??";
    // uint64_t in{};
    // std::cin >> in;
    // std::cout << "Counts of " << in << " : ";
    // std::cout << std::count(std::begin(inputs), std::end(inputs), in) << "\n";
    // uint64_t odd{(uint64_t)std::count_if(inputs.begin(),inputs.end(),isOdd)};
    // std::cout<<"oddds in inputs vector : "<<odd<<"\n";
    // uint64_t even{static_cast<uint64_t>(std::count_if(std::begin(inputs),std::end(inputs),isEven))};
    // std::cout<<"even in inputs vector : "<<even<<"\n";
    std::vector<std::string> words{};
    std::string line{"hello do you know c++ or you are python lover???"};
    auto it = std::begin(line);
    while (it != std::end(line))
    {
        auto begin_itr = it;
        it = std::find(it, std::end(line), ' ');
        if (it != std::end(line))
            *it = ',';
        words.push_back(line.substr(begin_itr - std::begin(line), (it - begin_itr)));
    };
    printVector(words);
    words.clear();
    std::cout << line << "\n";
    it = std::begin(line);
    while (it != std::end(line))
    {
        auto begin_itr = it;
        it = std::find(it, std::end(line), ',');
        if (it != std::end(line))
            *it = ' ';
        words.push_back(line.substr(begin_itr - std::begin(line), it - begin_itr));
    };
    printVector(words);
    return 0;
};
