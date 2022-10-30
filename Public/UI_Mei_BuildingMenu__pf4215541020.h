#pragma once
#include "Blueprint/BlueprintSupport.h"
#include "Runtime/UMG/Public/UMG.h"
#include "Runtime/Engine/Classes/Engine/DataTable.h"
#include "Runtime/SlateCore/Public/Fonts/SlateFontInfo.h"
#include "Runtime/CoreUObject/Public/UObject/NoExportTypes.h"
#include "Runtime/SlateCore/Public/Layout/Geometry.h"
#include "Runtime/UMG/Public/Blueprint/UserWidget.h"
class UButton;
class UVerticalBox;
class UWrapBox;
class UTextBlock;
class UCanvasPanel;
class UDataTable;
class UUI_Mei_MenuSegment_C__pf4215541020;
class UTexture2D;
class UUI_Mei_BuildingMenuSegment_C__pf4215541020;
#include "UI_Mei_BuildingMenu__pf4215541020.generated.h"
UCLASS(config=Engine, Blueprintable, BlueprintType, meta=(ReplaceConverted="/Game/Mei/UI/BuildingSystem/UI_Mei_BuildingMenu.UI_Mei_BuildingMenu_C", OverrideNativeName="UI_Mei_BuildingMenu_C"))
class UUI_Mei_BuildingMenu_C__pf4215541020 : public UUserWidget
{
public:
	GENERATED_BODY()
	UDELEGATE(meta=(OverrideNativeName="OnMenuSegmentSelected__DelegateSignature"))
	DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnMenuSegmentSelected__pf__UI_Mei_BuildingMenu_C__pf__MulticastDelegate , UUI_Mei_MenuSegment_C__pf4215541020* , bpp__MenuSegmentWidget__pf);
	UDELEGATE(meta=(OverrideNativeName="OnBuildingSegmentSelected__DelegateSignature"))
	DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnBuildingSegmentSelected__pf__UI_Mei_BuildingMenu_C__pf__MulticastDelegate , UUI_Mei_BuildingMenuSegment_C__pf4215541020* , bpp__BuildingMenuSegmentWidget__pf);
	UDELEGATE(meta=(OverrideNativeName="OnMenuSegmentClicked__DelegateSignature"))
	DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnMenuSegmentClicked__pf__UI_Mei_BuildingMenu_C__pf__MulticastDelegate , UUI_Mei_MenuSegment_C__pf4215541020* , bpp__MenuSegmentWidget__pf);
	UDELEGATE(meta=(OverrideNativeName="OnBuildingSegmentClicked__DelegateSignature"))
	DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnBuildingSegmentClicked__pf__UI_Mei_BuildingMenu_C__pf__MulticastDelegate , UUI_Mei_BuildingMenuSegment_C__pf4215541020* , bpp__BuildingMenuSegmentWidget__pf);
	UDELEGATE(meta=(OverrideNativeName="OnClicked__DelegateSignature"))
	DECLARE_DYNAMIC_DELEGATE_OneParam(FOnClicked__pf__UI_Mei_MenuSegment_C__pf__SinglecastDelegate , UUI_Mei_MenuSegment_C__pf4215541020* , bpp__MenuSegmentWidget__pf);
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="BtnClick", Category="UI_Mei_BuildingMenu", OverrideNativeName="BtnClick"))
	UButton* bpv__BtnClick__pf;
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="RequirementsBox", Category="UI_Mei_BuildingMenu", OverrideNativeName="RequirementsBox"))
	UVerticalBox* bpv__RequirementsBox__pf;
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="RequirementsPartsBox", Category="UI_Mei_BuildingMenu", OverrideNativeName="RequirementsPartsBox"))
	UWrapBox* bpv__RequirementsPartsBox__pf;
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="SegmentDescriptionText", Category="UI_Mei_BuildingMenu", OverrideNativeName="SegmentDescriptionText"))
	UTextBlock* bpv__SegmentDescriptionText__pf;
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="SegmentsCanvasPanel", Category="UI_Mei_BuildingMenu", OverrideNativeName="SegmentsCanvasPanel"))
	UCanvasPanel* bpv__SegmentsCanvasPanel__pf;
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="SegmentTitleText", Category="UI_Mei_BuildingMenu", OverrideNativeName="SegmentTitleText"))
	UTextBlock* bpv__SegmentTitleText__pf;
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="SelectedSegmentInfoBox", Category="UI_Mei_BuildingMenu", OverrideNativeName="SelectedSegmentInfoBox"))
	UVerticalBox* bpv__SelectedSegmentInfoBox__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Default Building List", Category="Settings", ExposeOnSpawn="true", OverrideNativeName="DefaultBuildingList"))
	FDataTableRowHandle bpv__DefaultBuildingList__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Default Building Data Table", Category="Settings", ExposeOnSpawn="true", OverrideNativeName="DefaultBuildingDataTable"))
	UDataTable* bpv__DefaultBuildingDataTable__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Max Segment Count", Category="Settings", ExposeOnSpawn="true", OverrideNativeName="MaxSegmentCount"))
	int32 bpv__MaxSegmentCount__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Current Page", Category="Settings", ExposeOnSpawn="true", OverrideNativeName="CurrentPage"))
	int32 bpv__CurrentPage__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Pages", Category="Settings", OverrideNativeName="Pages"))
	int32 bpv__Pages__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Current Building List", Category="State", OverrideNativeName="CurrentBuildingList"))
	FDataTableRowHandle bpv__CurrentBuildingList__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Current Building Data Table", Category="State", OverrideNativeName="CurrentBuildingDataTable"))
	UDataTable* bpv__CurrentBuildingDataTable__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Building Objects", Category="State", OverrideNativeName="BuildingObjects"))
	TArray<FDataTableRowHandle> bpv__BuildingObjects__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Menu Segments", Category="State", OverrideNativeName="MenuSegments"))
	TArray<UUI_Mei_MenuSegment_C__pf4215541020*> bpv__MenuSegments__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, BlueprintAssignable, BlueprintCallable, meta=(DisplayName="On Menu Segment Selected", Category="Default", OverrideNativeName="OnMenuSegmentSelected"))
	FOnMenuSegmentSelected__pf__UI_Mei_BuildingMenu_C__pf__MulticastDelegate bpv__OnMenuSegmentSelected__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, BlueprintAssignable, BlueprintCallable, meta=(DisplayName="On Building Segment Selected", Category="Default", OverrideNativeName="OnBuildingSegmentSelected"))
	FOnBuildingSegmentSelected__pf__UI_Mei_BuildingMenu_C__pf__MulticastDelegate bpv__OnBuildingSegmentSelected__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Rotation", Category="State", OverrideNativeName="Rotation"))
	float bpv__Rotation__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Distance", Category="State", OverrideNativeName="Distance"))
	float bpv__Distance__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, BlueprintAssignable, BlueprintCallable, meta=(DisplayName="On Menu Segment Clicked", Category="Default", OverrideNativeName="OnMenuSegmentClicked"))
	FOnMenuSegmentClicked__pf__UI_Mei_BuildingMenu_C__pf__MulticastDelegate bpv__OnMenuSegmentClicked__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, BlueprintAssignable, BlueprintCallable, meta=(DisplayName="On Building Segment Clicked", Category="Default", OverrideNativeName="OnBuildingSegmentClicked"))
	FOnBuildingSegmentClicked__pf__UI_Mei_BuildingMenu_C__pf__MulticastDelegate bpv__OnBuildingSegmentClicked__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Next Page Segment", Category="State", OverrideNativeName="NextPageSegment"))
	UUI_Mei_MenuSegment_C__pf4215541020* bpv__NextPageSegment__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Prev Page Segment", Category="State", OverrideNativeName="PrevPageSegment"))
	UUI_Mei_MenuSegment_C__pf4215541020* bpv__PrevPageSegment__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Resources Font", Category="Settings", ExposeOnSpawn="true", OverrideNativeName="ResourcesFont"))
	FSlateFontInfo bpv__ResourcesFont__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Prev Page Icon", Category="Default", OverrideNativeName="PrevPageIcon"))
	UTexture2D* bpv__PrevPageIcon__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Next Page Icon", Category="Default", OverrideNativeName="NextPageIcon"))
	UTexture2D* bpv__NextPageIcon__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Page Icons Color", Category="Settings", OverrideNativeName="PageIconsColor"))
	FLinearColor bpv__PageIconsColor__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_ConstructWidget_Success"))
	bool b0l__CallFunc_ConstructWidget_Success__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="Temp_int_Array_Index_Variable"))
	int32 b0l__Temp_int_Array_Index_Variable__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="Temp_int_Loop_Counter_Variable"))
	int32 b0l__Temp_int_Loop_Counter_Variable__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="Temp_int_Array_Index_Variable_1"))
	int32 b0l__Temp_int_Array_Index_Variable_1__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_Event_IsDesignTime"))
	bool b0l__K2Node_Event_IsDesignTime__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_Event_MyGeometry"))
	FGeometry b0l__K2Node_Event_MyGeometry__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_Event_InDeltaTime"))
	float b0l__K2Node_Event_InDeltaTime__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_UpdateMouseRotation_Success"))
	bool b0l__CallFunc_UpdateMouseRotation_Success__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_Array_Get_Item"))
	UUI_Mei_MenuSegment_C__pf4215541020* b0l__CallFunc_Array_Get_Item__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_CheckSelection_Success"))
	bool b0l__CallFunc_CheckSelection_Success__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="Temp_int_Loop_Counter_Variable_1"))
	int32 b0l__Temp_int_Loop_Counter_Variable_1__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_Array_Get_Item_1"))
	UUI_Mei_MenuSegment_C__pf4215541020* b0l__CallFunc_Array_Get_Item_1__pf;
	UUI_Mei_BuildingMenu_C__pf4215541020(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get());
	virtual void PostLoadSubobjects(FObjectInstancingGraph* OuterInstanceGraph) override;
	static void __CustomDynamicClassInitialization(UDynamicClass* InDynamicClass);
	static void __StaticDependenciesAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	static void __StaticDependencies_DirectlyUsedAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	void bpf__ExecuteUbergraph_UI_Mei_BuildingMenu__pf_0(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_UI_Mei_BuildingMenu__pf_1(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_UI_Mei_BuildingMenu__pf_2(int32 bpp__EntryPoint__pf);
	UFUNCTION(meta=(OverrideNativeName="BndEvt__BtnClick_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature"))
	virtual void bpf__BndEvt__BtnClick_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature__pf();
	UFUNCTION(BlueprintCosmetic, meta=(Category="User Interface", Comment="/**\t * Ticks this widget.  Override in derived classes, but always call the parent implementation.\t *\t * @param  MyGeometry The space allotted for this widget\t * @param  InDeltaTime  Real time passed since last tick\t */", ToolTip="Ticks this widget.  Override in derived classes, but always call the parent implementation.@param  MyGeometry The space allotted for this widget@param  InDeltaTime  Real time passed since last tick", CppFromBpEvent, OverrideNativeName="Tick"))
	virtual void bpf__Tick__pf(FGeometry bpp__MyGeometry__pf, float bpp__InDeltaTime__pf);
	UFUNCTION(BlueprintCosmetic, meta=(Category="User Interface", Comment="/**\t * Called after the underlying slate widget is constructed.  Depending on how the slate object is used\t * this event may be called multiple times due to adding and removing from the hierarchy.\t * If you need a true called-once-when-created event, use OnInitialized.\t */", Keywords="Begin Play", ToolTip="Called after the underlying slate widget is constructed.  Depending on how the slate object is usedthis event may be called multiple times due to adding and removing from the hierarchy.If you need a true called-once-when-created event, use OnInitialized.", CppFromBpEvent, OverrideNativeName="Construct"))
	virtual void bpf__Construct__pf();
	UFUNCTION(BlueprintCosmetic, meta=(Category="User Interface", Comment="/**\t * Called by both the game and the editor.  Allows users to run initial setup for their widgets to better preview\t * the setup in the designer and since generally that same setup code is required at runtime, it\'s called there\t * as well.\t *\t * **WARNING**\t * This is intended purely for cosmetic updates using locally owned data, you can not safely access any game related\t * state, if you call something that doesn\'t expect to be run at editor time, you may crash the editor.\t *\t * In the event you save the asset with blueprint code that causes a crash on evaluation.  You can turn off\t * PreConstruct evaluation in the Widget Designer settings in the Editor Preferences.\t */", ToolTip="Called by both the game and the editor.  Allows users to run initial setup for their widgets to better previewthe setup in the designer and since generally that same setup code is required at runtime, it\'s called thereas well.**WARNING**This is intended purely for cosmetic updates using locally owned data, you can not safely access any game relatedstate, if you call something that doesn\'t expect to be run at editor time, you may crash the editor.In the event you save the asset with blueprint code that causes a crash on evaluation.  You can turn offPreConstruct evaluation in the Widget Designer settings in the Editor Preferences.", CppFromBpEvent, OverrideNativeName="PreConstruct"))
	virtual void bpf__PreConstruct__pf(bool bpp__IsDesignTime__pf);
	UFUNCTION(BlueprintCallable, meta=(Tooltip="Update building menu widget.", Category, OverrideNativeName="UpdateWidget"))
	virtual void bpf__UpdateWidget__pf(/*out*/ bool& bpp__Success__pf);
	UFUNCTION(BlueprintCallable, meta=(Tooltip="Update building segments by building list handle.", Category, OverrideNativeName="UpdateBuildingList"))
	virtual void bpf__UpdateBuildingList__pf(FDataTableRowHandle bpp__BuildingListHandle__pf, /*out*/ bool& bpp__Success__pf);
	UFUNCTION(BlueprintCallable, meta=(Tooltip="Update information for selected building object.", Category, OverrideNativeName="UpdateSelectedBuildingInfo"))
	virtual void bpf__UpdateSelectedBuildingInfo__pf(FDataTableRowHandle bpp__BuildingObjectHandle__pf, /*out*/ bool& bpp__Success__pf);
	UFUNCTION(BlueprintCallable, meta=(Category="Binds", Tooltip="Executes when menu segment was selected. Calls binded events.", OverrideNativeName="Segment Selected"))
	virtual void bpf__SegmentxSelected__pfT(UUI_Mei_MenuSegment_C__pf4215541020* bpp__MenuSegmentWidget__pf);
	UFUNCTION(BlueprintCallable, meta=(Tooltip="Update mouse rotation value around center of the screen.", Category, OverrideNativeName="UpdateMouseRotation"))
	virtual void bpf__UpdateMouseRotation__pf(/*out*/ bool& bpp__Success__pf);
	UFUNCTION(BlueprintCallable, meta=(Tooltip="Update building object segments for current page.", Category, OverrideNativeName="UpdateSegments"))
	virtual void bpf__UpdateSegments__pf(/*out*/ bool& bpp__Success__pf);
	UFUNCTION(BlueprintCallable, meta=(Tooltip="Returns page details for current page.", Category, OverrideNativeName="CorrectPageDetails"))
	virtual void bpf__CorrectPageDetails__pf(/*out*/ TArray<FDataTableRowHandle>& bpp__BuildingObjects__pf, /*out*/ TArray<FDataTableRowHandle>& bpp__ResultBuildingObjects__pf, /*out*/ bool& bpp__AddNextPage__pf, /*out*/ bool& bpp__AddPrevPage__pf);
	UFUNCTION(BlueprintCallable, meta=(Category="Binds", Tooltip="Executes when next page segment was clicked.", OverrideNativeName="NextPageClicked"))
	virtual void bpf__NextPageClicked__pf(UUI_Mei_MenuSegment_C__pf4215541020* bpp__MenuSegmentWidget__pf);
	UFUNCTION(BlueprintCallable, meta=(Category="Binds", Tooltip="Executes when prev page segment was clicked.", OverrideNativeName="PrevPageClicked"))
	virtual void bpf__PrevPageClicked__pf(UUI_Mei_MenuSegment_C__pf4215541020* bpp__MenuSegmentWidget__pf);
	UFUNCTION(BlueprintCallable, meta=(Category="Binds", Tooltip="Executes when menu segment was clicked. Calls binded events.", OverrideNativeName="SegmentClicked"))
	virtual void bpf__SegmentClicked__pf(UUI_Mei_MenuSegment_C__pf4215541020* bpp__MenuSegmentWidget__pf);
	UFUNCTION(BlueprintCallable, meta=(Tooltip="Update information for selected menu segment.", Category, OverrideNativeName="UpdateSelectedSegmentInfo"))
	virtual void bpf__UpdateSelectedSegmentInfo__pf(UUI_Mei_MenuSegment_C__pf4215541020* bpp__MenuSegment__pf, /*out*/ bool& bpp__Success__pf);
	UFUNCTION(BlueprintCallable, meta=(Tooltip="Update building segments by building data table.", Category, OverrideNativeName="UpdateBuildingDataTable"))
	virtual void bpf__UpdateBuildingDataTable__pf(UDataTable* bpp__DataTable__pf, /*out*/ bool& bpp__Success__pf);
	UFUNCTION(BlueprintCallable, meta=(Tooltip="Construct and update building menu widget.", Category, OverrideNativeName="ConstructWidget"))
	virtual void bpf__ConstructWidget__pf(/*out*/ bool& bpp__Success__pf);
public:
	virtual void GetSlotNames(TArray<FName>& SlotNames) const override;
	virtual void PreSave(const class ITargetPlatform* TargetPlatform) override;
	virtual void InitializeNativeClassData() override;
};
