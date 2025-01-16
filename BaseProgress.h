#pragma once
#include <iostream>

namespace SBaseProgress
{
	enum class eType
	{
		None = 0,
		Tank = 1,
		Battle = 2,
	};
}

class BaseProgress
{
public:
	virtual ~BaseProgress() = default;

	void SetProgressType(SBaseProgress::eType type);
	SBaseProgress::eType GetProgressType() const;

	virtual void InputProgress() = 0;

private:
	SBaseProgress::eType progressType = SBaseProgress::eType::None;
protected:
	BaseProgress() {};
};