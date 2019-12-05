#include "sha.h"
#include <iostream>
#include <string>

void test(){
	std::string str = "123"	;
	std::cout<<str<<" : "<<ShaZone::hash256_hex_string(str)<<std::endl;
	str = "";
	std::cout<<str<<" : "<<ShaZone::hash256_hex_string(str)<<std::endl;
}

int main(){
	test();
	return 0;
}

