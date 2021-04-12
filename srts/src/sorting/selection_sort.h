#pragma once

namespace srts{
    template<typename Iter>
    void selection_sort(Iter begin, Iter end){
        //iterate through array
        for(auto it = begin; it != end; it++){
            for(auto i = it; i != end; i++){
                //if less value found place it to the beginig of array
                if(*it != std::min(*it, *i)){
                    srts::iter_swap(it, i);
                }
            }
        }
    }
}