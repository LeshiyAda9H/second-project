#include <iostream>
#include <cmath>

int main()
{
	
	
	for (int i = 11; i >= -10; i--) 
	{
		double ii = i * 0.15;
		for (int j = -20; j <= 21; j++)
		{
			double jj = j * 0.075;
			if ((pow(((pow(jj,2) + pow(ii,2)) - 1), 3) - (pow(jj,2) * pow(ii,3))) <= 0)
			{
				std::cout << "*";
			}
			else
			{
				std::cout << ".";
			}
			
		}
		std::cout << std::endl;
	}
}
