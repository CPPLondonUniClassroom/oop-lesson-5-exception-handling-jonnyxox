#include <iostream>
#include <string>
#include <unordered_map>

int main() {
	const std::unordered_map<std::string, int> studentAges{
		{"john", 19},
		{"peter", 24},
		{"paul", 31},
		{"zoltan", 54},
		{"laurent", 90},
		{"justin", 12},
		{"oliver", 1337}
	};

	std::cout << "Enter a name: " << std::endl;

	//This code is in a bit of a sorry state, fix it.
	std::string name;

	 //oops, this will throw an exception if the name isn'tif found;


	//this try catch block has the necessary syntax you need to fulfil the task.
	try {

		std::cin.clear();
        std::cin >> name;
        if (studentAges.find(name) == studentAges.end()) throw std::range_error{"name input error found"};
        auto& age = studentAges.at(name);
        std::cout << name << " is " << age << " years old\n";
	} catch (const std::out_of_range& e) {
		//We only go inside here if the exception was thrown.
		//if you're curious, e.what() returns a string that you can read.
		std::cout << e.what() << "\n";
	}
	
	return 0;
}
