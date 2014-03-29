#include <stdexcept>
#include <iostream>


void safe() noexcept {
	throw std::length_error("negative fake...");
}

int main(int argc, char const *argv[])
{
	try {
		safe();
		throw std::out_of_range("out of range");
	} catch (const std::out_of_range& e) {
		std::cerr << e.what() << std::endl; 
	}
	return 0;
}