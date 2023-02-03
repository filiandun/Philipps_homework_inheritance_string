#pragma once
#include <iostream>



template<typename T>
class String
{
public:
	String()
	{
		//std::cerr << "CONSTRUCTOR" << std::endl;

		this->length = 0;
		this->array = nullptr;
	}

	String(const String& string)
	{
		//std::cerr << "COPY CONSTRUCTOR" << std::endl;

		this->length = string.length;
		this->array = new T[this->length + 1];

		for (size_t i = 0; i < string.length; ++i)
		{
			this->array[i] = string.array[i];
		}
		this->array[this->length] = '\0';
	}

	String(T* array, size_t length)
	{
		//std::cerr << "(ARRAY) CONSTRUCTOR" << std::endl;

		this->length = length;
		this->array = new T[this->length + 1];

		for (size_t i = 0; i < length; ++i)
		{
			this->array[i] = array[i];
		}
		this->array[this->length] = '\0';
	}


	virtual ~String()
	{
		//std::cerr << "DESTRUCTOR" << std::endl;

		delete[] this->array;
	}

public:
	size_t length;
	T* array;

public:
	size_t get_length()
	{
		return this->length;
	}

	void clear_string()
	{
		this->length = 0;
		delete[] this->array;
		this->array = new T[this->length + 1] {'\0'};
	}



	String operator=(String& string)
	{
		this->length = string.length;

		delete[] this->array;
		this->array = new T[this->length + 1];

		for (size_t i = 0; i < string.length; ++i)
		{
			this->array[i] = string.array[i];
		}
		this->array[this->length] = '\0';

		return *this;
	}




	String operator+(String& string) 
	{
		String addition_string(this->array, this->length + string.length);

		for (size_t i = this->length; i < addition_string.length; ++i)
		{
			addition_string.array[i] = string.array[i - this->length];
		}
		addition_string.array[addition_string.length] = '\0';

		return addition_string;
	}

	String operator+=(String& string)
	{
		String temp_string(*this + string);
		*this = temp_string;

		return *this;
	}



	bool operator==(String& string)
	{
		if (this->length == string.length)
		{
			for (size_t i = 0; i < this->length; ++i)
			{
				if (this->array[i] != string.array[i])
				{
					return false;
				}
			}
			return true;
		}
		return false;
	}

	bool operator!=(String& string)
	{
		if (this->length == string.length)
		{
			for (size_t i = 0; i < this->length; ++i)
			{
				if (this->array[i] != string.array[i])
				{
					return true;
				}
			}
			return false;
		}
		return true;
	}




	friend std::ostream& operator<<(std::ostream& output, const String& string)
	{
		for (size_t i = 0; i < string.length; ++i)
		{
			output << string.array[i] << " ";
		}
		output << std::endl;

		return output;
	}
};



class BitString : public String<bool>
{
public:
	BitString();
	BitString(const BitString& bstring);
	BitString(const String& bstring); // этот конструктор я добавил для operator=, так как он не хотел приравнивать String<bool> к Bitstring при operator+, который возвращает String<bool>
	BitString(bool* array, size_t length);

	~BitString() = default;

public:
	void edit_sigh(); // изменение знака числа
};

