#pragma once
#include "Blueprint/BlueprintSupport.h"
#include "Runtime/UMG/Public/UMG.h"
#include "Runtime/SlateCore/Public/Fonts/SlateFontInfo.h"
#include "Runtime/SlateCore/Public/Layout/Geometry.h"
#include "E_Mei_BuildingMode__pf424568635.h"
#include "Runtime/UMG/Public/Blueprint/UserWidget.h"
class UButton;
class UVerticalBox;
class UWrapBox;
class UTextBlock;
class UCanvasPanel;
class UUI_Mei_MenuSegment_C__pf4215541020;
class ABP_Mei_Building_BaseObject_C__pf2826203124;
#include "UI_Mei_MalletMenu__pf4215541020.generated.h"
UCLASS(config=Engine, Blueprintable, BlueprintType, meta=(ReplaceConverted="/Game/Mei/UI/BuildingSystem/UI_Mei_MalletMenu.UI_Mei_MalletMenu_C", OverrideNativeName="UI_Mei_MalletMenu_C"))
class UUI_Mei_MalletMenu_C__pf4215541020 : public UUserWidget
{
public:
	GENERATED_BODY()
	UDELEGATE(meta=(OverrideNativeName="OnMenuSegmentSelected__DelegateSignature"))
	DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnMenuSegmentSelected__pf__UI_Mei_MalletMenu_C__pf__MulticastDelegate , UUI_Mei_MenuSegment_C__pf4215541020* , bpp__MenuSegmentWidget__pf);
	UDELEGATE(meta=(OverrideNativeName="OnMenuSegmentClicked__DelegateSignature"))
	DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnMenuSegmentClicked__pf__UI_Mei_MalletMenu_C__pf__MulticastDelegate , UUI_Mei_MenuSegment_C__pf4215541020* , bpp__MenuSegmentWidget__pf, bool , bpp__HideMenu__pf);
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="BtnClick", Category="UI_Mei_MalletMenu", OverrideNativeName="BtnClick"))
	UButton* bpv__BtnClick__pf;
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="RequirementsBox", Category="UI_Mei_MalletMenu", OverrideNativeName="RequirementsBox"))
	UVerticalBox* bpv__RequirementsBox__pf;
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="RequirementsPartsBox", Category="UI_Mei_MalletMenu", OverrideNativeName="RequirementsPartsBox"))
	UWrapBox* bpv__RequirementsPartsBox__pf;
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="SegmentDescriptionText", Category="UI_Mei_MalletMenu", OverrideNativeName="SegmentDescriptionText"))
	UTextBlock* bpv__SegmentDescriptionText__pf;
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="SegmentsCanvasPanel", Category="UI_Mei_MalletMenu", OverrideNativeName="SegmentsCanvasPanel"))
	UCanvasPanel* bpv__SegmentsCanvasPanel__pf;
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="SegmentTitleText", Category="UI_Mei_MalletMenu", OverrideNativeName="SegmentTitleText"))
	UTextBlock* bpv__SegmentTitleText__pf;
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="SelectedSegmentInfoBox", Category="UI_Mei_MalletMenu", OverrideNativeName="SelectedSegmentInfoBox"))
	UVerticalBox* bpv__SelectedSegmentInfoBox__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Menu Segments", Category="Default", OverrideNativeName="MenuSegments"))
	TArray<UUI_Mei_MenuSegment_C__pf4215541020*> bpv__MenuSegments__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Building Object Reference", Category="Default", OverrideNativeName="BuildingObjectReference"))
	ABP_Mei_Building_BaseObject_C__pf2826203124* bpv__BuildingObjectReference__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, BlueprintAssignable, BlueprintCallable, meta=(DisplayName="On Menu Segment Selected", Category="Default", OverrideNativeName="OnMenuSegmentSelected"))
	FOnMenuSegmentSelected__pf__UI_Mei_MalletMenu_C__pf__MulticastDelegate bpv__OnMenuSegmentSelected__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Rotation", Category="Default", OverrideNativeName="Rotation"))
	float bpv__Rotation__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Distance", Category="Default", OverrideNativeName="Distance"))
	float bpv__Distance__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, BlueprintAssignable, BlueprintCallable, meta=(DisplayName="On Menu Segment Clicked", Category="Default", OverrideNativeName="OnMenuSegmentClicked"))
	FOnMenuSegmentClicked__pf__UI_Mei_MalletMenu_C__pf__MulticastDelegate bpv__OnMenuSegmentClicked__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Resources Font", Category="Default", OverrideNativeName="ResourcesFont"))
	FSlateFontInfo bpv__ResourcesFont__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Kari  Upgrade Segment", Category="Default", MultiLine="true", OverrideNativeName="kari_ UpgradeSegment"))
	UUI_Mei_MenuSegment_C__pf4215541020* bpv__kari_xUpgradeSegment__pfT;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Kari  Repair Segment", Category="Default", MultiLine="true", OverrideNativeName="kari_ RepairSegment"))
	UUI_Mei_MenuSegment_C__pf4215541020* bpv__kari_xRepairSegment__pfT;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Kari  Rotate Segment", Category="Default", MultiLine="true", OverrideNativeName="kari_ RotateSegment"))
	UUI_Mei_MenuSegment_C__pf4215541020* bpv__kari_xRotateSegment__pfT;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Kari  Remove Segment", Category="Default", MultiLine="true", OverrideNativeName="kari_ RemoveSegment"))
	UUI_Mei_MenuSegment_C__pf4215541020* bpv__kari_xRemoveSegment__pfT;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Kari  Destruct Segment", Category="Default", MultiLine="true", OverrideNativeName="kari_ DestructSegment"))
	UUI_Mei_MenuSegment_C__pf4215541020* bpv__kari_xDestructSegment__pfT;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_CheckSegmentsConditions_Success"))
	bool b0l__CallFunc_CheckSegmentsConditions_Success__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="Temp_int_Array_Index_Variable"))
	int32 b0l__Temp_int_Array_Index_Variable__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_Event_IsDesignTime"))
	bool b0l__K2Node_Event_IsDesignTime__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_Event_MyGeometry"))
	FGeometry b0l__K2Node_Event_MyGeometry__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_Event_InDeltaTime"))
	float b0l__K2Node_Event_InDeltaTime__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_UpdateMouseRotation_Success"))
	bool b0l__CallFunc_UpdateMouseRotation_Success__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="Temp_int_Loop_Counter_Variable"))
	int32 b0l__Temp_int_Loop_Counter_Variable__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_UpdateWidget_Success"))
	bool b0l__CallFunc_UpdateWidget_Success__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_Array_Get_Item"))
	UUI_Mei_MenuSegment_C__pf4215541020* b0l__CallFunc_Array_Get_Item__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="Temp_int_Loop_Counter_Variable_1"))
	int32 b0l__Temp_int_Loop_Counter_Variable_1__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="Temp_int_Array_Index_Variable_1"))
	int32 b0l__Temp_int_Array_Index_Variable_1__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_Array_Get_Item_1"))
	UUI_Mei_MenuSegment_C__pf4215541020* b0l__CallFunc_Array_Get_Item_1__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_CheckSelection_Success"))
	bool b0l__CallFunc_CheckSelection_Success__pf;
	UUI_Mei_MalletMenu_C__pf4215541020(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get());
	virtual void PostLoadSubobjects(FObjectInstancingGraph* OuterInstanceGraph) override;
	static void __CustomDynamicClassInitialization(UDynamicClass* InDynamicClass);
	static void __StaticDependenciesAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	static void __StaticDependencies_DirectlyUsedAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	void bpf__ExecuteUbergraph_UI_Mei_MalletMenu__pf_0(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_UI_Mei_MalletMenu__pf_1(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_UI_Mei_MalletMenu__pf_2(int32 bpp__EntryPoint__pf);
	UFUNCTION(meta=(OverrideNativeName="BndEvt__BtnClick_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature"))
	virtual void bpf__BndEvt__BtnClick_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature__pf();
	UFUNCTION(BlueprintCosmetic, meta=(Category="User Interface", Comment="/**\t * Ticks this widget.  Override in derived classes, but always call the parent implementation.\t *\t * @param  MyGeometry The space allotted for this widget\t * @param  InDeltaTime  Real time passed since last tick\t */", ToolTip="Ticks this widget.  Override in derived classes, but always call the parent implementation.@param  MyGeometry The space allotted for this widget@param  InDeltaTime  Real time passed since last tick", CppFromBpEvent, OverrideNativeName="Tick"))
	virtual void bpf__Tick__pf(FGeometry bpp__MyGeometry__pf, float bpp__InDeltaTime__pf);
	UFUNCTION(BlueprintCosmetic, meta=(Category="User Interface", Comment="/**\t * Called after the underlying slate widget is constructed.  Depending on how the slate object is used\t * this event may be called multiple times due to adding and removing from the hierarchy.\t * If you need a true called-once-when-created event, use OnInitialized.\t */", Keywords="Begin Play", ToolTip="Called after the underlying slate widget is constructed.  Depending on how the slate object is usedthis event may be called multiple times due to adding and removing from the hierarchy.If you need a true called-once-when-created event, use OnInitialized.", CppFromBpEvent, OverrideNativeName="Construct"))
	virtual void bpf__Construct__pf();
	UFUNCTION(BlueprintCosmetic, meta=(Category="User Interface", Comment="/**\t * Called by both the game and the editor.  Allows users to run initial setup for their widgets to better preview\t * the setup in the designer and since generally that same setup code is required at runtime, it\'s called there\t * as well.\t *\t * **WARNING**\t * This is intended purely for cosmetic updates using locally owned data, you can not safely access any game related\t * state, if you call something that doesn\'t expect to be run at editor time, you may crash the editor.\t *\t * In the event you save the asset with blueprint code that causes a crash on evaluation.  You can turn off\t * PreConstruct evaluation in the Widget Designer settings in the Editor Preferences.\t */", ToolTip="Called by both the game and the editor.  Allows users to run initial setup for their widgets to better previewthe setup in the designer and since generally that same setup code is required at runtime, it\'s called thereas well.**WARNING**This is intended purely for cosmetic updates using locally owned data, you can not safely access any game relatedstate, if you call something that doesn\'t expect to be run at editor time, you may crash the editor.In the event you save the asset with blueprint code that causes a crash on evaluation.  You can turn offPreConstruct evaluation in the Widget Designer settings in the Editor Preferences.", CppFromBpEvent, OverrideNativeName="PreConstruct"))
	virtual void bpf__PreConstruct__pf(bool bpp__IsDesignTime__pf);
	UFUNCTION(BlueprintCallable, meta=(Tooltip="Update mallet menu widget.", Category, OverrideNativeName="UpdateWidget"))
	virtual void bpf__UpdateWidget__pf(/*out*/ bool& bpp__Success__pf);
	UFUNCTION(BlueprintCallable, meta=(Tooltip="Update mouse rotation value around center of the screen.", Category, OverrideNativeName="UpdateMouseRotation"))
	virtual void bpf__UpdateMouseRotation__pf(/*out*/ bool& bpp__Success__pf);
	UFUNCTION(BlueprintCallable, meta=(Tooltip="Set target building object reference and update widget.", Category, OverrideNativeName="SetBuildingObjectReference"))
	virtual void bpf__SetBuildingObjectReference__pf(ABP_Mei_Building_BaseObject_C__pf2826203124* bpp__BuildingObject__pf, /*out*/ bool& bpp__Success__pf);
	UFUNCTION(BlueprintCallable, meta=(Tooltip="Executes when mallet menu segment was selected.", Category, OverrideNativeName="Segment Selected"))
	virtual void bpf__SegmentxSelected__pfT(UUI_Mei_MenuSegment_C__pf4215541020* bpp__MenuSegment__pf, E__E_Mei_BuildingMode__pf bpp__BuildingMode__pf, /*out*/ bool& bpp__Success__pf);
	UFUNCTION(BlueprintCallable, meta=(Tooltip="Executes when mallet menu segment was clicked.", Category, OverrideNativeName="SegmentClicked"))
	virtual void bpf__SegmentClicked__pf(UUI_Mei_MenuSegment_C__pf4215541020* bpp__MenuSegment__pf, E__E_Mei_BuildingMode__pf bpp__BuildingMode__pf, bool bpp__HideMenu__pf, /*out*/ bool& bpp__Success__pf);
	UFUNCTION(BlueprintCallable, meta=(Tooltip="Update menu segment title and description information depending on segment building mode. Also update requirements information.", Category, OverrideNativeName="UpdateSegmentInformation"))
	virtual void bpf__UpdateSegmentInformation__pf(E__E_Mei_BuildingMode__pf bpp__BuildingMode__pf, /*out*/ bool& bpp__Success__pf);
	UFUNCTION(BlueprintCallable, meta=(Tooltip="Update requirements information for building action depending on building mode.", Category, OverrideNativeName="UpdateSegmentRequirements"))
	virtual void bpf__UpdateSegmentRequirements__pf(E__E_Mei_BuildingMode__pf bpp__BuildingMode__pf, /*out*/ bool& bpp__Success__pf);
	UFUNCTION(BlueprintCallable, meta=(Tooltip="Check conditions for mallet menu segments and disable segments if it necessary.", Category, OverrideNativeName="CheckSegmentsConditions"))
	virtual void bpf__CheckSegmentsConditions__pf(/*out*/ bool& bpp__Success__pf);
public:
	virtual void GetSlotNames(TArray<FName>& SlotNames) const override;
	virtual void PreSave(const class ITargetPlatform* TargetPlatform) override;
	virtual void InitializeNativeClassData() override;
};
