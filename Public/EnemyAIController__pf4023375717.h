#pragma once
#include "Blueprint/BlueprintSupport.h"
#include "INT_EnemyAI__pf3466827441.h"
#include "INT_Music__pf1751858689.h"
#include "Runtime/AIModule/Classes/DetourCrowdAIController.h"
class UPawnSensingComponent;
class AActor;
class APawn;
#include "EnemyAIController__pf4023375717.generated.h"
UCLASS(config=Engine, Blueprintable, BlueprintType, meta=(ReplaceConverted="/Game/Mei/BP/AI/Enemy/EnemyAIController.EnemyAIController_C", OverrideNativeName="EnemyAIController_C"))
class AEnemyAIController_C__pf4023375717 : public ADetourCrowdAIController
{
public:
	GENERATED_BODY()
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="PawnSensing"))
	UPawnSensingComponent* bpv__PawnSensing__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Target", Category="Default", MultiLine="true", OverrideNativeName="Target"))
	AActor* bpv__Target__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="Temp_bool_Has_Been_Initd_Variable"))
	bool b0l__Temp_bool_Has_Been_Initd_Variable__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="Temp_bool_IsClosed_Variable"))
	bool b0l__Temp_bool_IsClosed_Variable__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="Temp_bool_Has_Been_Initd_Variable_1"))
	bool b0l__Temp_bool_Has_Been_Initd_Variable_1__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_ComponentBoundEvent_Pawn"))
	APawn* b0l__K2Node_ComponentBoundEvent_Pawn__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_AsINT_Enemy_AI"))
	TScriptInterface<IINT_EnemyAI_C> b0l__K2Node_DynamicCast_AsINT_Enemy_AI__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_bSuccess"))
	bool b0l__K2Node_DynamicCast_bSuccess__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="Temp_bool_IsClosed_Variable_1"))
	bool b0l__Temp_bool_IsClosed_Variable_1__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_AsINT_Music"))
	TScriptInterface<IINT_Music_C> b0l__K2Node_DynamicCast_AsINT_Music__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_bSuccess_1"))
	bool b0l__K2Node_DynamicCast_bSuccess_1__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_AsINT_Music_1"))
	TScriptInterface<IINT_Music_C> b0l__K2Node_DynamicCast_AsINT_Music_1__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_bSuccess_2"))
	bool b0l__K2Node_DynamicCast_bSuccess_2__pf;
	AEnemyAIController_C__pf4023375717(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get());
	virtual void PostLoadSubobjects(FObjectInstancingGraph* OuterInstanceGraph) override;
	static void __CustomDynamicClassInitialization(UDynamicClass* InDynamicClass);
	static void __StaticDependenciesAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	static void __StaticDependencies_DirectlyUsedAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	void bpf__ExecuteUbergraph_EnemyAIController__pf_0(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_EnemyAIController__pf_1(int32 bpp__EntryPoint__pf);
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="Clear Target"))
	virtual void bpf__ClearxTarget__pfT();
	UFUNCTION(meta=(OverrideNativeName="BndEvt__EnemyAIController_PawnSensing_K2Node_ComponentBoundEvent_0_SeePawnDelegate__DelegateSignature"))
	virtual void bpf__BndEvt__EnemyAIController_PawnSensing_K2Node_ComponentBoundEvent_0_SeePawnDelegate__DelegateSignature__pf(APawn* bpp__Pawn__pf);
public:
};
