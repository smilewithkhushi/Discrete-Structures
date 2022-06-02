
//2- tower of hanoi question : 

#include <iostream>
#include <iostream>
#include <iomanip>
using namespace std;

void towerOfHanoi(int disc, char start, char temp, char dest)
{

    if (disc==1)
    {
        cout<<"Disc "<<disc<<" moved from "<<start<<" to "<<dest<<endl;
        return;
    }

    towerOfHanoi(disc-1, start, dest, temp);
    cout<<"Disc "<<disc<<" moved from "<<start<<" to "<<dest<<endl;
    towerOfHanoi(disc-1, temp, start, dest);
}

int main()
{
    cout<<"Tower of Hanoi"<<endl;
    int disc;
    double swaps;
    cout<<endl<<"-> Enter the number of discs : ";
    cin>>disc;

    cout<<endl<<"THE STEPS INVOLVED IN MOVING THE DISCS -> "<<endl<<endl;
    towerOfHanoi(disc, 'A', 'B', 'C');
    return 0;
}

