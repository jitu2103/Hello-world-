#include<iostream>
#include<stdlib.h>

using namespace std;

struct link{
	int x;
	link *ptr;
};

void display(link *curr)
{
	while(curr !=NULL){
        cout<<curr->x<<" "<<curr<<endl;
        curr = curr->ptr;
    }
	cout<<endl;
}
int main()
{
	link *head=NULL, *curr,*naya;
	
	for (int i=0;i<10;i++){
		curr = (link *) malloc(sizeof(link));
		curr->x = i;
		curr->ptr = head;
		head = curr;
	}

	display(curr);

	link *add;
	add = (link *) malloc(sizeof(link));
	add->x = 10;
	add->ptr = head;	
	curr = add;
		
	display(curr);

	head = add->ptr;
	add->ptr = NULL;
	
	curr = head;
	display(curr);
	
	curr = head;

	while(curr !=NULL){
		if(curr->x == 6){
			naya = (link *) malloc(sizeof(link));
			naya->x = 11;
			naya->ptr = curr->ptr;
			curr->ptr = naya;
		}
		curr = curr->ptr;
	}
	curr = head;
	display(curr);
}			
		
