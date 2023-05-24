#pragma once
#include "List.h"
List* head = nullptr;
void req_print(List* head){
    if(head == nullptr){
        return;
    }
    std::cout << 1/head->item << std::endl;
    req_print(head->next);
}
void fill_list(){
    push_back(head, 15.5);
    push_back(head, 13.2);
    push_back(head, 42.5);
    push_back(head, 12.5);
    push_back(head, 65.8);
    push_back(head, 10.2);
    push_back(head, 44.6);
}

void req_list(){
    fill_list();
    req_print(head);
}