#pragma once
#include "Blueprint/BlueprintSupport.h"
#include "Runtime/Engine/Classes/GameFramework/GameStateBase.h"
#include "INT_Music__pf1751858689.h"
class UAudioComponent;
class USceneComponent;
#include "GS_Mei__pf4094240421.generated.h"
UCLASS(config=Game, Blueprintable, BlueprintType, meta=(ReplaceConverted="/Game/Mei/BP/GameMode/GS_Mei.GS_Mei_C", OverrideNativeName="GS_Mei_C"))
class AGS_Mei_C__pf4094240421 : public AGameStateBase, public IINT_Music_C
{
public:
	GENERATED_BODY()
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="Battle"))
	UAudioComponent* bpv__Battle__pf;
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="Normal"))
	UAudioComponent* bpv__Normal__pf;
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="DefaultSceneRoot"))
	USceneComponent* bpv__DefaultSceneRoot__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="In Battle Count", Category="Default", MultiLine="true", OverrideNativeName="InBattleCount"))
	float bpv__InBattleCount__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Replicated, meta=(DisplayName="Normal Audio", Category="Default", MultiLine="true", OverrideNativeName="NormalAudio"))
	UAudioComponent* bpv__NormalAudio__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Battle Audio", Category="Default", MultiLine="true", OverrideNativeName="BattleAudio"))
	UAudioComponent* bpv__BattleAudio__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Battle Music Ready", Category="Default", MultiLine="true", OverrideNativeName="BattleMusicReady"))
	bool bpv__BattleMusicReady__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Normal Music Ready", Category="Default", MultiLine="true", OverrideNativeName="NormalMusicReady"))
	bool bpv__NormalMusicReady__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Music Ready", Category="Default", MultiLine="true", OverrideNativeName="MusicReady"))
	bool bpv__MusicReady__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="Temp_bool_IsClosed_Variable"))
	bool b0l__Temp_bool_IsClosed_Variable__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="Temp_bool_Has_Been_Initd_Variable"))
	bool b0l__Temp_bool_Has_Been_Initd_Variable__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_Event_NewParam_1"))
	float b0l__K2Node_Event_NewParam_1__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_Event_NewParam"))
	float b0l__K2Node_Event_NewParam__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="Temp_bool_Has_Been_Initd_Variable_1"))
	bool b0l__Temp_bool_Has_Been_Initd_Variable_1__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="Temp_bool_IsClosed_Variable_1"))
	bool b0l__Temp_bool_IsClosed_Variable_1__pf;
	AGS_Mei_C__pf4094240421(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get());
	virtual void PostLoadSubobjects(FObjectInstancingGraph* OuterInstanceGraph) override;
	static void __CustomDynamicClassInitialization(UDynamicClass* InDynamicClass);
	static void __StaticDependenciesAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	static void __StaticDependencies_DirectlyUsedAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	UFUNCTION(meta=(OverrideNativeName="ExecuteUbergraph_GS_Mei_0"))
	void bpf__ExecuteUbergraph_GS_Mei__pf_0(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_GS_Mei__pf_1(int32 bpp__EntryPoint__pf);
	UFUNCTION(BlueprintCallable, meta=(Category, CppFromBpEvent, OverrideNativeName="ChangeMusicStateMinus"))
	virtual void bpf__ChangeMusicStateMinus__pf(float bpp__NewParam__pf);
	UFUNCTION(BlueprintCallable, meta=(Category, CppFromBpEvent, OverrideNativeName="ChangeMusicState"))
	virtual void bpf__ChangeMusicState__pf(float bpp__NewParam__pf);
	UFUNCTION(meta=(Comment="/** Event when play begins for this actor. */", DisplayName="BeginPlay", ToolTip="Event when play begins for this actor.", CppFromBpEvent, OverrideNativeName="ReceiveBeginPlay"))
	virtual void bpf__ReceiveBeginPlay__pf();
public:
};
