#include <iostream>
#include <conio.h>
using namespace std;

struct node {
	int x;
	node *next;
};

void initnode (struct node *head, int n)
{
  	cout << head << "i " << n << " " << sizeof(n)<<endl;
    head->x=n;
	head->next=NULL;
 	cout << head->x << " " <<head->next<< sizeof(n)<<endl;
}

void addvalue (struct node *n, int val)
{
   	cout << "addvalue " << n << " " << sizeof(n)<<endl;
    struct node *k = new node ;
    k->x=val;
	k->next=NULL;
	cout << "n " << n << " " << sizeof(n)<<endl;
	n->next=k;
   	cout << "k " << k << "  " <<&k<<" "<<k->x<<endl;

}

void displaylist (struct node *list)
{   cout << "display list";
    struct node *y = new node;
    cout << list->next << " " << list->x<<endl;
    cout << "linked list display" << sizeof(list)<<endl;
    int loop=0;
    y=head;
	while ( (y->next = NULL) || (loop < 10) )
	{
        cout << y->x << "el" <<y->next<<"el"<< loop<< endl;
        y=y->next;
        loop = loop+1;
	}
}

int main()
{
    cout << "linked list people!" << endl;

	struct node *list = new node;
	cout << list <<endl;

	initnode(list,8);
	cout << list->x << "ex" << list->next<<&list<<endl;
	addvalue(list,9);
	displaylist(list);
	std::cout <<  "exiting prog" ;
    return 0;
}
