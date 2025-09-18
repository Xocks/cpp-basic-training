#include <iostream>
#include <vector> 
#include <cmath>
using namespace std;

	bool isEven(int num)
	{
		return num %2==0;
	}	
    double power (double x,int n)
	{
		if (n==0)
		{
			cout<<"1"<<endl;	
		}
		else
		{	double result =1;
			for (int i=1;i<=n;++i)
			{
				result *= x;
			}
			return result;
		}	
	}
	int countDigits(int num)
	{
		int mid;
		int time = 0;
		for (int i = 1; 1; i *= 10)
		{
			mid = num / i;
			time += 1;
			if (num == 0)return 1;
			else if (mid < 1)
			{
				return time - 1;
				break;
			}
		}
	}
	int fibonacci (int n)
	{
		if (n<=2)return 1;
		else
		{
			vector<int> farr(n);
			farr[n]=fibonacci(n-1)+fibonacci(n-2); 
			return farr[n];
		}
	}

	bool isPrime (int num)
	{
		if (num==1)return 0; 
		else if (num==2)return 1;
		for (int i = 2;i<num;++i )
		{
			bool isnot =num %i;
			if(isnot==0)
			{
			if (i==num)return 1;
			else return 0;
			
			}
		}
	}

	
	int main ()
	{
	cout <<isPrime(2) ;

	
	}
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
