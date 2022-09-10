#include <fstream>
#include<iostream>
#include <string.h>

class NewFile
{
	public:
		NewFile();
		~NewFile();
		void getInfo(char **argv);
		void openFile();
		void fillFile(std::string newstr);

	private:
		std::string fileInfo[3];
		std::ifstream my_file;
};