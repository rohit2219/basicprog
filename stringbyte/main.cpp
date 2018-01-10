#include <iostream>
#include <string.h>
using namespace std;

int main()
{
    char x[100]="10000000000";
    char *e="hello";
    char m[20]="1100";
    char a=3;
    char b=6;
    char y[12];
	int count=0;
	int i=0;
	int j=0;

    cout<<*e<<" " <<e<<endl;

    for (i=0;*e!=NULL;i++)
    {
        cout<<*e<<endl;
        *e++;
    }

    i=0;
    for (i=0;x[i]!='\0';i++)
	{	if (i==a )
		{
			for (j=0;m[j]!='\0';j++)
			{
				x[i]=m[j];
				cout<<m[j]<<endl;
				i++;
			}
		}


	}
	cout<<"string:"<<x<<endl;
}
