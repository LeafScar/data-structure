#pragma once

typedef int Rank;	// ��
#define DEFAULT_CAPACITY 3	// Ĭ�ϵĳ�ʼ��������ʵ��Ӧ���п�����Ϊ����

template <typename T> class vector {	// ����ģ����
protected:
	Rank _size; int _capacity;  T* _elem; // ��ģ��������������
	void copyFrom(T const* A, Rank lo, Rank hi); // ������������A[lo, hi)
	void expand(); //�ռ䲻��ʱ����
	void shrink(); //װ�����ӹ�Сʱѹ��
public:
	// ���캯��
	vector(int c = DEFAULT_CAPACITY, int s = 0, T v = 0) // ����Ϊc����ģΪs������Ԫ�س�ʼΪv
	{ _elem = new T[_capacity = c]; for (_size = 0; _size < s; _elem[_size++] = v); } // s <= c 
	vector(T const* A, Rank n) { copyFrom(A, 0, n); } // �������帴��
	vector(T const* A, Rank lo, Rank hi) { copyFrom(A, lo, hi); } // ����
	vector(vector<T> const& V) { copyFrom(V._elem, 0, V._size); } //�������帴��
	vector(vector<T> const& V, Rank lo, Rank hi) { copyFrom(V._elem, lo, hi); } // ����
	// ��������
	~vector() { delete[] _elem; } // �ͷ��ڲ��ռ�
	// ֻ�����ʽӿ�
	Rank size() const { return _size; } // ��ģ
	bool empty() const { return !_size; } // �п�
	// ��д���ʽӿ�
	T remove(Rank r); // ɾ����Ϊr��Ԫ��
	int remove(Rank lo, Rank hi); // ɾ����������[lo, hi)֮�ڵ�Ԫ��
	Rank insert(Rank r, T const& e);
	Rank insert(T const& e) { return insert(_size, e); } // Ĭ����ΪĩԪ�ز���



};

#include "vector_implementation.h"
