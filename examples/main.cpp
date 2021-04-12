#include <iostream>
#include <vector>
#include <srts.h>
#include <algorithm>

int main(int, char**) {
    std::vector<int> toSort{3, 5, 1, 29, 2, 6, 12, 23, 1, 4, 15, 51, 230, 12, 3, 534, 12, 58};
    int a[] = {3, 5, 1, 29, 2, 6, 12, 23, 1, 4, 15, 51, 230, 12, 3, 534, 12, 58};

    //srts::bubble_sort(toSort.begin(), toSort.end());
    //srts::quick_sort(toSort.begin(), toSort.end());
    srts::insertion_sort(toSort.begin(), toSort.end());
    
    for(auto s : toSort)
        std::cout << s << " ";
    std::cout << std::endl; 

    return 0;
}