#include <iostream>

using namespace std;
int main()
{
	int num,sum=0,last;
    cout<<"enter any number";
	cin>>num;

    while(num>0){
        last=num%10;
        sum=(sum*10)+last;
        num=num/10;
    }
    cout<<sum;
	return 0;
}
