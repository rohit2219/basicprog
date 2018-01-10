#include <iostream>

using namespace std;

class matrix_ops
{
    public:

        int *mat;
        int* matrix_print (int *mat,int a)

        {   int i;
            for (i=0;i<a;i++)
            {
                cout<<*(mat+i)<<" ";
             }
            return 0;
        };


};

void matrix_ops_rev( int** mat_temp , int rows , int cols,int** mat_new_temp)
        {   int mat_swap[3][3];
            int i,j;
            for (i=0;i<rows;i++)
            {
                for (j=3;j>=cols;j--)
                {
                    mat_swap[i][3-j]=mat_temp[i][j];
                }
            }
            cout<<"swapped matrix"<<endl;
           for (i=0;i<3;i++)
            {
                cout<<endl;
                for (j=0;j<3;j++)
                {
                    cout<<mat_swap[i][j]<<" ";
                }
            }


        };

int main()
{   matrix_ops  matrix;
    int y[3][3]={{2,3,5},{3,7,8},{1,2,3}};
    int mat_new[3][3];
    matrix.mat=*y;
    cout<<*y<<endl;
    matrix.matrix_print(*y,9);
    matrix_ops_rev(y,3,3,mat_new);
};
