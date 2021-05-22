typedef  struct t_catch{
    int nb_short;
    int nb_long;
    int sign;
    char* c_type;
    char* p_type;
}t_catch;

const struct t_catch dect[]={
    {0,0,1,"int","integer"},        //int  
    {0,0,0,"int","cardinal"},       //unsigned int     
    {0,0,1,"char","short int"},     //signed char 
    {1,0,1,"int","small int"},      //short int 
    {0,1,1,"int","long int"},       //long int 
    {0,2,1,"int","int64"},          //long long int
    {0,0,0,"char","byte"},          //unsigned char 
    {1,0,0,"int","word"},           //unsigned short int 
    {0,1,0,"int","long word"},      //unsigned long int  
    {0,0,1,"float","real"},         //float
    {0,0,1,"double","double"},      //double
    {0,1,1,"double","Extended"}      //long double 
};
char* convert_type(type_rep type){
    //printf("type=%s , nb_short=%d , nb_long=%d,sign=%d\n",type.b_type,type.mod.nb_short,type.mod.nb_long,type.mod.sign);
    if(!strcmp(type.b_type,"")){
        type.b_type="int";
    }
    for(int i=0;i<12;i++){
        if(type.mod.nb_short==dect[i].nb_short && type.mod.nb_long==dect[i].nb_long && type.mod.sign==dect[i].sign && !strcmp(type.b_type,dect[i].c_type)){
            return dect[i].p_type;
        }
    }
    return "fuk";
}