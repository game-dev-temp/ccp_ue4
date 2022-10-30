#pragma once
#include "Blueprint/BlueprintSupport.h"
#include "E_InteractType__pf2151050371.h"
#include "INT_Interactable__pf336516450.generated.h"
UINTERFACE(Blueprintable, meta=(ReplaceConverted="/Game/Mei/BP/Interfaces/INT_Interactable.INT_Interactable_C", OverrideNativeName="INT_Interactable_C"))
class UINT_Interactable_C : public UInterface
{
	GENERATED_BODY()
	static void __CustomDynamicClassInitialization(UDynamicClass* InDynamicClass) {}
};
class IINT_Interactable_C
{
public:
	GENERATED_BODY()
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, meta=(Category, OverrideNativeName="GetInteractType"))
	void bpf__GetInteractType__pf(/*out*/ E__E_InteractType__pf& bpp__InteractType__pf);
public:
};
