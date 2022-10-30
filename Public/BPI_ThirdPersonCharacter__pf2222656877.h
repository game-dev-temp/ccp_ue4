#pragma once
#include "Blueprint/BlueprintSupport.h"
#include "BPI_ThirdPersonCharacter__pf2222656877.generated.h"
UINTERFACE(Blueprintable, meta=(ReplaceConverted="/Game/ThirdPersonBP/Blueprints/BPI_ThirdPersonCharacter.BPI_ThirdPersonCharacter_C", OverrideNativeName="BPI_ThirdPersonCharacter_C"))
class UBPI_ThirdPersonCharacter_C : public UInterface
{
	GENERATED_BODY()
	static void __CustomDynamicClassInitialization(UDynamicClass* InDynamicClass) {}
};
class IBPI_ThirdPersonCharacter_C
{
public:
	GENERATED_BODY()
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, meta=(Category, OverrideNativeName="GetHIt"))
	void bpf__GetHIt__pf();
public:
};
