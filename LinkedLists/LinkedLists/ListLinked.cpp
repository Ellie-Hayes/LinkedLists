#include "ListLinked.h"

ListLinked::ListLinked()
{
}

ListLinked::~ListLinked()
{
}

ListNode* ListLinked::MakeNode(ListNode** head, int d)
{
	ListNode* newNode = new ListNode;
	ListNode* last = *head; 

	newNode->data = d; 
	newNode->next = nullptr;

	if (*head == nullptr) // if no head of linked list, set created node to head
	{
		*head = newNode; 
		return newNode; 
	}

	while (last->next != nullptr) // cycles through all nodes in linked list looking for a node with no node next to it
	{
		last = last->next;
	}

	last->next = newNode;
	return newNode; 
}

ListNode* ListLinked::InsertFirst(ListNode** head, int d)
{
	ListNode* newNode = new ListNode;

	newNode->data = d;
	newNode->next = *head; // Set next to previous head
	*head = newNode; // Move head to newNode

	return newNode;
}

ListNode* ListLinked::GetNode(ListNode* node, int pos)
{
	int count = 0; 

	while (node != nullptr)
	{
		if (count == pos)
		{
			std::cout << "Data stored at position " << pos << " is: " << node->data << std::endl; 
			return node; 
		}

		count++;
		node = node->next; 
	}

	std::cout << pos << " was not a valid position" << std::endl; 
	return nullptr; 
}

ListNode* ListLinked::Find(ListNode* node, int val)
{
	int count = 0; 
	while (node != nullptr)
	{
		if (node->data == val)
		{
			std::cout << "Node with value found at position: " << count << std::endl; 
			return node; 
		}

		node = node->next; 
		count++; 
	}

	std::cout << "Node with value: " << val << " does not exist." << std::endl; 
	return nullptr; 
}

void ListLinked::InsertAfter(ListNode* lastNode, int d)
{
	if (lastNode == nullptr)
	{
		std::cout << "lastNode cannot be null" << std::endl;
		return; 
	}

	ListNode* newNode = new ListNode; 
	newNode->data = d;
	newNode->next = lastNode->next; 
	lastNode->next = newNode; 

}

void ListLinked::DeleteList(ListNode** node)
{
	ListNode* pTemp = *node; 
	ListNode* next; 

	while (pTemp != nullptr)
	{
		next = pTemp->next; 
		delete pTemp;
		pTemp = next;
	}

	*node = nullptr;
	std::cout << "List deleted" << std::endl; 
}

void ListLinked::DeleteAfter(ListNode* node)
{
	ListNode* pTemp;

	if (node != nullptr && node->next != nullptr)
	{
		pTemp = node->next; 
		node->next = pTemp->next; 

		delete pTemp; 
	}
}

void ListLinked::DeleteAt(ListNode** node, int pos)
{
	int count = 0; 
	ListNode* pTemp = *node;
	ListNode* nextNode = pTemp;

	while (node != nullptr)
	{

		if (count == pos && pos != 0)
		{
			std::cout << "Deleted node at position: " << pos << std::endl;
			pTemp->next = nextNode->next; 
			pTemp = nextNode; delete pTemp;
				
			return;
			

		}
		else if (count == pos && pos == 0)
		{
			/*std::cout << "Deleted head " << std::endl;
			*head = *nextNode->next;
			pTemp = nextNode;
			delete pTemp; */
			return;
		}
		

		if (count != 0) { pTemp = pTemp->next; }
		
		std::cout << "Ptemo data = " << pTemp->data << std::endl;

		count++;
		nextNode = nextNode->next;

	}

	std::cout << pos << " was not a valid position" << std::endl;
}

void ListLinked::PrintList(ListNode* node)
{
	while (node != nullptr)
	{
		std::cout << std::setw(5) << "| " << node->data << " |-->";
		node = node->next;
	}

	if (node == nullptr)
	{
		std::cout << "| NULL |" << std::endl; 
	}

	std::cout << std::endl; 
}


