#include <iostream>
#include <unistd.h>

void process_creator(){
	if (execv("../test_fork/fork_test", NULL) == -1){
		std::cout << "Process creation failed" << std::endl;
	}else{
		std::cout << "Process called" << std::endl;
	}
}
int main(){
	process_creator();
}
