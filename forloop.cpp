#include<iostream>
using namespace std;

int main(){

//     int a;
//     int b;

//     cin>>a;
//     cin>>b;

//     cout<<"a & b : "<<(a&b)<<endl;
//     cout<<"a | b : "<<(a|b)<<endl;
//     cout<<" ~a : "<<~a<<endl;
//     cout<<"a xor b : "<<(a^b)<<endl;

// // left shift _ right shift
      
//     cout<< (17>>1)<<endl;
//     cout<< (17>>2)<<endl;
//     cout<< (19<<2)<<endl;
//     cout<< (19<<1)<<endl;

    //post and pre increment decrement

    // int i = 7;

    // cout<<(++i)<<endl;
    // // i = 8
    // cout<<(i++)<<endl;
    // // 8 , i = 9
    // cout<<(--i)<<endl;
    // //8, i = 8
    // cout<<(i--)<<endl;
    // // 8, i = 7

    //mcqs questions1----o/p batana tha inme

    // int a = 1 , b = 1;
    // if (!++a){
    //     cout<< b;
    // }
    // else{
    //     cout<< ++b;
    // }

    //question 2
    // int a= 1, b =2;

    // if(a-- > 0 && ++b > 2){  //(true && true)
    //     cout<<"stage 1 - inside if";
    // }
    // else{
    //     cout<<"stage2----inside else";
    // }
    // cout<< a <<" "<<b<< endl;

    //question 3
    // int a = 1;
    // int b = a++;
    // int c = ++a;

    // cout<<b<<endl;
    // cout<<c<<endl;

    // question 4
    // int number = 3;
    // cout<< (25*(++number));

// //for loop 
    // int n;
    // cin>>n;

//     int i = 1;

//     for(; ; ){
//         if (i<=n){
//             cout<<i<<endl;
//         }
//         else{
//             break;
//         } i++;
//     }

    // multiple for loop conditions
        
    // for(int a=5, b=2, c=3; a>=0 && b>=1 && c>=2; a--, b--, c-- ){
    //     cout<<a<<" "<<b<<" "<<c<<endl;
    // }  

//question sum of 1 to n

    // int n ;
    // cin>>n;
    
    // int sum = 0;
    // for(int i=1; i<=n; i++){
    //     sum += i;
    // }
    // cout<<sum<< endl;

    // question fibonacci series

    // int n;
    // cout<<"enter the value of n: "<<endl;
    // cin>>n;

    // int a = 0;
    // int b = 1;

    // for( int i=1; i<=n; i++){
    //     int nextNo = a+b;
    //     cout<<nextNo<<" ";

    //     a = b;
    //     b = nextNo;
    // }

    //prime no . question 
    // bool isprime = 1;

    // for(int i = 2; i<=n; i++){
    //     if(n%i == 0){
    //        // cout<<" not Primr number";
    //         isprime = 0;
    //         break;
    //     } 
    // }
    // if(isprime==0){
    //     cout<<"not a prime number"<<endl;
    // }else{
    //     cout<<"is a prime number";
    // }

    // continue

    //  for(int i = 0; i<n; i++){
    //     cout<<"hi"<<endl;
    //     cout<<"hey"<<endl;
    //     continue;
    //     cout<<"hello?";
    //  }

    //questions -----question 1

    // for(int i = 0; i<=5; i--){
    //     cout<< i <<" ";
    //     i++;
    // }
    
    // question 2
    // for(int i = 0; i<=15; i+=2){
    //     cout<< i <<" ";
    //     if(i&1){
    //         continue;
    //     }
    //     i++;

    // }

    // question 3

    // for(int i=0; i<5; i++){
    //     for(int j=0; j<=5; j++){
    //         cout<< i<<" "<<j<<endl;
    //     }
    // }

// question-4
     for(int i = 0; i<5; i++){
        for(int j= i; j<=5; j++){
            if(i + j == 10){                           
                break;
            }
            cout<<i<<" "<< j<<endl;
        }
     }
     
}
