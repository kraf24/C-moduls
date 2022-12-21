#include"manipulator.hpp"

NewFile::NewFile()
{}

NewFile::~NewFile()
{}

void NewFile::getInfo(char **argv)
{
	for(int i = 1; i < 4; i++)
	{
		fileInfo[i - 1] = argv[i];
		if (fileInfo[i - 1].empty())
			throw (__error);
	}
}

void NewFile::openFile(void)
{
	std::string newstr;
	int length = this->fileInfo[1].length();

	my_file.open(this->fileInfo[0]);
	if (!my_file)
		throw (__error);
	newstr.assign(std::istreambuf_iterator<char>(this->my_file), std::istreambuf_iterator<char>());
	for(size_t size = 0; size < newstr.length(); size++)
	{
		if(!(newstr.compare(size, length, fileInfo[1])))
		{
			newstr.erase(size, length);
			newstr.insert(size, fileInfo[2]);
		}
	}
	my_file.close();
	this->fillFile(newstr);
}

void NewFile::fillFile(std::string newstr)
{
	this->fileInfo[0] += ".replace";
	std::ofstream outfile (this->fileInfo[0]);
	outfile << newstr << std::endl;
	outfile.close();
}
