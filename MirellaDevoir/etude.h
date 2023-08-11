//#define taille 42
//#define tail 28
typedef struct student{
    char nom[100];
    char prenom[400];
    char datenaiss[400];
    char adresse[500];
    char tel[500];
    char genre[200];
    char parcours[400];
    char mar[100];
    char eti[100];
    char mac[100];
    char mail[100];
    char git[200];
    
}study;
study*entreinfo(study*st,FILE*fic,int len);
char**mamindravaleur(FILE*fic);
study*triage(FILE*file,char**car,study*st,int len,int ligne);
study*decoupage(study*st,char**car,char**ca);
study*triage2(study*st,FILE*fic,char**t,int len,int ligne);
char**makaetiquette(study*st,FILE*file);
void entreInfoPc(study*st,FILE*file,int len);
int length();
int nombreDeligne(FILE*file);

