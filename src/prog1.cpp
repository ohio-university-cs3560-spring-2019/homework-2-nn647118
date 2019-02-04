// Nathan Nelson CS3560 HWK 01 1/28/2019

#include "prog1.h"

// replace a string with another string within an input file
void replaceString(std::string stringToReplace, std::string replacementString)
{
	std::string fileString;
	std::string line;
	std::size_t found;
	
	// reading the input file and placing each line into a combined string called fileString
	while (!std::cin.eof())
	{
		std::getline(std::cin, line);
		if (fileString != "")
		{
			fileString = fileString + "\n" + line;
		}
		else
		{
			fileString += line;
		}
	}
	
	// using string class find and replace to search fileString and replace each string
	// continues until the string to replace is no longer found
	found = fileString.find(stringToReplace);
	while (found != std::string::npos)
	{
		fileString.replace(found, stringToReplace.length(), replacementString);
		found = fileString.find(stringToReplace);
	}
	
	std::cout << fileString;
}