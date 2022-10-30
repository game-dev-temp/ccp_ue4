#pragma once
#include "Blueprint/BlueprintSupport.h"
#include "INT_Music__pf1751858689.generated.h"
UINTERFACE(Blueprintable, meta=(ReplaceConverted="/Game/Mei/BP/Interfaces/Level/INT_Music.INT_Music_C", OverrideNativeName="INT_Music_C"))
class UINT_Music_C : public UInterface
{
	GENERATED_BODY()
	static void __CustomDynamicClassInitialization(UDynamicClass* InDynamicClass) {}
};
class IINT_Music_C
{
public:
	GENERATED_BODY()
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, meta=(Category, OverrideNativeName="ChangeMusicState"))
	void bpf__ChangeMusicState__pf(float bpp__NewParam__pf);
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, meta=(Category, OverrideNativeName="ChangeMusicStateMinus"))
	void bpf__ChangeMusicStateMinus__pf(float bpp__NewParam__pf);
public:
};
