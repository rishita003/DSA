#include<iostream>
using namespace std;

//question 1----i/p= a
//              o/p =lowercase--------do the same for uppercase and numeric
int main(){
    char ch;
    
        while(true){
        cout<<"enter the entity"<<endl;
        cin>>ch;
        if(ch>='a' && ch<='z'){
            cout<<"lowercase"<<endl;
        }
        else if(ch>='A' && ch<='Z'){
            cout<<"uppercase"<<endl;
        }
        else if(ch>= '0' && ch <= '9'){
            cout<<"Numeric"<<endl;
        }
        else{
            cout<<"try next time"<<endl;
        }
        break;
    }
}