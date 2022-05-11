
#include<stdio.h>

#include<string.h>

int main(){
	   
		int lno=0;
		int i;
		int j;
		int option;
		int database_staus=0;
		int ter=0;
		int book_issue;
		int issue_index=0;
		int stud_class;
		int issue_labno[100];
	


	
	struct database{
        		
			
		int labno;
		char name[100];
	   char author[100];
	   int flag;
	}d[10][10];

	struct issue{
		int stud_id;
		char stud_name[100];
		char stud_class[100];
		char book_name[100];
		char book_author[100];

	}issue[100];
	// for loop for Asign labno to each book
	for( i=0; i<9; i++){
		for(j=0; j<9; j++){
		
			lno++;
			d[i][j].labno=lno;
			d[i][j].flag = 1;

			}
		}
// 		//data base allocation 
	for( i=0; i<9; i++){
		if(i==0){
			for(j=0; j<9; j++){
			
		 strcpy(d[i][j].name,"c programing ");
		strcpy(d[i][j].author,"msbte");
			
			}
		}
		
		else if(i==1){
			for(j=0;   j<9; j++){
			
			 strcpy(d[i][j].name,"unfinished");
		strcpy(d[i][j].author,"priyanka kumar ");
			
			}
			
			
	}
		else if(i==2){
		for(j=0;   j<9; j++){
			
		 strcpy(d[i][j].name,"the bench");
		strcpy(d[i][j].author,"meghan markle ");
			
			}
		
	}
	else if(i==3){
		for(j=0;   j<9; j++){
		 strcpy(d[i][j].name,"home in the word");
		strcpy(d[i][j].author,"amatya sen");
			
			
			}
		
	}   
	else if(i==4){
		for(j=0;   j<9; j++){
			strcpy(d[i][j].name,"will");
		strcpy(d[i][j].author,"will smith and mark magon");
			
		}
		
	}   
	    else if(i==5){
		for(j=0;  j<9; j++){
			
		 strcpy(d[i][j].name,"the indian story ");
		strcpy(d[i][j].author,"bimaj jalan ");
			
			
			}
		
	}   
	else if(i==6){
		for(j=0; j<9; j++){
			strcpy(d[i][j].name,"the india story ");
		strcpy(d[i][j].author,"bimal jalal");
		
		}
		
	}
	else if(i==7){

		for(j=0; j<9; j++){
			strcpy(d[i][j].name,"c ++ ");
		strcpy(d[i][j].author,"tech publications "); 
		
		}

		
	}
	
	    else if(i==8){
		for(j=0;  j<9; j++){
			
		strcpy(d[i][j].name,"400 days ");
		strcpy(d[i][j].author,"chetan bhad");
			}
		
	}   
	    else if(i==9){
		for(j=0;  j<9; j++){
		strcpy(d[i][j].name,"relentless");
		strcpy(d[i][j].author,"yashwant shiha ");
			
		}
		}   
		}

// some preprocessing stuff for user inteface 

for(i=0; i<9; i++){
	for(j=0; j<9; j++){

		if(d[i][j].labno != 0 ){

			database_staus = 1;


		}
		else{

			database_staus = 0;
		}
	}
}



 //start making UI of program 

 while(ter == 0){


for(i=0; i<60; i++){
	printf("*");
	
}
 printf("\n");
 printf("\t welcome to library manegement system by  anish  \n");
 for(i=0; i<60; i++){
	printf("*");
	
 }


 printf("\n");


 printf("\tsir !  please choose a option \n");
for(i=0; i<60; i++){
	printf("*");
	
 }
 printf("\n");

 printf("\t1] check database \n\n");
 printf("\t2] check available books \n\n");
 printf("\t3] issue a book \n\n");
 printf("\t4] get details about issued book \n\n");
 printf("\t5] terminate the work (loose all  the data) \n ");

 for(i=0; i<60; i++){

	 printf("*");
 }
 printf("\n");

 scanf("%d",&option);



 switch(option){

	 case 1:
	 if(database_staus == 1){

		 printf("datbase status looks healthy\n");

	 }
	 else{
		 printf("datbase status looks bad\n");


	 }
	 sleep(3);
	 break; // end (database_staus )


	 case 2:
	 for( i=0; i<9; i++ ){
		 printf("\tbook no : %d\n" ,i+1);
		 printf("\tname of book is  : %s\n" ,d[i][0].name);
	
		 printf("\tname of author is : %s\n" ,d[i][0].author);
	  
 
 printf("\n");



  }
  sleep(4);
  break;


  case 3:
  printf("which  book you want to issue : \n"); 
  for(i=0; i<60; i++){

	 printf("*");
 }
 printf("\n");
 for( i=0; i<9; i++ ){
		 printf("\tbook no : %d\n" ,i+1);
		 printf("\tname of book is  : %s\n" ,d[i][0].name);
	
		 printf("\tname of author is : %s\n" ,d[i][0].author);
	  
 
 printf("\n");

 } 
   for(i=0; i<60; i++){

	 printf("*");
 }
 printf("\n");
 printf("please enter which book you wnat to issue   ");
 scanf("%d", &book_issue);


	






 switch(book_issue){

	case 1:
	for(i=0; i<9; i++){
		if(d[0][i].flag == 1){

			if(issue_index != 0){
              issue_index++;

			}

			
			printf("the book name is :  %s\n", d[0][i].name);
			printf("\n");
			printf("the author is : %s\n", d[0][i].author);
			printf("\n");

			strcpy(issue[issue_index].book_name , d[0][i].name);
			strcpy(issue[issue_index].book_author , d[0][i].author);

			printf("please enter student id number : ");
			scanf("%d",&issue[issue_index].stud_id);
			printf("\n");
			printf("please enter student name : ");
			scanf("%s",&issue[issue_index].stud_name);
			printf("\n");
			printf("choose class : \n");	
			printf("\n");
			printf("1] first year : \n");
			printf("\n");
			printf("2] second year : \n");
			printf("\n");
			printf("3] third year : \n");
			printf("\n");
			printf("slecte the claas : ");
			scanf("%d", &stud_class);

			issue_labno[issue_index-1]=d[0][i].labno;
			d[0][i].flag = 0;

			switch (stud_class){

				case 1:
				strcpy(issue[issue_index].stud_class , "first year student");
				break;
				case 2:
				strcpy(issue[issue_index].stud_class , "second year student");
				break;
				case 3:
				strcpy(issue[issue_index].stud_class , "third year student");
				break;
				default:
				printf(" invalid class name \n ");

			}

			printf("\n");
			  printf("\n");

				

				printf("ok book of libary no : %d was issued\n",d[0][i].labno );
          for(i=0; i<60; i++){

	      printf("*");
                                 }
                printf("\n");



			i = 100;

			if(issue_index == 0){
				issue_index++;
			}
			
			
			}
        

		
	}
	break;


	case 2:
	for(i=0; i<9; i++){
		if(d[1][i].flag == 1){

			if(issue_index != 0){
              issue_index++;

			}
			printf("the book name is :  %s\n", d[1][i].name);
			printf("\n");
			printf("the author is : %s\n", d[1][i].author);
			printf("\n");

            strcpy(issue[issue_index].book_name , d[1][i].name);
			strcpy(issue[issue_index].book_author , d[1][i].author);


			printf("please enter student id number : ");
			scanf("%d",&issue[issue_index].stud_id);
			printf("\n");
			printf("please enter student name : ");
			scanf("%s",&issue[issue_index].stud_name);
			printf("\n");
			printf("choose class : \n");	
			printf("\n");
			printf("1] first year : \n");
			printf("\n");
			printf("2] second year : \n");
			printf("\n");
			printf("3] third year : \n");
			printf("\n");
			printf("slecte the claas : ");
			scanf("%d", &stud_class);

			issue_labno[issue_index]=d[1][i].labno;
			d[1][i].flag = 0;

			switch (stud_class){

				case 1:
				strcpy(issue[issue_index].stud_class , "first year student");
				break;
				case 2:
				strcpy(issue[issue_index].stud_class , "second year student");
				break;
				case 3:
				strcpy(issue[issue_index].stud_class , "third year student");
				break;
				default:
				printf(" invalid class name \n ");

			}

			printf("\n");
			  printf("\n");

				

				printf("ok book of libary no : %d was issued\n",d[1][i].labno );
          for(i=0; i<60; i++){

	      printf("*");
                                 }
                printf("\n");



			i = 100;

			if(issue_index == 0){
				issue_index++;
			}
			
			}
         

		
	}
	break;

	case 3:
	for(i=0; i<9; i++){
		if(d[2][i].flag == 1){

			if(issue_index != 0){
              issue_index++;

			}
			printf("the book name is :  %s\n", d[2][i].name);
			printf("\n");
			printf("the author is : %s\n", d[2][i].author);
			printf("\n");

			strcpy(issue[issue_index].book_name , d[2][i].name);
			strcpy(issue[issue_index].book_author , d[2][i].author);

			

			printf("please enter student id number : ");
			scanf("%d",&issue[issue_index].stud_id);
			printf("\n");
			printf("please enter student name : ");
			scanf("%s",&issue[issue_index].stud_name);
			printf("\n");
			printf("choose class : \n");	
			printf("\n");
			printf("1] first year : \n");
			printf("\n");
			printf("2] second year : \n");
			printf("\n");
			printf("3] third year : \n");
			printf("\n");
			printf("slecte the claas : ");
			scanf("%d", &stud_class);

			issue_labno[issue_index]=d[2][i].labno;
			d[2][i].flag = 0;

			switch (stud_class){

				case 1:
				strcpy(issue[issue_index].stud_class , "first year student");
				break;
				case 2:
				strcpy(issue[issue_index].stud_class , "second year student");
				break;
				case 3:
				strcpy(issue[issue_index].stud_class , "third year student");
				break;
				default:
				printf(" invalid class name \n ");

			}

			printf("\n");
			  printf("\n");

				

				printf("ok book of libary no : %d was issued\n", d[2][i].labno);
          for(i=0; i<60; i++){

	      printf("*");
                                 }
                printf("\n");



			i = 100;
			
			if(issue_index == 0){
				issue_index++;
			}
			}
         

		
	}
	break;

	case 4:
	for(i=0; i<9; i++){
		if(d[3][i].flag == 1){

			if(issue_index != 0){
              issue_index++;

			}
			printf("the book name is :  %s\n", d[3][i].name);
			printf("\n");
			printf("the author is : %s\n", d[3][i].author);
			printf("\n");

			strcpy(issue[issue_index].book_name , d[3][i].name);
			strcpy(issue[issue_index].book_author , d[3][i].author);

		
			printf("please enter student id number : ");
			scanf("%d",&issue[issue_index].stud_id);
			printf("\n");
			printf("please enter student name : ");
			scanf("%s",&issue[issue_index].stud_name);
			printf("\n");
			printf("choose class : \n");	
			printf("\n");
			printf("1] first year : \n");
			printf("\n");
			printf("2] second year : \n");
			printf("\n");
			printf("3] third year : \n");
			printf("\n");
			printf("slecte the claas : ");
			scanf("%d", &stud_class);

			issue_labno[issue_index]=d[3][i].labno;
			d[3][i].flag = 0;

			switch (stud_class){

				case 1:
				strcpy(issue[issue_index].stud_class , "first year student");
				break;
				case 2:
				strcpy(issue[issue_index].stud_class , "second year student");
				break;
				case 3:
				strcpy(issue[issue_index].stud_class , "third year student");
				break;
				default:
				printf(" invalid class name \n ");

			}

			printf("\n");
			  printf("\n");

				

				printf("ok book of libary no : %d was issued\n", d[3][i].labno);
          for(i=0; i<60; i++){

	      printf("*");
                                 }
                printf("\n");



			i = 100;
			
			if(issue_index == 0){
				issue_index++;
			}
			}
         

		
	}
	break;

	case 5:
	for(i=0; i<9; i++){
		if(d[4][i].flag == 1){

			if(issue_index != 0){
              issue_index++;

			}
			printf("the book name is :  %s\n", d[4][i].name);
			printf("\n");
			printf("the author is : %s\n", d[4][i].author);
			printf("\n");

			strcpy(issue[issue_index].book_name , d[4][i].name);
			strcpy(issue[issue_index].book_author , d[4][i].author);


   


			printf("please enter student id number : ");
			scanf("%d",&issue[issue_index].stud_id);
			printf("\n");
			printf("please enter student name : ");
			scanf("%s",&issue[issue_index].stud_name);
			printf("\n");
			printf("choose class : \n");	
			printf("\n");
			printf("1] first year : \n");
			printf("\n");
			printf("2] second year : \n");
			printf("\n");
			printf("3] third year : \n");
			printf("\n");
			printf("slecte the claas : ");
			scanf("%d", &stud_class);

			issue_labno[issue_index]=d[4][i].labno;
			d[4][i].flag = 0;

			switch (stud_class){

				case 1:
				strcpy(issue[issue_index].stud_class , "first year student");
				break;
				case 2:
				strcpy(issue[issue_index].stud_class , "second year student");
				break;
				case 3:
				strcpy(issue[issue_index].stud_class , "third year student");
				break;
				default:
				printf(" invalid class name \n ");

			}

			printf("\n");
			  printf("\n");

				

				printf("ok book of libary no : %d was issued\n",d[4][i].labno);
          for(i=0; i<60; i++){

	      printf("*");
                                 }
                printf("\n");



			i = 100;
			if(issue_index == 0){
				issue_index++;
			}
			
			
			}
          

		
	}
	break;

	case 6:
	for(i=0; i<9; i++){
		if(d[5][i].flag == 1){
		if(issue_index != 0){
              issue_index++;

			}
			printf("the book name is :  %s\n", d[5][i].name);
			printf("\n");
			printf("the author is : %s\n", d[5][i].author);
			printf("\n");

			strcpy(issue[issue_index].book_name , d[5][i].name);
			strcpy(issue[issue_index].book_author , d[5][i].author);

			printf("please enter student id number : ");
			scanf("%d",&issue[issue_index].stud_id);
			printf("\n");
			printf("please enter student name : ");
			scanf("%s",&issue[issue_index].stud_name);
			printf("\n");
			printf("choose class : \n");	
			printf("\n");
			printf("1] first year : \n");
			printf("\n");
			printf("2] second year : \n");
			printf("\n");
			printf("3] third year : \n");
			printf("\n");
			printf("slecte the claas : ");
			scanf("%d", &stud_class);

			issue_labno[issue_index]=d[5][i].labno;
			d[5][i].flag = 0;

			switch (stud_class){

				case 1:
				strcpy(issue[issue_index].stud_class , "first year student");
				break;
				case 2:
				strcpy(issue[issue_index].stud_class , "second year student");
				break;
				case 3:
				strcpy(issue[issue_index].stud_class , "third year student");
				break;
				default:
				printf(" invalid class name \n ");

			}

			printf("\n");
			  printf("\n");

				

				printf("ok book of libary no : %d was issued\n",d[5][i].labno );
          for(i=0; i<60; i++){

	      printf("*");
                                 }
                printf("\n");



			i = 100;

			if(issue_index == 0){
				issue_index++;
			}
			
			}
        

		
	}
	break;

	case 7:
	for(i=0; i<9; i++){
		if(d[6][i].flag == 1){
          if(issue_index != 0){
              issue_index++;

			}

			printf("the book name is :  %s\n", d[6][i].name);
			printf("\n");
			printf("the author is : %s\n", d[6][i].author);
			printf("\n");

			strcpy(issue[issue_index].book_name , d[6][i].name);
			strcpy(issue[issue_index].book_author , d[6][i].author);

        
			printf("please enter student id number : ");
			scanf("%d",&issue[issue_index].stud_id);
			printf("\n");
			printf("please enter student name : ");
			scanf("%s",&issue[issue_index].stud_name);
			printf("\n");
			printf("choose class : \n");	
			printf("\n");
			printf("1] first year : \n");
			printf("\n");
			printf("2] second year : \n");
			printf("\n");
			printf("3] third year : \n");
			printf("\n");
			printf("slecte the claas : ");
			scanf("%d", &stud_class);

			issue_labno[issue_index]=d[6][i].labno;
			d[6][i].flag = 0;

			switch (stud_class){

				case 1:
				strcpy(issue[issue_index].stud_class , "first year student");
				break;
				case 2:
				strcpy(issue[issue_index].stud_class , "second year student");
				break;
				case 3:
				strcpy(issue[issue_index].stud_class , "third year student");
				break;
				default:
				printf(" invalid class name \n ");

			}

			printf("\n");
			  printf("\n");

				

				printf("ok book of libary no : %d was issued\n", d[6][i].labno);
          for(i=0; i<60; i++){

	      printf("*");
                                 }
                printf("\n");



			i = 100;
			
			if(issue_index == 0){
				issue_index++;
			}
			}
       

		
	}
	break;

	case 8:
	for(i=0; i<9; i++){
		if(d[7][i].flag == 1){

			if(issue_index != 0){
              issue_index++;

			}
			printf("the book name is :  %s\n", d[7][i].name);
			printf("\n");
			printf("the author is : %s\n", d[7][i].author);
			printf("\n");

			strcpy(issue[issue_index].book_name , d[7][i].name);
			strcpy(issue[issue_index].book_author , d[7][i].author);

			printf("please enter student id number : ");
			scanf("%d",&issue[issue_index].stud_id);
			printf("\n");
			printf("please enter student name : ");
			scanf("%s",&issue[issue_index].stud_name);
			printf("\n");
			printf("choose class : \n");	
			printf("\n");
			printf("1] first year : \n");
			printf("\n");
			printf("2] second year : \n");
			printf("\n");
			printf("3] third year : \n");
			printf("\n");
			printf("slecte the claas : ");
			scanf("%d", &stud_class);

			issue_labno[issue_index]=d[7][i].labno;
			d[7][i].flag = 0;

			switch (stud_class){

				case 1:
				strcpy(issue[issue_index].stud_class , "first year student");
				break;
				case 2:
				strcpy(issue[issue_index].stud_class , "second year student");
				break;
				case 3:
				strcpy(issue[issue_index].stud_class , "third year student");
				break;
				default:
				printf(" invalid class name \n ");

			}

			printf("\n");
			  printf("\n");

				

				printf("ok book of libary no : %d was issued\n",d[7][i].labno );
          for(i=0; i<60; i++){

	      printf("*");
                                 }
                printf("\n");



			i = 100;
			
			if(issue_index == 0){
				issue_index++;
			}
			}
         

		
	}
	break;

	case 9:
	for(i=0; i<9; i++){
		if(d[8][i].flag == 1){

			if(issue_index != 0){
              issue_index++;

			}
			printf("the book name is :  %s\n", d[8][i].name);
			printf("\n");
			printf("the author is : %s\n", d[8][i].author);
			printf("\n");

			strcpy(issue[issue_index].book_name , d[8][i].name);
			strcpy(issue[issue_index].book_author , d[8][i].author);

			printf("please enter student id number : ");
			scanf("%d",&issue[issue_index].stud_id);
			printf("\n");
			printf("please enter student name : ");
			scanf("%s",&issue[issue_index].stud_name);
			printf("\n");
			printf("choose class : \n");	
			printf("\n");
			printf("1] first year : \n");
			printf("\n");
			printf("2] second year : \n");
			printf("\n");
			printf("3] third year : \n");
			printf("\n");
			printf("slecte the claas : ");
			scanf("%d", &stud_class);

			issue_labno[issue_index]=d[8][i].labno;
			d[8][i].flag = 0;

			switch (stud_class){

				case 1:
				strcpy(issue[issue_index].stud_class , "first year student");
				break;
				case 2:
				strcpy(issue[issue_index].stud_class , "second year student");
				break;
				case 3:
				strcpy(issue[issue_index].stud_class , "third year student");
				break;
				default:
				printf(" invalid class name \n ");

			}

			printf("\n");
			  printf("\n");

				

				printf("ok book of libary no : %d was issued\n", d[8][i].labno);
          for(i=0; i<60; i++){

	      printf("*");
                                 }
                printf("\n");



			i = 100;
			if(issue_index == 0){
				issue_index++;
			}
			
			}
          

		
	}
	sleep(2);
	break;
}





	// case 4 geting detail about issued book ;
case 7:
// for(i=0; i<issue_index; i++){
	
// printf("%s\n",issue[i].stud_name);
// }
break;

case 4:
printf("the details about the issued books : \n");

for(i=0; i<=issue_index; i++){
printf("\t%d : \n ",i+1);
printf("\t the name of book was issued : %s\n",issue[i].book_name); 
printf("\t the name of book author  was issued : %s\n",issue[i].book_author);
printf("\t the name of student is  : %s\n",issue[i].stud_name); 
printf("\t the  lab id of student is  : %d\n",issue[i].stud_id); 
printf("\t the class ofstudent is  : %s\n",issue[i].stud_class); 

printf("\n\n"); 
}


break;
case 5:
for(i=0; i<60; i++){
	printf("*");
}
printf("\n");
printf("\n");
printf("really want to exit form here || if you want enter 3*3+5 = : ");
scanf("%d", &ter);

for(i=0; i<60; i++){
	printf("*");
}
printf("\n");

sleep(2);

break;




	 


 





 



  








 

	 
 }
  

 }

 

for(i=0; i<60; i++){
	printf("*");
}
printf("\n");
for(i=0; i<60; i++){
	printf("*");
}
printf("\n");

printf("\t thanks for using anish's library manegement system \n ");


for(i=0; i<60; i++){
	printf("*");
}
printf("\n");
for(i=0; i<60; i++){
	printf("*");
}
printf("\n");
for(i=0; i<issue_index; i++){
	
printf("%s\n",issue[i].stud_name);
}


sleep(3);







 
 


	return 0;



	
	
}
