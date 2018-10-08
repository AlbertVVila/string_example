#ifndef STRINGCLASS_H_
#define STRINGCLASS_H_

class String
{
public:
	char* string;
	unsigned int mem_allocated;
	
	String();
	String(const char*);

	String& operator+(const String&);
	String& operator=(const String&);
	bool operator==(const char *);

	int length() const;
	void clear();

	int strcmp(const char *, const char *) const;
	int strlen(const char *) const;
	void strcpy(char*dst, const char* src) const;
	void strcat(char*dst, const char *src) const;


	~String();
private:
};

#endif // !STRINGCLASS_H_

