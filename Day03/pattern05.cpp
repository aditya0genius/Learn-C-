#include <iostream>

using namespace std;

int main() {
    int row;
    cout<<"Enter number of Rows";
    cin>>row;
    for(int i=1;i<=row;i++) {
        for(int j=1;j<=(row-i);j++)
        {
            cout<<" ";
        }
        for(int k=1;k<=(2*i)-1;k++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
    return 0;
}