#pragma once

namespace srts{
    template<typename Iter>
    void insertion_sort(Iter begin, Iter end){
        //start with second element
        for(auto it = begin + 1; it != end; it++){
            //remember current value
            auto key = *it;
            Iter prev = it - 1;

            //while key value is smaller then the previouse one we move
            //array to the right
            while(prev != begin - 1 && key < *prev){
                *(prev + 1) = *prev;
                prev--;
            }
            //then change key value to it's position
            *(prev + 1) = key;
        }
    }
}