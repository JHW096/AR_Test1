#pragma once
#include "ConsoleObject.h"

// Ό³Έν :
class Part : public ConsoleObject
{
public:
	// constrcuter destructer
	Part();
	~Part();

	// delete Function
	Part(const Part& _Other) = delete;
	Part(Part&& _Other) noexcept = delete;
	Part& operator=(const Part& _Other) = delete;
	Part& operator=(Part&& _Other) noexcept = delete;

public:
	int4 GetPrevPos() const
	{
		return PrevPos;
	}

	void SetPrevPos(const int4& _CurPos)
	{
		PrevPos = _CurPos;
	}

	void AddPrevPos(const int4& _Pos)
	{
		PrevPos += _Pos;
	}

	void SetNext(Part* _Part)
	{
		if (_Part == nullptr)
		{
			return;
		}

		Next = _Part;
		_Part->Prev = this;
		_Part->SetPos(GetPrevPos());
		
	}

protected:

private:
	Part* Next = nullptr;
	Part* Prev = nullptr;
	int4 PrevPos;
};

