#include "NativizedAssets.h"
#include "E_AIMovementState__pf4023375717.h"
FText E__E_AIMovementState__pf__GetUserFriendlyName(int32 InValue)
{
	FText Text;
	const auto EnumValue = static_cast<E__E_AIMovementState__pf>(InValue);
	switch(EnumValue)
	{
		case E__E_AIMovementState__pf::NewEnumerator0: FTextStringHelper::ReadFromBuffer(TEXT("NSLOCTEXT(\"[D91096AA4F1F56CFC17BDCAA26418C98]\", \"2D9AD0264DE7A9DDFCE30BACADF34C03\", \"Idle\")"), Text); break;
		case E__E_AIMovementState__pf::NewEnumerator1: FTextStringHelper::ReadFromBuffer(TEXT("NSLOCTEXT(\"[D91096AA4F1F56CFC17BDCAA26418C98]\", \"C06F808D4F8B5B7D50714BBD8E61050A\", \"Walking\")"), Text); break;
		case E__E_AIMovementState__pf::NewEnumerator2: FTextStringHelper::ReadFromBuffer(TEXT("NSLOCTEXT(\"[D91096AA4F1F56CFC17BDCAA26418C98]\", \"8E690BCC4D7DC56889EF39B5912C15EE\", \"Running\")"), Text); break;
		case E__E_AIMovementState__pf::E__E_AIMovementState__pf_MAX: FTextStringHelper::ReadFromBuffer(TEXT("E MAX"), Text); break;
		default: ensure(false);
	};
	return Text;
};
