//
// Created by ashle on 12/1/2021.
//

#include "MyList.h"

template<class T>
MyList<T>::MyList(){
    head=nullptr;
}


template<class T>
MyList<T>::MyList(T theData){
    headInsert(head, theData);
}

template<class T>
void MyList<T>::insertHead(T theData){
    headInsert(head, theData);
}

template<class T>
bool MyList<T>::search(T &target){
    if (search(head, target)){
        return true;
    }
    return false;
}

template<class T>
T MyList<T>::deleteHead(){
    deleteFirstNode(head);
    return head->getData();
}


template<class T>
void MyList<T>::display(){
    display(head);
}
