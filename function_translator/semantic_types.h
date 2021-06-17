enum text_type{
    simple_text=0,
    special_char=1,
    form_spec=2,
    parameter=3
};

struct func_rep{
    char * text;
    int type;
    struct func_rep *next;
};
typedef struct func_rep func_rep ;