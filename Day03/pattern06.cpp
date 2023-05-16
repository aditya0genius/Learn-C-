#include <iostream>

using namespace std;

int main() {
    int row,count=0;
    cout<<"Enter number of Rows";
    cin>>row;
    for(int i=1;i<=row;i++) {
        for(int j=i;j<=row;j++)
        {
            cout<<j;
        }
        for(int k=1;k<=(i-1);k++)
        {
            cout<<k;
        }
        cout<<endl;
    }
    return 0;
}