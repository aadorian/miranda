char *addextn(word,char*);
void adjust_prefix(char*);
word conv_args(void);
void dic_check(void);
void dicovflo(void);
word findid(char*);
word getfname(word);
int hash(char*);
int isconstrname(char*);
char *keep(char*);
void layout(void);
word make_id(char*);
word make_pn(word);
word mkgvar(word);
word mklexvar(word);
void mkprivate(word);
word name(void);
int okid(int);
int openfile(char*);
char *rdline(void);
void reset_lex(void);
void reset_pns(void);
void reset_state(void);
void setlmargin(void);
void setupdic(void);
word sto_pn(word);
word str_conv(char*);
char *token(void);
void unsetlmargin(void);
word yylex(void);
