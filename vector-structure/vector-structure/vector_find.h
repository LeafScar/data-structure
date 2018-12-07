#pragma once

template<typename T> // ����������˳����ң��������һ��Ԫ��e��λ�ã�ʧ��ʱ������lo - 1
Rank vector<T>::find(T const& e, Rank lo, Rank hi) const // assert: 0 <= lo < hi <= _size
{
	while ((lo < hi--) && (e != _elem[hi])); // �Ӻ���ǰ��˳�����
	return hi; // ��hi < lo������ζ��ʧ�ܣ�����hi������Ԫ�ص���
}
