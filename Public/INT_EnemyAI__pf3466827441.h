#pragma once
#include "Blueprint/BlueprintSupport.h"
class AActor;
#include "INT_EnemyAI__pf3466827441.generated.h"
UINTERFACE(Blueprintable, meta=(ReplaceConverted="/Game/Mei/BP/Interfaces/AI/INT_EnemyAI.INT_EnemyAI_C", OverrideNativeName="INT_EnemyAI_C"))
class UINT_EnemyAI_C : public UInterface
{
	GENERATED_BODY()
	static void __CustomDynamicClassInitialization(UDynamicClass* InDynamicClass) {}
};
class IINT_EnemyAI_C
{
public:
	GENERATED_BODY()
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, meta=(Category, OverrideNativeName="SetRoaming"))
	void bpf__SetRoaming__pf();
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, meta=(Category, OverrideNativeName="SetPlayerTarget"))
	void bpf__SetPlayerTarget__pf(const AActor* bpp__Target__pf__const);
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, meta=(Category, OverrideNativeName="ChasePlayer"))
	void bpf__ChasePlayer__pf();
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, meta=(Category, OverrideNativeName="RunAttackChoices"))
	void bpf__RunAttackChoices__pf();
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, meta=(Category, OverrideNativeName="CheckForTaunt"))
	void bpf__CheckForTaunt__pf();
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, meta=(Category, OverrideNativeName="ClearTarget"))
	void bpf__ClearTarget__pf();
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, meta=(Category, OverrideNativeName="SetMeleeCollision"))
	void bpf__SetMeleeCollision__pf(bool bpp__State__pf);
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, meta=(Category, OverrideNativeName="DoSphereOverlap"))
	void bpf__DoSphereOverlap__pf();
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, meta=(Category, OverrideNativeName="DoRangeAttack"))
	void bpf__DoRangeAttack__pf();
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, meta=(Category, OverrideNativeName="IsAIDead"))
	void bpf__IsAIDead__pf(/*out*/ bool& bpp__IsDead__pf);
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, meta=(Category, OverrideNativeName="ToggleTargetWidget"))
	void bpf__ToggleTargetWidget__pf(bool bpp__State__pf, AActor* bpp__Player__pf);
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, meta=(Category, OverrideNativeName="UpdateHealthBar"))
	void bpf__UpdateHealthBar__pf(float bpp__NewHealth__pf);
public:
};
