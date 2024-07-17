#include<iostream>
using namespace std;

int main(){
    int i, j, m, n, amt;
    cout<<"enter the amount: "<<endl;
    cin>>amt;

    switch(1){
        case 1:
        m=amt/100;
        amt %= 100;
        cout<<"number of notes of 100: "<<m<<endl;
    
        case 2:
        n = amt/50;
        amt %= 50;
        cout<<"number of notes of 50 are: "<<n<<endl;

        case 3:
        i = amt/20;
        amt %= 20;
        cout<<"number of notes of 20:"<<i<<endl;

        case 4:
        j = amt/1;
        amt %= 1;
        cout<<"number of notes of 1:"<<j<<endl;

    }

}