#include <iostream>     /*cout*/
#include <stdio.h>      /*printf, fgets*/
#include <stdlib.h>     /*atoi*/
using namespace std;

void uintvars2(int a){
	int reminder =0;
	reminder = a%128;
	a=a/128;
	if(a>127){
		uintvars2(a);
		cout<<hex<<" "<<reminder+128;
		return;
	}else{
		cout<<hex<<" "<<a+128<<" "<<reminder+128;
		return;	
	}
	

}




void uintvars1(int a){
	int reminder =0;
	reminder=a%128;
	a=a/128;
	if(a>127){
		uintvars2(a);
		cout<<hex<<" "<<reminder;
	}else{
		if(a==0)
			cout<<hex<<" "<<reminder;
		else
			cout<<hex<<" "<<a+128<<" "<<reminder;
	}
		
	

}





int main(int argc, char** argv){
        int i;
        for(i=1;i<argc;i++){

                int intInput =atoi(argv[i]);
                printf("%d:",intInput);
                uintvars1(intInput);
                cout<<endl;
        }
}
