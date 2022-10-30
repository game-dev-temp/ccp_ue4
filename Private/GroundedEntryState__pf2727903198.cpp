#include "NativizedAssets.h"
#include "GroundedEntryState__pf2727903198.h"
FText E__GroundedEntryState__pf__GetUserFriendlyName(int32 InValue)
{
	FText Text;
	const auto EnumValue = static_cast<E__GroundedEntryState__pf>(InValue);
	switch(EnumValue)
	{
		case E__GroundedEntryState__pf::NewEnumerator0: FTextStringHelper::ReadFromBuffer(TEXT("NSLOCTEXT(\"[C03A2471439C1768F1C30DBF9701EB7B]\", \"41FAE1274416678F889404A4F09A08FD\", \"None\")"), Text); break;
		case E__GroundedEntryState__pf::NewEnumerator2: FTextStringHelper::ReadFromBuffer(TEXT("NSLOCTEXT(\"[C03A2471439C1768F1C30DBF9701EB7B]\", \"1591868E4982228F097BE8A17DC35531\", \"Roll\")"), Text); break;
		case E__GroundedEntryState__pf::E__GroundedEntryState__pf_MAX: FTextStringHelper::ReadFromBuffer(TEXT("Grounded Entry State MAX"), Text); break;
		default: ensure(false);
	};
	return Text;
};
