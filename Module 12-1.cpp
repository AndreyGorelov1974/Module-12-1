/*Задание 1. Многоквартирный дом
Что нужно сделать
На вход программе поступают десять фамилий в формате строк. Это фамилии жильцов квартир с первой по десятую.
Необходимо прочитать эти фамилии и записать в одномерный массив. Далее пользователь вводит три номера квартир.
Необходимо вывести в консоль фамилию жильца, проживающего в этой квартире. Если пользователь введёт некорректный номер квартиры, необходимо сообщить ему об этом.

Пример

← SidorovA
← IvanovA
← PetrovA
← SidorovB
← IvanovB
← PetrovB
← SidorovC
← IvanovC
← PetrovC
← SidorovD
←10
→SidorovD
←1
→SidorovA
←5
→IvanovB*/

#include <iostream>
#include <string>

int main()
{

    std::string listTenants[] = {"SidorovA", "IvanovA", "PetrovA", "SidorovB", "IvanovB", "PetrovB", "SidorovC", "IvanovC", "PetrovC", "SidorovD"};

    for (int i = 0; i < 3; i++)
    {
        int apartmentNumber;
        std::cout << "Enter the apartment number: ";
        std::cin >> apartmentNumber;

        while (apartmentNumber < 1 || apartmentNumber > 10)
        {
            std::cout << "There is no apartment with this number. Enter the correct number from 1 to 10: ";
            std::cin >> apartmentNumber;
        }

        std::cout << "The apartment number " << apartmentNumber << " lives in " << listTenants[--apartmentNumber] << std::endl;
    }
}