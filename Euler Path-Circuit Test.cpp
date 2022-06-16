#include <iostream>
#include <iomanip>
using namespace std;

void createMatrix(int matrix[10][10],int size){
    cout << "\n\t** CREATING ADJACENCY MATRIX OF UNDIRECTED GRAPH **" << endl;
    int n=1;
    for (int i=0; i<size; i++){
        cout<<"Enter the "<<n<<"th row : ";
        for (int j=0; j<size; j++){
            cin>>matrix[i][j];
        }
        n++;
    }
}

void displayMatrix(int matrix[10][10], int size){
    cout << "\n\t** DISPLAYING ADJACENCY MATRIX OF UNDIRECTED GRAPH **" << endl;
    for (int i=0; i<size; i++){
        for (int j=0; j<size; j++){
            cout<<setw(3)<<matrix[i][j];
        }
        cout<<endl;
    }
}


void printDegree(int matrix[10][10], int arr[], int size){
    cout << "\n\t** DISPLAYING DEGREE OF VERTICES **" << endl;
    int flag;
    char ch='A';
    for (int i=0; i<size; i++){ //for all vertices one by one
        flag=0;
        for (int j=0; j<size; j++){
            if (matrix[i][j]==1) flag++;
        }
        cout<<" - Degree of "<<ch<<" = "<<flag<<endl;
        arr[i]=flag;
        ch++;
    }
    }


int eulerCircuitTest(int arr[], int size){
    int flag=0;
    for (int i=0; i<size; i++){ //for all vertices one by one
            if (arr[i]%2==0) flag++;    //increments only for even degree vertices
        }
    return flag;
}

void eulerPathTest(int arr[], int size){
    int oddFlag=0;
    int evenFlag=0;
    for (int i=0; i<size; i++){
        if (arr[i]%2==0)    evenFlag++;
        else if (arr[i]%2==1)   oddFlag++;
    }
        if ((oddFlag==0 || oddFlag==2) && (evenFlag==size-oddFlag)){
        cout<<"\n-> The Graph forms an Euler Path!"<<endl;
    }//finds out the number of vertex having odd and even degree with condition
    else{
        cout<<"\n-> The Graph does not form an Euler Path!"<<endl;
    }
}

int main()
{
    cout<<"\nGiven the adjacency matrix of the graph, write a program to check whether a given set of vertex forms an Euler path/Euler circuit or not. "<<endl;
    cout<<"\n-> EULER PATH : zero or two vertices have odd degree and rest have even degree"<<endl;
    cout<<"-> EULER CIRCUIT : All vertices with have even degree "<<endl<<endl;

    int vertex;
    cout<<"Enter the number of vertex : ";
    cin>>vertex;

    int matrix[10][10];
    int degreeArr[vertex];
    int totalVertex=0;
    for (int i=0; i<vertex; i++){
        totalVertex+=vertex;
    }//calculating total vertex

    createMatrix(matrix, vertex);
    displayMatrix(matrix, vertex);
    printDegree(matrix, degreeArr, vertex);


    cout << "\n\t** TESTING CONDITIONS FOR EULER CIRCUIT/EULER PATH **" << endl;
    int result=eulerCircuitTest(degreeArr, vertex); //EULER CIRCUIT TEST
    if (result==vertex){
        cout<<"\n-> The Graph forms an Euler Circuit!"<<endl;
    }
    else{
        cout<<"\n-> The Graph does not form an Euler Circuit!"<<endl;
    }

    eulerPathTest(degreeArr, vertex); //EULER PATH TEST

    return 0;
}

