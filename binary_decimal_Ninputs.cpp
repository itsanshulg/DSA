#include<iostream>
using namespace std;

int main() {
    int N;
    int a[16];
    cin>>N;
    char ch = cin.get();
    for(int i = 0; i < N; i++){
       int j=-1;
       ch = cin.get();
       while(ch != '\n' && ch!=EOF)
       {
           j++;
           a[j]=ch-'0';
           ch = cin.get(); 
           //cout<<a[j]<<" ";  
       }
      // cout<<a<<" ";
       int k = 1;
       int sum = 0;
       while(j>=0){
           if(a[j]!=0)
                sum = sum + a[j]*k;
           k = k*2;
           j--;
       }
       cout<<sum<<endl;
    }

	return 0;
}