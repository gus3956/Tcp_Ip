#include <stdio.h>
#include <stdlib.h>

typedef struct Id_Node{

	char id_dx[20];
	char passward_dy[20];

	struct Id_Node* link;
}id_Node;

typedef struct ProductNode{

	char P_name[20];
	char P_company[20];
	int P_number;
	int P_exdate;
	int nineteen;
	struct ProductNode* link;
    
}productNode;

typedef struct {
    productNode* head;

}productNode_h;

typedef struct {

  id_Node* head;

}id_Node_h;

Login Loginout();

int main(){
  system("clear");
  id_Node_h* list =(id_Node_h*)malloc(sizeof(id_Node_h));
  list->head = NULL;
  while(1){
	
	  Login log = Loginout();

	if(!Personal(log))
	{
		system("clear");
		continue;

	}
  menu();
  return 0;

  }



return 0;
}

Login loginout(){
	Login log;

 	 puts(" ======= 회원가입 ======= ");
	 printf("아이디:");
	 fgets(id_dx, sizeof(input),stdin);
	 
	 printf("비밀번호:");
	 fgets(passward_dy, sizeof(input), stdin);
   
   return log;	
}

int Personal(Login log){





}
