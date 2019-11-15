/*
cl.exe -c -source-charset:utf-8 <source_file>
link.exe <object_file>
*/


# define _UNICODE
# include <stdio.h>
# include <locale.h>


signed(__cdecl main(void)) {

auto signed char *loc,*p;
auto signed i,l,r;
auto wchar_t *s = (L"Hello, World!");

loc = setlocale(LC_CTYPE,"");
printf("%s\n",loc);

loc = setlocale(LC_ALL,loc);

/* i.e.,
loc = setlocale(LC_ALL,setlocale(LC_CTYPE,""));
//*/

while(0x01) {
r = _putwch(*s);
if(!(r^(WEOF))) {
wprintf(L"%s\n",L"<< Error at fn. _putwch()");
return(0x00);
}
if(!r) break;
wprintf(L" %X\n",r);
s++;
}

return(0x00);
}
