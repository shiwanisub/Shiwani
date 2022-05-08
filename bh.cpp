#include<iostream>
#include<conio.h>
#define PIE 3.14
 using namespace std;
 class Circle
 {
 	int r;
 	public:
 		void area();
 		void circumference();
 		
 };
 void Circle::area()
 { 
  cout<<"Enter the radius:"<<endl;
  cin>>r;
  cout<<"The area is:"<<PIE*r*r<<endl;
   }
   
 void Circle::circumference()
 {
 	cout<<"The circumference of the circle is:"<<2*PIE*r<<endl;
 }
   int main()
   {
   	Circle x;
   	x.area();
   	x.circumference();
   	getch();
   }
