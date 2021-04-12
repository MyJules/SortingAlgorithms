#include <iostream>
#include <vector>
#include <srts.h>

int main(int, char**) {
    std::vector<int> toSort{3, 5, 1, 29, 2, 6, 12};

    srts::bubble_sort(toSort.begin(), toSort.end() - 1);

    for(auto &i : toSort)
        std::cout << i << " ";
    std::cout << std::endl;

    return 0;
}
