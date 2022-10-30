#pragma once
#include "E_Mei_ResourceType__pf424568635.generated.h"
UENUM(BlueprintType, meta=(ReplaceConverted="/Game/Mei/BP/BuildingSystem/Enumerations/E_Mei_ResourceType.E_Mei_ResourceType", OverrideNativeName="E_Mei_ResourceType", EnumDisplayNameFn="E__E_Mei_ResourceType__pf__GetUserFriendlyName") )
enum class E__E_Mei_ResourceType__pf  : uint8
{
	NewEnumerator0 = 0 UMETA(OverrideName = "E_Mei_ResourceType::NewEnumerator0"),
	NewEnumerator1 = 1 UMETA(OverrideName = "E_Mei_ResourceType::NewEnumerator1"),
	NewEnumerator2 = 2 UMETA(OverrideName = "E_Mei_ResourceType::NewEnumerator2"),
	E__E_Mei_ResourceType__pf_MAX = 3 UMETA(OverrideName = "E_Mei_ResourceType::E_Mei_MAX"),
};
FText E__E_Mei_ResourceType__pf__GetUserFriendlyName(int32 InValue);
