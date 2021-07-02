#include<iostream>
using namespace std;

int main(){
    int no;
    cin>>no;
    
    int ans=0;
    int p=1;

    while (no>0)
    {
        int r= no%10;
        ans=ans+p*r;
        p=p*2;
        no=no/10;
    }
    cout<<ans<<endl;
    
    return 0;
}