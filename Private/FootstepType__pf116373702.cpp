#include "NativizedAssets.h"
#include "FootstepType__pf116373702.h"
FText E__FootstepType__pf__GetUserFriendlyName(int32 InValue)
{
	FText Text;
	const auto EnumValue = static_cast<E__FootstepType__pf>(InValue);
	switch(EnumValue)
	{
		case E__FootstepType__pf::NewEnumerator0: FTextStringHelper::ReadFromBuffer(TEXT("NSLOCTEXT(\"[EBFB4EAD490DE9FF50DA4299CC19E8DD]\", \"97DF54E544BAF152DE431BB0F63A7844\", \"Step\")"), Text); break;
		case E__FootstepType__pf::NewEnumerator4: FTextStringHelper::ReadFromBuffer(TEXT("NSLOCTEXT(\"[EBFB4EAD490DE9FF50DA4299CC19E8DD]\", \"98C01A2542B6E486873130AF6C7A5354\", \"Walk/Run\")"), Text); break;
		case E__FootstepType__pf::NewEnumerator7: FTextStringHelper::ReadFromBuffer(TEXT("NSLOCTEXT(\"[EBFB4EAD490DE9FF50DA4299CC19E8DD]\", \"74681C4844DF63857B36979EDA1E0FA2\", \"Jump\")"), Text); break;
		case E__FootstepType__pf::NewEnumerator8: FTextStringHelper::ReadFromBuffer(TEXT("NSLOCTEXT(\"[EBFB4EAD490DE9FF50DA4299CC19E8DD]\", \"B8E155F3430194011F7F8592A2910FDF\", \"Land\")"), Text); break;
		case E__FootstepType__pf::E__FootstepType__pf_MAX: FTextStringHelper::ReadFromBuffer(TEXT("Footstep Type 0 MAX"), Text); break;
		default: ensure(false);
	};
	return Text;
};
