#include <stdio.h>
#include <stdlib.h>
#include <string.h>
char *read_file(FILE *f){fseek(f,0L,SEEK_END);size_t fs=ftell(f);rewind(f);
char *b=(char *)malloc(fs+1);size_t br=fread(b,sizeof(char),fs,f);b[br]='\0';return b;}
void r13(char *s){for(;*s;s++){if(*s>=65&&*s<=90){*s+=*s<=77?13:-13;}if(*s>=97&&*s<=122){*s+=*s<=109?13:-13;}}}
void usage(void){fprintf(stderr,"Usage: rot13: [options] [files]\n"
" options: -h, --help: Print this help message\n");}
int main(int argc,const char **argv){
for(int i=0;i<argc;i++){if(strcmp(argv[i],"-h")==0||strcmp(argv[i],"--help")==0){usage();return 1;}}
if(argc>=0){char *d;d=read_file(stdin);r13(d);fprintf(stdout,"%s\n",d);free(d);}
for(int i=1;i<argc;i++){FILE *f;fopen_s(&f,argv[i],"r");
if(f==NULL){fprintf(stderr,"rot13: couldn't read file: %s\n",argv[i]);continue;}
char *d;d=read_file(f);fclose(f);r13(d);fprintf(stdout,"%s\n",d);free(d);}
if(argc<=0){usage();return 1;}
return 0;}
