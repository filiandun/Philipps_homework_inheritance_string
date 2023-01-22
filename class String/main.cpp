#include <iostream>
#include "string.h"

int main()
{
    setlocale(LC_ALL, "rus");

    unsigned long long int string_length_1 = 5;
    char* string_1 = new char[string_length_1 + 1] { 'a', 'b', 'c', 'd', 'e', '\0' };

    unsigned long long int string_length_2 = 5;
    char* string_2 = new char[string_length_2 + 1] { 'A', 'B', 'C', 'D', 'E', '\0' };

    unsigned long long int string_length_3 = 5;
    char* string_3 = new char[string_length_3 + 1] { 'q', 'w', 'e', 'r', 't', '\0' };

    unsigned long long int string_length_4 = 6;
    char* string_4 = new char[string_length_4 + 1] { 'a', 'b', 'c', 'd', 'e', 'f', '\0' };



// КОПИРУЮЩИЙ КОНСТРУКТОР
    std::cout << "КОПИРУЮЩИЙ КОНСТРУКТОР: " << std::endl;

    String string_for_copy_constructor_1(string_1, string_length_1);
    String string_for_copy_constructor_2(string_for_copy_constructor_1);

    std::cout << "исходаня строка 1: " << string_for_copy_constructor_1;
    std::cout << "скопированная конструктором строка 2: " << string_for_copy_constructor_2 << std::endl << std::endl;



// ОПЕРАТОР=
    std::cout << "ПЕРЕГРУЗКА ОПЕРАТОРА=: " << std::endl;

    String string_for_assignment_operator_1(string_1, string_length_1);
    String string_for_assignment_operator_2(string_2, string_length_2);

    std::cout << "строка 1 до: " << string_for_assignment_operator_1;
    std::cout << "строка 2 до: " << string_for_assignment_operator_2 << std::endl;

    string_for_assignment_operator_1 = string_for_assignment_operator_2;

    std::cout << "строка 1 после: " << string_for_assignment_operator_1;
    std::cout << "строка 2 после: " << string_for_assignment_operator_2 << std::endl << std::endl;



// ОПЕРАТОР+
    std::cout << "ПЕРЕГРУЗКА ОПЕРАТОРА+: " << std::endl;

    String string_for_addition_operator_1(string_3, string_length_3);
    String string_for_addition_operator_2(string_4, string_length_4);

    std::cout << "строка 1 до: " << string_for_addition_operator_1;
    std::cout << "строка 2 до: " << string_for_addition_operator_2 << std::endl;

    String string_for_addition_operator_3 = string_for_addition_operator_1 + string_for_addition_operator_2;

    std::cout << "строка 1 после: " << string_for_addition_operator_1;
    std::cout << "строка 2 после: " << string_for_addition_operator_2;
    std::cout << "строка 3 после: " << string_for_addition_operator_3 << std::endl << std::endl;



// ОПЕРАТОР+=
    std::cout << "ПЕРЕГРУЗКА ОПЕРАТОРА+=: " << std::endl;

    String string_for_addition_assignment_operator_1(string_2, string_length_2);
    String string_for_addition_assignment_operator_2(string_3, string_length_3);

    std::cout << "строка 1 до: " << string_for_addition_assignment_operator_1;
    std::cout << "строка 2 до: " << string_for_addition_assignment_operator_2 << std::endl;

    string_for_addition_assignment_operator_2 += string_for_addition_assignment_operator_1;

    std::cout << "строка 1 после: " << string_for_addition_assignment_operator_1;
    std::cout << "строка 2 после: " << string_for_addition_assignment_operator_2 << std::endl << std::endl;



// ОПЕРАТОР==
    std::cout << "ПЕРЕГРУЗКА ОПЕРАТОРА==: " << std::endl;

    String string_for_equal_operator_1(string_1, string_length_1);
    String string_for_equal_operator_2(string_2, string_length_2);

    std::cout << "исходная строка 1: " << string_for_equal_operator_1;
    std::cout << "исходная строка 2: " << string_for_equal_operator_2 << std::endl;

    if (string_for_equal_operator_1 == string_for_equal_operator_2)
    {
        std::cout << "строки равны" << std::endl << std::endl << std::endl;
    }
    else
    {
        std::cout << "строки не равны" << std::endl << std::endl << std::endl;
    }



// ОПЕРАТОР==
    std::cout << "ПЕРЕГРУЗКА ОПЕРАТОРА!=: " << std::endl;

    String string_for_equal_operator_3(string_1, string_length_1);
    String string_for_equal_operator_4(string_1, string_length_1);

    std::cout << "исходная строка 3: " << string_for_equal_operator_3;
    std::cout << "исходная строка 4: " << string_for_equal_operator_4 << std::endl;

    if (string_for_equal_operator_3 != string_for_equal_operator_4)
    {
        std::cout << "строки не равны" << std::endl << std::endl << std::endl;
    }
    else
    {
        std::cout << "строки равны" << std::endl << std::endl << std::endl;
    }



// ФУНКЦИИ GET_LENGTH() И CLEAR_STRING()
    std::cout << "ФУНКЦИИ GET_LENGTH() И CLEAR_STRING(): " << std::endl;

    String string_for_func(string_2, string_length_2);
    std::cout << "исходная строка: " << string_for_func;
    std::cout << "длина строки: " << string_for_func.get_length() << std::endl;

    string_for_func.clear_string();
    std::cout << "строка после очистки: " << string_for_func;
}
