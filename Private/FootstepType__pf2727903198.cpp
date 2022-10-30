#include "NativizedAssets.h"
#include "FootstepType__pf2727903198.h"
FText E__FootstepType__pf__GetUserFriendlyName(int32 InValue)
{
	FText Text;
	const auto EnumValue = static_cast<E__FootstepType__pf>(InValue);
	switch(EnumValue)
	{
		case E__FootstepType__pf::NewEnumerator0: FTextStringHelper::ReadFromBuffer(TEXT("NSLOCTEXT(\"[B23B5789476B537D75AA90AC909411B6]\", \"1DFE64D74ED89E87CF4F749CFA9F45D3\", \"Step\")"), Text); break;
		case E__FootstepType__pf::NewEnumerator4: FTextStringHelper::ReadFromBuffer(TEXT("NSLOCTEXT(\"[B23B5789476B537D75AA90AC909411B6]\", \"DFED7FA34AE24CEDEBBAD28CD3F864AF\", \"Walk/Run\")"), Text); break;
		case E__FootstepType__pf::NewEnumerator7: FTextStringHelper::ReadFromBuffer(TEXT("NSLOCTEXT(\"[B23B5789476B537D75AA90AC909411B6]\", \"4721687642030F84CA8BADA50C2D196C\", \"Jump\")"), Text); break;
		case E__FootstepType__pf::NewEnumerator8: FTextStringHelper::ReadFromBuffer(TEXT("NSLOCTEXT(\"[B23B5789476B537D75AA90AC909411B6]\", \"AAF0FC684A1C3E29697CBD83C0DC1F50\", \"Land\")"), Text); break;
		case E__FootstepType__pf::E__FootstepType__pf_MAX: FTextStringHelper::ReadFromBuffer(TEXT("Footstep Type MAX"), Text); break;
		default: ensure(false);
	};
	return Text;
};
