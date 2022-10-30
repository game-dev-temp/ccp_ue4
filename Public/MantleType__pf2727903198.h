#pragma once
#include "MantleType__pf2727903198.generated.h"
UENUM(BlueprintType, meta=(ReplaceConverted="/Game/Mei/BP/BaseClasses/copy_from_als_enums/MantleType.MantleType", OverrideNativeName="MantleType", EnumDisplayNameFn="E__MantleType__pf__GetUserFriendlyName") )
enum class E__MantleType__pf  : uint8
{
	NewEnumerator1 = 0 UMETA(OverrideName = "MantleType::NewEnumerator1"),
	NewEnumerator0 = 1 UMETA(OverrideName = "MantleType::NewEnumerator0"),
	NewEnumerator2 = 2 UMETA(OverrideName = "MantleType::NewEnumerator2"),
	E__MantleType__pf_MAX = 3 UMETA(OverrideName = "MantleType::MantleType_MAX"),
};
FText E__MantleType__pf__GetUserFriendlyName(int32 InValue);
