#include "string.h"

String::String()
{
	this->length = 0;
	this->string = nullptr;
}

String::String(const String& string)
{
	this->length = string.length;
	this->string = new char[this->length + 1];

	for (unsigned long long int i = 0; i < string.length; ++i)
	{
		this->string[i] = string.string[i];
	}
	this->string[this->length] = '\0';
}

String::String(char* string, unsigned long long int length)
{
	this->length = length;
	this->string = new char[this->length + 1];

	for (unsigned long long int i = 0; i < length; ++i)
	{
		this->string[i] = string[i];
	}
	this->string[this->length] = '\0';
}


String::~String()
{
	delete[] this->string;
}



int String::get_length()
{
	return this->length;
}

void String::clear_string()
{
	delete[] this->string;
	this->length = 0;
	this->string = new char[this->length + 1] {'\0'};
}



String String::operator=(String& string)
{
	this->length = string.length;

	delete[] this->string;
	this->string = new char[this->length + 1];

	for (unsigned long long int i = 0; i < string.length; ++i)
	{
		this->string[i] = string.string[i];
	}
	this->string[this->length] = '\0';

	return *this;
}

String String::operator+(String& string)
{
	String addition_string(this->string, this->length + string.length);
	
	for (unsigned long long int i = this->length; i < addition_string.length;++i)
	{
		addition_string.string[i] = string.string[i - this->length];
	}
	addition_string.string[addition_string.length] = '\0';

	return addition_string;
}

String String::operator+=(String& string)
{
	//String temp_string(this->string, this->length + string.length);
	//*this = temp_string;

	//for (unsigned long long int i = this->length - string.length; i < this->length; ++i)
	//{
	//	this->string[i] = string.string[i - (this->length - string.length)];
	//}
	//this->string[this->length] = '\0';

	String temp_string(*this + string);
	*this = temp_string;

	return *this;
}

bool String::operator==(String& string)
{
	if (this->length == string.length)
	{
		for (unsigned long long int i = 0; i < this->length; ++i)
		{
			if (this->string[i] != string.string[i])
			{
				return false;
			}
		}
		return true;
	}
	return false;
}

bool String::operator!=(String& string)
{
	if (this->length == string.length)
	{
		for (unsigned long long int i = 0; i < this->length; ++i)
		{
			if (this->string[i] != string.string[i])
			{
				return true;
			}
		}
		return false;
	}
	return true;
}

std::ostream& operator<<(std::ostream& output, const String& string)
{
	for (unsigned long long int i = 0; i < string.length; ++i)
	{
		output << string.string[i]  << " ";
	}
	output << std::endl;

	return output;
}
