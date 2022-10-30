#pragma once
#include "E_Gait__pf2727903198.generated.h"
UENUM(BlueprintType, meta=(ReplaceConverted="/Game/Mei/BP/BaseClasses/copy_from_als_enums/E_Gait.E_Gait", OverrideNativeName="E_Gait", EnumDisplayNameFn="E__E_Gait__pf__GetUserFriendlyName") )
enum class E__E_Gait__pf  : uint8
{
	NewEnumerator0 = 0 UMETA(OverrideName = "E_Gait::NewEnumerator0"),
	NewEnumerator1 = 1 UMETA(OverrideName = "E_Gait::NewEnumerator1"),
	NewEnumerator2 = 2 UMETA(OverrideName = "E_Gait::NewEnumerator2"),
	E__E_Gait__pf_MAX = 3 UMETA(OverrideName = "E_Gait::E_MAX"),
};
FText E__E_Gait__pf__GetUserFriendlyName(int32 InValue);
