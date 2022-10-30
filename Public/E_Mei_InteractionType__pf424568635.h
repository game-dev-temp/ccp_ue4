#pragma once
#include "E_Mei_InteractionType__pf424568635.generated.h"
UENUM(BlueprintType, meta=(ReplaceConverted="/Game/Mei/BP/BuildingSystem/Enumerations/E_Mei_InteractionType.E_Mei_InteractionType", OverrideNativeName="E_Mei_InteractionType", EnumDisplayNameFn="E__E_Mei_InteractionType__pf__GetUserFriendlyName") )
enum class E__E_Mei_InteractionType__pf  : uint8
{
	NewEnumerator0 = 0 UMETA(OverrideName = "E_Mei_InteractionType::NewEnumerator0"),
	NewEnumerator1 = 1 UMETA(OverrideName = "E_Mei_InteractionType::NewEnumerator1"),
	NewEnumerator2 = 2 UMETA(OverrideName = "E_Mei_InteractionType::NewEnumerator2"),
	NewEnumerator3 = 3 UMETA(OverrideName = "E_Mei_InteractionType::NewEnumerator3"),
	E__E_Mei_InteractionType__pf_MAX = 4 UMETA(OverrideName = "E_Mei_InteractionType::E_Mei_MAX"),
};
FText E__E_Mei_InteractionType__pf__GetUserFriendlyName(int32 InValue);
