#include <iostream>


class Character
{
public:
	Character() {}
	~Character() {}
	void Print() { std::cout << "Printing Character" << std::endl; }
};

class HandleToCharacter
{
public:
	HandleToCharacter() : character(new Character()){}
	Character* operator->() { return character; }

private:
	Character* character;
};

int main()
{

	HandleToCharacter handle; handle->Print();
	//delete handle->~Character;
	system("pause");
}


class DrawAPI
{
public:
	virtual void Draw() = 0;
};

class DrawImpl : public DrawAPI
{
public:
	void Draw() { std::cout << "Draw impl" << std::endl; }
};

