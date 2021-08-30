#include "list.h"
#include <malloc.h>



List* CreateList()
{
	List* list = (List*)malloc(sizeof(List));
	if (list)
	{
		list->head = NULL;
	}
	return list;

}

void FreeList(List* list)
{
	if (!list)
	{
		//error handle
		return;
	}
	if (list->head)
	{
		Node* current = list->head;
		Node* temp;
		while (current)
		{
			temp = current->next;
			free(current);
			current = temp;
		}
	}

	free(list);
}

size_t GetListSize(List* list)
{
	size_t counter = 0;
	Node* current = list->head;
	while (current != NULL)
	{
		current = current->next;
		++counter;
	}
	return counter;
}

Node* GetListHead(List* list)
{
	return list->head ? list->head : NULL;
}

Node* GetNextNode(Node* currentNode)
{
	if (!currentNode->next)
	{
		return currentNode->next;
	}
	return NULL;
}

ListDataType GetValue(Node* node)
{
	return node ? node->data : NULL;
}

Node* Insert(Node* after, ListDataType newValue)
{
	Node* newNode = (Node*)malloc(sizeof(Node));
	if (newNode)
	{
		newNode->data = newValue;
		newNode->next = after->next;
		after->next = newNode;
		return newNode;
	}

	return NULL;
}

Node* PushFront(List* list, ListDataType newValue)
{
	Node* newNode = (Node *)malloc(sizeof(Node));
	newNode->data = newValue;
	if (list)
	{
		newNode->next = list->head;
		list->head = newNode;
		return newNode;
	}	
	return NULL;
}

Node* PushBack(List* list, ListDataType newValue)
{
	Node *newNode = (Node *)malloc(sizeof(Node));
	if (newNode)
	{
		newNode->data = newValue;
		newNode->next = NULL;
		if (list)
		{
			Node* current = list->head;
			while (current->next != NULL)
			{
				current = current->next;
			}
			current->next = newNode;
			return newNode;
		}		
	}
	
	return NULL;
	
}

ListDataType PopFront(List* list)
{
	if (list)
	{
		ListDataType value;
		Node* tempNode;
		if (tempNode = GetListHead(list))
		{
			value = tempNode->data;
			DeleteNode(list, list->head);
			return value;
		}	
	}
	return NULL;

}

ListDataType PopBack(List* list)
{
	if (list->head)
	{
		Node* currentNode = list->head;
		ListDataType value;
		/* stop going at the last node i.e when next is NULL */
		while (currentNode->next)
		{			
			currentNode = currentNode->next;
		}
		value = currentNode->data;
		/* not the most efficient but for the sake of cleaner code */
		DeleteNode(list, currentNode);
		return value;
	}
	return NULL;
}

void DeleteNode(List* list, Node* target)
{
	if (list->head)
	{
		/* special case for the head node */
		if (list->head == target)
		{
			list->head = target->next;
		}
		else
		{
			Node* current = list->head;
			while (current->next != target)
			{
				current = current->next;
			}
			current->next = target->next;
			target->next = NULL;
		}
		free(target);
	}
}

Node* DeleteValue(List* list, ListDataType value)
{
	if (list->head)
	{
		Node *currentNode = list->head;
		while (currentNode->next->data != value && currentNode->next)
		{
			currentNode = currentNode->next;
		}
		if (currentNode->next)
		{
			DeleteNode(list, currentNode->next);
			return currentNode;
		}

	}
	return NULL;
}

Node* Find(List* list, ListDataType value)
{
	if (list)
	{
		Node *currentNode = list->head;
		while (currentNode->data != value && currentNode)
		{
			currentNode = currentNode->next;
		}
		/* if the while loop ended because it found the value */
		if (currentNode)
		{
			return currentNode;
		}
	}
	return NULL;
}
