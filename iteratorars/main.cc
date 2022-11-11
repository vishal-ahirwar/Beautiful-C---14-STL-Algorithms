#include <iostream>
#include <algorithm>
#include <iterator>
#include <vector>
#include <string>
void print(std::vector<int> &n)
{
    for (auto N : n)
        std::cout << N << " ";
    puts("\n");
};
int main()
{

    std::vector<int> n{};
    std::generate_n(std::back_inserter(n),10,[](){return 1;});
    print(n);
    return 0;
};
/**
 *     // std::vector<std::string> names{};
    // puts("enter 5 names :\n");
    // std::generate_n(std::back_inserter(names), 5, []()
    //                 {std::string name{};std::getline(std::cin,name);return name; });
    // system("cls");
    // puts("data enterd by you:\n");
    // for (const std::string &name : names)
    //     std::cout << name << " ";
    // puts("\n");
    // getchar();
*/