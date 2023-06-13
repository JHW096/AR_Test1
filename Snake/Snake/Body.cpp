#include "Body.h"
#include "ConsoleEngineCore.h"
#include "Value.h"
Body::Body() 
{
	this->SetChar('B');
	this->SetPos(RandomPos());
}

Body::~Body() 
{
}

int4 Body::RandomPos()
{
	
	int4 result;
	//??.,, ±×·¯°Ô
	int x = rand() % Value::ScreenSize.X; 

	int y = rand() % Value::ScreenSize.Y;

	result.X = x;
	result.Y = y;
	
	

	return result;
	
}

