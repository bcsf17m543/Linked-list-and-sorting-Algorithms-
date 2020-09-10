//#include<iostream>
//using namespace std;
//#include <iostream>
//
//using namespace std;
//
//class LinkedList
//{
//private:
//	class ListNode
//	{
//	public:
//		int data;
//		ListNode *next;
//		ListNode(int d)
//		{
//			data = d;
//			next = NULL;
//		}
//	};
//
//	ListNode *head;
//	ListNode *tail;
//
//public:
//	LinkedList()
//	{
//		head = NULL;
//		tail = NULL;
//	}
//
//	~LinkedList()
//	{
//		// implement yourself
//	}
//	void InsertAtFirst(int g)
//	{
//		if (head == NULL)
//		{
//			head = new ListNode(g);
//			tail = head;
//			return;
//		}
//		else
//		{
//			ListNode *temp = new ListNode(g);
//			temp->next = head;
//			head = temp;
//		}
//	}
//	void InsertAtLast(int g)
//	{
//		if (tail == NULL)
//		{
//			tail = new ListNode(g);
//			head = tail;
//			return;
//		}
//		else
//		{
//			tail->next = new ListNode(g);
//			tail = tail->next;
//		}
//	
//	}
//	void Del_First()
//	{
//		ListNode* temp = head;
//		head = temp->next;
//		delete temp;
//	}
//	
//	void Del_Last()
//	{
//		ListNode* temp = head;
//		if (tail == NULL)
//		{
//			return;
//		}
//		else
//		{
//			while(temp->next != tail)
//			{
//				temp = temp->next;
//			}
//			ListNode* junk = tail;
//			tail = temp;
//			tail->next = NULL;
//			delete[] junk;
//		}
//		
//	}
//
//	
//		
//	
//	void display()
//	{
//		ListNode *tmp = head;
//		while (tmp != NULL)
//		{
//			cout << tmp->data << endl;
//			tmp = tmp->next;
//		}
//
//	}
//};
//int main()
//{
//	LinkedList k;
//	k.InsertAtLast(1);
//	k.InsertAtLast(2);
//	k.InsertAtLast(3);
//	k.InsertAtLast(4);
//
//	cout << endl;
//	k.InsertAtFirst(6);
//	
//	k.Del_First();
//	k.Del_Last();
//
//
//	k.display();
//	return 0;
//}