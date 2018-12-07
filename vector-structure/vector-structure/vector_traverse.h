#pragma once

template <typename T>
void vector<T>::traverse(void (*visit)(T&)) // ��������ָ�����
{
	for (int i = 0; i < _size; ++i) // ��������
		visit(_elem[i]);
}

template <typename T>
template <typename VST> // Ԫ�����͡�������
void vector<T>::traverse(VST& visit) // ���������������
{
	for (int i = 0; i < _size; ++i) // ��������
		visit(_elem[i]);
}
