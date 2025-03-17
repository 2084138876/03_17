#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//枚举：就是把可能的取值一一列举
// 枚举使用关键字 enum
//枚举的可能取值是从0开始的，往下依次递增,
//可以通过手动给第一个枚举常量赋值，该改变起始值，让后其依次递增
//例如一周有7天、一年有12个月等

//例如描述一周,其中enum Day是枚举类型，{}中的内容是枚举类型的可能取值，也叫枚举常量
//enum Day
//{
//	//枚举常量：
//	Mon,//0
//	Tues,//1
//	Wed,//2
//	Thur,//3
//	Fri,//4
//	Sat,//5
//	Sun//6
//};


//int main()
//{
//	enum Day d = Fri;// 用枚举的可能取值给其赋值
//	printf("%d", Mon);//0
//	printf("%d", Tues);//1
//	printf("%d", Wed);//2
//}


// 改变起始值
//enum Day
//{
//	//枚举常量：
//	Mon=1,//1
//	Tues,//2
//	Wed,//3
//	Thur,//4
//	Fri,//5
//	Sat,//6
//	Sun//7
//};
//
//int main()
//{
//	enum Day d = Fri;// 用枚举的可能取值给其赋值
//	// 利用枚举类型创建变量时才申请空间
//	printf("%d", Mon);//1
//	printf("%d", Tues);//2
//	printf("%d", Wed);//3
//}
//
////例如描述性别
//enum Sex
//{
//	MALE,//0
//	FEMALE,//1
//	SECRET//2
//};
////例如描述颜色
//enum Color
//{
//	RED,//0
//	GREEN,//1
//	BLUE//2
//};
// 枚举的优点：
// 1.增加代码的可读性和可维护性
// 2.和#define 定义的标识符比较，枚举有类型检查，更加严谨
// 3.放在命名污染（封装）
// 4.便于调试
// 5.使用方便，一次可以定义多个常量