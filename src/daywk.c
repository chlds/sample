/* **** Notes

Days of the week

Remarks:
Using a recursive function
*/


# include <stdio.h>

/* **** a recursive function */
signed(__cdecl recur(signed char(**argp))) {

if(!argp) return(0x00);
if(!(*argp)) return(0x00);

printf("%s\n", *argp++);

return(1+(recur(argp)));
}

/* **** entry point */
signed(__cdecl main(signed(argc), signed char(**argv), signed char(**envp))) {

/* **** DATA, BSS and STACK */
auto signed char(*(arr[])) = {
(char signed(*)) ("Sun"),
(char signed(*)) ("Mon"),
(char signed(*)) ("Tue"),
(char signed(*)) ("Wed"),
(char signed(*)) ("Thu"),
(char signed(*)) ("Fri"),
(char signed(*)) ("Sat"),
(char signed(*)) (0x00)
};

auto signed(r);

/* **** CODE/TEXT */
r = recur(arr);

printf("\n");
printf("%s%d\n", "Count: ", r);

return(0x00);
}
