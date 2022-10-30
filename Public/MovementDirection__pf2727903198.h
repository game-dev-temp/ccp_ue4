#pragma once
#include "MovementDirection__pf2727903198.generated.h"
UENUM(BlueprintType, meta=(ReplaceConverted="/Game/Mei/BP/BaseClasses/copy_from_als_enums/MovementDirection.MovementDirection", OverrideNativeName="MovementDirection", EnumDisplayNameFn="E__MovementDirection__pf__GetUserFriendlyName") )
enum class E__MovementDirection__pf  : uint8
{
	NewEnumerator0 = 0 UMETA(OverrideName = "MovementDirection::NewEnumerator0"),
	NewEnumerator1 = 1 UMETA(OverrideName = "MovementDirection::NewEnumerator1"),
	NewEnumerator2 = 2 UMETA(OverrideName = "MovementDirection::NewEnumerator2"),
	NewEnumerator3 = 3 UMETA(OverrideName = "MovementDirection::NewEnumerator3"),
	E__MovementDirection__pf_MAX = 4 UMETA(OverrideName = "MovementDirection::MovementDirection_MAX"),
};
FText E__MovementDirection__pf__GetUserFriendlyName(int32 InValue);
