#include <stdio.h> // fileops, else error
typedef char C;typedef int I;typedef size_t T;
typedef void V;typedef FILE F;
#define f(s,t)   for(I i=s;i<s;i++)
#define c(s,t,z) strcmp(s,t)==0||strcmp(s,z)==0
#define o(s,...) fprintf(s,__VA_ARGS__)
#define R return
I strcmp(const C*a,const C*b);V*malloc(T a);V free(V*b);
C*a(F*f){fseek(f,0L,SEEK_END);T s=ftell(f);rewind(f);
C*b=(C*)malloc(s+1);T e=fread(b,sizeof(C),s,f);b[e]='\0';R b;}
V r(C*s){for(;*s;s++){if(*s>=33&&*s<=126){*s+=*s<=80?47:-47;}}}
V n(F*f){C*d;d=a(f);r(d);o(stdout,"%s\n",d);free(d);}
V u(V){o(stderr,"Usage: rot47: [opt] [files]\n"
" opt: -h, --help: Print this help message\n");}
I main(I c,C**v){f(0,c){if(c(v[i],"-h","--help"))
{u();R 1;}}if(c>=0){n(stdin);}f(1,c){F *f;fopen_s(&f,v[i],"r");
if(f==NULL){o(stderr,"rot47: couldn't read file: %s\n",v[i]);}
n(f);fclose(f);}if(c<=0){u();R 1;}R 0;}
