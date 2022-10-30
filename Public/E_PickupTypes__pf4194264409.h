#pragma once
#include "E_PickupTypes__pf4194264409.generated.h"
UENUM(BlueprintType, meta=(ReplaceConverted="/Game/Mei/BP/Pickup/E_PickupTypes.E_PickupTypes", OverrideNativeName="E_PickupTypes", EnumDisplayNameFn="E__E_PickupTypes__pf__GetUserFriendlyName") )
enum class E__E_PickupTypes__pf  : uint8
{
	NewEnumerator0 = 0 UMETA(OverrideName = "E_PickupTypes::NewEnumerator0"),
	NewEnumerator1 = 1 UMETA(OverrideName = "E_PickupTypes::NewEnumerator1"),
	NewEnumerator2 = 2 UMETA(OverrideName = "E_PickupTypes::NewEnumerator2"),
	E__E_PickupTypes__pf_MAX = 3 UMETA(OverrideName = "E_PickupTypes::E_MAX"),
};
FText E__E_PickupTypes__pf__GetUserFriendlyName(int32 InValue);
