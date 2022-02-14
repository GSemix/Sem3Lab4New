#pragma once /* Защита от двойного подключения заголовочного файла */
#include "bank.h"

template <typename T> // Тип данных, который будет храниться в struct Node (ВАЖНО: типом должен быть обязательно УКАЗАТЕЛЕМ!!!)
struct Node { // Структура для хранения указателей на объекты
    T & data; // Информация
    Node<T> * next; // Указатель на ПРАВЫЙ элемент
    Node<T> * after; // Указатель на ЛЕВЫЙ элемент
};

template <typename T> // Тип данных, который будет храниться в struct Node (Важно: типом должен быть обязательно указатель)
class List { // Класс, объект которого хранит в себе список
    private:
    
        int count = 0; // Кол-во элементов в списке
        Node<T> * array = nullptr; // Список
    
    public:
    
        List() { // Память под элементы списка выделяется в функции append()
            count = 0;
        }
    
        ~List() {
            if (count != 0) { // Если список не пустой
                for (int i = 0; i < count; i++) { // for (auto i : list) {}
                    Node<T> * tmp = array;
                    //delete array->data;
                    array = array->next;
                    delete tmp;
                }
            }
        }
    
        Node<T> * operator[](int iteration) { // Даёт доступ к объекту под индексом iteration
            if (count != 0) { // Если список не пустой
                if ((iteration > count - 1) || (iteration < (-1) * count)) { // Если искомого индекса iteration не существует, то ОШИБКА
                    throw std::logic_error("out of range!");
                } else {
                    if (iteration < 0) { // Если отсчет подразумевался с конца
                        iteration = count + iteration;
                    }
    
                    Node<T> * tmp = array;
    
                    for (int i = 0; i < count; i++) {
                        if (i == iteration) {
                            return tmp;
                        } else {
                            tmp = tmp->next;
                        }
                    }
                }
            } else {
                throw std::logic_error("list is empty!");
            }
        
            return nullptr;
        }
    
        void append(T newData) { // Добавляет элемент в конец списка
            Node<T> * tmp = new Node<T>;
            tmp->data = newData;
            tmp->next = nullptr;
    
            if (count != 0) { // Если список не пустой
                tmp->after = (*this)[-1];
                (*this)[-1]->next = tmp;
            } else {
                tmp->after = nullptr;
                array = tmp;
            }
    
            count++;
        }
//    
//        int getCount() { // Возвращает кол-во элементов списка
//            return count;
//        }
//    
//        void del(int iteration) { // Удаляет по номеру в списке
//            if (count != 0) { // Если список не пустой
//                if (iteration == 0 || iteration == (-1) * count) { // Если нулевой индекс
//                    Node<T> * tmp = array;
//                
//                    array = array->next;
//                    delete tmp->data;
//                    delete tmp;
//                } else {
//                    Node<T> * tmp = (*this)[iteration];
//                
//                    tmp->after->next = tmp->next;
//                    delete tmp->data;
//                    delete tmp;
//                }
//            
//                count--;
//            } else {
//                throw std::logic_error("list is empty!"); // const exception & mess
//            }
//        }
//    
//        void swap(int a, int b) { // Меняет местами a-ый и b-ый элемент списка (меняет data)
//            if (count != 0) { // Если список не пустой
//                if (a != b && a != b + count) {
//                    T tmp = (*this)[a]->data;
//                    (*this)[a]->data = (*this)[b]->data;
//                    (*this)[b]->data = tmp;
//                }
//            } else {
//                throw std::logic_error("list is empty!");
//            }
//        }
};
