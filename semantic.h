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