#include <iostream>
int main()
{
	int x = 10;
	int y = 20;
	int j = x = y;
	int* p = &++x;      // ++x表达式返回值为x对象本身是一个左值(一个对象有名字，在内存中有空间，能被程序员访问，已经初始化了)
	//int* q = &(x++);  // x++表达式返回值为x对象在++之前的一个复本，是一个右值，怎么说呢不知道是不是这样啊，对于一个程序员来说
	//int* m = &x++;    // 或者对象编译器来说，x作为一个对象，它在内存中的地址应该是可以由程序员访问到的，而编译器创建的一个临时
						// 对象的复本，虽然这个操作发生了，但是这个复本是不准备不期望不能够由程序员访问到的，所有这个复本
						// 是传说中的右值
	std::cout << *p << std::endl;
	//std::cout << q << std::endl;
	//std::cout << *m << std::endl;


	y=x++; // y = (t=x, x+=1, t)  
	return 0;
}
