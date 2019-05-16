/* **** Notes

A program to use a variadic function

Remarks:
Using va_start, va_arg, va_end and stdarg.h
*/


# include <stdio.h>
# include <stdarg.h>

signed(__cdecl cats(signed char(*argp), ...)) {

/* **** DATA, BSS and STACK */
// auto signed char(*bp);
auto va_list(bp);
auto signed(i);

if(!argp) return(0x00);

i = (i^(i));

va_start(bp, argp);
// mapped on the RAM

while(argp) {
printf("%s", argp);
i++;
argp = va_arg(bp, void*);
// Retrieve the next argument
}

va_end(bp);
// unmapped out of the RAM

return(i);
}

/* **** entry point */
signed(__cdecl main(signed(argc), signed char(**argv), signed char(**envp))) {

/* **** DATA, BSS and STACK */
auto signed char(*p0) = ("Sunday morning, ");
auto signed char(*p1) = ("Monday noon, ");
auto signed char(*p2) = ("Tuesday afternoon..");
auto signed(r);

/* **** CODE/TEXT */
r = cats(p0, p1, p2, NULL);

printf("\n");
if(!r) printf("%s\n", "<< Error at fn. cats()");
else printf("%s%d\n", "Count: ", r);

return(0x00);
}
