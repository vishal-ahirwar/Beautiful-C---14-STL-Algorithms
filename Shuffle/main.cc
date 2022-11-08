#include <iostream>
#include <vector>
#include <random>
template <typename T>
void printVector(const std::vector<T> &vec)
{
    for (const auto &v : vec)
        std::cout << v << " ,";
    printf("\n");
};

int main()
{
    std::vector<int> numbers{1, 2, 3, 4, 5, 6, 7, 8, 9};
    std::random_device random_device{};
    std::mt19937 generator(random_device());
    std::shuffle(std::begin(numbers), std::end(numbers), generator);
    printVector<int>(numbers);
    std::partial_sort(std::begin(numbers), std::find(std::begin(numbers), std::end(numbers), 8), std::end(numbers));
    printVector<int>(numbers);
};
