#include <iostream>

using namespace std;

int main() {
    int row,column;
    cout<<"Enter number of Rows";
    cin>>row;
    cout<<"Enter number of Columns";
    cin>>column;
    for(int i=1;i<=row;i++) {
        for(int j=1;j<=column;j++) 
        {
            if(i==1||j==1||i==row||j==column){
                cout<<"*";
            }
            else{
                cout<<" ";
            }
        }
        cout<<"\n";
    }
    return 0;
}