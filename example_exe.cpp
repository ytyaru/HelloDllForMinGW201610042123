#include <stdio.h>
#include "example_dll.h"
#include <iostream>
#include <string>

int main(void)
{
	hello("World");
	printf("%d\n", Double(333));
	CppFunc();

	MyClass a;
	a.func();

//	system("pause");
	std::cin.get();
	return 0;
}
