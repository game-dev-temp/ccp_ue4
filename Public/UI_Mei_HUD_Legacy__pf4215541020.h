#pragma once
#include "Blueprint/BlueprintSupport.h"
#include "Runtime/UMG/Public/UMG.h"
#include "Runtime/SlateCore/Public/Layout/Geometry.h"
#include "BPI_Mei_Player__pf685842786.h"
#include "Runtime/Engine/Classes/Engine/DataTable.h"
#include "E_Mei_BuildingMode__pf424568635.h"
#include "Runtime/UMG/Public/Components/SlateWrapperTypes.h"
#include "Runtime/UMG/Public/Blueprint/UserWidget.h"
#include "BPI_Mei_BuildingWidget__pf685842786.h"
#include "BPI_Mei_InteractionWidget__pf685842786.h"
class UWidgetAnimation;
class UImage;
class UProgressBar;
class UTextBlock;
class UVerticalBox;
class UUI_Mei_InteractionSlot_C__pf4215541020;
class UUI_Mei_BuildingMenu_Legacy_C__pf4215541020;
class UUI_Mei_MalletMenu_C__pf4215541020;
class UUI_Mei_ResourceValue_C__pf4215541020;
class UBP_Mei_BuildingComponent_C__pf1731449071;
class UBP_Mei_InteractionComponent_C__pf1731449071;
class UBP_Mei_ResourcesComponent_C__pf1731449071;
class USoundBase;
class UUI_Mei_MenuSegment_C__pf4215541020;
class ABP_Mei_Building_BaseObject_C__pf2826203124;
class UUI_Mei_BuildingObjectButtonSlot_C__pf4215541020;
#include "UI_Mei_HUD_Legacy__pf4215541020.generated.h"
UCLASS(config=Engine, Blueprintable, BlueprintType, meta=(ReplaceConverted="/Game/Mei/UI/BuildingSystem/UI_Mei_HUD_Legacy.UI_Mei_HUD_Legacy_C", OverrideNativeName="UI_Mei_HUD_Legacy_C"))
class UUI_Mei_HUD_Legacy_C__pf4215541020 : public UUserWidget, public IBPI_Mei_BuildingWidget_C, public IBPI_Mei_InteractionWidget_C
{
public:
	GENERATED_BODY()
	UPROPERTY(BlueprintReadOnly, Transient, meta=(DisplayName="FadeBorderAnimation", Category="Animations", OverrideNativeName="FadeBorderAnimation"))
	UWidgetAnimation* bpv__FadeBorderAnimation__pf;
	UPROPERTY(BlueprintReadOnly, Transient, meta=(DisplayName="ShowErrorMessageAnimation", Category="Animations", OverrideNativeName="ShowErrorMessageAnimation"))
	UWidgetAnimation* bpv__ShowErrorMessageAnimation__pf;
	UPROPERTY(Export, meta=(DisplayName="CrosshairImage", OverrideNativeName="CrosshairImage"))
	UImage* bpv__CrosshairImage__pf;
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="DurabilityProgressBar", Category="UI_Mei_HUD_Legacy", OverrideNativeName="DurabilityProgressBar"))
	UProgressBar* bpv__DurabilityProgressBar__pf;
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="DurabilityText", Category="UI_Mei_HUD_Legacy", OverrideNativeName="DurabilityText"))
	UTextBlock* bpv__DurabilityText__pf;
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="ErrorMessageText", Category="UI_Mei_HUD_Legacy", OverrideNativeName="ErrorMessageText"))
	UTextBlock* bpv__ErrorMessageText__pf;
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="InteractionBox", Category="UI_Mei_HUD_Legacy", OverrideNativeName="InteractionBox"))
	UVerticalBox* bpv__InteractionBox__pf;
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="InteractionKeyText", Category="UI_Mei_HUD_Legacy", OverrideNativeName="InteractionKeyText"))
	UTextBlock* bpv__InteractionKeyText__pf;
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="InteractionObjectNameText", Category="UI_Mei_HUD_Legacy", OverrideNativeName="InteractionObjectNameText"))
	UTextBlock* bpv__InteractionObjectNameText__pf;
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="InteractionSlotHachet", Category="UI_Mei_HUD_Legacy", OverrideNativeName="InteractionSlotHachet"))
	UUI_Mei_InteractionSlot_C__pf4215541020* bpv__InteractionSlotHachet__pf;
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="InteractionSlotmallet", Category="UI_Mei_HUD_Legacy", OverrideNativeName="InteractionSlotmallet"))
	UUI_Mei_InteractionSlot_C__pf4215541020* bpv__InteractionSlotmallet__pf;
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="InteractionSlotPickaxe", Category="UI_Mei_HUD_Legacy", OverrideNativeName="InteractionSlotPickaxe"))
	UUI_Mei_InteractionSlot_C__pf4215541020* bpv__InteractionSlotPickaxe__pf;
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="InteractionText", Category="UI_Mei_HUD_Legacy", OverrideNativeName="InteractionText"))
	UTextBlock* bpv__InteractionText__pf;
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="LegacyBuildingMenu", Category="UI_Mei_HUD_Legacy", OverrideNativeName="LegacyBuildingMenu"))
	UUI_Mei_BuildingMenu_Legacy_C__pf4215541020* bpv__LegacyBuildingMenu__pf;
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="MalletMenu", Category="UI_Mei_HUD_Legacy", OverrideNativeName="MalletMenu"))
	UUI_Mei_MalletMenu_C__pf4215541020* bpv__MalletMenu__pf;
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="Metaltvalue", Category="UI_Mei_HUD_Legacy", OverrideNativeName="Metaltvalue"))
	UUI_Mei_ResourceValue_C__pf4215541020* bpv__Metaltvalue__pf;
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="Stonevalue", Category="UI_Mei_HUD_Legacy", OverrideNativeName="Stonevalue"))
	UUI_Mei_ResourceValue_C__pf4215541020* bpv__Stonevalue__pf;
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="WoodValue", Category="UI_Mei_HUD_Legacy", OverrideNativeName="WoodValue"))
	UUI_Mei_ResourceValue_C__pf4215541020* bpv__WoodValue__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Building Component", Category="Default", OverrideNativeName="BuildingComponent"))
	UBP_Mei_BuildingComponent_C__pf1731449071* bpv__BuildingComponent__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Interaction Component", Category="Default", OverrideNativeName="InteractionComponent"))
	UBP_Mei_InteractionComponent_C__pf1731449071* bpv__InteractionComponent__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Resource Component", Category="Default", OverrideNativeName="ResourceComponent"))
	UBP_Mei_ResourcesComponent_C__pf1731449071* bpv__ResourceComponent__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Show Menu Sound", Category="Settings", OverrideNativeName="ShowMenuSound"))
	USoundBase* bpv__ShowMenuSound__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Hide Menu Sound", Category="Settings", OverrideNativeName="HideMenuSound"))
	USoundBase* bpv__HideMenuSound__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_ComponentBoundEvent_MenuSegmentWidget"))
	UUI_Mei_MenuSegment_C__pf4215541020* b0l__K2Node_ComponentBoundEvent_MenuSegmentWidget__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_ComponentBoundEvent_HideMenu"))
	bool b0l__K2Node_ComponentBoundEvent_HideMenu__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_Event_MyGeometry"))
	FGeometry b0l__K2Node_Event_MyGeometry__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_Event_InDeltaTime"))
	float b0l__K2Node_Event_InDeltaTime__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_AsBPI_Mei_Player"))
	TScriptInterface<IBPI_Mei_Player_C> b0l__K2Node_DynamicCast_AsBPI_Mei_Player__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_bSuccess"))
	bool b0l__K2Node_DynamicCast_bSuccess__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_Event_InteractionComponent"))
	UBP_Mei_InteractionComponent_C__pf1731449071* b0l__K2Node_Event_InteractionComponent__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_Event_BuildingObject"))
	ABP_Mei_Building_BaseObject_C__pf2826203124* b0l__K2Node_Event_BuildingObject__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_Event_BuildingComponent"))
	UBP_Mei_BuildingComponent_C__pf1731449071* b0l__K2Node_Event_BuildingComponent__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_Event_BuildingListHandle"))
	FDataTableRowHandle b0l__K2Node_Event_BuildingListHandle__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_ComponentBoundEvent_BuildingObjectButtonWidget"))
	UUI_Mei_BuildingObjectButtonSlot_C__pf4215541020* b0l__K2Node_ComponentBoundEvent_BuildingObjectButtonWidget__pf;
	UUI_Mei_HUD_Legacy_C__pf4215541020(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get());
	virtual void PostLoadSubobjects(FObjectInstancingGraph* OuterInstanceGraph) override;
	static void __CustomDynamicClassInitialization(UDynamicClass* InDynamicClass);
	static void __StaticDependenciesAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	static void __StaticDependencies_DirectlyUsedAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	void bpf__ExecuteUbergraph_UI_Mei_HUD_Legacy__pf_0(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_UI_Mei_HUD_Legacy__pf_1(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_UI_Mei_HUD_Legacy__pf_2(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_UI_Mei_HUD_Legacy__pf_3(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_UI_Mei_HUD_Legacy__pf_4(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_UI_Mei_HUD_Legacy__pf_5(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_UI_Mei_HUD_Legacy__pf_6(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_UI_Mei_HUD_Legacy__pf_7(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_UI_Mei_HUD_Legacy__pf_8(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_UI_Mei_HUD_Legacy__pf_9(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_UI_Mei_HUD_Legacy__pf_10(int32 bpp__EntryPoint__pf);
	UFUNCTION(meta=(OverrideNativeName="BndEvt__UI_Mei_HUD_Legacy_MalletMenu_K2Node_ComponentBoundEvent_4_OnMenuSegmentClicked__DelegateSignature"))
	virtual void bpf__BndEvt__UI_Mei_HUD_Legacy_MalletMenu_K2Node_ComponentBoundEvent_4_OnMenuSegmentClicked__DelegateSignature__pf(UUI_Mei_MenuSegment_C__pf4215541020* bpp__MenuSegmentWidget__pf, bool bpp__HideMenu__pf);
	UFUNCTION(meta=(OverrideNativeName="BndEvt__UI_Mei_HUD_Legacy_LegacyBuildingMenu_K2Node_ComponentBoundEvent_1_OnBuildingObjectSelected__DelegateSignature"))
	virtual void bpf__BndEvt__UI_Mei_HUD_Legacy_LegacyBuildingMenu_K2Node_ComponentBoundEvent_1_OnBuildingObjectSelected__DelegateSignature__pf(UUI_Mei_BuildingObjectButtonSlot_C__pf4215541020* bpp__BuildingObjectButtonWidget__pf);
	UFUNCTION(BlueprintCallable, meta=(Category="Interfaces|BPI Mei Building Widget", CppFromBpEvent, OverrideNativeName="HideMalletMenu_BPI"))
	virtual void bpf__HideMalletMenu_BPI__pf();
	UFUNCTION(BlueprintCallable, meta=(Category="Interfaces|BPI Mei Building Widget", Tooltip="Update building list for building menu.", CppFromBpEvent, OverrideNativeName="UpdateBuildingList_BPI"))
	virtual void bpf__UpdateBuildingList_BPI__pf(FDataTableRowHandle bpp__BuildingListHandle__pf);
	UFUNCTION(BlueprintCallable, meta=(Category="Interfaces|BPI Mei Building Widget", Tooltip="Hide building menu for player.", CppFromBpEvent, OverrideNativeName="HideBuildingMenu_BPI"))
	virtual void bpf__HideBuildingMenu_BPI__pf();
	UFUNCTION(BlueprintCallable, meta=(Category="Interfaces|BPI Mei Building Widget", Tooltip="Show building menu for player.", CppFromBpEvent, OverrideNativeName="ShowBuildingMenu_BPI"))
	virtual void bpf__ShowBuildingMenu_BPI__pf();
	UFUNCTION(BlueprintCallable, meta=(Category="Interfaces|BPI Mei Building Widget", Tooltip="Set building component reference for building widget.", CppFromBpEvent, OverrideNativeName="SetBuildingComponentReference_BPI"))
	virtual void bpf__SetBuildingComponentReference_BPI__pf(UBP_Mei_BuildingComponent_C__pf1731449071* bpp__BuildingComponent__pf);
	UFUNCTION(BlueprintCallable, meta=(Category="Interfaces|BPI Mei Building Widget", CppFromBpEvent, OverrideNativeName="ShowMalletMenu_BPI"))
	virtual void bpf__ShowMalletMenu_BPI__pf(ABP_Mei_Building_BaseObject_C__pf2826203124* bpp__BuildingObject__pf);
	UFUNCTION(BlueprintCallable, meta=(Category="Interfaces|BPI Mei Interaction Widget", Tooltip="Set interaction component reference for interaction widget.", CppFromBpEvent, OverrideNativeName="SetInteractionComponentReference_BPI"))
	virtual void bpf__SetInteractionComponentReference_BPI__pf(UBP_Mei_InteractionComponent_C__pf1731449071* bpp__InteractionComponent__pf);
	UFUNCTION(BlueprintCosmetic, meta=(Category="User Interface", Comment="/**\t * Called after the underlying slate widget is constructed.  Depending on how the slate object is used\t * this event may be called multiple times due to adding and removing from the hierarchy.\t * If you need a true called-once-when-created event, use OnInitialized.\t */", Keywords="Begin Play", ToolTip="Called after the underlying slate widget is constructed.  Depending on how the slate object is usedthis event may be called multiple times due to adding and removing from the hierarchy.If you need a true called-once-when-created event, use OnInitialized.", CppFromBpEvent, OverrideNativeName="Construct"))
	virtual void bpf__Construct__pf();
	UFUNCTION(BlueprintCosmetic, meta=(Category="User Interface", Comment="/**\t * Ticks this widget.  Override in derived classes, but always call the parent implementation.\t *\t * @param  MyGeometry The space allotted for this widget\t * @param  InDeltaTime  Real time passed since last tick\t */", ToolTip="Ticks this widget.  Override in derived classes, but always call the parent implementation.@param  MyGeometry The space allotted for this widget@param  InDeltaTime  Real time passed since last tick", CppFromBpEvent, OverrideNativeName="Tick"))
	virtual void bpf__Tick__pf(FGeometry bpp__MyGeometry__pf, float bpp__InDeltaTime__pf);
	UFUNCTION(BlueprintCallable, meta=(Tooltip="Show building menu for player.", Category, OverrideNativeName="ShowBuildingMenu"))
	virtual void bpf__ShowBuildingMenu__pf();
	UFUNCTION(BlueprintCallable, meta=(Tooltip="Hide building menu for player.", Category, OverrideNativeName="HideBuildingMenu"))
	virtual void bpf__HideBuildingMenu__pf();
	UFUNCTION(BlueprintCallable, meta=(Tooltip="Update building list for building menu.", Category, OverrideNativeName="UpdateBuildingList"))
	virtual void bpf__UpdateBuildingList__pf(FDataTableRowHandle bpp__BuildingListHandle__pf);
	UFUNCTION(BlueprintCallable, BlueprintPure, meta=(Category="Binds", Tooltip="Update name text information for target current actor.", OverrideNativeName="Bind_UpdateTargetActorName"))
	virtual FText  bpf__Bind_UpdateTargetActorName__pf();
	UFUNCTION(BlueprintCallable, BlueprintPure, meta=(Category="Binds", Tooltip="Update durability information for current target actor.", OverrideNativeName="Bind_UpdateTargetActorDurability"))
	virtual FText  bpf__Bind_UpdateTargetActorDurability__pf();
	UFUNCTION(BlueprintCallable, BlueprintPure, meta=(Category="Binds", Tooltip="Update interaction text information for current target actor.", OverrideNativeName="Bind_UpdateTargetActorInteractionText"))
	virtual FText  bpf__Bind_UpdateTargetActorInteractionText__pf();
	UFUNCTION(BlueprintCallable, meta=(Tooltip="Set building component reference and bind events.", Category, OverrideNativeName="SetBuildingComponentReference"))
	virtual void bpf__SetBuildingComponentReference__pf(UBP_Mei_BuildingComponent_C__pf1731449071* bpp__BuildingComponent__pf);
	UFUNCTION(BlueprintCallable, meta=(Tooltip="Set interaction component reference and bind events.", Category, OverrideNativeName="SetInteractionComponentReference"))
	virtual void bpf__SetInteractionComponentReference__pf(UBP_Mei_InteractionComponent_C__pf1731449071* bpp__InteractionComponent__pf);
	UFUNCTION(BlueprintCallable, meta=(Category="Binds", Tooltip="Executes when building messaged was received.", OverrideNativeName="Bind_BuildingMessageReceived"))
	virtual void bpf__Bind_BuildingMessageReceived__pf(E__E_Mei_BuildingMode__pf bpp__BuildingMode__pf, bool bpp__InteractionResult__pf, const FText& bpp__Message__pf__const);
	UFUNCTION(BlueprintCallable, meta=(Tooltip="Check resource component and update resources information.", Category, OverrideNativeName="UpdateResourcesInformation"))
	virtual void bpf__UpdateResourcesInformation__pf();
	UFUNCTION(BlueprintCallable, meta=(Tooltip="Show mallet menu for player.", Category, OverrideNativeName="Show Mallet Menu"))
	virtual void bpf__ShowxMalletxMenu__pfTT(ABP_Mei_Building_BaseObject_C__pf2826203124* bpp__BuildingObject__pf);
	UFUNCTION(BlueprintCallable, meta=(Tooltip="Hide mallet menu for player.", Category, OverrideNativeName="HideMalletMenu"))
	virtual void bpf__HideMalletMenu__pf();
	UFUNCTION(BlueprintCallable, meta=(Tooltip="Update interaction slots depending on current interaction stance.", Category, OverrideNativeName="UpdateInteractionSlots"))
	virtual void bpf__UpdateInteractionSlots__pf();
	UFUNCTION(BlueprintCallable, BlueprintPure, meta=(Category="Binds", OverrideNativeName="Bind_UpdateCrosshairVisibility"))
	virtual ESlateVisibility  bpf__Bind_UpdateCrosshairVisibility__pf();
	UFUNCTION(BlueprintCallable, meta=(Tooltip="Set player mouse position to center of the screen.", Category, OverrideNativeName="SetMousePositionToCenter"))
	virtual void bpf__SetMousePositionToCenter__pf();
public:
	virtual void GetSlotNames(TArray<FName>& SlotNames) const override;
	virtual void PreSave(const class ITargetPlatform* TargetPlatform) override;
	virtual void InitializeNativeClassData() override;
};
