#include "str_func.cpp"


std::string rev_string(std::string str)
{
	for(unsigned int i = str.size(); i > str.size()/2; i--)
		std::swap(str[str.size()-i], str[i-1]);
	return str;
}
