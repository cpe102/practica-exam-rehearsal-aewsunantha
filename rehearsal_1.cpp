#include<iostream>
#include<string>
#include<cmath>
using namespace std;
int main(){
    string Name;
    string text1=" InW Jrim Jrim!!!";
    string text2="Try harder, ";
    float x;
    cout<<"What is your name ? : ";
    cin>>Name;
    cout<<"What i your GPA ? : ";
    cin>> x;
    if(x>=3.5){
        cout <<Name+text1;

    }else{
        cout<<text2+Name<<"!!!";
    }
return 0;

}
