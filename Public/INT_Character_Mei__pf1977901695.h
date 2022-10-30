#pragma once
#include "Blueprint/BlueprintSupport.h"
class ABP_BasePickup_C__pf4194264409;
class AActor;
#include "INT_Character_Mei__pf1977901695.generated.h"
UINTERFACE(Blueprintable, meta=(ReplaceConverted="/Game/Mei/BP/Interfaces/Character/INT_Character_Mei.INT_Character_Mei_C", OverrideNativeName="INT_Character_Mei_C"))
class UINT_Character_Mei_C : public UInterface
{
	GENERATED_BODY()
	static void __CustomDynamicClassInitialization(UDynamicClass* InDynamicClass) {}
};
class IINT_Character_Mei_C
{
public:
	GENERATED_BODY()
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, meta=(Category, OverrideNativeName="SetPickupInfo"))
	void bpf__SetPickupInfo__pf(ABP_BasePickup_C__pf4194264409* bpp__PickupActor__pf, bool bpp__Overlapping__pf);
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, meta=(Category, OverrideNativeName="LightAttack"))
	void bpf__LightAttack__pf();
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, meta=(Category, OverrideNativeName="UpdateMovement"))
	void bpf__UpdateMovement__pf(bool bpp__CanMove__pf, /*out*/ bool& bpp__Return__pf);
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, meta=(Category, OverrideNativeName="IsDead"))
	void bpf__IsDead__pf(/*out*/ bool& bpp__Dead__pf);
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, meta=(Category, OverrideNativeName="HeavyAttack"))
	void bpf__HeavyAttack__pf();
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, meta=(Category, OverrideNativeName="SpawnSoulsParticle"))
	void bpf__SpawnSoulsParticle__pf(int32 bpp__SoulsXP__pf);
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, meta=(Category, OverrideNativeName="LockCamera"))
	void bpf__LockCamera__pf(bool bpp__Lock__pf, AActor* bpp__Target__pf);
public:
};
