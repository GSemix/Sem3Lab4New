#pragma once /* Защита от двойного подключения заголовочного файла */
#include "bank.h"
#include "container.h"

template <class S>
inline void getNumberS(S &num) throw(const std::exception &) { // Функция фильтрует ввод чисел(int, double...)
    if (!(std::cin >> num)) {
        std::cin.clear(); // ???
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); // ???
        throw std::logic_error("incorrect input!");
    }

    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); // ???
}

int getRandomNumber(int min, int max); // Возвращает случайное целое число от min до max
std::string currencyToString(Сurrency curr); // Переводит валюту в string
//void sortBankList(List<Сontribution *> & list); // Сортирует список
//int getIndexOfMaxNumber (const Node<Сontribution *> * array);
