typedef  struct word{
    char* character;
    char* string;
    char* integer;
    char* real;
    char* id;
}word;
enum types{
    t_character=0,
    t_string=1,
    t_integer=2,
    t_real=3,
    t_id=4
};
enum language{
    fr=0,
    en=1
};
const struct word dictionary[]={
    {"caractére","chaine de caractére","entier","réel","identificateur"},
    {"character","string","integer","real","id"}
    
};
char * getTypeName(int lang,int type){
    switch (type)
    {
    case t_character:
        return  dictionary[lang].character;        
    break;
    case t_string:
        return  dictionary[lang].string;        
    break;
    case t_integer:
        return  dictionary[lang].integer;        
    break;
    case t_real:
        return  dictionary[lang].real;        
    break;    
    case t_id:
        return  dictionary[lang].id;        
    break;      
    default:
        break;
    }
    return  "";
}