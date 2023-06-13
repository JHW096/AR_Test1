#include "Body.h"
#include "ConsoleEngineCore.h"
Body::Body() 
{
	this->SetChar('B');
	this->SetPos({ 2, 2});
	
}

Body::~Body() 
{
}

//int4 Body::RandomPos()
//{
//	
//	int4 result;
//	//??.,, ±×·¯°Ô
//	int x = rand() % ConsoleEngineCore::Screen.GetScale().X; 
//
//	int y = rand() % ConsoleEngineCore::Screen.GetScale().Y;
//
//	result.X = x;
//	result.Y = y;
//	
//	
//
//	return result;
//	
//}

