//Muhammad Rabia Abdelhameed Eltaher
//Section 2
#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	int choice1,choice2;
	double d1,d2,d3,area,vol;
	cout<<"Please choose what you want to calculate:"<<endl;
	cout<<"1- Area\n"<<"2- Volume"<<endl;
	wrongchoice1:
	cin>>choice1;
	if (choice1>2){
		cout<<"please choose 1 or 2"<<endl;
	    goto wrongchoice1;}
//Area calculations
	else if(choice1==1) {
		cout<<"Please choose a shape to calculate its area:"<<endl;
		cout<<"1- Square\n"<<"2- Rectangle\n"<<"3- Circle"<<endl;
		wrongchoice2:
		cin>>choice2;
		if(choice2>3){
			cout<<"Enter a number between 1 and 3:"<<endl;
		    goto wrongchoice2;}
		else if(choice2==1){
			cout<<"Please enter the dimension of the square\n";
			cin>>d1;
			area=d1*d1;
			cout<<"The area is:"<<area<<endl;}
		else if(choice2==2){
			cout<<"Please enter the dimensions of the rectangle\n";
			cin>>d1;
			cin>>d2;
			area=d1*d2;
			cout<<"The area is:"<<area<<endl;}
		else {
			cout<<"Please enter the dimension of the circle\n";
			cin>>d1;
			area=3.14*d1*d1;
			cout<<"The area is:"<<area<<endl;}}
//Volume calculations
	else if(choice1==2){
		cout<<"Please choose a shape to calculate its volume:"<<endl;
		cout<<"1- Cube\n"<<"2- Cuboid\n"<<"3- Cylinder\n"<<"4- Sphere\n";
		wrongchoice3:
		cin>>choice2;
		if(choice2>4){
			cout<<"Enter a number between 1 and 4:"<<endl;
			goto wrongchoice3;}
		else if(choice2==1){
			cout<<"Please enter the dimension of the cube\n";
			cin>>d1;
			vol=pow(d1,3);
			cout<<"The volume is:"<<vol<<endl;}
		else if(choice2==2){
			cout<<"Please enter the dimensions of the cuboid\n";
			cin>>d1;
			cin>>d2;
			cin>>d3;
			vol=d1*d2*d3;
			cout<<"The volume is:"<<vol<<endl;}
		else if(choice2==3){
			cout<<"Please enter the radius of the cylinder\n";
			cin>>d1;
			cout<<"Please enter the hight of the cylinder\n";
			cin>>d2;
			vol=3.14*d1*d1*d2;
			cout<<"The volume is:"<<vol<<endl;}
		else {
			cout<<"Please enter the radius of the sphere\n";
			cin>>d1;
			vol=(4.0/3.0)*3.14*pow(d1,3);
			cout<<"The volume is:"<<vol<<endl;}}
	system("pause");
	return 0;}




		
