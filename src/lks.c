/* **** Notes

Look command line arguments and a list of the current environment variables
*/


# include <stdio.h>

signed(__cdecl cat2pp(signed char(**argp))) {
if(!argp) return(0x00);
if(!(*argp)) return(0x00);
printf("%s\n", *argp++);
return(1+(cat2pp(argp)));
}

signed(__cdecl cat2ppp(signed char(***argp))) {
auto signed(r);
if(!argp) return(0x00);
if(!(*argp)) return(0x00);
r = cat2pp(*argp++);
printf("%s%d\n", "r is: ", r);
return(1+(cat2ppp(argp)));
}

/* an entry point */
signed(__cdecl main(signed(argc), signed char(**argv), signed char(**envp))) {

/* e.g., for fn. cat2ppp
auto signed char(**(p[])) = {
(signed char(**)) (argv),
(signed char(**)) (envp),
(signed char(**)) (0x00)
};
//*/

auto signed(r);

/* **** CODE/TEXT */
r = cat2pp(argv);
printf(" %d%s\n", r, " arguments");

printf("\n");
r = cat2pp(envp);
printf(" %d%s\n", r, " environment variables");

/* Or..
printf("\n");
r = cat2ppp(p);
// printf("%s%d\n", "r is: ", r);
//*/

return(0x00);
}
