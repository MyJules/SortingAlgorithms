#pragma once

#include "swap.h"
#include <iostream>

namespace srts{
    template<typename Iter>
    void bubble_sort(Iter begin, Iter end){
        bool isSorted = false;
        //iterating over all array
        for (auto it = begin; it != end; it++){
            //compare number to every other element
            for(auto i = it; i != end; i++){
                if(*i < *it){
                    srts::iter_swap(it, i);
                }
            }
            //if array is already sorted break
            if(isSorted)
                break;
        }
    }
}