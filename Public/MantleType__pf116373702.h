#pragma once
#include "MantleType__pf116373702.generated.h"
UENUM(BlueprintType, meta=(ReplaceConverted="/Game/AdvancedLocomotionV4/Data/Enums/MantleType.MantleType", OverrideNativeName="MantleType", EnumDisplayNameFn="E__MantleType__pf__GetUserFriendlyName") )
enum class E__MantleType__pf  : uint8
{
	NewEnumerator1 = 0 UMETA(OverrideName = "MantleType::NewEnumerator1"),
	NewEnumerator0 = 1 UMETA(OverrideName = "MantleType::NewEnumerator0"),
	NewEnumerator2 = 2 UMETA(OverrideName = "MantleType::NewEnumerator2"),
	E__MantleType__pf_MAX = 3 UMETA(OverrideName = "MantleType::MantleType_0_MAX"),
};
FText E__MantleType__pf__GetUserFriendlyName(int32 InValue);
