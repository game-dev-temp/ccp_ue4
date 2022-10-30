#pragma once
#include "E_Mei_ViewMode__pf424568635.generated.h"
UENUM(BlueprintType, meta=(ReplaceConverted="/Game/Mei/BP/BuildingSystem/Enumerations/E_Mei_ViewMode.E_Mei_ViewMode", OverrideNativeName="E_Mei_ViewMode", EnumDisplayNameFn="E__E_Mei_ViewMode__pf__GetUserFriendlyName") )
enum class E__E_Mei_ViewMode__pf  : uint8
{
	NewEnumerator0 = 0 UMETA(OverrideName = "E_Mei_ViewMode::NewEnumerator0"),
	NewEnumerator1 = 1 UMETA(OverrideName = "E_Mei_ViewMode::NewEnumerator1"),
	NewEnumerator2 = 2 UMETA(OverrideName = "E_Mei_ViewMode::NewEnumerator2"),
	E__E_Mei_ViewMode__pf_MAX = 3 UMETA(OverrideName = "E_Mei_ViewMode::E_Mei_MAX"),
};
FText E__E_Mei_ViewMode__pf__GetUserFriendlyName(int32 InValue);
