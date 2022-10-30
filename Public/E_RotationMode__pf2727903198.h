#pragma once
#include "E_RotationMode__pf2727903198.generated.h"
UENUM(BlueprintType, meta=(ReplaceConverted="/Game/Mei/BP/BaseClasses/copy_from_als_enums/E_RotationMode.E_RotationMode", OverrideNativeName="E_RotationMode", EnumDisplayNameFn="E__E_RotationMode__pf__GetUserFriendlyName") )
enum class E__E_RotationMode__pf  : uint8
{
	NewEnumerator0 = 0 UMETA(OverrideName = "E_RotationMode::NewEnumerator0"),
	NewEnumerator1 = 1 UMETA(OverrideName = "E_RotationMode::NewEnumerator1"),
	NewEnumerator3 = 2 UMETA(OverrideName = "E_RotationMode::NewEnumerator3"),
	E__E_RotationMode__pf_MAX = 3 UMETA(OverrideName = "E_RotationMode::E_MAX"),
};
FText E__E_RotationMode__pf__GetUserFriendlyName(int32 InValue);
