//
// Created by bruno on 24/01/2020.
//

#include <vector>
#include <iostream>
#include "../include/MergingStategy.h"
#include "../include/Benchmark.h"
#include "../include/RunFinder.h"
#include "../include/Sort.h"
#include "../include/Rules.h"
int main(){

    std::vector<int> vect = {3, 4, 5, 6, 0, 1, 20, 18, 25, 21, 22, 23, 1000, 7, 8};
    Stack<int> run;

    auto merge = stdInplaceMerge<int>();
    auto runf = runFinder<int>();
    auto noMerg = merge1<typeof(merge), int>();

    runf(vect, run);
    for(auto i: run){
        std::cout << i << " ";
    }

    std::cout << '\n';

    sort(vect, runf, merge, noMerg);

//    runf(vect, run);

    for(auto i: vect){
        std::cout << i << " ";
    }


    return 0;
}