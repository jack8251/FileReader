long int FileSize(char FileName[]) {
FILE* fp = fopen(FileName,"r");
fseek(fp,0,SEEK_END);
long int length = ftell(fp);
fclose(fp);
return length;
}
