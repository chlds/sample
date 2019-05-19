/* **** Notes

Values on a key board
*/


# include <conio.h>
# include <stdio.h>

signed(__cdecl main(void)) {
/* **** DATA, BSS and STACK */
// auto signed char const(SP) = (' ');
auto signed char const(CR) = ('\r');
auto signed char const(LF) = ('\n');

auto unsigned char(c);

/* **** CODE/TEXT */
cputs("Look the value output in the hexa-decimal notation.\n");
cputs("Please type the Enter key to stop.\n\n");

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
