#pragma once
#include "GeneratedCodeHelpers.h"
#include "Blueprint/BlueprintSupport.h"
#include "Runtime/Engine/Classes/Engine/DataTable.h"
#include "Runtime/CoreUObject/Public/UObject/NoExportTypes.h"
class ABP_Mei_Building_BaseObject_C__pf2826203124;
class UClass;
class UTexture2D;
class UStaticMesh;
class UObject;
#include "STR_Mei_BuildingObjectSettings__pf4030501756.generated.h"

USTRUCT(BlueprintType, meta=(ReplaceConverted="/Game/Mei/BP/BuildingSystem/Structures/STR_Mei_BuildingObjectSettings.STR_Mei_BuildingObjectSettings", OverrideNativeName="STR_Mei_BuildingObjectSettings"))
struct FSTR_Mei_BuildingObjectSettings__pf4030501756
{
public:
	GENERATED_BODY()
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Handle", Tooltip, OverrideNativeName="Handle_2_D22EB0614ADF35BBF5A4879D3DDB4182"))
	FDataTableRowHandle bpv__Handle_2_D22EB0614ADF35BBF5A4879D3DDB4182__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Name", Tooltip, OverrideNativeName="Name_5_9117448A4C5B6B9761439D9BD7AA8488"))
	FText bpv__Name_5_9117448A4C5B6B9761439D9BD7AA8488__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Class", Tooltip, OverrideNativeName="Class_50_C92DE2774BF265E4423C7580CA026280"))
	UClass* bpv__Class_50_C92DE2774BF265E4423C7580CA026280__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Icon", Tooltip, OverrideNativeName="Icon_11_01DC2F16402C4D0E696B7BA66826D771"))
	UTexture2D* bpv__Icon_11_01DC2F16402C4D0E696B7BA66826D771__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Description", Tooltip, OverrideNativeName="Description_14_CCF4D7F047BD35B327CD80A6F7C6E2A6"))
	FText bpv__Description_14_CCF4D7F047BD35B327CD80A6F7C6E2A6__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="StaticMesh", Tooltip, OverrideNativeName="StaticMesh_17_86E561D94DB8DEB8F857AA8347690B7C"))
	UStaticMesh* bpv__StaticMesh_17_86E561D94DB8DEB8F857AA8347690B7C__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="DestructibleMesh", Tooltip, OverrideNativeName="DestructibleMesh_20_5CD446F34364D199814719A934E84961"))
	UObject* bpv__DestructibleMesh_20_5CD446F34364D199814719A934E84961__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="MaxDurability", Tooltip, OverrideNativeName="MaxDurability_23_DDC221224D1587C830829C834AE458BF"))
	float bpv__MaxDurability_23_DDC221224D1587C830829C834AE458BF__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="CanBeDamaged", Tooltip, OverrideNativeName="CanBeDamaged_26_0C6B61794AA45C3393316D9A6007AEFD"))
	bool bpv__CanBeDamaged_26_0C6B61794AA45C3393316D9A6007AEFD__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="UseMeshSockets", Tooltip, OverrideNativeName="UseMeshSockets_28_97655AF54B13D649379DF3B885F3F635"))
	bool bpv__UseMeshSockets_28_97655AF54B13D649379DF3B885F3F635__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="CorrectMeshTransform", Tooltip, OverrideNativeName="CorrectMeshTransform_31_80BA9B8C4687377A1AF79884C6766444"))
	FTransform bpv__CorrectMeshTransform_31_80BA9B8C4687377A1AF79884C6766444__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="BuildingRequirements", Tooltip, OverrideNativeName="BuildingRequirements_48_04B131E3405DD24A36411D84CD5EF278"))
	FDataTableRowHandle bpv__BuildingRequirements_48_04B131E3405DD24A36411D84CD5EF278__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="UpgradeObject", Tooltip, OverrideNativeName="UpgradeObject_39_22B9ACB343873184F429F3B583C711A7"))
	FDataTableRowHandle bpv__UpgradeObject_39_22B9ACB343873184F429F3B583C711A7__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="UpgradeRequirements", Tooltip, OverrideNativeName="UpgradeRequirements_46_C46FECF742E0A90A0A51F1922055E18E"))
	FDataTableRowHandle bpv__UpgradeRequirements_46_C46FECF742E0A90A0A51F1922055E18E__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="RepairRequirements", Tooltip, OverrideNativeName="RepairRequirements_47_D9B527B3455199214DFE7296184F5155"))
	FDataTableRowHandle bpv__RepairRequirements_47_D9B527B3455199214DFE7296184F5155__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="RepairFactor", Tooltip, OverrideNativeName="RepairFactor_44_A75C7EFB49F6CD391E97A297090522F3"))
	float bpv__RepairFactor_44_A75C7EFB49F6CD391E97A297090522F3__pf;
	FSTR_Mei_BuildingObjectSettings__pf4030501756();
	static void __StaticDependenciesAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	static void __StaticDependencies_DirectlyUsedAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	bool operator== (const FSTR_Mei_BuildingObjectSettings__pf4030501756& __Other) const
	{
		return FSTR_Mei_BuildingObjectSettings__pf4030501756::StaticStruct()->CompareScriptStruct(this, &__Other, 0);
	};
};
