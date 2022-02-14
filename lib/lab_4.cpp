#include <iostream>
#include <ctime>
#include "../include/bank.h"
#include "../include/container.h"

int getRandomNumber(int min, int max) {
    static const double fraction = 1.0 / (static_cast<double>(RAND_MAX) + 1.0);
    // Равномерно распределяем рандомное число в нашем диапазоне
    return static_cast<int>(rand() * fraction * (max - min + 1) + min);
}

std::string currencyToString(Сurrency curr) {
    switch (curr) {
        case RUB:
            return "RUB";
        case USD:
            return "USD";
        case EUR:
            return "EUR";

        default:
            return "Error";
    }
}

//int getIndexOfMaxNumber (const Node<Сontribution *> * array) {
//    int maxNum = 0;
//    int j = 0;
//    int i = 0;
//    
//    while (array != nullptr) {
//        if (array->data->getNumber() > maxNum) {
//            maxNum = array->data->getNumber();
//            j = i;
//        }
//        
//        array = array->next;
//        i++;
//    }
//    
//    return j;
//}
//
//void sortBankList(List<Сontribution *> & list) {
//    int index = 0;
//
//    for (int i = 0; i < list.getCount(); i++) {
//        index = getIndexOfMaxNumber(list[i]);
//        list.swap(i, i + index);
//    }
//}
