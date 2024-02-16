#define _CRT_SECURE_NO_WARNINGS

#include <iostream>

using namespace std;  

#include "cstr.h"

CStr :: CStr( const char *s )
{
	len = strlen(s);
	pdata = new char[len+1];
	strcpy(pdata,s);
}

char *CStr::getData(void)
{
	return pdata;
}

ostream &operator<<(ostream &output, CStr &obj)
{
	output << obj.getData();
	return output;
}

