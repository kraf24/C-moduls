#include"ABC.hpp"

Base *generate()
{
	Base *ret;
	srand(time(0));
	int i = rand() % 3;
	switch (i) 
	{
        case 0:
            std::cout << "A generated" << std::endl;
            ret = new A();
            break;
        case 1:
            std::cout << "B generated" << std::endl;
            ret = new B();
            break;
        case 2:
            std::cout << "C generated" << std::endl;
            ret = new C();
            break;
    }
	return ret;
}

void identify(Base* p)
{
	A *a = dynamic_cast<A*>(p);
	if (a)
	{
		std::cout << "It is A" << std::endl;
		return;
	}
	B *b = dynamic_cast<B*>(p);
	if (b)
    {
        std::cout << "It is B" << std::endl;
        return;
    }
	C *c = dynamic_cast<C*>(p);
	if (c)
    {
        std::cout << "It is C" << std::endl;
        return;
    }
}

void identify(Base& p)
{
	try
	{
		(void) dynamic_cast<A&>(p);
		std::cout << "A" << std::endl;
	}
	catch(std::exception & e)
	{}
	try
	{
		(void) dynamic_cast<B&>(p);
		std::cout << "B" << std::endl;
	}
	catch(std::exception & e)
	{}
	try
	{
		(void) dynamic_cast<C&>(p);
		std::cout << "C" << std::endl;
	}
	catch(std::exception & e)
	{}

}
