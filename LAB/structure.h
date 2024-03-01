//structure to store date
typedef struct
{
    int yyyy;
    int mm;
    int dd;
} Date;
typedef struct
{
    char username[MAX_SIZE_USER_NAME];
    char password[MAX_SIZE_PASSWORD];
} sFileHeader;
//typedef struct// to call in program
//{
//    unsigned int books_id; // declare the integer data type
//    char bookName[MAX_BOOK_NAME];// declare the character data type
//    char authorName[MAX_AUTHOR_NAME];// declare the charecter data type
//    char studentName[MAX_STUDENT_NAME];// declare the character data type
//    char studentAddr[MAX_STUDENT_ADDRESS];// declare the character data type
//    Date bookIssueDate;// declare the integer data type
//} s_BooksInfo;
