#pragma once
#include "E_Stance__pf2727903198.generated.h"
UENUM(BlueprintType, meta=(ReplaceConverted="/Game/Mei/BP/BaseClasses/copy_from_als_enums/E_Stance.E_Stance", OverrideNativeName="E_Stance", EnumDisplayNameFn="E__E_Stance__pf__GetUserFriendlyName") )
enum class E__E_Stance__pf  : uint8
{
	NewEnumerator0 = 0 UMETA(OverrideName = "E_Stance::NewEnumerator0"),
	NewEnumerator1 = 1 UMETA(OverrideName = "E_Stance::NewEnumerator1"),
	E__E_Stance__pf_MAX = 2 UMETA(OverrideName = "E_Stance::E_MAX"),
};
FText E__E_Stance__pf__GetUserFriendlyName(int32 InValue);
