# include <iostream>
using namespace std;

int main() {
    int n;
    cin>>n;
    int sum=-1;
    while(n--)
    {
        int a,b;
        if(sum==-1)
            sum=b-a;
        if(sum!=(b-a))
        {
            cout<<"NO";
            return 0;
        }
    }
    cout<<"YES";
    return 0;
}