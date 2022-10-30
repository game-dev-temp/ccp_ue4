#pragma once
#include "Blueprint/BlueprintSupport.h"
#include "Runtime/InputCore/Classes/InputCoreTypes.h"
#include "Runtime/Engine/Classes/GameFramework/PlayerController.h"
#include "INT_Controller_Mei__pf1977901695.h"
class UBP_Mei_ResourcesComponent_C__pf1731449071;
class UBP_Mei_InteractionComponent_C__pf1731449071;
class UBP_Mei_BuildingComponent_C__pf1731449071;
class UWidget_PlayerUI_C__pf2670873798;
class APawn;
class ABP_ALS_Mei_PlayerCameraManager_C__pf2678393923;
#include "BP_Controller_Mei__pf2151050371.generated.h"
UCLASS(config=Game, Blueprintable, BlueprintType, meta=(ReplaceConverted="/Game/Mei/BP/BaseClasses/BP_Controller_Mei.BP_Controller_Mei_C", OverrideNativeName="BP_Controller_Mei_C"))
class ABP_Controller_Mei_C__pf2151050371 : public APlayerController, public IINT_Controller_Mei_C
{
public:
	GENERATED_BODY()
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="ResourcesComponent"))
	UBP_Mei_ResourcesComponent_C__pf1731449071* bpv__ResourcesComponent__pf;
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="InteractionComponent"))
	UBP_Mei_InteractionComponent_C__pf1731449071* bpv__InteractionComponent__pf;
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="BuildingComponent"))
	UBP_Mei_BuildingComponent_C__pf1731449071* bpv__BuildingComponent__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Player UI", Category="Default", MultiLine="true", OverrideNativeName="PlayerUI"))
	UWidget_PlayerUI_C__pf2670873798* bpv__PlayerUI__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_InputKeyEvent_Key_1"))
	FKey b0l__K2Node_InputKeyEvent_Key_1__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_InputKeyEvent_Key"))
	FKey b0l__K2Node_InputKeyEvent_Key__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="Temp_struct_Variable"))
	FKey b0l__Temp_struct_Variable__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_InputKeyEvent_Key_4"))
	FKey b0l__K2Node_InputKeyEvent_Key_4__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_Event_NewHealth"))
	float b0l__K2Node_Event_NewHealth__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_CustomEvent_Health"))
	float b0l__K2Node_CustomEvent_Health__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_Event_Stamina"))
	float b0l__K2Node_Event_Stamina__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_CustomEvent_StaminaPercent"))
	float b0l__K2Node_CustomEvent_StaminaPercent__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_Event_PossessedPawn"))
	APawn* b0l__K2Node_Event_PossessedPawn__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_InputKeyEvent_Key_2"))
	FKey b0l__K2Node_InputKeyEvent_Key_2__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_CustomEvent_Message"))
	FText b0l__K2Node_CustomEvent_Message__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_CustomEvent_State"))
	bool b0l__K2Node_CustomEvent_State__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_AsBP_ALS_Mei_Player_Camera_Manager"))
	ABP_ALS_Mei_PlayerCameraManager_C__pf2678393923* b0l__K2Node_DynamicCast_AsBP_ALS_Mei_Player_Camera_Manager__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_bSuccess"))
	bool b0l__K2Node_DynamicCast_bSuccess__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="Temp_struct_Variable_1"))
	FKey b0l__Temp_struct_Variable_1__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_InputKeyEvent_Key_3"))
	FKey b0l__K2Node_InputKeyEvent_Key_3__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_Event_State"))
	bool b0l__K2Node_Event_State__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_Event_Name"))
	FText b0l__K2Node_Event_Name__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_TryQuickInteraction_Success"))
	bool b0l__CallFunc_TryQuickInteraction_Success__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_ShowBuildingMenu_Success"))
	bool b0l__CallFunc_ShowBuildingMenu_Success__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_HideBuildingMenu_Success"))
	bool b0l__CallFunc_HideBuildingMenu_Success__pf;
	ABP_Controller_Mei_C__pf2151050371(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get());
	virtual void PostLoadSubobjects(FObjectInstancingGraph* OuterInstanceGraph) override;
	static void __CustomDynamicClassInitialization(UDynamicClass* InDynamicClass);
	static void __StaticDependenciesAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	static void __StaticDependencies_DirectlyUsedAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	void bpf__ExecuteUbergraph_BP_Controller_Mei__pf_0(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_BP_Controller_Mei__pf_1(int32 bpp__EntryPoint__pf);
	UFUNCTION(meta=(OverrideNativeName="ExecuteUbergraph_BP_Controller_Mei_2"))
	void bpf__ExecuteUbergraph_BP_Controller_Mei__pf_2(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_BP_Controller_Mei__pf_3(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_BP_Controller_Mei__pf_4(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_BP_Controller_Mei__pf_5(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_BP_Controller_Mei__pf_6(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_BP_Controller_Mei__pf_7(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_BP_Controller_Mei__pf_8(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_BP_Controller_Mei__pf_9(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_BP_Controller_Mei__pf_10(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_BP_Controller_Mei__pf_11(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_BP_Controller_Mei__pf_12(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_BP_Controller_Mei__pf_13(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_BP_Controller_Mei__pf_14(int32 bpp__EntryPoint__pf);
	UFUNCTION(meta=(Comment="/** Event when play begins for this actor. */", DisplayName="BeginPlay", ToolTip="Event when play begins for this actor.", CppFromBpEvent, OverrideNativeName="ReceiveBeginPlay"))
	virtual void bpf__ReceiveBeginPlay__pf();
	UFUNCTION(BlueprintCallable, meta=(Category, CppFromBpEvent, OverrideNativeName="ShowPickupName"))
	virtual void bpf__ShowPickupName__pf(bool bpp__State__pf, const FText& bpp__Name__pf__const);
	UFUNCTION(Client, Reliable, BlueprintCallable, meta=(Category, OverrideNativeName="Client_ShowPickupName"))
	virtual void bpf__Client_ShowPickupName__pf(const FText& bpp__Message__pf__const, bool bpp__State__pf);
	UFUNCTION(meta=(Comment="/** Blueprint implementable event to react to the controller possessing a pawn */", DisplayName="On Possess", ToolTip="Blueprint implementable event to react to the controller possessing a pawn", CppFromBpEvent, OverrideNativeName="ReceivePossess"))
	virtual void bpf__ReceivePossess__pf(APawn* bpp__PossessedPawn__pf);
	UFUNCTION(Client, Reliable, BlueprintCallable, meta=(Category, OverrideNativeName="Client_UpdateStamina"))
	virtual void bpf__Client_UpdateStamina__pf(float bpp__StaminaPercent__pf);
	UFUNCTION(BlueprintCallable, meta=(Category, CppFromBpEvent, OverrideNativeName="UpdateStaminaUI"))
	virtual void bpf__UpdateStaminaUI__pf(float bpp__Stamina__pf);
	UFUNCTION(Client, Reliable, BlueprintCallable, meta=(Category, OverrideNativeName="Client_CreateDeathScreen"))
	virtual void bpf__Client_CreateDeathScreen__pf();
	UFUNCTION(BlueprintCallable, meta=(Category, CppFromBpEvent, OverrideNativeName="DeathScreenUI"))
	virtual void bpf__DeathScreenUI__pf();
	UFUNCTION(Client, Reliable, BlueprintCallable, meta=(Category, OverrideNativeName="Client_UpdateHealthUI"))
	virtual void bpf__Client_UpdateHealthUI__pf(float bpp__Health__pf);
	UFUNCTION(BlueprintCallable, meta=(Category, CppFromBpEvent, OverrideNativeName="UpdateHealthUI"))
	virtual void bpf__UpdateHealthUI__pf(float bpp__NewHealth__pf);
	UFUNCTION(meta=(OverrideNativeName="InpActEvt_Q_K2Node_InputKeyEvent_0"))
	virtual void bpf__InpActEvt_Q_K2Node_InputKeyEvent_0__pf(FKey bpp__Key__pf);
	UFUNCTION(meta=(OverrideNativeName="InpActEvt_Q_K2Node_InputKeyEvent_1"))
	virtual void bpf__InpActEvt_Q_K2Node_InputKeyEvent_1__pf(FKey bpp__Key__pf);
	UFUNCTION(meta=(OverrideNativeName="InpActEvt_B_K2Node_InputKeyEvent_2"))
	virtual void bpf__InpActEvt_B_K2Node_InputKeyEvent_2__pf(FKey bpp__Key__pf);
	UFUNCTION(meta=(OverrideNativeName="InpActEvt_E_K2Node_InputKeyEvent_3"))
	virtual void bpf__InpActEvt_E_K2Node_InputKeyEvent_3__pf(FKey bpp__Key__pf);
	UFUNCTION(meta=(OverrideNativeName="InpActEvt_E_K2Node_InputKeyEvent_4"))
	virtual void bpf__InpActEvt_E_K2Node_InputKeyEvent_4__pf(FKey bpp__Key__pf);
public:
};
