#pragma once

template <typename T>
T& vector<T>::operator[](Rank r) const // �����±������
{
	return _elem[r]; // assert: 0 <= r < _size
}
