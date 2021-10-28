#include <iostream>
using namespace std;

class Node
{
public:
	int data;
	Node *next;
	Node()
	{
		next = NULL;
	}
};

class List
{
public:
	Node *head;
	List()
	{
		head = NULL;
	}
	void create(int arr[], int n)
	{
		Node *prev = NULL;
		for (int i = 0; i < n; i++)
		{
			Node *a = new Node();
			a->data = arr[i];
			if (prev == NULL)
			{
				head = a;
			}
			else
			{
				prev->next = a;
			}
			prev = a;
		}
	}
	void display()
	{
		Node *temp = head;
		while (temp != NULL)
		{
			cout << temp->data << ' ';
			temp = temp->next;
		}
	}
};
int main()
{
	int arr[] = {1, 2, 3, 4, 5};
	int n = 5;
	List a;
	a.create(arr, n);
	a.display();
	cout << endl;
}