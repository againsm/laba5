#include <iostream>
#include <string>


int main()
{
	std::cout << "1 zadanie\n";
	int masiv[6] = { 1, 2, 3, 4, 5, 6 };
	char simv[] = { 'm' , 'a' , 's', 'i' , 'v' };
	int ogogo[2][2] = { {3,5},{1,2} };

	std::cout << "2 \n";
	std::string stroka = "stroka";
	char momo[] = "masiivvee";
	std::cout << stroka << "\n";
	std::cout << momo << "\n";

	std::cout << "3 \n";
	int ogogog[1][1][1] = { {{1}} };

	std::cout << "4 \n";
	for (int i = 0; i < std::size(masiv); i++)
	{
		std::cout << masiv[i] << "\n";
	}

	std::cout << "5 \n";
	for (int g = 0, i = 15; i > 0, g < 15; i--, g++)
	{
		std::cout << g << " : " << i << "\n";
	}

	std::cout << "6 \n";
	for (int i = 2; i <= 20; i++, i++)
	{
		std::cout << i << "--";
	}
	std::cout << "\n";
	for (int i = 1; i <= 20; i++)
	{
		if (i % 2 == 0)
		{
			std::cout << i << "--";
		}

	}

	std::cout << "\n7 zad\n";
	int elementi[200];
	for (int i = 1; i <= 200; i++)
	{
		elementi[i - 1] = i;
		//std::cout << elementi[i-1] << "\n";

	}

	for (int i = 2; i <= 200; i++)
	{
		if (elementi[i - 1] != 0)
		{
			std::cout << elementi[i - 1] << "\n";
			for (int g = i * i; g <= 200; g += i)
			{
				elementi[g - 1] = 0;
			}
		}


	}

	std::cout << "\n8 zad\n";
	int summ = 0;
	for (int g = 0; g < 15; g++, summ += g);
	std::cout << summ;
}

