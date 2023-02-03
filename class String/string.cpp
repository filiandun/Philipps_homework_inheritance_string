#include "string.h"


BitString::BitString()
{
	//std::cerr << "BT CONSTRUCTOR" << std::endl;

	this->length = 0;
	this->array = nullptr;
}

BitString::BitString(const BitString& bstring)
{
	//std::cerr << "BT COPY CONSTRUCTOR" << std::endl;

	this->length = bstring.length;
	this->array = new bool[this->length + 1];

	for (size_t i = 0; i < bstring.length; ++i)
	{
		this->array[i] = bstring.array[i];
	}
	this->array[this->length] = '\0';
}

BitString::BitString(const String& bstring)
{
	this->length = bstring.length;
	this->array = new bool[this->length + 1];

	for (size_t i = 0; i < bstring.length; ++i)
	{
		this->array[i] = bstring.array[i];
	}
	this->array[this->length] = '\0';
}

BitString::BitString(bool* array, size_t length)
{
	//std::cerr << "BT (ARRAY) CONSTRUCTOR" << std::endl;

	this->length = length;
	this->array = new bool[this->length + 1];

	for (size_t i = 0; i < length; ++i)
	{
		this->array[i] = array[i];
	}
	this->array[this->length] = '\0';
}



void BitString::edit_sigh()
{
	this->array[0] = !this->array[0];
}