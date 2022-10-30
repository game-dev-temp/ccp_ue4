#pragma once
#include "Blueprint/BlueprintSupport.h"
#include "BPI_InteractWithWeapon__pf4204138153.generated.h"
UINTERFACE(Blueprintable, meta=(ReplaceConverted="/Game/Mei/BP/Interfaces/Pickup/old/BPI_InteractWithWeapon.BPI_InteractWithWeapon_C", OverrideNativeName="BPI_InteractWithWeapon_C"))
class UBPI_InteractWithWeapon_C : public UInterface
{
	GENERATED_BODY()
	static void __CustomDynamicClassInitialization(UDynamicClass* InDynamicClass) {}
};
class IBPI_InteractWithWeapon_C
{
public:
	GENERATED_BODY()
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, meta=(Category, OverrideNativeName="PickUp"))
	void bpf__PickUp__pf();
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, meta=(Category, OverrideNativeName="AttackReady"))
	void bpf__AttackReady__pf();
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, meta=(Category, OverrideNativeName="AttackNoReady"))
	void bpf__AttackNoReady__pf();
public:
};
