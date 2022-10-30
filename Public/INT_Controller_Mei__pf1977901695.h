#pragma once
#include "Blueprint/BlueprintSupport.h"
#include "INT_Controller_Mei__pf1977901695.generated.h"
UINTERFACE(Blueprintable, meta=(ReplaceConverted="/Game/Mei/BP/Interfaces/Character/INT_Controller_Mei.INT_Controller_Mei_C", OverrideNativeName="INT_Controller_Mei_C"))
class UINT_Controller_Mei_C : public UInterface
{
	GENERATED_BODY()
	static void __CustomDynamicClassInitialization(UDynamicClass* InDynamicClass) {}
};
class IINT_Controller_Mei_C
{
public:
	GENERATED_BODY()
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, meta=(Category, OverrideNativeName="ShowPickupName"))
	void bpf__ShowPickupName__pf(bool bpp__State__pf, const FText& bpp__Name__pf__const);
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, meta=(Category, OverrideNativeName="UpdateHealthUI"))
	void bpf__UpdateHealthUI__pf(float bpp__NewHealth__pf);
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, meta=(Category, OverrideNativeName="DeathScreenUI"))
	void bpf__DeathScreenUI__pf();
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, meta=(Category, OverrideNativeName="UpdateStaminaUI"))
	void bpf__UpdateStaminaUI__pf(float bpp__Stamina__pf);
public:
};
