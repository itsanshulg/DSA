/*
pattern
1
11
111
1001
10001
100001

for n numbers
*/

#include<iostream>
using namespace std;
int main(){

    int n;
    cin>>n;
    int row=1;

    while (row<=n)
    {
        int col=1;
        if (row%2!=0)
        {
            // odd row
            while (col<=row)
            {
                cout<<1;
                col=col+1;
            }
        }
        else
        {
            // even row
            cout<<1;
            while (col<=row-2)
            {
                cout<<0;
                col=col+1;
            }
            cout<<1;
        }
        cout<<endl;
        row=row+1;
    }
    return 0;
}