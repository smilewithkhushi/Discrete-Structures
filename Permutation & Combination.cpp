#include <iostream>
using namespace std;

int fact(int n){
if (n>1){
return n*fact(n-1);
}
else{
return 1;
}
}

int createArray(int A[5]){
cout<<endl;
for (int i=0; i<5; i++){
cout<<"Enter the "<<i+1<<"th element here : ";
cin>>A[i];
}
}

int bSearch(int A[5], int r, int start, int end){
int mid;
if (start>end){
cout<<"-> Number is not found"<<endl;
}
else{
mid=(start+end)/2;
if (A[mid]==r){
cout<<"-> Element is found at index "<<mid<<endl;
exit(0);
}
else if (A[mid]>r){
bSearch(A, r, start, mid-1);
}
else{
bSearch(A, r, mid+1, end);
}
}
}

int main(){
int choice;
cout<<endl<<" **** PROGRAMS USING RECURSION **** "<<endl;
cout<<"-> 1. PERMUTATION : n!/(n-r)! "<<endl;
cout<<"-> 2. BINARY SEARCH "<<endl;
cout<<"-> 3. FACTORIAL : n! "<<endl;
cout<<"-> 3. COMBINATIOMN : n!/r!*(n-r)! "<<endl;

int num,r,numer, denom;
float result;
int start=0;
int end=4;
int j=0;
while (j<10){
cout<<endl<<"Enter the choice (1,2,3) : ";
cin>>choice;
switch(choice){
case 1 :  	cout<<"Enter the value of n : ";
			cin>>num;
			cout<<"Enter the value of r : ";
			cin>>r;
			result=fact(num)/fact(num-r);
			cout<<"The result is "<<result<<endl<<endl;
			break;

case 2:		cout<<"There are 5 elements in an array! ";
			int A[5];
			createArray(A);
			cout<<"Enter the element to be searched : ";
			cin>>r;
			result=bSearch(A, r, start, end);
			cout<<endl<<endl;
			break;	  	  	  
			
case 3: 	cout<<"Enter the number to calculate factorial : ";
			cin>>num;
			result=fact(num);
			cout<<"The factorial is "<<result<<endl<<endl;
			break;
			
case 4 :  	cout<<"COMBINATION "<<endl;
			cout<<"Enter the value of n : ";
			cin>>num;
			cout<<"Enter the value of r : ";
			cin>>r;
			result=fact(num)/(fact(r)*fact(num-r));
			cout<<"The result is "<<result<<endl<<endl;
			break;
j++;
}
}
return 0;
}

