#include <iostream>
#include "string.h"

int main()
{
    setlocale(LC_ALL, "rus");

/*
* МНЕ НЕ ПОНРАВИЛОСЬ ЗАДАНИЕ, ПОЭТОМУ Я РЕШИЛ ЕГО ЧУТЬ ИЗМЕНИТЬ, НО СМЫСЛ ОСТАЛСЯ ТОТ ЖЕ:
*
* Смысл наследовать класс, где придётся абсолютно все поля и методы заново писать? Так как если класс String будет не шаблонным, а, допустим, char,
* то в производном классе BitString все поля и методы придётся писать уже для bool, так как наследуемые методы и поля писались для char. 
* Ну, или придётся сделать прозводный класс BitString не bool, а char, но это бред какой-то.
* 
* 
* Ниже, что закомментировано, это просто проверка работы класса String, она ничем не отличается от проверки работы BitString, которая ещё ниже и не закомментирована.
*/


//    size_t string_length_1 = 5;
//    int* string_1 = new int[string_length_1 + 1] { 1, 2, 3, 4, 5, '\0' };
//
//    size_t string_length_2 = 5;
//    int* string_2 = new int[string_length_2 + 1] { 6, 7, 8, 9, 0, '\0' };
//
//    size_t string_length_3 = 5;
//    int* string_3 = new int[string_length_3 + 1] { 10, 20, 30, 40, 50, '\0' };
//
//    size_t string_length_4 = 6;
//    int* string_4 = new int[string_length_4 + 1] { 5, 754, 84, 1, 6735, 15, '\0' };
//
//
//
//// КОПИРУЮЩИЙ КОНСТРУКТОР
//    std::cout << "КОПИРУЮЩИЙ КОНСТРУКТОР: " << std::endl;
//
//    String<int> string_for_copy_constructor_1(string_1, string_length_1);
//    String<int> string_for_copy_constructor_2(string_for_copy_constructor_1);
//
//    std::cout << "исходная строка 1: " << string_for_copy_constructor_1;
//    std::cout << "скопированная конструктором строка 2: " << string_for_copy_constructor_2 << std::endl << std::endl;
//
//
//
//// ОПЕРАТОР=
//    std::cout << "ПЕРЕГРУЗКА ОПЕРАТОРА=: " << std::endl;
//
//    String<int> string_for_assignment_operator_1(string_1, string_length_1);
//    String<int> string_for_assignment_operator_2(string_2, string_length_2);
//
//    std::cout << "строка 1 до: " << string_for_assignment_operator_1;
//    std::cout << "строка 2 до: " << string_for_assignment_operator_2 << std::endl;
//
//    string_for_assignment_operator_1 = string_for_assignment_operator_2;
//
//    std::cout << "строка 1 после: " << string_for_assignment_operator_1;
//    std::cout << "строка 2 после: " << string_for_assignment_operator_2 << std::endl << std::endl;
//
//
//
//// ОПЕРАТОР+
//    std::cout << "ПЕРЕГРУЗКА ОПЕРАТОРА+: " << std::endl;
//
//    String<int> string_for_addition_operator_1(string_3, string_length_3);
//    String<int> string_for_addition_operator_2(string_4, string_length_4);
//
//    std::cout << "строка 1 до: " << string_for_addition_operator_1;
//    std::cout << "строка 2 до: " << string_for_addition_operator_2 << std::endl;
//
//    String<int> string_for_addition_operator_3 = string_for_addition_operator_1 + string_for_addition_operator_2;
//
//    std::cout << "строка 1 после: " << string_for_addition_operator_1;
//    std::cout << "строка 2 после: " << string_for_addition_operator_2;
//    std::cout << "строка 3 после: " << string_for_addition_operator_3 << std::endl << std::endl;
//
//
//
//// ОПЕРАТОР+=
//    std::cout << "ПЕРЕГРУЗКА ОПЕРАТОРА+=: " << std::endl;
//
//    String<int> string_for_addition_assignment_operator_1(string_2, string_length_2);
//    String<int> string_for_addition_assignment_operator_2(string_3, string_length_3);
//
//    std::cout << "строка 1 до: " << string_for_addition_assignment_operator_1;
//    std::cout << "строка 2 до: " << string_for_addition_assignment_operator_2 << std::endl;
//
//    string_for_addition_assignment_operator_1 += string_for_addition_assignment_operator_2;
//
//    std::cout << "строка 1 после: " << string_for_addition_assignment_operator_1;
//    std::cout << "строка 2 после: " << string_for_addition_assignment_operator_2 << std::endl << std::endl;
//
//
//
//// ОПЕРАТОР==
//    std::cout << "ПЕРЕГРУЗКА ОПЕРАТОРА==: " << std::endl;
//
//    String<int> string_for_equal_operator_1(string_1, string_length_1);
//    String<int> string_for_equal_operator_2(string_2, string_length_2);
//
//    std::cout << "исходная строка 1: " << string_for_equal_operator_1;
//    std::cout << "исходная строка 2: " << string_for_equal_operator_2 << std::endl;
//
//    if (string_for_equal_operator_1 == string_for_equal_operator_2)
//    {
//        std::cout << "строки равны" << std::endl << std::endl << std::endl;
//    }
//    else
//    {
//        std::cout << "строки не равны" << std::endl << std::endl << std::endl;
//    }
//
//
//
//// ОПЕРАТО!=
//    std::cout << "ПЕРЕГРУЗКА ОПЕРАТОРА!=: " << std::endl;
//
//    String<int> string_for_equal_operator_3(string_1, string_length_1);
//    String<int> string_for_equal_operator_4(string_1, string_length_1);
//
//    std::cout << "исходная строка 3: " << string_for_equal_operator_3;
//    std::cout << "исходная строка 4: " << string_for_equal_operator_4 << std::endl;
//
//    if (string_for_equal_operator_3 != string_for_equal_operator_4)
//    {
//        std::cout << "строки не равны" << std::endl << std::endl << std::endl;
//    }
//    else
//    {
//        std::cout << "строки равны" << std::endl << std::endl << std::endl;
//    }
//
//
//
//// ФУНКЦИИ GET_LENGTH() И CLEAR_STRING()
//    std::cout << "ФУНКЦИИ GET_LENGTH() И CLEAR_STRING(): " << std::endl;
//
//    String<int> string_for_func(string_2, string_length_2);
//    std::cout << "исходная строка: " << string_for_func;
//    std::cout << "длина строки: " << string_for_func.get_length() << std::endl << std::endl;
//
//    string_for_func.clear_string();
//    std::cout << "строка после очистки: " << string_for_func;
//    std::cout << "длина строки после очистки: " << string_for_func.get_length() << std::endl;











    size_t bit_string_length_1 = 5;
    bool* bit_string_1 = new bool[bit_string_length_1 + 1] { 1, 0, 1, 1, 0, '\0' };

    size_t bit_string_length_2 = 2;
    bool* bit_string_2 = new bool[bit_string_length_2 + 1] { 0, 1, '\0' };

    size_t bit_string_length_3 = 3;
    bool* bit_string_3 = new bool[bit_string_length_3 + 1] { 1, 0, 0, '\0' };

    size_t bit_string_length_4 = 4;
    bool* bit_string_4 = new bool[bit_string_length_4 + 1] { 1, 0, 1, 0, '\0' };



// КОПИРУЮЩИЙ КОНСТРУКТОР
    std::cout << "КОПИРУЮЩИЙ КОНСТРУКТОР: " << std::endl;

    BitString bit_string_for_copy_constructor_1(bit_string_2, bit_string_length_2);
    BitString bit_string_for_copy_constructor_2(bit_string_for_copy_constructor_1);

    std::cout << "исходная битовая строка 1: " << bit_string_for_copy_constructor_1;
    std::cout << "скопированная конструктором битовая строка 2: " << bit_string_for_copy_constructor_2 << std::endl << std::endl;



// ОПЕРАТОР=
    std::cout << "ПЕРЕГРУЗКА ОПЕРАТОРА=: " << std::endl;

    BitString bit_string_for_assignment_operator_1(bit_string_1, bit_string_length_1);
    BitString bit_string_for_assignment_operator_2(bit_string_2, bit_string_length_2);

    std::cout << "битовая строка 1 до: " << bit_string_for_assignment_operator_1;
    std::cout << "битовая строка 2 до: " << bit_string_for_assignment_operator_2 << std::endl;

    bit_string_for_assignment_operator_1 = bit_string_for_assignment_operator_2;

    std::cout << "битовая строка 1 после: " << bit_string_for_assignment_operator_1;
    std::cout << "битовая строка 2 после: " << bit_string_for_assignment_operator_2 << std::endl << std::endl;



// ОПЕРАТОР+
    std::cout << "ПЕРЕГРУЗКА ОПЕРАТОРА+: " << std::endl;

    BitString bit_string_for_addition_operator_1(bit_string_1, bit_string_length_1);
    BitString bit_string_for_addition_operator_2(bit_string_2, bit_string_length_2);

    std::cout << "битовая строка 1 до: " << bit_string_for_addition_operator_1;
    std::cout << "битовая строка 2 до: " << bit_string_for_addition_operator_2 << std::endl;

    BitString bit_string_for_addition_operator_3 = bit_string_for_addition_operator_1 + bit_string_for_addition_operator_2;

    std::cout << "битовая строка 1 после: " << bit_string_for_addition_operator_1;
    std::cout << "битовая строка 2 после: " << bit_string_for_addition_operator_2;
    std::cout << "битовая строка 3 после: " << bit_string_for_addition_operator_3 << std::endl << std::endl;



// ОПЕРАТОР+=
    std::cout << "ПЕРЕГРУЗКА ОПЕРАТОРА+=: " << std::endl;

    BitString bit_string_for_addition_assignment_operator_1(bit_string_1, bit_string_length_1);
    BitString bit_string_for_addition_assignment_operator_2(bit_string_2, bit_string_length_2);

    std::cout << "битовая строка 1 до: " << bit_string_for_addition_assignment_operator_1;
    std::cout << "битовая строка 2 до: " << bit_string_for_addition_assignment_operator_2 << std::endl;

    bit_string_for_addition_assignment_operator_1 += bit_string_for_addition_assignment_operator_2;

    std::cout << "битовая строка 1 после: " << bit_string_for_addition_assignment_operator_1;
    std::cout << "битовая строка 2 после: " << bit_string_for_addition_assignment_operator_2 << std::endl << std::endl;



// ОПЕРАТОР==
    std::cout << "ПЕРЕГРУЗКА ОПЕРАТОРА==: " << std::endl;

    BitString bit_string_for_equal_operator_1(bit_string_4, bit_string_length_4);
    BitString bit_string_for_equal_operator_2(bit_string_2, bit_string_length_2);

    std::cout << "исходная битовая строка 1: " << bit_string_for_equal_operator_1;
    std::cout << "исходная битовая строка 2: " << bit_string_for_equal_operator_2 << std::endl;

    if (bit_string_for_equal_operator_1 == bit_string_for_equal_operator_2)
    {
        std::cout << "битовые строки равны" << std::endl << std::endl << std::endl;
    }
    else
    {
        std::cout << "битовые строки не равны" << std::endl << std::endl << std::endl;
    }



// ОПЕРАТОР!=
    std::cout << "ПЕРЕГРУЗКА ОПЕРАТОРА!=: " << std::endl;

    BitString bit_string_for_equal_operator_3(bit_string_1, bit_string_length_1);
    BitString bit_string_for_equal_operator_4(bit_string_1, bit_string_length_1);

    std::cout << "исходная битовая строка 3: " << bit_string_for_equal_operator_3;
    std::cout << "исходная битовая строка 4: " << bit_string_for_equal_operator_4 << std::endl;

    if (bit_string_for_equal_operator_3 != bit_string_for_equal_operator_4)
    {
        std::cout << "битовые строки не равны" << std::endl << std::endl << std::endl;
    }
    else
    {
        std::cout << "битоваые строки равны" << std::endl << std::endl << std::endl;
    }



// ФУНКЦИИ GET_LENGTH(), EDIT_SIGN() и CLEAR_STRING():
    std::cout << "ФУНКЦИИ GET_LENGTH(), EDIT_SIGN() и CLEAR_STRING(): " << std::endl;

    // GET_LENGTH()

    BitString bit_string_for_func(bit_string_4, bit_string_length_4);
    std::cout << "исходная битовая строка: " << bit_string_for_func;
    std::cout << "длина битовой строки: " << bit_string_for_func.get_length() << std::endl << std::endl;


    // EDIT_SIGN()
    bit_string_for_func.edit_sigh();
    std::cout << "битовая строка после изменения знака: " << bit_string_for_func << std::endl;


    // CLEAR_STRING()
    bit_string_for_func.clear_string();
    std::cout << "битовая строка после очистки: " << bit_string_for_func;
    std::cout << "длина битовой строки после очистки: " << bit_string_for_func.get_length() << std::endl;



    return 0;
}
