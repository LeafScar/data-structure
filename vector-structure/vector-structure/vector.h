#pragma once

typedef int Rank;	// 秩
#define DEFAULT_CAPACITY 3	// 默认的初始化容量（实际应用中可设置为更大）

template <typename T> class vector {	// 向量模板类
protected:
	Rank _size; int _capacity;  T* _elem; // 规模、容量、数据区
	void copyFrom(T const* A, Rank lo, Rank hi); // 复制数组区间A[lo, hi)
	void expand(); //空间不足时扩容
	void shrink(); //装填因子过小时压缩
public:
	// 构造函数
	vector(int c = DEFAULT_CAPACITY, int s = 0, T v = 0) // 容量为c，规模为s、所有元素初始为v
	{ _elem = new T[_capacity = c]; for (_size = 0; _size < s; _elem[_size++] = v); } // s <= c 
	vector(T const* A, Rank n) { copyFrom(A, 0, n); } // 数组整体复制
	vector(T const* A, Rank lo, Rank hi) { copyFrom(A, lo, hi); } // 区间
	vector(vector<T> const& V) { copyFrom(V._elem, 0, V._size); } //向量整体复制
	vector(vector<T> const& V, Rank lo, Rank hi) { copyFrom(V._elem, lo, hi); } // 区间
	// 析构函数
	~vector() { delete[] _elem; } // 释放内部空间
	// 只读访问接口
	Rank size() const { return _size; } // 规模
	bool empty() const { return !_size; } // 判空
	// 可写访问接口
	T remove(Rank r); // 删除秩为r的元素
	int remove(Rank lo, Rank hi); // 删除秩在区间[lo, hi)之内的元素
	Rank insert(Rank r, T const& e);
	Rank insert(T const& e) { return insert(_size, e); } // 默认作为末元素插入



};

#include "vector_implementation.h"
