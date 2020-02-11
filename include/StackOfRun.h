//
// Created by bruno on 28/01/2020.
//

#ifndef SORT_STACKOFRUN_H
#define SORT_STACKOFRUN_H

#include <vector>
#include <deque>
#include <list>

class StackOfRun: public std::vector<unsigned int>{ // public for debug
public:
    void push(int elem){
        this->push_back(elem);
    }

    int pop(){
        int tmp = this->back();
        this->pop_back();
        return tmp;
    }

    int lookup() const{
        return this->back();
    }

    int size() const{
        return std::vector<unsigned int>::size();
    }

    int nbOfRun() const{
        return size() - 1;
    }

    void popRun(int& begin, int& end){
        begin = pop();
        end = lookup();
    }
};

#endif //SORT_STACKOFRUN_H
