#include <iostream>
#include <vector>

int main(int argc, char** argv)
{
	std::vector<int> v1;
	for (int entry : v1)
	{
		std::cout << entry << std::endl;
	}
	//v1 gibt keine Werte aus, da der Vector keine Werte enthält bzw die leere Menge enthält
	std::vector<int> v2(10);
	for (int entry : v2)
	{
		std::cout << entry << std::endl;
	}
	std::vector<int> v3 = { { 3, 8, 7, 5, 9, 2 } };
	for (int entry : v3)
	{
		std::cout << entry << std::endl;
	}
}

