#pragma once

#include <iterator>
#include <vector>

namespace srts{
    template<typename Iter>
    void merge(Iter begin, Iter median, Iter end){
        std::vector<typename Iter::value_type> temp;
        temp.reserve(std::distance(begin, end));

        Iter left = begin;
        Iter right = median;
        while(left != median && right != end){
            if(*right < *left){
                temp.emplace_back(*right++);
            }else{
                temp.emplace_back(*left++);
            }
        }
        temp.insert(temp.end(), left, median);
        temp.insert(temp.end(), right, end);
        std::move(temp.begin(), temp.end(), begin);   
    }

    template<typename Iter>
    void merge_sort(Iter begin, Iter end){
        //if merge don't contain element return
        if(std::distance(begin, end) <= 1) return;
        //find mediane of array
        Iter median = begin + std::distance(begin, end)/2;
        merge_sort(begin, median);
        merge_sort(median, end);
        merge(begin, median, end);
    }   
}