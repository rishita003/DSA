#include<iostream>
using namespace std;

int main(){
  /*
  cout<<"Hello World!"<< endl;

int a = 1;
  cout<<a<<endl;

  char b = 'v';   //only soingle character is stored in single inverted . 
  cout<<b<<endl;

  bool bl = true;
  cout<<bl<<endl;

  float f = 1.2;
  cout<<f<<endl;

  double d = 1.23;
  cout<<d<<endl;

  int size = sizeof(bl);
  cout<<"Size of bl is :"<<size<<endl;
}
*/

//typecasting
int a = 'a';
cout<<a<<endl;

  float s = 4.5;
  char g = char(s);
  cout<<g<<endl;   // first it is converted into  int then it is converted into char. as ASCII value 4 corresponds to a non - printable character called 'End of transmission' so it won't produce any output.


  char ch = 98;
  cout<<ch<<endl;

  int d = true;
  cout<<d<<endl;

 // char w = 123456;
  //cout<<w<<endl;

  unsigned int r = -123456;
  cout<<r<<endl;
}