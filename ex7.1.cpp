#include<iostream>
using namespace std;
class Node
{
	public:
		int data;
		Node *next;
};
class List
{
	private:
		Node *head;
	public:
		List()
		{
			head=NULL;
		}
		void createList(int a[],int n)
		{
			for(int i=0;i<n;i++)
			{
				Node *n=new Node;
				n->data=a[i];
				n->next=NULL;
				if(head==NULL)
				{
					head=n;
				}
				else
				{
					Node *temp=head;
					while(temp->next!=NULL)
					{
						temp=temp->next;
					}
					temp->next=n;
				}
			}
		}
		void dispList()
		{
			Node *temp=head;
			while(temp!=NULL)
			{
				cout<<temp->data<<' ';
				temp=temp->next;
			}
		}
};
int main()
{
	List l;
	int values[]={1,2,3,4,5},n=sizeof(values)/sizeof(int);
	l.createList(values,n);
	cout<<"Created List : ";
	l.dispList();
	return 0;
}

