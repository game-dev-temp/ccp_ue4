#pragma once
#include "E_InteractType__pf2151050371.generated.h"
UENUM(BlueprintType, meta=(ReplaceConverted="/Game/Mei/BP/BaseClasses/E_InteractType.E_InteractType", OverrideNativeName="E_InteractType", EnumDisplayNameFn="E__E_InteractType__pf__GetUserFriendlyName") )
enum class E__E_InteractType__pf  : uint8
{
	NewEnumerator0 = 0 UMETA(OverrideName = "E_InteractType::NewEnumerator0"),
	NewEnumerator1 = 1 UMETA(OverrideName = "E_InteractType::NewEnumerator1"),
	NewEnumerator2 = 2 UMETA(OverrideName = "E_InteractType::NewEnumerator2"),
	E__E_InteractType__pf_MAX = 3 UMETA(OverrideName = "E_InteractType::E_MAX"),
};
FText E__E_InteractType__pf__GetUserFriendlyName(int32 InValue);
