// Practica6CarlosHD.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "IFileUtils.h"


int main()
{
	char str[3] = "it";

	FileIdentifier * fileText = OpenFile("text.txt", FileOpenMode::ReadOnly);
	
	if (fileText)
	{
		unsigned int iAppearances = CountStringAppearances(str, fileText);

		printf("\n Number of appearances of the string '%s': %d", str, iAppearances);

		int fileClosed = CloseFile(fileText);
		printf("\n\n Result of CloseFile: %d", fileClosed);
	}
	else
		printf("\n\nFile couldn't be opened");

	FileIdentifier * fileIntegers = OpenFile("integers.txt", FileOpenMode::ReadOnly);

	if (fileIntegers)
	{
		int iSumIntegers = SumCommaSeparatedIntegers(fileIntegers);

		printf("\n Sum of the integers: %d", iSumIntegers);

		int fileClosed = CloseFile(fileIntegers);
		printf("\n\n Result of CloseFile: %d", fileClosed);
	}
	else
		printf("\n\nFile couldn't be opened");

	printf("\n\n Press Enter to quit...");
	getchar();

    return 0;
}

