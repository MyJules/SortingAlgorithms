#pragma once

#include <iterator>
#include <ctime>
#include <iostream>

namespace srts{
    template<typename Iter>
    Iter partition(Iter begin, Iter end){
        Iter pivot = end - 1;

        int i = 0;
        for(auto it = begin; it != end; it++){
            if(*it < *pivot){
                srts::iter_swap(it, begin + i);
                i++;
            }
        }
        srts::iter_swap(begin + i,end - 1);
        return begin + i;
    }
    template<typename Iter>
    Iter random_partition(Iter begin, Iter end){
        std::srand(std::time(nullptr));
        Iter randPivot = begin + (rand() % std::distance(begin, end));

        srts::iter_swap(randPivot, end - 1);

        return partition(begin, end);
    }

    template<typename Iter>
    void quick_sort(Iter begin, Iter end){
        //until partition contains elements
        if(std::distance(begin, end) > 0){  
            //find pivot, all smaller then pivot to the left, all greater then pivot to the right
            Iter divide = random_partition(begin, end);

            //call quick sort recursively
            quick_sort(begin, divide);
            quick_sort(divide + 1, end);
        }
    }
}