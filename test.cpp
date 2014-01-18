#include<iostream>
#include "add.h"
#include "multiply.h"
#include "pow.h"


void areEquals(double a, double b)
{
	if(a!=b)
	{
		std:: cout<<"Expected was"<<a<<"but is"<<b<<std::endl;
	}
}

int main()
{
	areEquals(4,add(2,2));
	areEquals(8,multiply(4,2));
	areEquals(16,pow(2,4));
	std:: cout<<"Tests end";
	return 0;
}
