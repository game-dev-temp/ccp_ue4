#pragma once
#include "Blueprint/BlueprintSupport.h"
#include "Runtime/UMG/Public/UMG.h"
#include "Runtime/UMG/Public/Blueprint/UserWidget.h"
#include "INT_EnemyAI__pf3466827441.h"
class UProgressBar;
class AActor;
#include "W_Enemy_HealthBar__pf2670873798.generated.h"
UCLASS(config=Engine, Blueprintable, BlueprintType, meta=(ReplaceConverted="/Game/Mei/UI/W_Enemy_HealthBar.W_Enemy_HealthBar_C", OverrideNativeName="W_Enemy_HealthBar_C"))
class UW_Enemy_HealthBar_C__pf2670873798 : public UUserWidget, public IINT_EnemyAI_C
{
public:
	GENERATED_BODY()
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="HealthBar", Category="W_Enemy_HealthBar", OverrideNativeName="HealthBar"))
	UProgressBar* bpv__HealthBar__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_Event_NewHealth"))
	float b0l__K2Node_Event_NewHealth__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_Event_Target"))
	AActor* b0l__K2Node_Event_Target__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_Event_State_1"))
	bool b0l__K2Node_Event_State_1__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_Event_State"))
	bool b0l__K2Node_Event_State__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_Event_Player"))
	AActor* b0l__K2Node_Event_Player__pf;
	UW_Enemy_HealthBar_C__pf2670873798(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get());
	virtual void PostLoadSubobjects(FObjectInstancingGraph* OuterInstanceGraph) override;
	static void __CustomDynamicClassInitialization(UDynamicClass* InDynamicClass);
	static void __StaticDependenciesAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	static void __StaticDependencies_DirectlyUsedAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	void bpf__ExecuteUbergraph_W_Enemy_HealthBar__pf_0(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_W_Enemy_HealthBar__pf_1(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_W_Enemy_HealthBar__pf_2(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_W_Enemy_HealthBar__pf_3(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_W_Enemy_HealthBar__pf_4(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_W_Enemy_HealthBar__pf_5(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_W_Enemy_HealthBar__pf_6(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_W_Enemy_HealthBar__pf_7(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_W_Enemy_HealthBar__pf_8(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_W_Enemy_HealthBar__pf_9(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_W_Enemy_HealthBar__pf_10(int32 bpp__EntryPoint__pf);
	UFUNCTION(BlueprintCallable, meta=(Category, CppFromBpEvent, OverrideNativeName="UpdateHealthBar"))
	virtual void bpf__UpdateHealthBar__pf(float bpp__NewHealth__pf);
	UFUNCTION(BlueprintCallable, meta=(Category, CppFromBpEvent, OverrideNativeName="ToggleTargetWidget"))
	virtual void bpf__ToggleTargetWidget__pf(bool bpp__State__pf, AActor* bpp__Player__pf);
	UFUNCTION(BlueprintCallable, meta=(Category, CppFromBpEvent, OverrideNativeName="DoRangeAttack"))
	virtual void bpf__DoRangeAttack__pf();
	UFUNCTION(BlueprintCallable, meta=(Category, CppFromBpEvent, OverrideNativeName="DoSphereOverlap"))
	virtual void bpf__DoSphereOverlap__pf();
	UFUNCTION(BlueprintCallable, meta=(Category, CppFromBpEvent, OverrideNativeName="SetMeleeCollision"))
	virtual void bpf__SetMeleeCollision__pf(bool bpp__State__pf);
	UFUNCTION(BlueprintCallable, meta=(Category, CppFromBpEvent, OverrideNativeName="ClearTarget"))
	virtual void bpf__ClearTarget__pf();
	UFUNCTION(BlueprintCallable, meta=(Category, CppFromBpEvent, OverrideNativeName="CheckForTaunt"))
	virtual void bpf__CheckForTaunt__pf();
	UFUNCTION(BlueprintCallable, meta=(Category, CppFromBpEvent, OverrideNativeName="RunAttackChoices"))
	virtual void bpf__RunAttackChoices__pf();
	UFUNCTION(BlueprintCallable, meta=(Category, CppFromBpEvent, OverrideNativeName="ChasePlayer"))
	virtual void bpf__ChasePlayer__pf();
	UFUNCTION(BlueprintCallable, meta=(Category, CppFromBpEvent, OverrideNativeName="SetPlayerTarget"))
	virtual void bpf__SetPlayerTarget__pf(const AActor* bpp__Target__pf__const);
	UFUNCTION(BlueprintCallable, meta=(Category, CppFromBpEvent, OverrideNativeName="SetRoaming"))
	virtual void bpf__SetRoaming__pf();
	UFUNCTION(BlueprintCallable, meta=(Category, CppFromBpEvent, OverrideNativeName="IsAIDead"))
	virtual void bpf__IsAIDead__pf(/*out*/ bool& bpp__IsDead__pf);
public:
	virtual void GetSlotNames(TArray<FName>& SlotNames) const override;
	virtual void PreSave(const class ITargetPlatform* TargetPlatform) override;
	virtual void InitializeNativeClassData() override;
};
