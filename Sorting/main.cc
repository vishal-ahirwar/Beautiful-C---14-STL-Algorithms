#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <numeric>
template <typename T>
void printVector(const std::vector<T> &param)
{
    printf("\n");
    for (const auto &p : param)
        std::cout << p << " ";
    printf("\n");
}
int main()
{
    srand(time(nullptr));
    std::vector<int> num(10);
    for (int &n : num)
        n = rand() % 100;
    printVector<int>(num);
    std::sort(std::begin(num),std::end(num));
    printVector<int>(num);
    // printVector<int>(num);
    std::cout << "Luck Score : " << (std::accumulate(std::begin(num), std::end(num), 0) / num.size()) << "\n";
    return 0;
}