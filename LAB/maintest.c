#include <stdio.h>
#include <time.h>
#include <string.h>

//#define MAX_YR  9999
//#define MIN_YR  1900
#define MAX_SIZE_USER_NAME 30
#define MAX_SIZE_PASSWORD  20
#include "structure.h"
//#define FILE_NAME  "AticleworldLibBookS.bin"
// Macro related to the books info
//#define MAX_BOOK_NAME   50
//#define MAX_AUTHOR_NAME 50
//#define MAX_STUDENT_NAME 50
//#define MAX_STUDENT_ADDRESS 300
#define FILE_HEADER_SIZE  sizeof(sFileHeader)
#include "headmessage.h"
#include "mainmenu.h"
#include "logintoapllication.h"
#include "passwordinfo.h"
//#include "printmessage.h"

#include "welcome.h"
int main()
{
    init();
    welcomeMessage();
    password();
    return 0;
}
