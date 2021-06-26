
  struct nb_modif{
    int nb_short;
    int nb_long;
    int sign;
  };
typedef struct nb_modif nb_modif ;

  struct nb_vis{
    int nb_auto;
    int nb_register;
    int nb_static;
    int nb_extern;
  };
typedef struct nb_vis nb_vis ;

struct type_rep{
    char * b_type;
    nb_modif mod;
    nb_vis vis;
};
typedef struct type_rep type_rep ;

struct id_list{
    char* in_c;
    char* in_p;
    int   conf;
    struct id_list * next_id;
};
typedef struct id_list id_list;

struct s_list{
    char* op;
    struct s_list * next_op;
};
typedef struct s_list s_list;

struct opr_type{
    char * opr;
    int conditional;
};
typedef struct opr_type opr_type;

struct op_type{
    s_list* preop;
    char* op;
    s_list* postop;
    int simple;
    int conditional;
};
typedef struct op_type op_type;

struct decl_type{
    char* type;
    op_type ops;
    s_list* ids;
};
typedef struct decl_type decl_type;

struct decl_list{//declarations
    char* type;
    s_list* ids;
    struct decl_list* next;
};
typedef struct decl_list decl_list;

struct local_type{
  s_list *ops;
  decl_list *declarations;
};
typedef struct local_type local_type;





enum lval_type{
  simple=0,
  array=1,
  pointer=2
};

struct lval_def{
  char *id;
  s_list *dimentions;
  char *inits;
  int nbpointers;
  int type;
};
typedef struct lval_def lval_def;

struct lval_list{
    lval_def lval;
    struct lval_list* next;
};
typedef struct lval_list lval_list;


//list of definitions including a list of the declared lvals and the operations
struct def_list
{
  lval_list lvals;
  op_type ops;
};
typedef struct def_list def_list;


struct decl_op_list
{
  decl_list *declarations;
  op_type ops;
};
typedef struct decl_op_list decl_op_list;



struct op_list{
  op_type ops;
  struct op_list *next;
};
typedef struct op_list op_list;




FILE *out;
local_type main_local;
s_list *main_inits;
