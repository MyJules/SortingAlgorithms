#pragma once

#include "swap.h"

namespace srts{
    template<typename Iter>
    void bubble_sort(Iter begin, Iter end){
        srts::iter_swap(begin, end);
    }
}