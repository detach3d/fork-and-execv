#include <iostream>
#include <unistd.h>

using namespace std;

void process_creator(){
	if(fork() ==  0){
		cout << "Child pid: " << getpid() << endl;
	}else{
		cout << "Parent pid: "<< getpid() << endl;
	}
}

int main(){
	process_creator();
}
