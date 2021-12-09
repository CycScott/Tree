#include <iostream>
using namespace std;

struct node
{
	int   num;
	node *next;	
};

int main()
{
	int n,a;
	cin>>n;
	
	cin>>a;
	node *head = new node();//建立一個 "空" node空間 的用於暫存 
	
	head->num  = a;
	head->next = NULL; //首相創建
	
	node *current = head;// NOW 做到哪
	
	for(int i=1;i<n;++i)
	{
		cin>>a;
		current->next = new node();
		current = current->next;
		current->num = a;
		current->next = NULL;
	}
	current = head;
	
	while(true)
	{
		cout<< current->num << " ";
		current = current->next;
		if(current == NULL)
		{
			break;
		}
	}
	cout<<"\n";
}
