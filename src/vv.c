/* **** Notes

A program to use a variadic function and a recursive function

Remarks:
Using va_start, va_arg, va_end and stdarg.h
*/


# include <stdio.h>
# include <stdarg.h>

/* a recursive function with va_arg */
signed(__cdecl fetch(signed char(*di), signed char(*si))) {

/* **** CODE/TEXT */
if(!di) return(0x00);
if(!si) return(0x00);

printf("%s\n", si);

si = va_arg(di, signed char*);
// Fetch the next argument

return (1+(fetch(di, si)));
}

/* a variadic function with va_start and va_end */
signed(__cdecl catv(signed char(*argp),...)) {

/* **** DATA, BSS and STACK */
// auto va_list(*bp);
auto signed char(*bp);
auto signed(r);

if(!argp) return(0x00);

va_start(bp, argp);
// mapped on the RAM

r = fetch(bp, argp);
// to recur

va_end(bp);
// unmapped out of the RAM

return(r);
}

/* **** entry point */
signed(__cdecl main(signed(argc), signed char(**argv), signed char(**envp))) {

/* **** DATA, BSS and STACK */
auto signed char(*p0) = ("Sunday morning");
auto signed char(*p1) = ("Monday noon");
auto signed char(*p2) = ("Tuesday afternoon..");
auto signed(r);

/* **** CODE/TEXT */
r = catv(p0, p1, p2, NULL);

printf("\n");
if(!r) printf("%s\n", "<< Error at fn. catv()");
else printf("%s%d\n", "Count: ", r);

return(0x00);
}
