#define WINDOWS
//#define LINUX

#include "Platform.h"
#include <cstdlib>

void cclean()
{
#ifdef WINDOWS
    system("cls");
#elif LINUX
    system("clear");
#endif
}






