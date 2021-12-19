#include <iostream>
using namespace std;

class tree
{
    public:
    int data;
    class tree *left,*right;
};

typedef class tree node;
typedef node *btree;

btree creat_tree( btree root , int val )
{
    btree newnode , current , backup;
    newnode = new node;
    newnode->data  = val;
    newnode->left  = nullptr;
    newnode->right = nullptr;
    
    if( root == nullptr )
    {
        root = newnode;
        return root;
    }
    else
    {
        for( current = root ; current != nullptr;)
        {
            backup = current;
            if( current->data > val )
            {
                current = current->left;
            }
            else
                current = current->right;
        }
        if( backup->data > val )
        {
            backup->left = newnode; 
        }
        else
            backup->right = newnode;
        return root;
    }
}
void pre(btree);

int main()
{
    int n;
    cin>>n;
    int num[n];
    btree ptr = nullptr;
    for(int i=0;i<n;++i)
    {
        cin>>num[i];
        ptr = creat_tree(ptr,num[i]);
        cout<<num[i]<<" ";
    }
    cout<<endl;
    cout<<"下方前序走訪\n";
    pre(ptr);
}
void pre( btree ptr )
{
    if( ptr != nullptr )
    {
        cout<< ptr->data <<endl;
        pre(ptr->left);
        pre(ptr->right);
    }
}

