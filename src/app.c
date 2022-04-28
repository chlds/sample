/*

An app frame
*/


# include <stdio.h>
# include <windows.h>

LRESULT(CALLBACK WindowProc(HWND(hdl),UINT(msg),WPARAM(wp),LPARAM(lp)));

signed(WINAPI wWinMain(HINSTANCE(inst),HINSTANCE(prev_inst),PWSTR(cmdline),signed(cmdshow))) {
auto signed char *b;
auto void *hdl;
auto signed alpha;
auto signed trans;
auto signed w,h;
auto signed x,y;
auto signed r;
auto MSG msg;
auto WNDCLASSEX wc;
auto signed char *cn = ("sample");
auto signed char *wn = ("Sample");
auto signed char *title = ("Error!");
// auto signed xstyl = (WS_EX_TOPMOST|(WS_EX_LAYERED));
auto signed xstyl = (0x00);
auto signed styl = (WS_OVERLAPPEDWINDOW);
auto signed percent = (50);
auto signed percentage = (100);
auto signed color = (0xFFFFFF);
auto signed flag = (LWA_ALPHA|(LWA_COLORKEY));
// auto signed flag = (LWA_COLORKEY);
// auto signed flag = (LWA_ALPHA);
wc.cbSize = (sizeof(wc));
wc.style = (CS_VREDRAW|(CS_HREDRAW));
wc.lpfnWndProc = (WindowProc);
wc.cbClsExtra = (0x00);
wc.cbWndExtra = (0x00);
wc.hInstance = (inst);
wc.hIcon = LoadIcon(0x00,IDI_APPLICATION);
wc.hCursor = LoadCursor(0x00,IDC_ARROW);
wc.hbrBackground = GetStockObject(WHITE_BRUSH);
wc.lpszMenuName = (0x00);
wc.lpszClassName = (cn);
wc.hIconSm = LoadIcon(0x00,IDI_APPLICATION);
hdl = (0x00);
if(!(RegisterClassEx(&wc))) {
MessageBox(hdl,"Error at fn. RegisterClassEx()",title,MB_OK);
return(0x00);
}
x = (0x10);
y = (0x10);
h = (0x200);
w = (0x200);
hdl = CreateWindowEx(xstyl,cn,wn,styl,x,y,w,h,0x00,0x00,inst,0x00);
if(!hdl) {
MessageBox(hdl,"Error at fn. CreateWindowEx()",title,MB_OK);
return(0x00);
}
/*
alpha = (0xFF);
alpha = (alpha*(percent));
alpha = (alpha/(percentage));
trans = (color);
if(!(SetLayeredWindowAttributes(hdl,trans,alpha,flag))) {
MessageBox(hdl,"Error at fn. SetLayeredWindowAttributes()",title,MB_OK);
return(0x00);
}
//*/
ShowWindow(hdl,cmdshow);
while(0x01) {
r = GetMessage(&msg,0x00,0x00,0x00);
if(!r) break;
if(!(r^(~0x00))) {
MessageBox(hdl,"Error at fn. GetMessage()",title,MB_OK);
break;
}
TranslateMessage(&msg);
DispatchMessage(&msg);
}
return(0x00);
}

LRESULT(CALLBACK WindowProc(HWND(hdl),UINT(msg),WPARAM(wp),LPARAM(lp))) {
switch(msg) {
case WM_DESTROY:
PostQuitMessage(0x00);
return(0x00);
}
return(DefWindowProc(hdl,msg,wp,lp));
}
