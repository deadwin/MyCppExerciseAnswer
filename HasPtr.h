#include<string>
class HasPtr{
public:
	HasPtr(const std::string&s = std::string()):
		ps(new std::string(s)), i(0), use(new std::size_t(1)){}
private:
	std::string *ps;
	int i;
	std::size_t *use;
};