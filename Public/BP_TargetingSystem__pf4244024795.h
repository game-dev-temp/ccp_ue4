#pragma once
#include "Blueprint/BlueprintSupport.h"
#include "Runtime/Engine/Classes/Engine/EngineTypes.h"
#include "INT_Character_Mei__pf1977901695.h"
#include "INT_EnemyAI__pf3466827441.h"
#include "Runtime/Engine/Classes/Components/ActorComponent.h"
class APawn;
class APlayerController;
class AActor;
#include "BP_TargetingSystem__pf4244024795.generated.h"
UCLASS(config=Engine, Blueprintable, BlueprintType, meta=(ReplaceConverted="/Game/Mei/BP/Character/BP_TargetingSystem.BP_TargetingSystem_C", OverrideNativeName="BP_TargetingSystem_C"))
class UBP_TargetingSystem_C__pf4244024795 : public UActorComponent
{
public:
	GENERATED_BODY()
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Replicated, meta=(DisplayName="Player Pawn", Category="Default", MultiLine="true", OverrideNativeName="PlayerPawn"))
	APawn* bpv__PlayerPawn__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Replicated, meta=(DisplayName="Player Controller", Category="Default", MultiLine="true", OverrideNativeName="PlayerController"))
	APlayerController* bpv__PlayerController__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Replicated, meta=(DisplayName="Currently Targeting", Category="Default", MultiLine="true", OverrideNativeName="CurrentlyTargeting"))
	bool bpv__CurrentlyTargeting__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Potential Targets", Category="Default", MultiLine="true", OverrideNativeName="PotentialTargets"))
	TArray<AActor*> bpv__PotentialTargets__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Locked Target", Category="Default", MultiLine="true", OverrideNativeName="LockedTarget"))
	AActor* bpv__LockedTarget__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Closest Distance", Category="Default", MultiLine="true", OverrideNativeName="ClosestDistance"))
	float bpv__ClosestDistance__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Lock Handle", Category="Default", MultiLine="true", OverrideNativeName="LockHandle"))
	FTimerHandle bpv__LockHandle__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_CreateDelegate_OutputDelegate"))
	FTimerDynamicDelegate b0l__K2Node_CreateDelegate_OutputDelegate__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="Temp_int_Array_Index_Variable"))
	int32 b0l__Temp_int_Array_Index_Variable__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="Temp_int_Loop_Counter_Variable"))
	int32 b0l__Temp_int_Loop_Counter_Variable__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="Temp_int_Array_Index_Variable_1"))
	int32 b0l__Temp_int_Array_Index_Variable_1__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_AsPawn"))
	APawn* b0l__K2Node_DynamicCast_AsPawn__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_bSuccess"))
	bool b0l__K2Node_DynamicCast_bSuccess__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_MakeArray_Array"))
	TArray<TEnumAsByte<EObjectTypeQuery> > b0l__K2Node_MakeArray_Array__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_Array_Get_Item"))
	AActor* b0l__CallFunc_Array_Get_Item__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_CustomEvent_State"))
	bool b0l__K2Node_CustomEvent_State__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="Temp_object_Variable"))
	TArray<AActor*> b0l__Temp_object_Variable__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_AsINT_Character_Mei"))
	TScriptInterface<IINT_Character_Mei_C> b0l__K2Node_DynamicCast_AsINT_Character_Mei__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_bSuccess_1"))
	bool b0l__K2Node_DynamicCast_bSuccess_1__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_SphereOverlapActors_OutActors"))
	TArray<AActor*> b0l__CallFunc_SphereOverlapActors_OutActors__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_Array_Get_Item_1"))
	AActor* b0l__CallFunc_Array_Get_Item_1__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_AsINT_Enemy_AI"))
	TScriptInterface<IINT_EnemyAI_C> b0l__K2Node_DynamicCast_AsINT_Enemy_AI__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_bSuccess_2"))
	bool b0l__K2Node_DynamicCast_bSuccess_2__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_IsAIDead_IsDead"))
	bool b0l__CallFunc_IsAIDead_IsDead__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_AsINT_Character_Mei_1"))
	TScriptInterface<IINT_Character_Mei_C> b0l__K2Node_DynamicCast_AsINT_Character_Mei_1__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_bSuccess_3"))
	bool b0l__K2Node_DynamicCast_bSuccess_3__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_AsPlayer_Controller"))
	APlayerController* b0l__K2Node_DynamicCast_AsPlayer_Controller__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_bSuccess_4"))
	bool b0l__K2Node_DynamicCast_bSuccess_4__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_AsINT_Enemy_AI_1"))
	TScriptInterface<IINT_EnemyAI_C> b0l__K2Node_DynamicCast_AsINT_Enemy_AI_1__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_bSuccess_5"))
	bool b0l__K2Node_DynamicCast_bSuccess_5__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_AsINT_Enemy_AI_2"))
	TScriptInterface<IINT_EnemyAI_C> b0l__K2Node_DynamicCast_AsINT_Enemy_AI_2__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_bSuccess_6"))
	bool b0l__K2Node_DynamicCast_bSuccess_6__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="Temp_int_Loop_Counter_Variable_1"))
	int32 b0l__Temp_int_Loop_Counter_Variable_1__pf;
	UBP_TargetingSystem_C__pf4244024795(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get());
	virtual void PostLoadSubobjects(FObjectInstancingGraph* OuterInstanceGraph) override;
	static void __CustomDynamicClassInitialization(UDynamicClass* InDynamicClass);
	static void __StaticDependenciesAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	static void __StaticDependencies_DirectlyUsedAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	void bpf__ExecuteUbergraph_BP_TargetingSystem__pf_0(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_BP_TargetingSystem__pf_1(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_BP_TargetingSystem__pf_2(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_BP_TargetingSystem__pf_3(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_BP_TargetingSystem__pf_4(int32 bpp__EntryPoint__pf);
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="CheckTargetDistance"))
	virtual void bpf__CheckTargetDistance__pf();
	UFUNCTION(Server, Reliable, BlueprintCallable, meta=(Category, OverrideNativeName="ToggleCameraLock"))
	virtual void bpf__ToggleCameraLock__pf(bool bpp__State__pf);
	UFUNCTION(Server, Reliable, BlueprintCallable, meta=(Category, OverrideNativeName="FindTargets"))
	virtual void bpf__FindTargets__pf();
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="LockOnTarget"))
	virtual void bpf__LockOnTarget__pf();
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="Initialize"))
	virtual void bpf__Initialize__pf();
public:
};
