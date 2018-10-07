#include "String.h"
#include <stdio.h>



int main()
{
	String a("hola");
	String b("je");
	String c = a + b;
	if (c == "holbje")
	{
		printf("IGUALES\n");
	}
	printf("length: %d", c.length());
}