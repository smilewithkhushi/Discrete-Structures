#include <iostream>
#include <iomanip>

using namespace std;

void TermsArray(string A[], int cnst[], int pow[], int n){
    int temp=1;
    cout<<"\n-> THE VARIOUS TERMS FORMED : "<<endl;
    for (int i=0; i<n; i++){
        cout<<"Term "<<temp<<" - "<<cnst[i]<<" x^"<<pow[i]<<endl;
        temp++;
    }
    cout<<endl;

    cout<<"\n-> THE POLYNOMIAL FORMED : ";
    for (int i=0; i<n; i++){
    cout<<cnst[i]<<" x^"<<pow[i]<<" + ";
    }
    cout<<endl;
}

void calcPolynomial(int cnst[], int pow[], int n, int var){
    int result=0;
    int temp;

    for (int i=0; i<n; i++){
        int expo=1;
        for (int j=1; j<=pow[i]; j++){
            expo=expo*var;
        }
        temp=cnst[i]*expo;
        result=result+temp;
    }
    cout<<endl<<"-> The Evaluated Result of Polynomial : "<<result<<endl;
}


void createConstArray(int A[], int n){
    int x=1;
    cout<<"\n-> Enter the constants "<<endl;
    for (int i=0; i<n; i++){
        cout<<"\t- for "<<x<<" term : ";
        cin>>A[i];
        x++;
    }
}
void createDegreeArray(int A[], int n){
    int x=1;
    cout<<"\n-> Enter the powers of variable "<<endl;
    for (int i=0; i<n; i++){
        cout<<"\t- for "<<x<<" term : ";
        cin>>A[i];
        x++;
    }
}

int main()
{
    cout << "\t\tQuestion 15\n THIS PROGRAM STORES A POLYNOMIAL FUNCTIONAND EVALUATES IT FOR A GIVEN VALUE OF VARIABLE\n\n" << endl;
    int termsCount;
    int constArr[termsCount];
    int degreeArr[termsCount];
    string termsArr[termsCount];

    cout<<"-> How many terms does the function have : ";
    cin>>termsCount;

    createConstArray(constArr, termsCount);
    createDegreeArray(degreeArr, termsCount);
    TermsArray(termsArr, constArr, degreeArr, termsCount);

    int varValue;
    cout<<"\n-> Enter the value of variable x : ";
    cin>>varValue;
    calcPolynomial(constArr, degreeArr, termsCount, varValue);
    return 0;
}
