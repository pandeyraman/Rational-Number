/* 
* C program to implement rational number
* Author : Raman Pandey
* Date : 06/19/2016
* Ref : Data Structure using c and c++
*/

#include<stdio.h>
#include<stdlib.h>

typedef struct{
	int numerator;
	int denomerator;
	
}rational;

rational makerational(int,int);
rational add_rational(rational,rational);
rational mul_rational(rational,rational);
rational equal_rational(rational,rational);

int main()
{
	rational r1 = makerational(1,2);	
	rational r2 = makerational (2,9);
	rational sum = add_rational(r1,r2);
	rational product = mul_rational(r1,r2);
	rational equality = equal_rational(r1,r2);
	printf("Sum = %d/%d\n",sum.numerator,sum.denomerator);
	printf("Product = %d/%d",product.numerator,product.denomerator);

}
//makerational	
	rational makerational(int a, int b)
	{
	if(b==0)
	{
		exit(0);
	}
	else
	{
		rational r_number;
		r_number.numerator = a;
		r_number.denomerator = b;
		return r_number;	
	}
	
}
//addition
	rational add_rational( rational r1, rational r2)
	{
	
		rational result;
		result.numerator= ((r1.numerator*r2.denomerator)+(r2.numerator*r1.denomerator));
		result.denomerator=(r1.denomerator*r2.denomerator);
		return result;
	}
//multiplication
	rational mul_rational(rational r1, rational r2)
	{
		rational result;
		result.numerator= (r1.numerator*r2.numerator);
		result.denomerator=(r1.denomerator*r2.denomerator);
		return result;
	}
//equality
	rational equal_rational(rational r1, rational r2)
	{
		rational result;
		result.numerator= (r1.numerator*r2.denomerator);
		result.denomerator=(r1.denomerator*r2.numerator);
		if(result.numerator==result.denomerator)
		{
			printf("r1 is equal to r2\n");
		}
		else
		{
			printf("r1 is not equal to r2\n");
		}
		return result;
	}


