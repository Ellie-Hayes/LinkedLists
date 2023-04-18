#pragma once
#include "Structs.h"
#include <iostream>
#include <iomanip>

class ListLinked
{
public: 
	ListLinked();
	~ListLinked();

	ListNode* MakeNode(ListNode** head, int d);
	ListNode* InsertFirst(ListNode** head, int d);
	ListNode* GetNode(ListNode* node, int pos);
	ListNode* Find(ListNode* node, int val);

	void InsertAfter(ListNode* lastNode, int d);
	void DeleteList(ListNode** node);
	void DeleteAfter(ListNode* node);
	void DeleteAt(ListNode* node, int pos);
	void PrintList(ListNode* node);
	
private:
	ListNode* head = nullptr; 
};

