#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <numeric>
template <typename T>
void printVector(const std::vector<T> &param)
{
    printf("\n{");
    for (const auto &p : param)
        std::cout << p << " ";
    printf("}\n");
};
bool isEqual(const std::string &str1, const std::string &str2)
{
    if (str1.length() == str2.length())
    {
        for (size_t i = 0; i < str1.size(); ++i)
        {
            if (str1[i] != std::tolower(str2[i]))
                return false;
        };
    }
    else
    {
        return false;
    };
    return true;
};

int main()
{
    {

    // srand(time(nullptr));
    // std::vector<int> num(10);
    // for (int &n : num)
    //     n = rand() % 100;
    // printVector<int>(num);
    // std::sort(std::begin(num),std::end(num));
    // printVector<int>(num);
    // // printVector<int>(num);
    // std::cout << "Luck Score : " << (std::accumulate(std::begin(num), std::end(num), 0) / num.size()) << "\n";
    }
    std::vector<std::string> names{};
    std::cout << "Enter name & to exit program type quit:\n";
    while (true)
    {
        std::string temp{};
        std::getline(std::cin, temp);
        if (isEqual("quit", temp))
            break;
        names.push_back(temp);
    };
    printVector<std::string>(names);
    std::sort(std::begin(names), std::end(names));
    printVector<std::string>(names);
    return 0;
}