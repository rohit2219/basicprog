#include <stdio.h>
#include <iostream>
using namespace std;
struct binstruct
    {
        int data;
        binstruct *rnode;
        binstruct *lnode;

    };
    binstruct *leaf,*root;

class bintree
{

    public:
    int add_node(int a)
    {
        binstruct *tempnode=new binstruct;
        binstruct *curnode=new binstruct;
        binstruct *prevnode=new binstruct;
        binstruct *nextnode=new binstruct;
        int ret_code=0;
        int insert_flag=0;
        cout<<"a "<<a<<endl;
        /*if its the first node of  a bin tree*/
        if ( root==NULL )
        {   cout<<"enter first node"<<endl;
            tempnode->data=a;
            leaf=NULL;
            tempnode->rnode=NULL;
            tempnode->lnode=NULL;
            root=tempnode;
            cout<<"root"<<root<<endl;
            ret_code=9;
            insert_flag=1;

        }
        /*if the binary tree already exist, go for walkthrough and insert*/
        prevnode=root;
        curnode=root;
        tempnode->data=a;
        tempnode->rnode=NULL;
        tempnode->lnode=NULL;

        while ( insert_flag==0 )
        {   prevnode=curnode;
            cout<<"insert loop "<< curnode<<endl;
            if ( ( curnode->rnode==NULL ) || ( curnode->lnode==NULL ) ) /*means u reached a leaf node*/
            {
                if ( curnode->data == a )
                {
                    cout<<"duplicate in binary tree"<<endl;
                    ret_code=999;
                    break;
                }

                if ( curnode->data > a && curnode->rnode==NULL )
                {   cout<<"curnode-rnode "<<curnode->rnode<<endl;
                    curnode->rnode=tempnode;
                }
                if ( curnode->data < a && curnode->lnode==NULL )
                {
                    curnode->lnode=tempnode;
                    cout<<"curnode-lnode "<<curnode->lnode<<endl;
                }

                insert_flag=1;
                break;
            }
            if ( insert_flag==0 ) /* travel to the next node*/
                if (curnode->data > a )
                {
                    nextnode=curnode->rnode;
                    cout<<"skipping to next rnode"<<endl;
                }
                else
                {
                    nextnod
                    e=curnode->lnode;
                    cout<<"skipping to next lnode"<<endl;
                }
            prevnode=curnode;
            curnode=nextnode;
        }
        cout<<"inserted"<<endl;
        return ret_code;
        }
int view_tree(node head)
{
}

};
int main()
{
    bintree binarytree;
    binarytree.add_node(5);
    binarytree.add_node(2);
    binarytree.add_node(8);
    binarytree.add_node(-4);
    binarytree.add_node(9);
    binarytree.add_node(2);
    return 0;
}
