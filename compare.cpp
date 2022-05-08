#include<iostream>
#include<conio.h>
 using namespace std;
 
 class Compare
 {
 	int a,b;
 	public:
 		void inputinfo();
 		void displayinfo();
 		void compare(Compare A,Compare B);
 };
 void Compare::inputinfo()
 {
 	cout<<"Enter the value of a and b:"<<endl;
 	cin>>a>>b;
 }
 void Compare::displayinfo()
 { 
    cout<<"a="<<a<<endl;
    cout<<"b="<<b<<endl;
 }
 void Compare::compare(Compare A,Compare B)
 {
 	if(A.a>B.b){
 		cout<<A.a<<" is maximum"<<endl;
	 }
	 else{
	 	cout<<B.b<<" is maximum"<<endl;
	 }
 }
 int main()
 {
  Compare C1,C2,C3;
  C1.inputinfo();
  C1.displayinfo();
  C3.compare(C1,C2);
  getch();
  return 0;	
 }
