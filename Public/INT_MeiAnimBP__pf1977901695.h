#pragma once
#include "Blueprint/BlueprintSupport.h"
#include "INT_MeiAnimBP__pf1977901695.generated.h"
UINTERFACE(Blueprintable, meta=(ReplaceConverted="/Game/Mei/BP/Interfaces/Character/INT_MeiAnimBP.INT_MeiAnimBP_C", OverrideNativeName="INT_MeiAnimBP_C"))
class UINT_MeiAnimBP_C : public UInterface
{
	GENERATED_BODY()
	static void __CustomDynamicClassInitialization(UDynamicClass* InDynamicClass) {}
};
class IINT_MeiAnimBP_C
{
public:
	GENERATED_BODY()
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, meta=(Category, OverrideNativeName="SprintState"))
	void bpf__SprintState__pf(bool bpp__State__pf);
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, meta=(Category, OverrideNativeName="RollingState"))
	void bpf__RollingState__pf(bool bpp__State__pf);
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, meta=(Category, OverrideNativeName="FullBodyState"))
	void bpf__FullBodyState__pf(bool bpp__State__pf);
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, meta=(Category, OverrideNativeName="BlockingState"))
	void bpf__BlockingState__pf(bool bpp__State__pf);
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, meta=(Category, OverrideNativeName="HangingState"))
	void bpf__HangingState__pf(bool bpp__IsHanging__pf);
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, meta=(Category, OverrideNativeName="HangingMoveState"))
	void bpf__HangingMoveState__pf(bool bpp__Left__pf, bool bpp__Right__pf);
public:
};
