#include<iostream>
#include<conio.h>
#include<stdlib.h>
class Box
{
	float *p;
	public:
		   Box()
		   {
		   	p=new float[3];
		   }
		   int inputData()
		   {
		   	cout<<"Enter the length,breadth and height of a box:"<< endl;
		   	cin>>(*p)>>(*(p+1))>>(*(p+2));
		   }
		   float calculate()
		   {
		   	 return((*p)*(*(p+1))*(*(p+2)));
		   }
	};
		   
~Box()
{
	delete p;
	cout<<"Memory deleted"<<endl;
 }
int main(){
	Box B;
	B.inputData();
	cout<<"Volume of box is:"<<B.calculate()<<endl;
}
getch();
}		   		   

