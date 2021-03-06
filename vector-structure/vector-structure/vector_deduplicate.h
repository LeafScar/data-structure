#pragma once

template <typename T>
int vector<T>::deduplicate()  // 删除无序向量中重复元素（高效版）
{
	int oldSize = _size; // 记录原规模
	Rank i = 1; // 从_elem[1]开始
	while (i < _size) // 自前向后逐一考查各元素_elem[i]
		find(_elem[i], 0, i) < 0 ? // 在其前缀中寻找与之雷同者（至多一个） 
		i++ : remove(i); // 若无雷同则继续考查其后继，否则删除雷同者
	return oldSize = _size; // 向量规模变化量，即被删除元素总数
}
