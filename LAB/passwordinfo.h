int isFileExists(const char *path)
{
    // Try to open file
    FILE *fp = fopen(path, "r");
    int status = 0;
    // If file does not exists
    if (fp != NULL)
    {
        status = 1;
        // File exists hence close file
        fclose(fp);
    }
    return status;
}
void init()
{
    FILE *fp = NULL;
    int status = 0;
    const char defaultUsername[] ="sudhir\n";
    const char defaultPassword[] ="sudhirk\n";
    sFileHeader fileHeaderInfo = {0};
    status = isFileExists("C:\\Users\\ACER\\Documents\\GTH Practicals\\C programing\\library management system\\logininfo.txt");
    if(!status)
    {
        //create the binary file
        fp = fopen("C:\\Users\\ACER\\Documents\\GTH Practicals\\C programing\\library management system\\logininfo.txt","w");
        if(fp != NULL)
        {
            //Copy default password
            strncpy(fileHeaderInfo.password,defaultPassword,sizeof(defaultPassword));
            strncpy(fileHeaderInfo.username,defaultUsername,sizeof(defaultUsername));
            fwrite(&fileHeaderInfo,FILE_HEADER_SIZE, 1, fp);
            fputs()
            fclose(fp);
        }
    }
}
