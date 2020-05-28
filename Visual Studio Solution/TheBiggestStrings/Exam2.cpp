#include <iostream>
#include <string>

#define SECOND_IS_GREATER -1
#define EQUAL 0
#define FIRST_IS_GREATER 1

int main()
{
	char szFirstString[100] = "";
	char szSecondString[100] = "";

	std::cin >> szFirstString;
	std::cin >> szSecondString;

	int nResult = strcmp(szFirstString, szSecondString);

	switch (nResult)
	{
	case SECOND_IS_GREATER:
		std::cout << szSecondString << std::endl;
		break;

	case EQUAL:
		std::cout << "The two strings are equal!" << std::endl;

	case FIRST_IS_GREATER:
		std::cout << szFirstString << std::endl;
		break;

	default:
		break;
	}
}