# include <stdio.h>
# include <signal.h>


void sighdr(int arg);
void setsig(int arg);


void sighdr(int arg) {
auto signed DELAY = (1000);
static signed i = (0x00);
if(!i) printf("%s\n","One more!");
else printf("%s\n","Good!");
i++;
if(1<(i)) exit(0x00);
setsig(arg);
return;
}


void setsig(int arg) {
auto signed long long r;
r = (signed long long) signal(SIGINT,sighdr);
if(!(r^((signed long long) (SIG_ERR)))) {
printf("%s\n","<< Error at fn. setsig()");
exit(0x00);
}
return;
}


signed(__cdecl main(void)) {
auto signed DELAY = (1000);
auto signed i;
i = 0;
setsig(SIGINT);
while(0x01) {
if(15<(i++)) break;
printf("%s\n","Press <Ctrl-C> to stop!");
Sleep(DELAY);
}
printf("%s\n","Done!");
return(0x01);
}
