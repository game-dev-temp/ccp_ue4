#pragma once
#include "Blueprint/BlueprintSupport.h"
#include "STR_Mei_Resource__pf4030501756.h"
#include "E_Mei_ResourceType__pf424568635.h"
#include "Runtime/Engine/Classes/Components/ActorComponent.h"
#include "BP_Mei_ResourcesComponent__pf1731449071.generated.h"
UCLASS(config=Engine, Blueprintable, BlueprintType, meta=(ReplaceConverted="/Game/Mei/BP/BuildingSystem/Components/BP_Mei_ResourcesComponent.BP_Mei_ResourcesComponent_C", OverrideNativeName="BP_Mei_ResourcesComponent_C"))
class UBP_Mei_ResourcesComponent_C__pf1731449071 : public UActorComponent
{
public:
	GENERATED_BODY()
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Replicated, meta=(DisplayName="Resources", Category="State", BlueprintPrivate="true", OverrideNativeName="Resources"))
	TArray<FSTR_Mei_Resource__pf4030501756> bpv__Resources__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Starting Resources", Category="Settings", OverrideNativeName="StartingResources"))
	TArray<FSTR_Mei_Resource__pf4030501756> bpv__StartingResources__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_CustomEvent_Resource_1"))
	FSTR_Mei_Resource__pf4030501756 b0l__K2Node_CustomEvent_Resource_1__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_CustomEvent_Resources_2"))
	TArray<FSTR_Mei_Resource__pf4030501756> b0l__K2Node_CustomEvent_Resources_2__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_AddResource_Success"))
	bool b0l__CallFunc_AddResource_Success__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_AddResources_Success"))
	bool b0l__CallFunc_AddResources_Success__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_CustomEvent_Resources_1"))
	TArray<FSTR_Mei_Resource__pf4030501756> b0l__K2Node_CustomEvent_Resources_1__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_CustomEvent_Resource"))
	FSTR_Mei_Resource__pf4030501756 b0l__K2Node_CustomEvent_Resource__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_SetResources_Success"))
	bool b0l__CallFunc_SetResources_Success__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_RemoveResource_Success"))
	bool b0l__CallFunc_RemoveResource_Success__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_CustomEvent_Resources"))
	TArray<FSTR_Mei_Resource__pf4030501756> b0l__K2Node_CustomEvent_Resources__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_RemoveResources_Success"))
	bool b0l__CallFunc_RemoveResources_Success__pf;
	UBP_Mei_ResourcesComponent_C__pf1731449071(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get());
	virtual void PostLoadSubobjects(FObjectInstancingGraph* OuterInstanceGraph) override;
	static void __CustomDynamicClassInitialization(UDynamicClass* InDynamicClass);
	static void __StaticDependenciesAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	static void __StaticDependencies_DirectlyUsedAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	void bpf__ExecuteUbergraph_BP_Mei_ResourcesComponent__pf_0(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_BP_Mei_ResourcesComponent__pf_1(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_BP_Mei_ResourcesComponent__pf_2(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_BP_Mei_ResourcesComponent__pf_3(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_BP_Mei_ResourcesComponent__pf_4(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_BP_Mei_ResourcesComponent__pf_5(int32 bpp__EntryPoint__pf);
	UFUNCTION(meta=(Comment="/** \t * Blueprint implementable event for when the component is beginning play, called before its owning actor\'s BeginPlay\t * or when the component is dynamically created if the Actor has already BegunPlay. \t */", DisplayName="Begin Play", ToolTip="Blueprint implementable event for when the component is beginning play, called before its owning actor\'s BeginPlayor when the component is dynamically created if the Actor has already BegunPlay.", CppFromBpEvent, OverrideNativeName="ReceiveBeginPlay"))
	virtual void bpf__ReceiveBeginPlay__pf();
	UFUNCTION(Server, Reliable, BlueprintCallable, meta=(Category, OverrideNativeName="RemoveResources (Server)"))
	virtual void bpf__RemoveResourcesxxServerx__pfTLK(TArray<FSTR_Mei_Resource__pf4030501756> const& bpp__Resources__pf__const);
	UFUNCTION(Server, Reliable, BlueprintCallable, meta=(Category, OverrideNativeName="RemoveResource (Server)"))
	virtual void bpf__RemoveResourcexxServerx__pfTLK(FSTR_Mei_Resource__pf4030501756 const& bpp__Resource__pf__const);
	UFUNCTION(Server, Reliable, BlueprintCallable, meta=(Category, OverrideNativeName="SetResources (Server)"))
	virtual void bpf__SetResourcesxxServerx__pfTLK(TArray<FSTR_Mei_Resource__pf4030501756> const& bpp__Resources__pf__const);
	UFUNCTION(Server, Reliable, BlueprintCallable, meta=(Category, OverrideNativeName="AddResources (Server)"))
	virtual void bpf__AddResourcesxxServerx__pfTLK(TArray<FSTR_Mei_Resource__pf4030501756> const& bpp__Resources__pf__const);
	UFUNCTION(Server, Reliable, BlueprintCallable, meta=(Category, OverrideNativeName="AddResource (Server)"))
	virtual void bpf__AddResourcexxServerx__pfTLK(FSTR_Mei_Resource__pf4030501756 bpp__Resource__pf);
	UFUNCTION(BlueprintCallable, meta=(Category="Resources Management", Tooltip="Add resource to current array of resources.", OverrideNativeName="AddResource"))
	virtual void bpf__AddResource__pf(FSTR_Mei_Resource__pf4030501756 bpp__Resource__pf, /*out*/ bool& bpp__Success__pf);
	UFUNCTION(BlueprintCallable, meta=(Category="Resources Management", Tooltip="Add resources to current array of resources.", OverrideNativeName="AddResources"))
	virtual void bpf__AddResources__pf(/*out*/ TArray<FSTR_Mei_Resource__pf4030501756>& bpp__Resources__pf, /*out*/ bool& bpp__Success__pf);
	UFUNCTION(BlueprintCallable, meta=(Category="Resources Management", Tooltip="Set current array of resources.", OverrideNativeName="SetResources"))
	virtual void bpf__SetResources__pf(/*out*/ TArray<FSTR_Mei_Resource__pf4030501756>& bpp__Resources__pf, /*out*/ bool& bpp__Success__pf);
	UFUNCTION(BlueprintCallable, meta=(Category="Resources Management", Tooltip="Returns true if current array of resources contains required resource value.", OverrideNativeName="CheckResource"))
	virtual void bpf__CheckResource__pf(FSTR_Mei_Resource__pf4030501756 bpp__Resource__pf, /*out*/ bool& bpp__Result__pf);
	UFUNCTION(BlueprintCallable, meta=(Category="Resources Management", Tooltip="Returns true if current array of resources contains required resources.", OverrideNativeName="CheckResources"))
	virtual void bpf__CheckResources__pf(/*out*/ TArray<FSTR_Mei_Resource__pf4030501756>& bpp__Resources__pf, /*out*/ bool& bpp__Result__pf);
	UFUNCTION(BlueprintCallable, meta=(Category="Resources Management", Tooltip="Remove resource from current array of resources.", OverrideNativeName="RemoveResource"))
	virtual void bpf__RemoveResource__pf(FSTR_Mei_Resource__pf4030501756 const& bpp__Resource__pf__const, /*out*/ bool& bpp__Success__pf);
	UFUNCTION(BlueprintCallable, meta=(Category="Resources Management", Tooltip="Remove resources from current array of resources.", OverrideNativeName="RemoveResources"))
	virtual void bpf__RemoveResources__pf(/*out*/ TArray<FSTR_Mei_Resource__pf4030501756>& bpp__Resources__pf, /*out*/ bool& bpp__Success__pf);
	UFUNCTION(BlueprintCallable, meta=(Category="Init Component", OverrideNativeName="InitComponent"))
	virtual void bpf__InitComponent__pf();
	UFUNCTION(BlueprintCallable, BlueprintPure, meta=(Category="Resources Management", Tooltip="Returns current array of resources.", OverrideNativeName="GetResources"))
	virtual void bpf__GetResources__pf(/*out*/ TArray<FSTR_Mei_Resource__pf4030501756>& bpp__Resources__pf);
	UFUNCTION(BlueprintCallable, BlueprintPure, meta=(Category="Resources Management", Tooltip="Returns value of target resource type.", OverrideNativeName="GetResourceValue"))
	virtual void bpf__GetResourceValue__pf(E__E_Mei_ResourceType__pf bpp__ResourceType__pf, /*out*/ float& bpp__Value__pf);
public:
};
