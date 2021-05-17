#include "concatinator.h"
#include <ctype.h>
char * lower_case(char* string){
    char * res=malloc(strlen(string )+1);
    for(int i = 0; string[i]; i++){
        res[i] = tolower(string[i]);
    }   
    return res;
}
char * int_to_str(int num){
    int length = snprintf( NULL, 0, "%d",num); //calculate the length of conf in chars 
    char* str = malloc( length + 1 );//allocate the needed memory 
    snprintf( str, length + 1, "%d", num);//convert to a string
    return str;
}
id_list * insert_id_list(id_list **head,char *in_c,char *in_p,int conf){
    id_list *res =malloc(sizeof(id_list));
    res->in_c=in_c;
    res->in_p=in_p;
    res->conf=conf;
    if(head!=NULL){
        res->next_id=*head;
    }else{
        res->next_id=NULL;
    }
    *head=res;
    return res;
}
id_list * find_confusion(id_list *head,char * in_c){
    id_list *temp =head;
    in_c=lower_case(in_c);
    while(temp!=NULL){
        if(strcmp(in_c,temp->in_p)==0){
            return temp;
        }
        temp=temp->next_id;
    }
    return NULL;
}
id_list * find_converted(id_list *head,char * in_c){
    id_list *temp =head;
    while(temp!=NULL){
        if(strcmp(in_c,temp->in_c)==0){
            return temp;
        }
        temp=temp->next_id;
    }
    return NULL;
}
char * get_p_id(id_list **list,char * c_type){
    char * p_type;
    id_list *head=*list;
    if (head!=NULL){
        id_list* conv_line= find_converted(head,c_type);
        if(conv_line==NULL){//not converted
            id_list* conf_line= find_confusion(head,c_type);
            if(conf_line==NULL){//no confusion
                p_type=lower_case(c_type);
                insert_id_list(&head,c_type,p_type,0);//add a conversion for the newly foud id
            }else{//confusion found
                conf_line->conf++;//incerement the number of confusions found for that id 
                //add a conversion for the id by prefixing the confused id with the number of confusions 
                p_type=concat(conf_line->in_p,int_to_str(conf_line->conf),NULL);
                insert_id_list(&head,c_type,p_type,0);
            }
        }else{
            p_type=strdup(conv_line->in_p);
        }
    }else{

        p_type=lower_case(c_type);
        insert_id_list(&head,c_type,p_type,0);//add a conversion for the newly foud id
    }
        *list=head;
    return p_type;
}

void print_id_list(id_list *head){
    id_list *temp=head;
    while(temp!=NULL){
        printf("in_c= %s ; in_p= %s ; conf= %d\n",temp->in_c,temp->in_p,temp->conf);
        temp=temp->next_id;
    }
}