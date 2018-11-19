#include <iostream>

namespace power
{
int iterative(int q, int p)
	{
	int f=q;
	if (p>1)
		{
			
			for (int x =0; x>p; x--)
				{
					q= q*f;
				}
		if (p==1)
			{
				std::cout<< "Das Ergebnis ist : "+p<< std::endl;
			}
		if(p==0)
			{
				std::cout<<1<< std::endl;
			}
		}	
	}
	/*int rekursiv(int q, int p)
	{
		if (n>1)
		{
			return q*rekursiv=(q, p-1);
		}
		if (p==1)
		{
			std::cout<< "Das Ergebnis ist 1"<< std::endl;
		}
		if(p==0)
		{
			std::cout<<1<< std::endl;
		}
	}
	return q; */
}

//implementieren: 
	


{


int main(int argc, char** argv)
{	
	int q,p;
	std::cout<< " Gibe eine Zahl ein: "<< std::endl;
	std::cin>> q;
	std::cout<< "Gib den Exponenten ein: "<< std::endl;
	std::cin>> p;
	
	std::cout<< power::iterativ(q,p);
	//std::cout<< power::rekursiv(q,p);
}