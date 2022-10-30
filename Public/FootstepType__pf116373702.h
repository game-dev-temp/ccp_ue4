#pragma once
#include "FootstepType__pf116373702.generated.h"
UENUM(BlueprintType, meta=(ReplaceConverted="/Game/AdvancedLocomotionV4/Data/Enums/FootstepType.FootstepType", OverrideNativeName="FootstepType", EnumDisplayNameFn="E__FootstepType__pf__GetUserFriendlyName") )
enum class E__FootstepType__pf  : uint8
{
	NewEnumerator0 = 0 UMETA(OverrideName = "FootstepType::NewEnumerator0"),
	NewEnumerator4 = 1 UMETA(OverrideName = "FootstepType::NewEnumerator4"),
	NewEnumerator7 = 2 UMETA(OverrideName = "FootstepType::NewEnumerator7"),
	NewEnumerator8 = 3 UMETA(OverrideName = "FootstepType::NewEnumerator8"),
	E__FootstepType__pf_MAX = 4 UMETA(OverrideName = "FootstepType::FootstepType_0_MAX"),
};
FText E__FootstepType__pf__GetUserFriendlyName(int32 InValue);
