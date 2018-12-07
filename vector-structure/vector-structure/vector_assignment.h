#pragma once

template <typename T>
vector<T>& vector<T>::operator=(vector<T> const& v)  //重载
{
	if (_elem)  // 释放原有内容 
		delete[] _elem;

	copyFrom(v._elem, 0, v.size()); // 整体复制
	return *this; // 返回当前对象的引用，以便链式赋值
}
