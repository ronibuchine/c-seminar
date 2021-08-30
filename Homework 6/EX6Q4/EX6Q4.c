// EX6Q4.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "list.h"
#include <malloc.h>

int main(void)
{
    List* list = CreateList();
    
    PushFront(list, 7);
    Insert(list->head, 9);
    PushBack(list, 8);
    printf("%d", Find(list, 8)->data);

    Node* currentNode = list->head;
    while (currentNode)
    {
        printf("%d", currentNode->data);
        currentNode = currentNode->next;
    }

    FreeList(list);
    
    return 0;
}


