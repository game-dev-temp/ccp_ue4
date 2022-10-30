#pragma once
#include "Blueprint/BlueprintSupport.h"
#include "BPI_Interaction__pf2939348713.generated.h"
UINTERFACE(Blueprintable, meta=(ReplaceConverted="/Game/Mei/test/Doors/BPI_Interaction.BPI_Interaction_C", OverrideNativeName="BPI_Interaction_C"))
class UBPI_Interaction_C : public UInterface
{
	GENERATED_BODY()
	static void __CustomDynamicClassInitialization(UDynamicClass* InDynamicClass) {}
};
class IBPI_Interaction_C
{
public:
	GENERATED_BODY()
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, meta=(Category, OverrideNativeName="Interact"))
	void bpf__Interact__pf();
public:
};
