#pragma once
#include "E_ViewMode__pf2727903198.generated.h"
UENUM(BlueprintType, meta=(ReplaceConverted="/Game/Mei/BP/BaseClasses/copy_from_als_enums/E_ViewMode.E_ViewMode", OverrideNativeName="E_ViewMode", EnumDisplayNameFn="E__E_ViewMode__pf__GetUserFriendlyName") )
enum class E__E_ViewMode__pf  : uint8
{
	NewEnumerator0 = 0 UMETA(OverrideName = "E_ViewMode::NewEnumerator0"),
	NewEnumerator1 = 1 UMETA(OverrideName = "E_ViewMode::NewEnumerator1"),
	E__E_ViewMode__pf_MAX = 2 UMETA(OverrideName = "E_ViewMode::E_MAX"),
};
FText E__E_ViewMode__pf__GetUserFriendlyName(int32 InValue);
