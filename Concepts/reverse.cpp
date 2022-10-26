#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;

    while(t--)
    {
        int n;
        cin>>n;
        int reverse = 0;
        while(n>0)
        {
            reverse= reverse*10 + n%10;
            n/=10; // removing the last number

        }
        cout<<reverse<<endl;
}
}