#include "NativizedAssets.h"
#include "E_Gait__pf2727903198.h"
FText E__E_Gait__pf__GetUserFriendlyName(int32 InValue)
{
	FText Text;
	const auto EnumValue = static_cast<E__E_Gait__pf>(InValue);
	switch(EnumValue)
	{
		case E__E_Gait__pf::NewEnumerator0: FTextStringHelper::ReadFromBuffer(TEXT("NSLOCTEXT(\"[14065E614286436B10B02CBE35E25545]\", \"51621C03443240FC4DC3FE881FF7A30B\", \"Walking\")"), Text); break;
		case E__E_Gait__pf::NewEnumerator1: FTextStringHelper::ReadFromBuffer(TEXT("NSLOCTEXT(\"[14065E614286436B10B02CBE35E25545]\", \"FD600BFC45C12746DF59869EDA8CF145\", \"Running\")"), Text); break;
		case E__E_Gait__pf::NewEnumerator2: FTextStringHelper::ReadFromBuffer(TEXT("NSLOCTEXT(\"[14065E614286436B10B02CBE35E25545]\", \"E2EBDC5246F2A0BCE192A0B27CA2432C\", \"Sprinting\")"), Text); break;
		case E__E_Gait__pf::E__E_Gait__pf_MAX: FTextStringHelper::ReadFromBuffer(TEXT("E MAX"), Text); break;
		default: ensure(false);
	};
	return Text;
};
