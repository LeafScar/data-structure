#pragma once

template <typename T>
void vector<T>::expand() //�����ռ䲻��ʱ����
{
	if (_size < _capacity) return; // ��δ��Աʱ����������
	if (_capacity < DEFAULT_CAPACITY) _capacity = DEFAULT_CAPACITY; // ��������С����
		
	T* oldElem = _elem;
	_elem = new T[_capacity <<= 1]; // �����ӱ�
	for (int i = 0; i < _size; ++i) // ����ԭ�������ݣ�TΪ�������ͣ��������ظ�ֵ������'='��
		_elem[i] = oldElem[i];
	/*DSA*/ //printf("\n_ELEM [%x]*%d/%d expanded and shift to [%x]*%d/%d\n", oldElem, _size, _capacity/2, _elem, _size, _capacity);
	delete[] oldElem; // �ͷ�ԭ�ռ�
}
