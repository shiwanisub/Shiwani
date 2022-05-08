#include<iostream>
#include<conio.h>
using namespace std;
class Rational
{
	int num,den;
	public:
		Rational();
		Rational(int,int);
		Rational(Rational &r);
		int displayRational();
		
};
Rational::Rational()
{
	num=2;
	den=5;
}
Rational::Rational(int n,int d)
{
	num=n;
	den=d;
}
Rational::Rational(Rational &r)
{
	num=r.num;
	den=r.den;
 }
 int Rational::displayRational() 
 {
 	cout<<"Rational number is:"<<num<<"/"<<den<<endl;
  } 
  int main()
  {
  	int num,den;
  	cout<<"Enter the value of numerator and denominator:"<<endl;
  	cin>>num>>den;
  	Rational R;
  	Rational R1(num,den),R2(R1);
  	R.displayRational();
  	R1.displayRational();
  	R2.displayRational();
  	getch();
  	return 0;
  }
