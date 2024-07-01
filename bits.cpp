#include<iostream>
#include<math.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int ans= 0;
    int i = 0;

    //decimal to binary conversion
    // while(n!=0){
    //     int bit = n&1;
    //     ans = (bit * pow(10, i)) + ans;
    //     //doub for number 6
    //     n = n>>1;
    //     i++;

    // }
    // cout<<"Anwer is "<<ans;

    // binary to decimal
    while(n!=0){
        int digit = n %10;

        if(digit==1){
            ans = ans + pow(2, i);

        }
        n = n/10;
        i++;
    }
    cout<<"Answer is : "<<ans;

}
