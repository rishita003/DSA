#include <iostream>
using namespace std;

// int main(){

//     //pow(a,b) = ?

//     int a, b;
//     cin >> a >>b;

//     int power = 1;

//     for(int i = 1; i<=b; i++){
//         power = power * a;

//     }
//     cout<<"power is : "<<power<<endl;

// }

//same question using functions

// int power(int a, int b){               //make a function once and use it again and again instead of writing the whole code again

//     int answ = 1;
//     for(int i =1; i<=b; i++){
//         answ = answ *a;
//     }
//     return answ;

// }
// int main(){
//     int c , d;
//     cin>> c >> d;

//     int answer = power(c, d);
//     cout<<"power is : "<<answer<< endl;
    

//     int a, b;
//     cin>>a >> b;
 
//     answer = power(a, b);
//     cout<<"power is: "<<answer<<endl;

//     return 0;
// }


// enev odd program

// bool isEven(int a){
//     if(a&1){
//         return 0;
//     }
//     else
//     return 1;
    
// }

// int main(){
//     int num;
//     cin>>num;

//     if(isEven(num)){
//         cout<<"number is even"<<endl;
//     }
//     else{
//         cout<<"number is odd";

//     }
// }

// ncr program
// int factorial(int n){
//     int fact = 1;
//     for(int i= 1; i<=n; i++){
//         fact = fact* i;
//     }
// }
// int nCr(int n , int r){
//     int numerator = factorial(n);
//     int denominator = factorial(r) * factorial(n-r);

//     return numerator/denominator;
// }
// int main(){
//     int n, r;
//     cin>>n >>r;

//     cout<<"Answer is: "<<nCr(n, r)<<endl;
//     return 0;
// }

//counting numbers

// void printCounting(int n){
//     //function body
//     for(int i=1; i<=n; i++ ){
//         cout<< i<< " ";
//     }
//     cout<<endl;

// }

// int main(){
//     int n;
//     cin>>n;

//     //function call
//     printCounting(n);

//     return 0;
// }

//prime number

// bool isPrime(int n){
//     for(int i=2; i<n; i++){
//         if(n%i == 0){
//             return 0;
//         }
//     }
//     return 1;
// }

// int main(){
//     int n;
//     cin>>n;
//     if(isPrime(n)){
//         cout<<"is a prime number"<<endl;
//     }
//     else {
//         cout<<"not a prime number";
//     }
// }

//function call
// void dummy (int n){
//     n++;
//     cout<<"n is "<<n <<endl;
// }

// int main(){
//     int n ;
//     cin>> n;

//     dummy(n);
//     cout<<"number is : "<< n;
//     return 0;
// }

//output questions

//question1

// void update(int a){
//     a= a/2;
// }

// int main(){
//     int a = 10;
//     update(a);
//     cout<<a<<endl;
// }


//question2

// int update(int a) {
//     a =-5;
//     return a;
// }

// int main(){
//     int a =15;
//     update(a);
//     cout<<a<<endl;
// }

//question 3
int update(int a){
    int ans = a * a;
    return ans;
}

int main(){
    int a = 14;
    a = update(a);
    cout<< a <<endl;
}

