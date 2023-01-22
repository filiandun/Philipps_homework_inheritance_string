#pragma once
#include <iostream>

class String
{
public:
	String();
	String(const String& string);
	String(char* string, unsigned long long int length);

	~String();

private:
	unsigned long long int length;
	char* string;

public:
	int get_length();
	void clear_string();

	String operator=(String& string);

	String operator+(String& string);
	String operator+=(String& string);

	bool operator==(String& string);
	bool operator!=(String& string);

	friend std::ostream& operator<<(std::ostream& output, const String& string);
};

