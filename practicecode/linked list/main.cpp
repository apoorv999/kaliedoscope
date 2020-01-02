#include <iostream>

using namespace std;

struct node{
    int data;
    node* link;
};
int main()
{
    node*head;
    head = new (node);
    head-> data=1;
    head-> link=new(node);
    head-> link->data=2;
    head-> link->link=new(node);
    head-> link->link->data=3;
    head-> link->link->link = NULL;
    node*p;
    p=head;
    while(p!=NULL){
        cout<< p->data<<" -> ";
        p=p->link;
    }
}
