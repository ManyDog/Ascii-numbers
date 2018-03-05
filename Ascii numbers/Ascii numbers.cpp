// Ascii numbers.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"


int main()
{//ASCII is a character encoding standard to provide a standard way for digital machines to encode characters. 
	//It is a mechanism to convert alphabets, digits, punctuation, and special characters into a special code (ASCII) that can understand (decode) by the digital systems.
	//When it was developed, it has 7 bits that allow to represent 128 unique characters and it was later extended to 8 bits that allow to represent 256 unique characters (including digits, special characters).
	char ch;
	//input
	printf_s("Give me input for ASCII:");
	scanf_s("%c", &ch);//use %c for characters
	//output
	printf_s("ASCII is = %d\n", ch);
    return 0;
}

