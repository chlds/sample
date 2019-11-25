/* **** Notes

Values on a key board
*/


# include <conio.h>
# include <stdio.h>

# define COUNT_CP (0x04)

signed(__cdecl main(void)) {

/* **** DATA, BSS and STACK */
enum {
OUTPUT,INPUT,BACKUP,
};

auto unsigned const UTF_8 = (65001);
auto signed char const(SP) = (' ');
auto signed char const(CR) = ('\r');
auto signed char const(LF) = ('\n');

auto unsigned codepage[COUNT_CP] = {
(unsigned) (0x00),
};

auto signed r;
auto unsigned char c;

/* **** CODE/TEXT */
*(codepage+(OUTPUT)) = GetConsoleOutputCP();
if(!(*(codepage+(OUTPUT)))) {
r = GetLastError();
printf("%s%d%s%X\n","<< Error at fn. GetConsoleOutputCP() with error no. ",r," or ",r);
return(0x00);
}

*(codepage+(INPUT)) = GetConsoleCP();
if(!(*(codepage+(INPUT)))) {
r = GetLastError();
printf("%s%d%s%X\n","<< Error at fn. GetConsoleCP() with error no. ",r," or ",r);
return(0x00);
}

printf("%s%d%s%d\n","Current Code Pages for Input/Output: ",*(codepage+(INPUT)),"/",*(codepage+(OUTPUT)));
printf("\n");

// Announcements
cputs("Look the value output in the hexa-decimal notation.\n");
cputs("Please type the <Enter> key to stop.\n\n");

while(0x01) {
c = _getch();
printf("%02X", c);
if(c<(0x7F)) {
if(0x1F<(c)) printf(" %c", c);
}
printf("\n");
if(!(c^(CR))) break;
if(!(c^(LF))) break;
}

return(0x00);
}
