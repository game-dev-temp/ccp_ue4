#pragma once
#include "GroundedEntryState__pf2727903198.generated.h"
UENUM(BlueprintType, meta=(ReplaceConverted="/Game/Mei/BP/BaseClasses/copy_from_als_enums/GroundedEntryState.GroundedEntryState", OverrideNativeName="GroundedEntryState", EnumDisplayNameFn="E__GroundedEntryState__pf__GetUserFriendlyName") )
enum class E__GroundedEntryState__pf  : uint8
{
	NewEnumerator0 = 0 UMETA(OverrideName = "GroundedEntryState::NewEnumerator0"),
	NewEnumerator2 = 1 UMETA(OverrideName = "GroundedEntryState::NewEnumerator2"),
	E__GroundedEntryState__pf_MAX = 2 UMETA(OverrideName = "GroundedEntryState::GroundedEntryState_MAX"),
};
FText E__GroundedEntryState__pf__GetUserFriendlyName(int32 InValue);
