#pragma once
#include "E_MovementAction__pf2727903198.generated.h"
UENUM(BlueprintType, meta=(ReplaceConverted="/Game/Mei/BP/BaseClasses/copy_from_als_enums/E_MovementAction.E_MovementAction", OverrideNativeName="E_MovementAction", EnumDisplayNameFn="E__E_MovementAction__pf__GetUserFriendlyName") )
enum class E__E_MovementAction__pf  : uint8
{
	NewEnumerator4 = 0 UMETA(OverrideName = "E_MovementAction::NewEnumerator4"),
	NewEnumerator0 = 1 UMETA(OverrideName = "E_MovementAction::NewEnumerator0"),
	NewEnumerator1 = 2 UMETA(OverrideName = "E_MovementAction::NewEnumerator1"),
	NewEnumerator2 = 3 UMETA(OverrideName = "E_MovementAction::NewEnumerator2"),
	NewEnumerator3 = 4 UMETA(OverrideName = "E_MovementAction::NewEnumerator3"),
	E__E_MovementAction__pf_MAX = 5 UMETA(OverrideName = "E_MovementAction::E_MAX"),
};
FText E__E_MovementAction__pf__GetUserFriendlyName(int32 InValue);
