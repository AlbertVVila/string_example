#include "String.h"
#include <stdio.h>



int main()
{
	String a("hola");
	String b("testing");
	printf("length: %s", (a+b).string);
}