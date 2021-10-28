#include<iostream>
using namespace std;
class linear
{
	int arr[10],item;
	public:
	linear(int n)
	{
		cout<<"Enter the Array Elements : ";
		for(int i=0;i<n;i++)
		{
			cin>>arr[i];
		}
		cout<<"Enter the Item : ";
		cin>>item;
		if(check(arr,n,item)>n)
		{
			cout<<"Invalid Search";
		}
		else
		{
			cout<<check(arr,n,item);
		}
	}
	int check(int a[],int n,int data)
	{
		int k=1;
		for(int i=0;i<n;i++)
		{
			if(a[i]==item)
			{
				return k;
				break;
			}
			k++;
		}
		if(k>n)
		{
			return k;
		}
	}
};				
int main()
{
	int n;
	cout<<"Enter the Size of the Array : ";
	cin>>n;
	linear l(n);
	return 0;
}		
