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
struct op_type{
    s_list* preop;
    char* op;
    s_list* postop;
};
typedef struct op_type op_type;

FILE *out;
