#pragma once
#include "Blueprint/BlueprintSupport.h"
#include "Runtime/UMG/Public/UMG.h"
#include "OverlayStateButtonParams__pf977207518.h"
#include "ALS_OverlayState__pf116373702.h"
#include "ALS_Character_BPI__pf3750819539.h"
#include "Runtime/Engine/Classes/Engine/EngineTypes.h"
#include "ALS_MovementState__pf116373702.h"
#include "ALS_MovementAction__pf116373702.h"
#include "ALS_RotationMode__pf116373702.h"
#include "ALS_Gait__pf116373702.h"
#include "ALS_Stance__pf116373702.h"
#include "ALS_ViewMode__pf116373702.h"
#include "Runtime/SlateCore/Public/Layout/Geometry.h"
#include "ALS_Camera_BPI__pf3750819539.h"
#include "Runtime/CoreUObject/Public/UObject/NoExportTypes.h"
#include "Runtime/UMG/Public/Blueprint/UserWidget.h"
class UCanvasPanel;
class UVerticalBox;
#include "OverlayStateSwitcher__pf977207518.generated.h"
UCLASS(config=Engine, Blueprintable, BlueprintType, meta=(ReplaceConverted="/Game/AdvancedLocomotionV4/Blueprints/UI/OverlayStateSwitcher.OverlayStateSwitcher_C", OverrideNativeName="OverlayStateSwitcher_C"))
class UOverlayStateSwitcher_C__pf977207518 : public UUserWidget
{
public:
	GENERATED_BODY()
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="MovablePanel", Category="OverlayStateSwitcher", OverrideNativeName="MovablePanel"))
	UCanvasPanel* bpv__MovablePanel__pf;
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="VerticalBox", Category="OverlayStateSwitcher", OverrideNativeName="VerticalBox"))
	UVerticalBox* bpv__VerticalBox__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Overlay State Buttons", Category="Default", MultiLine="true", OverrideNativeName="OverlayStateButtons"))
	TArray<FOverlayStateButtonParams__pf977207518> bpv__OverlayStateButtons__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="New Overlay State", Category="Default", MultiLine="true", OverrideNativeName="NewOverlayState"))
	E__ALS_OverlayState__pf bpv__NewOverlayState__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_AsALS_Character_BPI"))
	TScriptInterface<IALS_Character_BPI_C> b0l__K2Node_DynamicCast_AsALS_Character_BPI__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_bSuccess"))
	bool b0l__K2Node_DynamicCast_bSuccess__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_BPI_Get_CurrentStates_PawnMovementMode"))
	TEnumAsByte<EMovementMode> b0l__CallFunc_BPI_Get_CurrentStates_PawnMovementMode__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_BPI_Get_CurrentStates_MovementState"))
	E__ALS_MovementState__pf b0l__CallFunc_BPI_Get_CurrentStates_MovementState__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_BPI_Get_CurrentStates_PrevMovementState"))
	E__ALS_MovementState__pf b0l__CallFunc_BPI_Get_CurrentStates_PrevMovementState__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_BPI_Get_CurrentStates_MovementAction"))
	E__ALS_MovementAction__pf b0l__CallFunc_BPI_Get_CurrentStates_MovementAction__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_BPI_Get_CurrentStates_RotationMode"))
	E__ALS_RotationMode__pf b0l__CallFunc_BPI_Get_CurrentStates_RotationMode__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_BPI_Get_CurrentStates_ActualGait"))
	E__ALS_Gait__pf b0l__CallFunc_BPI_Get_CurrentStates_ActualGait__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_BPI_Get_CurrentStates_ActualStance"))
	E__ALS_Stance__pf b0l__CallFunc_BPI_Get_CurrentStates_ActualStance__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_BPI_Get_CurrentStates_ViewMode"))
	E__ALS_ViewMode__pf b0l__CallFunc_BPI_Get_CurrentStates_ViewMode__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_BPI_Get_CurrentStates_OverlayState"))
	E__ALS_OverlayState__pf b0l__CallFunc_BPI_Get_CurrentStates_OverlayState__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_AsALS_Character_BPI_1"))
	TScriptInterface<IALS_Character_BPI_C> b0l__K2Node_DynamicCast_AsALS_Character_BPI_1__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_bSuccess_1"))
	bool b0l__K2Node_DynamicCast_bSuccess_1__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_Event_MyGeometry"))
	FGeometry b0l__K2Node_Event_MyGeometry__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_Event_InDeltaTime"))
	float b0l__K2Node_Event_InDeltaTime__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_AsALS_Camera_BPI"))
	TScriptInterface<IALS_Camera_BPI_C> b0l__K2Node_DynamicCast_AsALS_Camera_BPI__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_bSuccess_2"))
	bool b0l__K2Node_DynamicCast_bSuccess_2__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_BPI_Get_3P_PivotTarget_ReturnValue"))
	FTransform b0l__CallFunc_BPI_Get_3P_PivotTarget_ReturnValue__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_BreakTransform_Location"))
	FVector b0l__CallFunc_BreakTransform_Location__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_BreakTransform_Rotation"))
	FRotator b0l__CallFunc_BreakTransform_Rotation__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_BreakTransform_Scale"))
	FVector b0l__CallFunc_BreakTransform_Scale__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_ProjectWorldLocationToWidgetPosition_ScreenPosition"))
	FVector2D b0l__CallFunc_ProjectWorldLocationToWidgetPosition_ScreenPosition__pf;
	UOverlayStateSwitcher_C__pf977207518(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get());
	virtual void PostLoadSubobjects(FObjectInstancingGraph* OuterInstanceGraph) override;
	static void __CustomDynamicClassInitialization(UDynamicClass* InDynamicClass);
	static void __StaticDependenciesAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	static void __StaticDependencies_DirectlyUsedAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	void bpf__ExecuteUbergraph_OverlayStateSwitcher__pf_0(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_OverlayStateSwitcher__pf_1(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_OverlayStateSwitcher__pf_2(int32 bpp__EntryPoint__pf);
	UFUNCTION(BlueprintCosmetic, meta=(Category="User Interface", Comment="/**\t * Ticks this widget.  Override in derived classes, but always call the parent implementation.\t *\t * @param  MyGeometry The space allotted for this widget\t * @param  InDeltaTime  Real time passed since last tick\t */", ToolTip="Ticks this widget.  Override in derived classes, but always call the parent implementation.@param  MyGeometry The space allotted for this widget@param  InDeltaTime  Real time passed since last tick", CppFromBpEvent, OverrideNativeName="Tick"))
	virtual void bpf__Tick__pf(FGeometry bpp__MyGeometry__pf, float bpp__InDeltaTime__pf);
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="SelectOverlayState"))
	virtual void bpf__SelectOverlayState__pf();
	UFUNCTION(BlueprintCosmetic, meta=(Category="User Interface", Comment="/**\t * Called after the underlying slate widget is constructed.  Depending on how the slate object is used\t * this event may be called multiple times due to adding and removing from the hierarchy.\t * If you need a true called-once-when-created event, use OnInitialized.\t */", Keywords="Begin Play", ToolTip="Called after the underlying slate widget is constructed.  Depending on how the slate object is usedthis event may be called multiple times due to adding and removing from the hierarchy.If you need a true called-once-when-created event, use OnInitialized.", CppFromBpEvent, OverrideNativeName="Construct"))
	virtual void bpf__Construct__pf();
	UFUNCTION(BlueprintCallable, meta=(Category="Default", OverrideNativeName="CreateButtons"))
	virtual void bpf__CreateButtons__pf();
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="UpdateButtonFocus"))
	virtual void bpf__UpdateButtonFocus__pf();
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="CycleState"))
	virtual void bpf__CycleState__pf(bool bpp__Up__pf);
public:
	virtual void GetSlotNames(TArray<FName>& SlotNames) const override;
	virtual void PreSave(const class ITargetPlatform* TargetPlatform) override;
	virtual void InitializeNativeClassData() override;
};
