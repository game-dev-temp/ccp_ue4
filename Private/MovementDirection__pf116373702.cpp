#include "NativizedAssets.h"
#include "MovementDirection__pf116373702.h"
FText E__MovementDirection__pf__GetUserFriendlyName(int32 InValue)
{
	FText Text;
	const auto EnumValue = static_cast<E__MovementDirection__pf>(InValue);
	switch(EnumValue)
	{
		case E__MovementDirection__pf::NewEnumerator0: FTextStringHelper::ReadFromBuffer(TEXT("NSLOCTEXT(\"[EBC07F774DFBF6DEAF95688812041C04]\", \"729B6ABA47C5026EF6140688DE0581BC\", \"Forward\")"), Text); break;
		case E__MovementDirection__pf::NewEnumerator1: FTextStringHelper::ReadFromBuffer(TEXT("NSLOCTEXT(\"[EBC07F774DFBF6DEAF95688812041C04]\", \"7C31F8BE4FE0970D45BF1F9E15D4289E\", \"Right\")"), Text); break;
		case E__MovementDirection__pf::NewEnumerator2: FTextStringHelper::ReadFromBuffer(TEXT("NSLOCTEXT(\"[EBC07F774DFBF6DEAF95688812041C04]\", \"DF93FC2D49834B7B9A67C6A44567B510\", \"Left\")"), Text); break;
		case E__MovementDirection__pf::NewEnumerator3: FTextStringHelper::ReadFromBuffer(TEXT("NSLOCTEXT(\"[EBC07F774DFBF6DEAF95688812041C04]\", \"562DAF4C432161D6897AF4ADA7F129FA\", \"Backward\")"), Text); break;
		case E__MovementDirection__pf::E__MovementDirection__pf_MAX: FTextStringHelper::ReadFromBuffer(TEXT("Movement Direction 0 MAX"), Text); break;
		default: ensure(false);
	};
	return Text;
};
