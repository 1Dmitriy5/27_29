//#define _crt_secure_no_warnings
//#include "dict.h"
//#include <string.h>
//#include <stdio.h>
//
//
//#define max_words 10000
//
//// слова 
//char words[max_words][max_len_word + 1];
//// количество слов в словаре
//int numwords = 0;
//
///*
//create - создает словарь.
//вызывается перед началом использования словаря.
//*/
//void create() {
//	numwords = 0;
//}
//
//
///*
//destroy - уничтожает словарь.
//вызывается после окончания использования словаря.
//*/
//void destroy() {
//	numwords = 0;
//}
//
//
//
///*
//insert – добавляет элемент в множество.
//множество – содержит только уникальные элементы.
//при повторном добавлении элемента в множество, множество не изменяется.
//*/
//void insert(char* word) {
//
//	if (numwords >= max_words) {
//		return; // словарь переполнен!
//	}
//
//	 //начиная с конца массива ищется место куда нужно вставить слово
//	// вставка делается в отсортированный массив
//	// вставка делается так, чтобы после вставки массив был отсортирован
//	int i = numwords;
//	while ((i > 0) && (strcmp(word, words[i - 1]) < 0)) {
//		strcpy(words[i], words[i - 1]);
//		i--;
//	}
//	strcpy(words[i], word);
//	++numwords;
//}
//
//
//
///*
//member – сообщает, является ли указанный элемент членом данного множества или нет.
//если является - возврашает 1, иначе - возвращает 0
//*/
//int  member(char* word) {
//	// используется алгоритм бинарного поиска слова в отсортированном массиве
//	int left = 0;
//	int right = numwords - 1;
//
//	while (left <= right) {
//		int middle = (left + right) / 2;
//
//		int dif = strcmp(words[middle], word);
//		if (dif == 0) {
//			return 1;
//		}
//		if (dif < 0) {
//			left = middle + 1;
//		}
//		if (dif > 0) {
//			right = middle - 1;
//		}
//	}
//	return 0;
//}
