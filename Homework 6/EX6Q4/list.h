#pragma once
#include <stdio.h>

/**
 * @brief general data type which belongs in a linked list
*/
typedef int ListDataType;

/**
 * @brief a struct composed of a pointer to the next node and the data that it holds
*/
typedef struct Node_t
{
	struct Node_t *next;
	ListDataType data;
} Node;


/**
 * @brief a struct which contains a pointer to the head of a linked list
*/
typedef struct List_t
{
	Node *head;
} List;

/**
 * @brief creates a list with a head initialized to NULL
 * @return the list it just created
*/
List *CreateList();

/**
 * @brief frees all the allocated memory used for the list
 * @param list the linked list to be freed
*/
void FreeList(List *list);

/**
 * @brief iterates through the list and returns the number of nodes in the list
 * @param list the linked list you wish to know the size of
 * @return the size of the linked list
*/
size_t GetListSize(List *list);

/**
 * @brief finds the head node of the list and returns it if it exists
 * @param list the linked list
 * @return the head node, and NULL if the list isn't initialized
*/
Node* GetListHead(List* list);

/**
 * @brief given a node, will return the next node in the list if it exists
 * @param currentNode the current node
 * @return a pointer to the node, NULL if it doesn't exists
*/
Node* GetNextNode(Node* currentNode);

/**
 * @brief gets the value stored in a node
 * @param node the node
 * @return the value stored inside the node, NULL if the node doesn't exist
*/
ListDataType GetValue(Node* node);

/**
 * @brief inserts a node after another node in a linked ilist
 * @param after the node we are inserting after
 * @param newValue the value which will be in the new node
 * @return the node that was just created
*/
Node* Insert(Node* after, ListDataType newValue);

/**
 * @brief pushes a new node onto the front of the list and reassigns the head
 * @param list linked list where we are inserting
 * @param newValue the value of the node we are constructing
 * @return a pointer to the node we've inserted, i.e. the head of the list
*/
Node* PushFront(List* list, ListDataType newValue);

/**
 * @brief iterates to the end of the list and inserts a node there with a given value
 * @param list linked list to insert a value
 * @param newValue the value in which we will construct the node
 * @return a pointer to the tail of the list i.e. the new value node
*/
Node* PushBack(List* list, ListDataType newValue);

/**
 * @brief deletes the head of the list and returns it
 * @param list linked list
 * @return the node that was deleted
*/
ListDataType PopFront(List* list);

/**
 * @brief deletes the tail of the list and deletes it from the list
 * @param list the linked list
 * @return the tail of the list
*/
ListDataType PopBack(List* list);

/**
 * @brief removes a node from the list and frees the memory it occupies
 * @param list the linekd list
 * @param target the target node to be deleted
*/
void DeleteNode(List* list, Node* target);

/**
 * @brief will find the first occurence of a value in a list and delete that node
 * @param list linked list to search in
 * @param value the value we're searching for
 * @return the previous node in the list from the specified value, if not found returns NULL
*/
Node* DeleteValue(List* list, ListDataType value);

/**
 * @brief iterates through the list and finds a specified node
 * @param list the linked list
 * @param value the node that is specified to be found
 * @return a pointer to the node that was found or NULL if it doesnt exist
*/
Node* Find(List* list, ListDataType value);


