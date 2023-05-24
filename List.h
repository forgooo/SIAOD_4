#pragma once
#include<iostream>

struct List{
    double item;
    List* next;
};

void push_back(List*& head, double item){
    List* newList = new List;
    newList->item = item;
    newList->next = nullptr;

    if(head == nullptr){
        head = newList;
    } else {
        List* current = head;
        while(current->next != nullptr)
            current=current->next;
        current->next = newList;
    }
}