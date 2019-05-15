#include <string>
#include <cmath>

class Vector
{	
public:
	
	Vector(int, int);
	
	void print_info();
	
	Vector operator+(Vector);
	
	Vector operator-(Vector);
	
private:
	int x;
	int y;
	int length;
	std::string repr;
	
};