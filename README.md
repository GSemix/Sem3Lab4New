Открытие проекта:
    open main.cpp lib/lab_4.cpp lib/bank.cpp include/bank.h include/container.h include/lab_4.h

Запуск:
    clear && clear && g++ main.cpp lib/lab_4.cpp lib/bank.cpp -o main -std=c++11 && ./main
    
<!---->
    
           Пример с std::string    
    List<std::string> list;
    
    list.append(new std::string("123"));
    std::cout << *(list[0]->data) << std::endl;
    
<!---->
>> main.cpp

SimpleСontribution a = SimpleСontribution(1, 1000, Date(11, 12, 2018), 12, Date());
Сontribution * b = &a;
                                        OR
CurrencyСontribution cur = CurrencyСontribution(4, 900, Date(11, 12, 2018), 12, Date(), USD, 75);
Сontribution & def = cur;

>> container.cpp

void append(T & newData) { // Добавляет элемент в конец списка

>> ERROR

main.cpp:18:17: error: non-const lvalue reference to type 'Сontribution' cannot
      bind to a temporary of type 'SimpleСontribution'
    list.append(SimpleСontribution(1, 1000, Date(11, 12, 2018), 12, Date()));
