#include <iostream>
#include <stdio.h>
#include <string.h>
#include <stdlib.h> 
#include <ctime>
#include <sstream>
#include <cstdlib>

using namespace std;
std::string my_string;

void troca(long int num, long int finl){
	if(finl > 0){
		for(long int i = finl; i >= num; i--){
			if(i != 0){
				std::cout << i;
				if(i != num && (i-1) != 0)
					std::cout << " ";
			}
		}
	}
}

void tenta(long int num, long int finl){
	for(long int i = 1; i < num; i++){
		std::cout << i;
		std::cout << " ";
	}
	troca(num, finl);
}

int main(){
	FILE *arq;
	char line[100];
	char *result;
	int i;
	char * pch;
	long int l = 0;
	long int pos = 0;
	long int n1 = -1;
	long int n2 = -1;
	my_string = "";

			std::cout << std::endl;
	// while(n1 != 0 && n2 != 0){ 
	// 	// if(n1 != -1 && n2 != -1)
	// 		// std::cout << std::endl;
	// 		// std::cout << std::endl;
	// 	std::cin >> n1 >> n2;
	// 	tenta(n2, n1);
	// }
}