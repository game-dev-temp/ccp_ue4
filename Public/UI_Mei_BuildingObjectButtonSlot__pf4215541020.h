#pragma once
#include "Blueprint/BlueprintSupport.h"
#include "Runtime/UMG/Public/UMG.h"
#include "Runtime/Engine/Classes/Engine/DataTable.h"
#include "STR_Mei_BuildingObjectSettings__pf4030501756.h"
#include "Runtime/UMG/Public/Blueprint/UserWidget.h"
class UButton;
class UImage;
class USoundBase;
class UUI_Mei_BuildingObjectButtonSlot_C__pf4215541020;
#include "UI_Mei_BuildingObjectButtonSlot__pf4215541020.generated.h"
UCLASS(config=Engine, Blueprintable, BlueprintType, meta=(ReplaceConverted="/Game/Mei/UI/BuildingSystem/UI_Mei_BuildingObjectButtonSlot.UI_Mei_BuildingObjectButtonSlot_C", OverrideNativeName="UI_Mei_BuildingObjectButtonSlot_C"))
class UUI_Mei_BuildingObjectButtonSlot_C__pf4215541020 : public UUserWidget
{
public:
	GENERATED_BODY()
	UDELEGATE(meta=(OverrideNativeName="OnClicked__DelegateSignature"))
	DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnClicked__pf__UI_Mei_BuildingObjectButtonSlot_C__pf__MulticastDelegate , UUI_Mei_BuildingObjectButtonSlot_C__pf4215541020* , bpp__BuildingObjectButtonWidget__pf);
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="BtnSelect", Category="UI_Mei_BuildingObjectButtonSlot", OverrideNativeName="BtnSelect"))
	UButton* bpv__BtnSelect__pf;
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="Icon", Category="UI_Mei_BuildingObjectButtonSlot", OverrideNativeName="Icon"))
	UImage* bpv__Icon__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Building Object Handle", Category="Settings", ExposeOnSpawn="true", OverrideNativeName="BuildingObjectHandle"))
	FDataTableRowHandle bpv__BuildingObjectHandle__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Building Object Settings", Category="State", OverrideNativeName="BuildingObjectSettings"))
	FSTR_Mei_BuildingObjectSettings__pf4030501756 bpv__BuildingObjectSettings__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, BlueprintAssignable, BlueprintCallable, meta=(DisplayName="On Clicked", Category="Default", OverrideNativeName="OnClicked"))
	FOnClicked__pf__UI_Mei_BuildingObjectButtonSlot_C__pf__MulticastDelegate bpv__OnClicked__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Select Sound", Category="Settings", OverrideNativeName="SelectSound"))
	USoundBase* bpv__SelectSound__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Click Sound", Category="Settings", OverrideNativeName="ClickSound"))
	USoundBase* bpv__ClickSound__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_Event_IsDesignTime"))
	bool b0l__K2Node_Event_IsDesignTime__pf;
	UUI_Mei_BuildingObjectButtonSlot_C__pf4215541020(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get());
	virtual void PostLoadSubobjects(FObjectInstancingGraph* OuterInstanceGraph) override;
	static void __CustomDynamicClassInitialization(UDynamicClass* InDynamicClass);
	static void __StaticDependenciesAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	static void __StaticDependencies_DirectlyUsedAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	void bpf__ExecuteUbergraph_UI_Mei_BuildingObjectButtonSlot__pf_0(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_UI_Mei_BuildingObjectButtonSlot__pf_1(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_UI_Mei_BuildingObjectButtonSlot__pf_2(int32 bpp__EntryPoint__pf);
	UFUNCTION(meta=(OverrideNativeName="BndEvt__BtnSelect_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature"))
	virtual void bpf__BndEvt__BtnSelect_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature__pf();
	UFUNCTION(BlueprintCosmetic, meta=(Category="User Interface", Comment="/**\t * Called by both the game and the editor.  Allows users to run initial setup for their widgets to better preview\t * the setup in the designer and since generally that same setup code is required at runtime, it\'s called there\t * as well.\t *\t * **WARNING**\t * This is intended purely for cosmetic updates using locally owned data, you can not safely access any game related\t * state, if you call something that doesn\'t expect to be run at editor time, you may crash the editor.\t *\t * In the event you save the asset with blueprint code that causes a crash on evaluation.  You can turn off\t * PreConstruct evaluation in the Widget Designer settings in the Editor Preferences.\t */", ToolTip="Called by both the game and the editor.  Allows users to run initial setup for their widgets to better previewthe setup in the designer and since generally that same setup code is required at runtime, it\'s called thereas well.**WARNING**This is intended purely for cosmetic updates using locally owned data, you can not safely access any game relatedstate, if you call something that doesn\'t expect to be run at editor time, you may crash the editor.In the event you save the asset with blueprint code that causes a crash on evaluation.  You can turn offPreConstruct evaluation in the Widget Designer settings in the Editor Preferences.", CppFromBpEvent, OverrideNativeName="PreConstruct"))
	virtual void bpf__PreConstruct__pf(bool bpp__IsDesignTime__pf);
	UFUNCTION(BlueprintCosmetic, meta=(Category="User Interface", Comment="/**\t * Called after the underlying slate widget is constructed.  Depending on how the slate object is used\t * this event may be called multiple times due to adding and removing from the hierarchy.\t * If you need a true called-once-when-created event, use OnInitialized.\t */", Keywords="Begin Play", ToolTip="Called after the underlying slate widget is constructed.  Depending on how the slate object is usedthis event may be called multiple times due to adding and removing from the hierarchy.If you need a true called-once-when-created event, use OnInitialized.", CppFromBpEvent, OverrideNativeName="Construct"))
	virtual void bpf__Construct__pf();
	UFUNCTION(meta=(OverrideNativeName="BndEvt__BtnSelect_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature"))
	virtual void bpf__BndEvt__BtnSelect_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature__pf();
	UFUNCTION(BlueprintCallable, meta=(Tooltip="Update building object button widget.", Category, OverrideNativeName="UpdateWidget"))
	virtual void bpf__UpdateWidget__pf();
public:
	virtual void GetSlotNames(TArray<FName>& SlotNames) const override;
	virtual void PreSave(const class ITargetPlatform* TargetPlatform) override;
	virtual void InitializeNativeClassData() override;
};
