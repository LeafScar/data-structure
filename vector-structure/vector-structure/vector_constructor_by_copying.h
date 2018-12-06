#pragma once

template <typename T>
void vector<T>::copyFrom(T const* A, Rank lo, Rank hi) // ����������A[lo, hi)Ϊ������������
{
	_elem = new T[_capacity = 2 * (hi - lo)]; // ����ռ䣬��ģ����
	_size = 0; 
	while (lo < hi) // A[lo, hi)�ڵ�Ԫ����һ
		_elem[_size++] = A[lo++]; // ������_elem[0, hi - lo)
}
