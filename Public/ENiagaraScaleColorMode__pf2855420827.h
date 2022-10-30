#pragma once
#include "ENiagaraScaleColorMode__pf2855420827.generated.h"
UENUM(BlueprintType, meta=(ReplaceConverted="/Niagara/Enums/ENiagaraScaleColorMode.ENiagaraScaleColorMode", OverrideNativeName="ENiagaraScaleColorMode", EnumDisplayNameFn="E__ENiagaraScaleColorMode__pf__GetUserFriendlyName") )
enum class E__ENiagaraScaleColorMode__pf  : uint8
{
	NewEnumerator0 = 0 UMETA(OverrideName = "ENiagaraScaleColorMode::NewEnumerator0"),
	NewEnumerator1 = 1 UMETA(OverrideName = "ENiagaraScaleColorMode::NewEnumerator1"),
	E__ENiagaraScaleColorMode__pf_MAX = 2 UMETA(OverrideName = "ENiagaraScaleColorMode::ENiagaraScaleColorMode_MAX"),
};
FText E__ENiagaraScaleColorMode__pf__GetUserFriendlyName(int32 InValue);
