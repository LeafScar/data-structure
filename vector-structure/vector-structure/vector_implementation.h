#pragma once
/******************************************************************************************
 * 将vector各方法的实现部分，简洁地引入vector.h
 * 效果等同于将这些实现直接汇入vector.h
 * 在export尚未被编译器支持前，如此可将定义与实现分离，以便课程讲解
 ******************************************************************************************/
#include "vector_constructor_by_copying.h"

#include "vector_expand.h"
#include "vector_shrink.h"

#include "vector_insert.h"
#include "vector_remove.h"
#include "vector_removeInterval.h"
