add_library(srts STATIC
srts.h srts.cpp)

add_library(sorting STATIC
sorting/bubble_sort.h sorting/bubble_sort.cpp
sorting/quick_sort.h
sorting/insertion_sort.h
sorting/selection_sort.h
sorting/merge_sort.h
sorting/swap.h)