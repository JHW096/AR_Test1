#pragma once
#include "ConsoleObject.h"
// ���� :
class Body : public ConsoleObject
{
public:
	// constrcuter destructer
	Body();
	~Body();

	// delete Function
	Body(const Body& _Other) = delete;
	Body(Body&& _Other) noexcept = delete;
	Body& operator=(const Body& _Other) = delete;
	Body& operator=(Body&& _Other) noexcept = delete;
	
	int4 RandomPos();


protected:

private:

};

