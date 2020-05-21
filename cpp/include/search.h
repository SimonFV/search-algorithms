
#ifndef SEARCH_H
#define SEARCH_H

#include <iostream>

using namespace std;

//Sequential Search
int sequentialSearch(int e, int *list, int size){
    int i = 0;

    for(; i < size; i++){
        if(list[i] == e){
            return i;
        }
    }
    return -1;
}

//Binary Search
int binarySearch(int *list, int e, int indexMin, int indexMax){
    while (indexMax >= indexMin){
        int middle = (int)((indexMax + indexMin) / 2);
        if(list[middle] < e){
            indexMin = middle + 1;
        }
        else if(list[middle] > e){
            indexMax = middle - 1;
        }
        else{
            return middle;
        }
    }
    return -1;
}

//Interpolation Sort
int interpolationSearch(int *list, int e, int indexMin, int indexMax){
    while (indexMax >= indexMin){

        int middle = indexMin + ((e-list[indexMin]) * (indexMax-indexMin)) / 
        (list[indexMax]-list[indexMin] + 1);

        if(list[middle] < e){
            indexMin = middle + 1;
        }
        else if(list[middle] > e){
            indexMax = middle - 1;
        }
        else{
            return middle;
        }
    }
    return -1;
}

#endif