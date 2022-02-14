#include <iostream>
#include "../include/bank.h"
#include "../include/lab_4.h"

Date::Date(int newDay, int newMonth, int newYear) {
    day = newDay;
    month = newMonth;
    year = newYear;
}

Date::Date() {
    day = 0;
    month = 0;
    year = 0;
}

std::string Сontribution::showAll() {
    return "Hello";
}

//Сontribution::Сontribution() {
//    sum = 0;
//    date = Date();
//    percent = 0;
//}

Сontribution::Сontribution(int newNumber, int newSum, Date newDate, int newPercent) {
    number = newNumber;
    sum = newSum;
    date = newDate;
    percent = newPercent;
}

SimpleСontribution::SimpleСontribution(int newNumber, int newSum, Date newDate, int newPercent, Date newDateLast): Сontribution(newNumber, newSum, newDate, newPercent) {
    dateLast = newDateLast;
}

UrgentСontribution::UrgentСontribution(int newNumber, int newSum, Date newDate, int newPercent, int newTermOfDepositInMonths): Сontribution(newNumber, newSum, newDate, newPercent) {
    termOfDepositInMonths = newTermOfDepositInMonths;
}

CurrencyСontribution::CurrencyСontribution(int newNumber, int newSum, Date newDate, int newPercent, Date newDateLast, Сurrency newCurr, int newExchangeRate): SimpleСontribution(newNumber, newSum, newDate, newPercent, newDateLast) {
    curr = newCurr;
    exchangeRate = newExchangeRate;
}

std::string Date::getDate() {
    return std::to_string(day) + "." + std::to_string(month) + "." + std::to_string(year);
}

int Сontribution::getNumber() {
    return number;
}

int Сontribution::getSum() {
    return sum;
}

std::string Сontribution::getDate() {
    return date.getDate();
}

int Сontribution::getPercent() {
    return percent;
}

std::string SimpleСontribution::showAll() {
    std::string res = "\nNumber: ";
    res.append(std::to_string(getNumber()));
    res.append("\nType: ");
    res.append("SimpleСontribution\n");
    res.append("Sum: ");
    res.append(std::to_string(getSum()));
    res.append("\nDataOpen: ");
    res.append(getDate());
    res.append("\nPercent: ");
    res.append(std::to_string(getPercent()));
    res.append(" %\n");
    res.append("LastOparation: ");
    res.append(getDateLast());
    res.append("\n");
    
    return res;
}

std::string SimpleСontribution::getDateLast() {
    return dateLast.getDate();
}

int UrgentСontribution::getTermOfDepositInMonths() {
    return termOfDepositInMonths;
}

std::string UrgentСontribution::showAll() {
    std::string res = "\nNumber: ";
    res.append(std::to_string(getNumber()));
    res.append("\nType: ");
    res.append("UrgentСontribution\n");
    res.append("Sum: ");
    res.append(std::to_string(getSum()));
    res.append("\nDataOpen: ");
    res.append(getDate());
    res.append("\nPercent: ");
    res.append(std::to_string(getPercent()));
    res.append(" %\n");
    res.append("TermOfDepositInMonths: ");
    res.append(std::to_string(getTermOfDepositInMonths()));
    res.append("\n");
    
    return res;
}

std::string CurrencyСontribution::getCurr() {
    return currencyToString(curr);
}

int CurrencyСontribution::getExchangeRate() {
    return exchangeRate;
}

std::string CurrencyСontribution::showAll() {
    std::string res = "\nNumber: ";
    res.append(std::to_string(getNumber()));
    res.append("\nType: ");
    res.append("CurrencyСontribution\n");
    res.append("Sum: ");
    res.append(std::to_string(getSum()));
    res.append("\nDataOpen: ");
    res.append(getDate());
    res.append("\nPercent: ");
    res.append(std::to_string(getPercent()));
    res.append(" %\n");
    res.append("LastOparation: ");
    res.append(getDateLast());
    res.append("\nCurrency: ");
    res.append(currencyToString(curr));
    res.append("\nExchangeRate: ");
    res.append(std::to_string(getExchangeRate()));
    res.append("\n");
    
    return res;
}


// Что такое полиморфизм в с++ и чем отличается от наследования
// Где работает?
// Что такое абстрактный класс
