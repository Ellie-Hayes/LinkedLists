// LinkedLists.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "ListLinked.h"

int main()
{
    ListLinked* lists = new ListLinked();
    ListNode* head = nullptr; 

    //Use &head when a pointer to a pointer
    lists->MakeNode(&head, 5);
    lists->MakeNode(&head, 2);
    lists->MakeNode(&head, 10);
    //lists->DeleteAt(head, 0);
    lists->InsertFirst(&head, 7);
    lists->InsertAfter(head->next, 40);

    lists->PrintList(head);

   // lists->DeleteAfter(head->next)
    
    lists->Find(head, 10);
    lists->GetNode(head, 2);
    lists->PrintList(head);
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
