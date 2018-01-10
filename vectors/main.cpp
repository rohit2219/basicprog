#include <iostream>
#include <limits>
#include <vector>
#include <stack>
#include <queue>

using namespace std;


vector_function(vector <int>& myPassVector)
{

    for (int i=0; i < myPassVector.size() ;i++ )
    {
        cout << myPassVector[i] << " " ;
    }
}

class minStack{

    stack<pair<int, int>> myStack;
    int minval;
    minstack::minStack(){
        int minval=INT_MAX;
    };

    void push(int x){
        if ( myStack.empty() ) {
            minval=x;
        }
        else{
            if ( x < minval ) {
                minval=x;
            }
        }
        myStack.push(x,minval);
        return;
    };
    void pop(){
        return;
    };
};
int main()
{
    vector <int> myVector;
     myVector.push_back(23);
     myVector.push_back(25);
     myVector.push_back(27);

    vector_function(myVector);
    minStack stacknew;

    return 0;
}
