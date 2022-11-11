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
    // std::fill(std::begin(n), std::end(n), 5);
    // print<int>(n);
    // std::fill_n(std::begin(n), n.size() / 2, 0);
    // print<int>(n);
    std::generate(std::begin(n), std::end(n), []()
                  { return rand() % 10; });
    // print<int>(n);

    // std::sort(std::begin(n), std::find(std::begin(n), std::end(n), 1));
    // print<int>(n);
    //     std::sort(std::begin(n), std::end(n));
    //     std::vector<int> n_copy(n.size());
    //     std::unique_copy(std::begin(n), std::end(n), std::begin(n_copy));
    //    auto returnValues= std::unique(std::begin(n),std::end(n));
    //     print<int>(n);
    //     print<int>(n_copy);
    std::string text{"hello, world!"};
    std::cout << text << "\n";
    std::reverse(std::begin(text), std::end(text));
    std::cout << text << "\n";

    return 0;
}