#include "vec_func.cpp"


Vector::Vector(int x, int y)
	{
		this->x = x;
		this->y = y;
		this->length = sqrt(x*x + y*y);
		this->repr = "(" + std::to_string(x) + "," + std::to_string(y) + ")";
	}

void Vector::print_info()
	{
		std::cout << "Vector = " << repr << std::endl
		<< "Length = " << length << std::endl;
	}

Vector Vector::operator+(Vector another_vec)
	{
		return Vector(this->x + another_vec.x, this->y + another_vec.y);
	}

Vector Vector::operator -(Vector another_vec)
	{
		return Vector(this->x - another_vec.x, this->y - another_vec.y);
	}

template <class Vec>
void printv(Vec x)
{
	for(unsigned int i = 0; i < x.size(); i++)
	{
		std::cout << x[i] << std::endl;
	}
}
