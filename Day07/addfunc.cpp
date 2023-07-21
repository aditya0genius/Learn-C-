#include<iostream>

using namespace std;

float add(float num1, float num2){
    float addition;
    addition= num1+num2;
    return addition;
}

int main(){
    float a=5.4;
    float b=6.3;

    cout<<add(a,b);

    return 0;

}