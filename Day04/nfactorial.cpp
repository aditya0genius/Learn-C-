#include <iostream>

using namespace std;
int main()
{
	int num,a=1,fact;
    cout<<"enter any number";
	cin>>num;
    fact=num;

    while(a>1){
        fact=fact*a;
        a=num-1;
    }
    cout<<fact;
	return 0;
}
