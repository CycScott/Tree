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
	node *head = new node();//�إߤ@�� "��" node�Ŷ� ���Ω�Ȧs 
	
	head->num  = a;
	head->next = NULL; //���۳Ы�
	
	node *current = head;// NOW �����
	
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
