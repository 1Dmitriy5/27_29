//#define _crt_secure_no_warnings
//#include "dict.h"
//#include <string.h>
//#include <stdio.h>
//
//
//#define max_words 10000
//
//// ����� 
//char words[max_words][max_len_word + 1];
//// ���������� ���� � �������
//int numwords = 0;
//
///*
//create - ������� �������.
//���������� ����� ������� ������������� �������.
//*/
//void create() {
//	numwords = 0;
//}
//
//
///*
//destroy - ���������� �������.
//���������� ����� ��������� ������������� �������.
//*/
//void destroy() {
//	numwords = 0;
//}
//
//
//
///*
//insert � ��������� ������� � ���������.
//��������� � �������� ������ ���������� ��������.
//��� ��������� ���������� �������� � ���������, ��������� �� ����������.
//*/
//void insert(char* word) {
//
//	if (numwords >= max_words) {
//		return; // ������� ����������!
//	}
//
//	 //������� � ����� ������� ������ ����� ���� ����� �������� �����
//	// ������� �������� � ��������������� ������
//	// ������� �������� ���, ����� ����� ������� ������ ��� ������������
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
//member � ��������, �������� �� ��������� ������� ������ ������� ��������� ��� ���.
//���� �������� - ���������� 1, ����� - ���������� 0
//*/
//int  member(char* word) {
//	// ������������ �������� ��������� ������ ����� � ��������������� �������
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
