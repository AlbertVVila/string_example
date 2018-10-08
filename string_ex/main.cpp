#include "String.h"
#include <stdio.h>



int main()
{
	String a("hola");
	String b("testing");
	String c(a);
	String d = a + b;
	if (d == "holatesting")
	{
		printf("d es igual a holatesting\n");
	}
	printf("length: %s\n", c.string);
	c.clear();
}