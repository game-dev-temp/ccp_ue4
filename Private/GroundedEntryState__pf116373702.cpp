#include "NativizedAssets.h"
#include "GroundedEntryState__pf116373702.h"
FText E__GroundedEntryState__pf__GetUserFriendlyName(int32 InValue)
{
	FText Text;
	const auto EnumValue = static_cast<E__GroundedEntryState__pf>(InValue);
	switch(EnumValue)
	{
		case E__GroundedEntryState__pf::NewEnumerator0: FTextStringHelper::ReadFromBuffer(TEXT("NSLOCTEXT(\"[D96209F3471AC916757774B3427CD8AA]\", \"886EC6224D00ED436F1204B24B915695\", \"None\")"), Text); break;
		case E__GroundedEntryState__pf::NewEnumerator2: FTextStringHelper::ReadFromBuffer(TEXT("NSLOCTEXT(\"[D96209F3471AC916757774B3427CD8AA]\", \"668517A342B0C777F22CC5B1F5D5B367\", \"Roll\")"), Text); break;
		case E__GroundedEntryState__pf::E__GroundedEntryState__pf_MAX: FTextStringHelper::ReadFromBuffer(TEXT("Grounded Entry State 0 MAX"), Text); break;
		default: ensure(false);
	};
	return Text;
};
