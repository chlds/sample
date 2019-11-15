T =

HDR =

SRC = ./src/$(T).c
SRCS = ./src/*.c

S = ./src/$(T).asm
SS = ./src/*.asm

OBJ = ./src/$(T).obj

MAP = ./src/$(T).map
EXE = ./$(T).exe


UTF_8 = -source-charset:utf-8
# compiler option for unicode:
# e.g., define _UNICODE, save files in UTF-8, include <tchar.h>, auto TCHAR *p = (L"...."), fn. _putch/_putwch/_puttch and more..


CFLAGS = -c -Fo$(OBJ) $(UTF_8)
CC = cl.exe
LILFLAGS = -out:$(EXE) -map:$(MAP) -stack:1280000
LIL = link.exe


# Type the following command on directory util/ to make the executable file on directory ./bin/ out of a C source file on directory ./bin/obj/src/.
# > nmake T=<a-C-source-file-name-except-the-.c-extension>
# e.g.,
# > nmake T=calend


$(EXE): $(OBJ)
	$(LIL) $(LILFLAGS) $(OBJ)


$(OBJ): $(SRC) $(HDR)
	$(CC) $(CFLAGS) $(SRC)


.PHONY: cleanup
cleanup:
	del .\src\*.asm
	del .\src\*.obj
