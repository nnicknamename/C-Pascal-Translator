#include "semantic_types.h"

extern char* concat(const char * args,...);

void init_func_rep(func_rep **func1){
  *func1=malloc(sizeof(func_rep));
  func_rep *temp=*func1;
  temp->next=NULL;
}
void chain_func_rep(func_rep *func1,func_rep *func2){
  if(func1!=NULL){
    func_rep *temp=func1;
    while(temp->next!=NULL){
      temp=temp->next;
    }
    temp->next=func2;
  }else{
    func1=func2;
  }
}

char * get_n_in_func(func_rep *func,int n ){
    func_rep *temp=func;
    if(temp!=NULL){
        while(temp!=NULL && n>0){
            n--;
            temp=temp->next;
        }
        if(temp!=NULL){
          return temp->text;
        }
    }
    return NULL;
}


void compact_func_list(func_rep *format){
  func_rep * temp =format;
  if(temp!=NULL){
    while(temp->next!=NULL){
      func_rep * temp1 =temp->next;
      while (temp1!=NULL && temp->type==simple_text && temp1->type==temp->type)
      {
        temp->text=concat(temp->text,temp1->text,NULL);
        temp->next=temp1->next;
        temp1=temp1->next;
      }
      temp=temp->next;
    }
  }
}
void print_s_func(func_rep *format,char *separator){
  func_rep *temp=format;
  while(temp!=NULL){
    if(temp->text!=NULL){
      printf("%s %s",temp->text,separator);
    }
    temp=temp->next;
  }
}
char * sprint_func(func_rep *format,char *separator){
  compact_func_list(format);
  func_rep *temp=format;
  char *res="";
  while(temp->next!=NULL ){
    if(temp->text!=NULL ){
      res=concat(res,temp->text,separator,NULL);
      //printf("%s %s",temp->text,separator);
    }
    temp=temp->next;
  }
    res=concat(res,temp->text,NULL);
  return res;
}

char * generate_result(func_rep *format,func_rep *param){
    char *res="";
    func_rep * temp =format;
    compact_func_list(format);
    int pos=0;
    while (temp!=NULL){
        if(temp->type==form_spec){
            res=concat(res,get_n_in_func(param,pos),NULL);
        pos++;
        }else{ 
          if(temp->type==special_char){
            res=concat(res,temp->text,NULL);

          }else{
            res=concat(res,"'",temp->text,"'",NULL);
          }
        }
        if(temp->next!=NULL){
        res=concat(res,",",NULL);
        }
        temp=temp->next;
    }
    return res;
}

