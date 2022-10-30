#pragma once
#include "Blueprint/BlueprintSupport.h"
#include "E_PickupTypes__pf4194264409.h"
#include "INT_Pickups__pf1219282945.generated.h"
UINTERFACE(Blueprintable, meta=(ReplaceConverted="/Game/Mei/BP/Interfaces/Pickup/INT_Pickups.INT_Pickups_C", OverrideNativeName="INT_Pickups_C"))
class UINT_Pickups_C : public UInterface
{
	GENERATED_BODY()
	static void __CustomDynamicClassInitialization(UDynamicClass* InDynamicClass) {}
};
class IINT_Pickups_C
{
public:
	GENERATED_BODY()
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, meta=(Category, OverrideNativeName="DisablePhysics"))
	void bpf__DisablePhysics__pf();
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, meta=(Category, OverrideNativeName="GetPickupType"))
	void bpf__GetPickupType__pf(/*out*/ E__E_PickupTypes__pf& bpp__PickupType__pf);
public:
};
