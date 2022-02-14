#include <iostream>
#include "include/bank.h"
#include "include/lab_4.h"
#include "include/container.h"
#include "typeinfo"
// #include <deque>

int main () {
    
//    List<Сontribution> list1;
    
    CurrencyСontribution cur = CurrencyСontribution(4, 900, Date(11, 12, 2018), 12, Date(), USD, 75);
    Сontribution & def = cur;

//    list1.append(def);
//    list1.append(UrgentСontribution(5, 1000, Date(11, 12, 2018), 12, 5));
//
    std::cout << typeid(def).name() << std::endl; //list1[0]->data
//    std::cout <<  list1[0]->data.getExchangeRate() << std::endl;
    
    
    
    
    
    
    
    
    
    
    
    
//    List<Сontribution *> list;
//
//    SimpleСontribution * simpleCont = new SimpleСontribution(3, 1000, Date(11, 12, 2018), 12, Date());
//    UrgentСontribution * urgentCont = new UrgentСontribution(5, 1000, Date(11, 12, 2018), 12, 5);
//    CurrencyСontribution * currencyCont =  new CurrencyСontribution(7, 900, Date(11, 12, 2018), 12, Date(), USD, 75);
//
//    UrgentСontribution * test1 = new UrgentСontribution(1, 1000, Date(11, 12, 2018), 12, 5);
//    CurrencyСontribution * test2 =  new CurrencyСontribution(0, 900, Date(11, 12, 2018), 12, Date(), USD, 75);
//    UrgentСontribution * test3 = new UrgentСontribution(8, 1000, Date(11, 12, 2018), 12, 5);
//    CurrencyСontribution * test4 =  new CurrencyСontribution(2, 900, Date(11, 12, 2018), 12, Date(), USD, 75);
//    UrgentСontribution * test5 = new UrgentСontribution(6, 1000, Date(11, 12, 2018), 12, 5);
//    CurrencyСontribution * test6 =  new CurrencyСontribution(4, 900, Date(11, 12, 2018), 12, Date(), USD, 75);
//
//
//    list.append(simpleCont);    //  0
//    list.append(urgentCont);    //  1
//    list.append(currencyCont);  //  2
//    list.append(test1);         //  3
//    list.append(test2);         //  4
//    list.append(test3);         //  5
//    list.append(test4);         //  6
//    list.append(test5);         //  7
//    list.append(test6);         //  8
////
//////    list.swap(-1, 0);
//////    list.del(0);
////
//    for (int i = 0; i < list.getCount(); i++) {
//        std::cout << list[i]->data->showAll() << std::endl;
//    }
//
//    std::cout << std::endl;
//
//    sortBankList(list);
//
//    std::cout << "-----" << std::endl;
//
//    for (int i = 0; i < list.getCount(); i++) {
//        std::cout << list[i]->data->showAll() << std::endl;
//    }
//
    return 0;
}

// clear && clear && g++ main.cpp lib/lab_4.cpp lib/bank.cpp -o main -std=c++11 && ./main
