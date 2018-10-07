#include "String.h"
#include <stdio.h>



int main()
{
	String a("hola");
	String b("testing");
	b = a;
	printf("length: %s", b);
}