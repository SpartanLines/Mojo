typedef enum {typeCon,typeId,typeOpr} nodeEnum;
typedef enum {Int,Float,String,Char,Bool,ConstInt,ConstFloat,ConstString,ConstChar,ConstBool} typeEnum;
typedef enum {Valid,OutOfScope,Undeclared,Constant,Uninitialized} permission;

/* Constants */
typedef struct {
    int value;
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
    int operNum;
    int nopers;
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