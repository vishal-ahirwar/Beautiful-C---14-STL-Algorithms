#include <iostream>
#include <vector>
#include <algorithm>
template <typename ZT>
void print(const std::vector<ZT> &v)
{
    printf("\n");
    for (const ZT &i : v)
        std::cout << i << " ";
    printf("\n");
};

int main(void)
{
    std::vector<int> n(100);
    std::fill(std::begin(n), std::end(n), 5);
    print<int>(n);
    std::fill_n(std::begin(n), n.size() / 2, 0);
    print<int>(n);
    std::generate(std::begin(n), std::end(n), []()
                  { return rand() % 100; });
    print<int>(n);

    std::sort(std::begin(n), std::find(std::begin(n), std::end(n), 1));
    print<int>(n);
    return 0;
}