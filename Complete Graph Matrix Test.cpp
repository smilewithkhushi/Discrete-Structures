#include <iostream>
#include <iomanip>
using namespace std;

void createMatrix(int A[10][10], int size)
{
    cout<<"\n-> INPUT THE MATRIX/GRAPH VALUES"<<endl<<endl;
    int n=1;
    for (int i=0; i<size; i++)
    {
        cout<<"Enter the "<<n<<"th row : ";
        for (int j=0; j<size; j++)
        {
            cin>>A[i][j];
        }
        n++;
    }
}

void displayMatrix(int A[10][10], int size)
{
    cout<<"\n-> DISPLAYING THE MATRIX "<<endl<<endl;
    for (int i=0; i<size; i++)
    {
        for (int j=0; j<size; j++)
        {
            cout<<setw(3)<<A[i][j];
        }
        cout<<endl;
    }
}

int completeGraphTest(int A[10][10], int size)
{
    int flag=0;
    int flag2=0;

    for (int i=0; i<size; i++)
    {
        for (int j=0; j<size; j++)
        {
            if (i==j)
            {
                if (A[i][j]==0)
                {

                    flag++;
                }
                else
                    flag=0;
            }
            else
            {
                if (A[i][j]==1)
                {

                    flag2++;
                }
                else
                    flag2=0;
            }
        }

        if (flag>0 && flag2>0)
            return 1;
        else
            return 0;
    }
}

int main()
{
    cout<<"\t ** COMPLETE GRAPH MATRIX **"<<endl;
    int size, result;

    char ch='y';
    while(ch=='y')
    {
        cout<<"\n-> Enter the number of elements in graph/size of matrix : ";
        cin>>size;

        int matrix[10][10];
        createMatrix(matrix, size);
        displayMatrix(matrix, size);
        result=completeGraphTest(matrix, size);
        if (result==1)
            cout<<"\n-> The above matrix belongs to complete graph! "<<endl<<endl;
        else
            cout<<"\n-> The above matrix does not belong to complete graph! "<<endl<<endl;

        cout<<"Do you want to continue(y/n): ";
        cin>>ch;
        cout<<"------------------------------------"<<endl<<endl;
    }
    cout<<endl<<"Program ends here!"<<endl;
    return 0;
}

