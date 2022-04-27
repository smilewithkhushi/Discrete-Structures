//ques 13 – truth table for logical functions
#include<iostream.h>
#include <iomanip>
using namespace std;

void conjunction(int x, int y){
if (x==1 && y==1){
    cout<<setw(25)<<setw(17)<<"  Conjunction  "<<"|\t"<<x<<"   |\t"<<y<<"   |\t1\t|"<<endl;
}
else{
	cout<<setw(25)<<setw(17)<<"  Conjunction  "<<"|\t"<<x<<"   |\t"<<y<<"   |\t0\t|"<<endl;
}
return;
}

void disjunction(int x, int y){
if (x==0 && y==0){
    cout<<setw(25)<<setw(17)<<"  Disjunction  "<<"|\t"<<x<<"   |\t"<<y<<"   |\t0\t|"<<endl;
}
else{
	cout<<setw(25)<<setw(17)<<"  Disjunction  "<<"|\t"<<x<<"   |\t"<<y<<"   |\t1\t|"<<endl;
}
return;
}

void exclusiveOR(int x, int y){
if (x==y)
    cout<<setw(25)<<setw(17)<<" Exclusive OR "<<"|\t"<<x<<"   |\t"<<y<<"   |\t0\t|"<<endl;
else
	cout<<setw(25)<<setw(17)<<" Exclusive OR "<<"|\t"<<x<<"   |\t"<<y<<"   |\t1\t|"<<endl;
return;
}

void exclusiveNOR(int x, int y){
if (x==y)
    cout<<setw(25)<<setw(17)<<" Exclusive OR "<<"|\t"<<x<<"   |\t"<<y<<"   |\t1\t|"<<endl;
else
	cout<<setw(25)<<setw(17)<<" Exclusive OR "<<"|\t"<<x<<"   |\t"<<y<<"   |\t0\t|"<<endl;
return;
}

void conditional(int x, int y){
if (x==1 && y==0)
    cout<<setw(25)<<setw(17)<<" Conditional "<<"|\t"<<x<<"   |\t"<<y<<"   |\t0t|"<<endl;
else
	cout<<setw(25)<<setw(17)<<" Conditional "<<"|\t"<<x<<"   |\t"<<y<<"   |\t1\t|"<<endl;
return;
}

void biConditional(int x, int y){
if (x==y)
    cout<<setw(25)<<setw(17)<<" Bi-conditional "<<"|\t"<<x<<"   |\t"<<y<<"   |\t1\t|"<<endl;
else
	cout<<setw(25)<<setw(17)<<" Bi-conditional "<<"|\t"<<x<<"   |\t"<<y<<"   |\t1\t|"<<endl;
return;
}

void negation(int x){
if (x==1)
    cout<<setw(25)<<setw(17)<<" Negation "<<"|\t"<<x<<"   |\t    |\t0\t|"<<endl;
else
	cout<<setw(25)<<setw(17)<<" Negation "<<"|\t"<<x<<"   |\t    |\t1\t|"<<endl;
}

void NAND(int x, int y){
if (x==1 && y==1)
    cout<<setw(25)<<setw(17)<<"   NAND   "<<"|\t"<<x<<"   |\t"<<y<<"   |\t0\t|"<<endl;
else
	cout<<setw(25)<<setw(17)<<"   NAND   "<<"|\t"<<x<<"   |\t"<<y<<"   |\t1\t|"<<endl;
return;
}

void NOR(int x, int y){
if (x==0 && y==0)
    cout<<setw(25)<<setw(17)<<"   NOR   "<<"|\t"<<x<<"   |\t"<<y<<"   |\t1\t|"<<endl;
else
	cout<<setw(25)<<setw(17)<<"   NOR   "<<"|\t"<<x<<"   |\t"<<y<<"   |\t0\t|"<<endl;
return;
}

int main(){
cout<<"QUES 13 : THE PROGRAM PERFORMS FOLLOWING LOGICAL OPERATIONS ON GIVEN VALUE OF X AND Y"<<endl<<endl;

cout<<"1. Conjunction (AND ^)"<<endl;
cout<<"2. Disjunction (OR V)"<<endl;
cout<<"3. Exclusive OR"<<endl;
cout<<"4. Conditional "<<endl;
cout<<"5. Bi-conditional"<<endl;
cout<<"6. Exclusive NOR"<<endl;
cout<<"7. Negation"<<endl;
cout<<"8. NAND"<<endl;
cout<<"9. NOR"<<endl<<endl;

char ch='y';
while (ch=='y'){

int x, y;
cout<<"Enter the value of x (0 or 1) : ";
cin>>x;
cout<<"Enter the value of y (0 or 1) : ";
cin>>y;
cout<<endl;

cout<<setw(25)<<"\t========================================="<<endl;
cout<<setw(25)<<setw(17)<<"   Operation  "<<"|\tX   |\tY   |\tResult  |"<<endl;
cout<<setw(25)<<"\t----------------------------------------"<<endl;

conjunction(x,y);
disjunction(x,y);
exclusiveOR(x,y);
conditional(x,y);
biConditional(x,y);
exclusiveNOR(x,y);
negation(x);
NAND(x,y);
NOR(x,y);

cout<<setw(25)<<"\t========================================"<<endl<<endl;

cout<<endl<<"Do you want to continue (y/n) : ";
cin>>ch;
cout<<endl;
}
}
