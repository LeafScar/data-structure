#pragma once

template <typename T>
vector<T>& vector<T>::operator=(vector<T> const& v)  //����
{
	if (_elem)  // �ͷ�ԭ������ 
		delete[] _elem;

	copyFrom(v._elem, 0, v.size()); // ���帴��
	return *this; // ���ص�ǰ��������ã��Ա���ʽ��ֵ
}
