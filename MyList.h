//
// Created by ashle on 12/1/2021.
//

#ifndef USESTL_START_CPP_MYLIST_H
#define USESTL_START_CPP_MYLIST_H
#include "listtoolshb.h"

template<class T>
class MyList {
public:
    MyList();
    MyList(T theData);
    void insertHead(T theData);
    bool search(T &target);
    T deleteHead();
    void display();

private:
    friend class Node<T>;
    Node<T> *head;


};


#endif //USESTL_START_CPP_MYLIST_H
