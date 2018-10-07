#include "String.h"


String::String()
{
	this->string = nullptr;
	this->mem_allocated = 0;
}

String::String(const char * string)
{
	int length = strlen(string);
	this->mem_allocated = length +1;
	this->string = new char[length + 1];
	strcpy(this->string, string);
}

String String::operator+(const String & other)
{
	String s = *this;
	s.mem_allocated = this->mem_allocated;
	strcat(s.string, other.string);
	s.mem_allocated += other.length();
	return s;
}

String String::operator=(const String & other)
{
	if (this != &other)
	{
		this->mem_allocated = other.mem_allocated;
		this->string = new char[this->mem_allocated];
		strcpy(this->string, other.string);
	}
	return *this;
}

bool String::operator==(const char *other)
{
	return strcmp(this->string,other) == 0;
}

int String::length() const
{
	return this->mem_allocated == 0 ? 0 : this->mem_allocated - 1;
}

void String::clear()
{
	this->string = nullptr;
	this->mem_allocated = 0;
}

int String::strcmp(const char *s1, const char *s2) const
{
	for (; *s1 == *s2; s1++, s2++)
	{
		if (*s1 == '\0')
		{
			return 0;
		}
	}
	return *s1 - *s2;
}

int String::strlen(const char * s) const
{
	int n = 0;
	for (int i = 0; *s != '\0'; s++)
	{
		n++;
	}
	return n;
}

void String::strcpy(char *dst, const char *src) const
{
	while ((*(dst++) = *(src++)) != '\0');
}
 
void String::strcat(char * dst, const char * src) const
{
	int i, j;

	i = j = 0;
	int length = strlen(dst);
	strcpy(dst+length,src);
}

String::~String()
{
}
