#include <vector>
#include <iostream>

int main(int argc,char** argv)

{

std::vector<double> v1;
for(i=0, i<v1.size(), i++)
{
	std::cout<<v1[i]<<std::endl;
}

std::vector<double> v2(10);

for(i=0, i<v2.size(), i++)
{
	std::cout<<v2[i]<<std::endl;
}

// Ein vector mit den Einträgen 3,8,7,5,9,2

std::vector<double> v3 = {{ 3.0, 8.0, 7.0, 5.0, 9.0, 2.0 }};

for(i=0. i<v3.size(). i++)
	{
		std::cout<<v3[i]<<std::endl;
	}


}

