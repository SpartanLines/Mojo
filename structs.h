typedef enum {typeCon,typeId,typeOpr} nodeEnum;
typedef enum {Int,Float,String,Char,Bool,ConstInt,ConstFloat,ConstString,ConstChar,ConstBool} typeEnum;
typedef enum {Valid,OutOfScope,Undeclared,Constant,Uninitialized} permission;
typedef enum {var,func,array} varType;

/* Constants */
typedef struct {
    char* value;
    typeEnum type;
} conNodeType;

typedef struct {
    int index;
    permission state;
    typeEnum type;
    char* name;


} idNodeType;

typedef struct {
    int value;
    int oper;
    int nops;
    struct nodeTypeTag *op[1];
} oprNodeType;

typedef struct nodeTypeTag{
    nodeEnum type;
    union {
        conNodeType con;
        idNodeType  id;
        oprNodeType opr;
    };
} nodeType;

extern FILE* f1;
extern FILE* f2;
extern int yyerror(char *);
extern int yyerrorvar(char *s, char *var);
