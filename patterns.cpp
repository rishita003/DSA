#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;

    int i = 1;
  
/*
    while(i<n){
        int j= 1;
        while(j<n){
            cout<<"*";
            j = j+ 1;
        }
        cout<<endl;
        i = i + 1;
    }

   // pattern 2

   while(i<n){
    int j = 0;
    while(j<n){
        cout<< i ;
        j = j+1;
    }
    cout<<endl;
    i = i + 1;
   }

  //pattern 3

while(i<n){
    int j = 0;
    while(j<n){
        cout<<j;
        j = j + 1;
    }
    cout<<endl;
    i = i + 1;
}

//pattern 4

while(i<n){
    int j = 0;
    while(j<n){
        cout<<(n-j+1);
        j = j + 1;
    }
    cout<<endl;
    i = i + 1;
}

// pattern 5

while(i<n){
    int j = 0;
    while(j<n){
        cout<<count;
        count = count + 1;
        j = j + 1;
    }
    cout<<endl;
    i = i+1;
}

//pattern 6
while(i<n){
    int j = 1;
    while(j<=i){
        cout<<"*";
        j = j+1;
    }
    cout<<endl;
    i = i + 1;
}

//pattern 7
while(i<n){
    int j = 1;
    while(j<=i){
        cout<<count<<" ";
        count = count +1;
        j = j+1;
    }
    cout<<endl;
    i = i + 1;
}

//pattern 8 HW _ FIND ANOTHER WAY TO DO IT

while(i<=n){
    int j = 1, val = i;
    while(j<=i){
        cout<<val;
        val = val + 1;
        j =  j+ 1;
    }
    cout<<endl;
    i = i+ 1;

}*/

/*
//pattern 9
while(i <= n){
    int j = 1;
    while(j<=i){
        cout<<(i - j + 1);
        j = j+ 1;
    }
    cout<<endl;
    i = i+1;
}
/*
//pattern 10

while(i<=n){
    int j = 1;
    while(j<=i){
        char ch = 'A' + i -1;
        cout<<ch;
        j = j + 1;
    }
    cout <<endl;
    i = i + 1;
}

// pattern 11

while(i<=n){
    int j = 1;
    while(j<=n){
        char ch = 'A' + j - 1;
        cout<< ch;
        j = j+1;
    }
    cout<<endl;
    i = i+ 1;
}

// pattern 12

 char count = 'A';
 while(i<=n){
    int j = 1;
    while(j<=n){
        cout<< count;
        count = count +1;
        j = j+1;
    }
    cout<<endl;
    i = i+1;
 }
 //pattern 13

while(i<=n){
    int j =1;
    
    while(j<=n){
        char ch = i + j - 2 + 'A';
        cout<< ch;
        j = j+1;
    }
    cout<<endl;
    i = i + 1;
}

//pattern 14

while(i <= n){
    int j = 1;
    while(j<=i){
        char ch = 'A' + i -1;
        cout<<ch;
        j = j+1;
    }
    cout<<endl;
    i = i +1;
}*/

//pattern 15 
/*  
while(i<=n){
    int j = 1;
    char ch = 'A';
    while(j<=i){ 
        cout<<ch;               //doubt
        ch = ch + 1;
        j = j + 1;
    }
    cout<<endl;
    i = i + 1;
}

//pattern 16
while(i<=n){
    int j = 1;
    char ch = 'A' + i + j - 2;
    while(j<=i){
        cout<<ch;
        ch  = ch + 1;
        j = j+ 1;
    }
    cout<<endl;
    i = i+ 1;
}

//pattern 17
while(i<=n){
    int j = 1;
    char ch = 'A' + n - i;
    while(j<=i){
        cout<<ch;
        ch = ch + 1;
        j =  j + 1;
    }
    cout<<endl;
    i = i + 1;
}

//pattern 18

while(i<=n){

    int space = n - i;
    while(space){
    cout<<" ";
    space = space - 1;
    }    
    int j = 1;
    while(j<=i){
        cout<<"*";
        j = j+1;
    }
    
    cout<<endl;
    i = i+ 1;
}*/

while(i<=n){
    int j = 1, star = n - i;
   
    while(j<=n){ 
        cout<<"*";
        star = star + 1;
        j = j+1;
    }
    cout<<endl;
    i = i+ 1;
}
}

