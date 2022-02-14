#pragma once /* Защита от двойного подключения заголовочного файла */

enum Сurrency { // Перечисление возможных валют
    RUB, // <0> Рубли
    USD, // <1> Доллары
    EUR  // <2> Евро
};

struct Date { // Структура хранения даты
    int day; // День
    int month; // Месяц
    int year; // Год
    
    Date(int newDay, int newMonth, int newYear);
    Date(); // Создаёт непределенную дату "0.0.0"
    
    std::string getDate(); // Переводит дату в формат "dd.mm.yyyy" (12.12.2021)
};

class Сontribution { // Абстрактный класс, используется для наследования. Объект не может быть создан!
    private:

        int number; // Номер счёта
        int sum; // Сумма
        Date date; // Дата открытия счёта
        int percent; // Ежемесячный процент
    
    protected: // Содержимое наследуется, но не может использоваться напрямую
    
        Сontribution();
        Сontribution(int newNumber, int newSum, Date newDate, int newPercent);

    public:
    
        virtual ~Сontribution() = default; // Пустой виртуальных деструктор // 
    
        int getSum(); // Возвращяет сумму
        std::string getDate(); // Возвращяет дату открытия счёта
        int getPercent(); // Возвращяет ежемесячный процент
        int getNumber(); // Возвращяет номер счёта
//        virtual std::string showAll() = 0; // Виртуальная пустая функция. Реализация не будет наследоваться!
        virtual std::string showAll();
//        void setSum(int newSum);
};

class SimpleСontribution: public Сontribution { // Класс простых вкладов
    private:
    
        Date dateLast; // Дата последней операции
    
    public:
    
        SimpleСontribution(int newNumber, int newSum, Date newDate, int newPercent, Date newDateLast);
    
        std::string getDateLast(); // Возвращает дату последней операции
        std::string showAll() override; // Перезаписанная родительская функция возвращает всю иинформацию о счёте
};

class UrgentСontribution: public Сontribution { // Классс срочных вкладов
    private:
    
        int termOfDepositInMonths; // Кол-во месяцев, на которое расчитан вклад
    
    public:
    
        UrgentСontribution(int newNumber, int newSum, Date newDate, int newPercent, int newTermOfDepositInMonths);
    
        int getTermOfDepositInMonths(); // Возвращает кол-во месяцев, на которое расчитан вклад
        std::string showAll() override; // Перезаписанная родительская функция возвращает всю иинформацию о счёте
};

class CurrencyСontribution: public SimpleСontribution { // Класс валютных вкладов
    private:
    
        Сurrency curr; // Валюта
        int exchangeRate; // Курс обмена
    
    public:
    
        CurrencyСontribution(int newNumber, int newSum, Date newDate, int newPercent, Date newDateLast, Сurrency newCurr, int newExchangeRate);

        std::string getCurr(); // Возвращает валюту
        int getExchangeRate(); // Возвращает курс обмена
        std::string showAll() override; // Перезаписанная родительская функция возвращает всю иинформацию о счёте
};
