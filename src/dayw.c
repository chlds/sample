/* **** Notes

Days of the week

Remarks:
Using a loop
*/


# include <stdio.h>

/* **** entry point */
signed(__cdecl main(signed(argc), signed char(**argv), signed char(**envp))) {

/* **** DATA, BSS and STACK */
auto signed const(QUANTUM) = (0x10);
auto signed const(SNOOZE) = (0x08);
auto signed const(DELAY) = (0x02*(QUANTUM));

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

auto signed(i);

/* **** CODE/TEXT */
i = (i^(i));

while(*(arr+(i))) {
Sleep(DELAY);
printf("%s\n", *(arr+(i++)));
}

return(0x00);
}
