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
    {0,1,1,"double",""}             //long double 
};
char* convert_type(int nb_short,int nb_long,int sign,char* c_type){
    if(c_type==""){
        c_type="int";
    }
    for(int i=0;i<12;i++){
        if(nb_short==dect[i].nb_short && nb_long==dect[i].nb_long && sign==dect[i].sign && c_type==dect[i].c_type){
            return dect[i].p_type;
        }
    }
}