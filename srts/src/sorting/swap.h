#pragma once

#include <utility>

namespace srts{
    template<typename T>
    void swap(T &a, T &b){
        T tmp(std::move(a));
        a = std::move(b);
        b = std::move(tmp);
    }
    
    template<typename Iter1, typename Iter2>
    void iter_swap(Iter1 a, Iter2 b){
        srts::swap(*a, *b);
    }
}