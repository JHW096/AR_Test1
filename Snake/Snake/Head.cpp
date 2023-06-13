#include "Head.h"
#include <conio.h>
#include "ConsoleEngineCore.h"
#include "Body.h"

Head::Head() 
{
    SetChar('H');
    SetPos({ 1, 0 });
    
}

Head::~Head() 
{
}

void Head::Tick(float _Time) 
{
    ConsoleEngineCore::Screen.SetPixel(GetPos(), 'H');

    char Select = (char)_getch();

    int4 MovePos = { 0, 0 };

    switch (Select)
    {
    case 'a':
        MovePos = int4::Left;
        break;
    case 'd':
        MovePos = int4::Right;
        break;
    case 'w':
        MovePos = int4::Up;
        break;
    case 's':
        MovePos = int4::Down;
        break;
    case 'q':
        ConsoleEngineCore::EngineOff();
        break;
    default:
        break;
    }

    
    //SetPrevPos(GetPos());
    if (this->GetPos() + MovePos == this->GetPrevPos())
    {
        return;
    }
    else
    {
        AddPos(MovePos);
    }
    SetPrevPos({ GetPos().X - MovePos.X, GetPos().Y - MovePos.Y });
 
    /*ConsoleObject* part = nullptr;
    for (auto& e : ConsoleEngineCore::GetList())
    {
        if (e->GetChar() == 'B')
        {
            part = ConsoleEngineCore::CreateObject<Body>();
            break;
        }
    }
    

    SetNext(dynamic_cast<Part*>(part));*/
    
    
    
}