#include "BaseProgress.h"

void BaseProgress::SetProgressType(SBaseProgress::eType type)
{
	progressType = type;
}

SBaseProgress::eType BaseProgress::GetProgressType() const
{
	return progressType;
}
