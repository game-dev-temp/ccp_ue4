#pragma once
#include "HipsDirection__pf116373702.generated.h"
UENUM(BlueprintType, meta=(ReplaceConverted="/Game/AdvancedLocomotionV4/Data/Enums/HipsDirection.HipsDirection", OverrideNativeName="HipsDirection", EnumDisplayNameFn="E__HipsDirection__pf__GetUserFriendlyName") )
enum class E__HipsDirection__pf  : uint8
{
	NewEnumerator0 = 0 UMETA(OverrideName = "HipsDirection::NewEnumerator0"),
	NewEnumerator1 = 1 UMETA(OverrideName = "HipsDirection::NewEnumerator1"),
	NewEnumerator2 = 2 UMETA(OverrideName = "HipsDirection::NewEnumerator2"),
	NewEnumerator3 = 3 UMETA(OverrideName = "HipsDirection::NewEnumerator3"),
	NewEnumerator4 = 4 UMETA(OverrideName = "HipsDirection::NewEnumerator4"),
	NewEnumerator5 = 5 UMETA(OverrideName = "HipsDirection::NewEnumerator5"),
	E__HipsDirection__pf_MAX = 6 UMETA(OverrideName = "HipsDirection::HipsDirection_0_MAX"),
};
FText E__HipsDirection__pf__GetUserFriendlyName(int32 InValue);
