/*pattern 2:

12345
 2345
  345
   45
    5
*/

#include<stdio.h>
#include<conio.h>
int main(){
int i, j;

for(i=1; i<=5; i++){
	for(j=1; j<=5; j++){
		if(j>=i){
			printf("%d", j);
		}
		else{
			printf(" ");
		}
	}
	printf("\n");
}
return 0;
}

