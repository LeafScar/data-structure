#pragma once

template <typename T>
void vector<T>::copyFrom(T const* A, Rank lo, Rank hi) // 以数组区间A[lo, hi)为蓝本复制向量
{
	_elem = new T[_capacity = 2 * (hi - lo)]; // 分配空间，规模清零
	_size = 0; 
	while (lo < hi) // A[lo, hi)内的元素逐一
		_elem[_size++] = A[lo++]; // 复制至_elem[0, hi - lo)
}
