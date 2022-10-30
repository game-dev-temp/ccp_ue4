#include "NativizedAssets.h"
#include "UI_Mei_MalletMenu__pf4215541020.h"
#include "GeneratedCodeHelpers.h"
#include "Runtime/UMG/Public/Blueprint/WidgetTree.h"
#include "Runtime/UMG/Public/Components/CanvasPanel.h"
#include "Runtime/UMG/Public/Components/CanvasPanelSlot.h"
#include "Runtime/UMG/Public/Components/Image.h"
#include "Runtime/UMG/Public/Components/SizeBox.h"
#include "Runtime/UMG/Public/Components/SizeBoxSlot.h"
#include "Runtime/UMG/Public/Components/VerticalBox.h"
#include "Runtime/UMG/Public/Components/VerticalBoxSlot.h"
#include "Runtime/UMG/Public/Components/TextBlock.h"
#include "Runtime/Engine/Classes/Engine/Font.h"
#include "Runtime/UMG/Public/Components/WrapBox.h"
#include "Runtime/UMG/Public/Components/Button.h"
#include "Runtime/Engine/Classes/Engine/ComponentDelegateBinding.h"
#include "UI_Mei_MenuSegment__pf4215541020.h"
#include "Runtime/Engine/Classes/Kismet/KismetArrayLibrary.h"
#include "Runtime/Engine/Classes/Kismet/BlueprintFunctionLibrary.h"
#include "Runtime/CoreUObject/Public/UObject/NoExportTypes.h"
#include "Runtime/Engine/Classes/GameFramework/Actor.h"
#include "Runtime/Engine/Classes/Engine/EngineBaseTypes.h"
#include "Runtime/Engine/Classes/Engine/EngineTypes.h"
#include "Runtime/Engine/Classes/Components/ActorComponent.h"
#include "Runtime/Engine/Classes/Engine/AssetUserData.h"
#include "Runtime/Engine/Public/ComponentInstanceDataCache.h"
#include "Runtime/Engine/Classes/EdGraph/EdGraphPin.h"
#include "Runtime/Engine/Classes/Interfaces/Interface_AssetUserData.h"
#include "Runtime/Engine/Classes/GameFramework/DamageType.h"
#include "Runtime/Engine/Classes/Engine/NetSerialization.h"
#include "Runtime/PhysicsCore/Public/PhysicalMaterials/PhysicalMaterial.h"
#include "Runtime/PhysicsCore/Public/PhysicsSettingsEnums.h"
#include "Runtime/PhysicsCore/Public/PhysicalMaterials/PhysicalMaterialPropertyBase.h"
#include "Runtime/PhysicsCore/Public/Chaos/ChaosEngineInterface.h"
#include "Runtime/Engine/Classes/Components/PrimitiveComponent.h"
#include "Runtime/Engine/Classes/Components/SceneComponent.h"
#include "Runtime/Engine/Classes/GameFramework/PhysicsVolume.h"
#include "Runtime/Engine/Classes/GameFramework/Volume.h"
#include "Runtime/Engine/Classes/Engine/Brush.h"
#include "Runtime/Engine/Classes/Components/BrushComponent.h"
#include "Runtime/Engine/Classes/PhysicsEngine/BodySetup.h"
#include "Runtime/PhysicsCore/Public/BodySetupCore.h"
#include "Runtime/PhysicsCore/Public/BodySetupEnums.h"
#include "Runtime/Engine/Classes/PhysicsEngine/AggregateGeom.h"
#include "Runtime/Engine/Classes/PhysicsEngine/SphereElem.h"
#include "Runtime/Engine/Classes/PhysicsEngine/ShapeElem.h"
#include "Runtime/Engine/Classes/PhysicsEngine/BoxElem.h"
#include "Runtime/Engine/Classes/PhysicsEngine/SphylElem.h"
#include "Runtime/Engine/Classes/PhysicsEngine/ConvexElem.h"
#include "Runtime/Engine/Classes/PhysicsEngine/TaperedCapsuleElem.h"
#include "Runtime/Engine/Classes/PhysicsEngine/BodyInstance.h"
#include "Runtime/PhysicsCore/Public/BodyInstanceCore.h"
#include "Runtime/Engine/Classes/Engine/BrushBuilder.h"
#include "Runtime/Engine/Classes/Materials/MaterialInterface.h"
#include "Runtime/Engine/Classes/PhysicalMaterials/PhysicalMaterialMask.h"
#include "Runtime/Engine/Classes/Engine/Texture.h"
#include "Runtime/Engine/Classes/EditorFramework/AssetImportData.h"
#include "Runtime/Engine/Classes/Engine/StreamableRenderAsset.h"
#include "Runtime/Engine/Classes/Engine/TextureDefines.h"
#include "Runtime/Engine/Public/PerPlatformProperties.h"
#include "Runtime/Engine/Classes/Materials/MaterialLayersFunctions.h"
#include "Runtime/Engine/Classes/Materials/MaterialFunctionInterface.h"
#include "Runtime/Engine/Classes/EditorFramework/ThumbnailInfo.h"
#include "Runtime/Engine/Classes/Materials/Material.h"
#include "Runtime/Engine/Classes/Materials/MaterialExpression.h"
#include "Runtime/Engine/Classes/Materials/MaterialFunction.h"
#include "Runtime/Engine/Classes/Materials/MaterialExpressionComment.h"
#include "Runtime/Engine/Classes/Materials/MaterialExpressionMaterialFunctionCall.h"
#include "Runtime/Engine/Classes/Materials/MaterialExpressionFunctionInput.h"
#include "Runtime/Engine/Classes/Materials/MaterialExpressionFunctionOutput.h"
#include "Runtime/Engine/Classes/EdGraph/EdGraphNode.h"
#include "Runtime/Engine/Public/MaterialShared.h"
#include "Runtime/Engine/Classes/Engine/BlendableInterface.h"
#include "Runtime/Engine/Public/MaterialCachedData.h"
#include "Runtime/Engine/Classes/Engine/Texture2D.h"
#include "Runtime/Engine/Classes/Engine/FontImportOptions.h"
#include "Runtime/SlateCore/Public/Fonts/CompositeFont.h"
#include "Runtime/SlateCore/Public/Fonts/FontBulkData.h"
#include "Runtime/SlateCore/Public/Fonts/FontProviderInterface.h"
#include "Runtime/Engine/Classes/VT/RuntimeVirtualTexture.h"
#include "Runtime/Engine/Public/VT/RuntimeVirtualTextureEnum.h"
#include "Runtime/Engine/Classes/VT/VirtualTexture.h"
#include "Runtime/Engine/Classes/Curves/CurveLinearColor.h"
#include "Runtime/Engine/Classes/Curves/CurveBase.h"
#include "Runtime/Engine/Classes/Curves/RichCurve.h"
#include "Runtime/Engine/Classes/Curves/RealCurve.h"
#include "Runtime/Engine/Classes/Curves/IndexedCurve.h"
#include "Runtime/Engine/Classes/Curves/KeyHandle.h"
#include "Runtime/Engine/Classes/Curves/CurveLinearColorAtlas.h"
#include "Runtime/Engine/Classes/Materials/MaterialParameterCollection.h"
#include "Runtime/Landscape/Classes/LandscapeGrassType.h"
#include "Runtime/Engine/Classes/Engine/StaticMesh.h"
#include "Runtime/Engine/Classes/Engine/StaticMeshSocket.h"
#include "Runtime/StaticMeshDescription/Public/StaticMeshDescription.h"
#include "Runtime/MeshDescription/Public/MeshDescriptionBase.h"
#include "Runtime/MeshDescription/Public/MeshTypes.h"
#include "Runtime/Engine/Public/Components.h"
#include "Runtime/Engine/Classes/AI/Navigation/NavCollisionBase.h"
#include "Runtime/Engine/Classes/Interfaces/Interface_CollisionDataProvider.h"
#include "Runtime/Engine/Classes/Engine/MeshMerging.h"
#include "Runtime/Engine/Classes/Engine/SubsurfaceProfile.h"
#include "Runtime/Engine/Classes/Materials/MaterialInstanceDynamic.h"
#include "Runtime/Engine/Classes/Materials/MaterialInstance.h"
#include "Runtime/Engine/Classes/Materials/MaterialInstanceBasePropertyOverrides.h"
#include "Runtime/Engine/Public/StaticParameterSet.h"
#include "Runtime/Engine/Classes/GameFramework/Pawn.h"
#include "Runtime/Engine/Classes/GameFramework/Controller.h"
#include "Runtime/Engine/Classes/GameFramework/PlayerController.h"
#include "Runtime/InputCore/Classes/InputCoreTypes.h"
#include "Runtime/Engine/Classes/Camera/PlayerCameraManager.h"
#include "Runtime/UMG/Public/Components/Widget.h"
#include "Runtime/UMG/Public/Components/Visual.h"
#include "Runtime/UMG/Public/Components/SlateWrapperTypes.h"
#include "Runtime/UMG/Public/Slate/WidgetTransform.h"
#include "Runtime/SlateCore/Public/Types/SlateEnums.h"
#include "Runtime/SlateCore/Public/Input/NavigationReply.h"
#include "Runtime/SlateCore/Public/Layout/Clipping.h"
#include "Runtime/SlateCore/Public/Input/Events.h"
#include "Runtime/SlateCore/Public/Styling/SlateColor.h"
#include "Runtime/SlateCore/Public/Styling/SlateBrush.h"
#include "Runtime/SlateCore/Public/Layout/Margin.h"
#include "Runtime/UMG/Public/Components/PanelWidget.h"
#include "Runtime/UMG/Public/Components/PanelSlot.h"
#include "Runtime/Engine/Classes/Engine/LocalPlayer.h"
#include "Runtime/Engine/Classes/Engine/Player.h"
#include "Runtime/Engine/Classes/Engine/GameViewportClient.h"
#include "Runtime/Engine/Classes/Engine/ScriptViewportClient.h"
#include "Runtime/Engine/Classes/Engine/Console.h"
#include "Runtime/Engine/Classes/Engine/DebugDisplayProperty.h"
#include "Runtime/Engine/Classes/Engine/World.h"
#include "Runtime/Engine/Classes/GameFramework/WorldSettings.h"
#include "Runtime/Engine/Classes/GameFramework/Info.h"
#include "Runtime/Engine/Classes/Components/BillboardComponent.h"
#include "Runtime/Engine/Classes/AI/NavigationSystemConfig.h"
#include "Runtime/Engine/Classes/AI/Navigation/NavigationTypes.h"
#include "Runtime/Engine/Classes/GameFramework/DefaultPhysicsVolume.h"
#include "Runtime/Engine/Classes/PhysicsEngine/PhysicsCollisionHandler.h"
#include "Runtime/Engine/Classes/Sound/SoundBase.h"
#include "Runtime/Engine/Classes/Sound/SoundClass.h"
#include "Runtime/Engine/Classes/Sound/SoundModulationDestination.h"
#include "Runtime/AudioExtensions/Public/IAudioModulation.h"
#include "Runtime/Engine/Classes/Sound/AudioOutputTarget.h"
#include "Runtime/Engine/Classes/Sound/SoundWaveLoadingBehavior.h"
#include "Runtime/Engine/Classes/Sound/SoundSubmix.h"
#include "Runtime/Engine/Classes/Sound/SoundSubmixSend.h"
#include "Runtime/Engine/Classes/Sound/SoundWave.h"
#include "Runtime/AudioPlatformConfiguration/Public/AudioCompressionSettings.h"
#include "Runtime/Engine/Classes/Sound/SoundGroups.h"
#include "Runtime/Engine/Classes/Engine/CurveTable.h"
#include "Runtime/Engine/Classes/Sound/SoundEffectSubmix.h"
#include "Runtime/Engine/Classes/Sound/SoundEffectPreset.h"
#include "Runtime/AudioExtensions/Public/ISoundfieldFormat.h"
#include "Runtime/Engine/Classes/Sound/SoundMix.h"
#include "Runtime/Engine/Classes/Sound/SoundConcurrency.h"
#include "Runtime/Engine/Classes/Sound/SoundAttenuation.h"
#include "Runtime/Engine/Classes/Engine/Attenuation.h"
#include "Runtime/Engine/Classes/Curves/CurveFloat.h"
#include "Runtime/AudioExtensions/Public/IAudioExtensionPlugin.h"
#include "Runtime/Engine/Classes/Sound/SoundEffectSource.h"
#include "Runtime/Engine/Classes/Sound/SoundSourceBusSend.h"
#include "Runtime/Engine/Classes/Sound/SoundSourceBus.h"
#include "Runtime/Engine/Classes/Sound/AudioBus.h"
#include "Runtime/Engine/Classes/GameFramework/GameModeBase.h"
#include "Runtime/Engine/Classes/GameFramework/PlayerState.h"
#include "Runtime/Engine/Classes/GameFramework/LocalMessage.h"
#include "Runtime/Engine/Classes/GameFramework/OnlineReplStructs.h"
#include "Runtime/CoreUObject/Public/UObject/CoreOnline.h"
#include "Runtime/Engine/Classes/GameFramework/EngineMessage.h"
#include "Runtime/Engine/Classes/GameFramework/GameSession.h"
#include "Runtime/Engine/Classes/GameFramework/GameStateBase.h"
#include "Runtime/Engine/Classes/GameFramework/SpectatorPawn.h"
#include "Runtime/Engine/Classes/GameFramework/DefaultPawn.h"
#include "Runtime/Engine/Classes/GameFramework/PawnMovementComponent.h"
#include "Runtime/Engine/Classes/GameFramework/NavMovementComponent.h"
#include "Runtime/Engine/Classes/GameFramework/MovementComponent.h"
#include "Runtime/Engine/Classes/Components/SphereComponent.h"
#include "Runtime/Engine/Classes/Components/ShapeComponent.h"
#include "Runtime/Engine/Classes/AI/Navigation/NavAreaBase.h"
#include "Runtime/Engine/Classes/Components/StaticMeshComponent.h"
#include "Runtime/Engine/Classes/Components/MeshComponent.h"
#include "Runtime/Engine/Classes/Engine/TextureStreamingTypes.h"
#include "Runtime/Engine/Classes/GameFramework/FloatingPawnMovement.h"
#include "Runtime/AIModule/Classes/AIController.h"
#include "Runtime/AIModule/Classes/BehaviorTree/BlackboardData.h"
#include "Runtime/Engine/Classes/Engine/DataAsset.h"
#include "Runtime/AIModule/Classes/BehaviorTree/Blackboard/BlackboardKeyType.h"
#include "Runtime/AIModule/Classes/BehaviorTree/BlackboardComponent.h"
#include "Runtime/AIModule/Classes/BrainComponent.h"
#include "Runtime/AIModule/Classes/AIResourceInterface.h"
#include "Runtime/GameplayTasks/Classes/GameplayTaskResource.h"
#include "Runtime/AIModule/Classes/Navigation/PathFollowingComponent.h"
#include "Runtime/NavigationSystem/Public/NavigationData.h"
#include "Runtime/Engine/Classes/AI/Navigation/NavigationDataInterface.h"
#include "Runtime/Engine/Classes/AI/Navigation/PathFollowingAgentInterface.h"
#include "Runtime/AIModule/Classes/BehaviorTree/BehaviorTree.h"
#include "Runtime/AIModule/Classes/BehaviorTree/BTCompositeNode.h"
#include "Runtime/AIModule/Classes/BehaviorTree/BTNode.h"
#include "Runtime/GameplayTasks/Classes/GameplayTaskOwnerInterface.h"
#include "Runtime/AIModule/Classes/BehaviorTree/BTTaskNode.h"
#include "Runtime/AIModule/Classes/BehaviorTree/BTService.h"
#include "Runtime/AIModule/Classes/BehaviorTree/BTAuxiliaryNode.h"
#include "Runtime/AIModule/Classes/BehaviorTree/BTDecorator.h"
#include "Runtime/AIModule/Classes/BehaviorTree/BehaviorTreeTypes.h"
#include "Runtime/AIModule/Classes/BehaviorTree/BlackboardAssetProvider.h"
#include "Runtime/Engine/Classes/EdGraph/EdGraph.h"
#include "Runtime/Engine/Classes/EdGraph/EdGraphSchema.h"
#include "Runtime/Engine/Classes/Engine/Blueprint.h"
#include "Runtime/GameplayTasks/Classes/GameplayTask.h"
#include "Runtime/NavigationSystem/Public/NavFilters/NavigationQueryFilter.h"
#include "Runtime/NavigationSystem/Public/NavAreas/NavArea.h"
#include "Runtime/AIModule/Classes/Perception/AIPerceptionComponent.h"
#include "Runtime/AIModule/Classes/Perception/AISense.h"
#include "Runtime/AIModule/Classes/Perception/AIPerceptionTypes.h"
#include "Runtime/AIModule/Classes/Perception/AIPerceptionSystem.h"
#include "Runtime/AIModule/Classes/AISubsystem.h"
#include "Runtime/AIModule/Classes/AISystem.h"
#include "Runtime/Engine/Classes/AI/AISystemBase.h"
#include "Runtime/AIModule/Classes/BehaviorTree/BehaviorTreeManager.h"
#include "Runtime/AIModule/Classes/BehaviorTree/BehaviorTreeComponent.h"
#include "Runtime/GameplayTags/Classes/GameplayTagContainer.h"
#include "Runtime/AIModule/Classes/EnvironmentQuery/EnvQueryManager.h"
#include "Runtime/AIModule/Classes/EnvironmentQuery/EnvQuery.h"
#include "Runtime/AIModule/Classes/EnvironmentQuery/EnvQueryOption.h"
#include "Runtime/AIModule/Classes/EnvironmentQuery/EnvQueryGenerator.h"
#include "Runtime/AIModule/Classes/EnvironmentQuery/EnvQueryNode.h"
#include "Runtime/AIModule/Classes/EnvironmentQuery/Items/EnvQueryItemType.h"
#include "Runtime/AIModule/Classes/EnvironmentQuery/EnvQueryTest.h"
#include "Runtime/AIModule/Classes/EnvironmentQuery/EnvQueryTypes.h"
#include "Runtime/AIModule/Classes/DataProviders/AIDataProvider.h"
#include "Runtime/AIModule/Classes/EnvironmentQuery/EnvQueryInstanceBlueprintWrapper.h"
#include "Runtime/AIModule/Classes/EnvironmentQuery/EQSQueryResultSourceInterface.h"
#include "Runtime/AIModule/Classes/EnvironmentQuery/EnvQueryContext.h"
#include "Runtime/AIModule/Classes/Blueprint/AIAsyncTaskBlueprintProxy.h"
#include "Runtime/AIModule/Classes/AITypes.h"
#include "Runtime/AIModule/Classes/HotSpots/AIHotSpotManager.h"
#include "Runtime/AIModule/Classes/Navigation/NavLocalGridManager.h"
#include "Runtime/AIModule/Classes/Perception/AISenseEvent.h"
#include "Runtime/AIModule/Classes/Perception/AISenseConfig.h"
#include "Runtime/AIModule/Classes/Actions/PawnActionsComponent.h"
#include "Runtime/AIModule/Classes/Actions/PawnAction.h"
#include "Runtime/GameplayTasks/Classes/GameplayTasksComponent.h"
#include "Runtime/AIModule/Classes/Perception/AIPerceptionListenerInterface.h"
#include "Runtime/AIModule/Classes/GenericTeamAgentInterface.h"
#include "Runtime/Engine/Public/VisualLogger/VisualLoggerDebugSnapshotInterface.h"
#include "Runtime/Engine/Classes/GameFramework/SpectatorPawnMovement.h"
#include "Runtime/Engine/Classes/GameFramework/HUD.h"
#include "Runtime/Engine/Classes/Engine/Canvas.h"
#include "Runtime/Engine/Classes/Debug/ReporterGraph.h"
#include "Runtime/Engine/Classes/Debug/ReporterBase.h"
#include "Runtime/Engine/Classes/GameFramework/DebugTextInfo.h"
#include "Runtime/Engine/Classes/Engine/ServerStatReplicator.h"
#include "Runtime/Engine/Classes/GameFramework/GameNetworkManager.h"
#include "Runtime/Engine/Classes/Sound/ReverbSettings.h"
#include "Runtime/Engine/Classes/Sound/ReverbEffect.h"
#include "Runtime/Engine/Classes/Sound/AudioVolume.h"
#include "Runtime/Engine/Classes/Engine/NetConnection.h"
#include "Runtime/Engine/Classes/Engine/ChildConnection.h"
#include "Runtime/Engine/Classes/Engine/PackageMapClient.h"
#include "Runtime/Engine/Classes/Engine/NetDriver.h"
#include "Runtime/Engine/Classes/Engine/Channel.h"
#include "Runtime/Engine/Classes/Engine/ReplicationDriver.h"
#include "Runtime/Engine/Classes/Engine/BookmarkBase.h"
#include "Runtime/Engine/Classes/Engine/BookMark.h"
#include "Runtime/Engine/Classes/Engine/MaterialMerging.h"
#include "Runtime/Engine/Classes/Engine/Level.h"
#include "Runtime/Engine/Classes/Components/ModelComponent.h"
#include "Runtime/Engine/Classes/Engine/LevelActorContainer.h"
#include "Runtime/Engine/Classes/Engine/LevelScriptActor.h"
#include "Runtime/Engine/Classes/Engine/NavigationObjectBase.h"
#include "Runtime/Engine/Classes/Components/CapsuleComponent.h"
#include "Runtime/Engine/Classes/AI/Navigation/NavAgentInterface.h"
#include "Runtime/Engine/Classes/AI/Navigation/NavigationDataChunk.h"
#include "Runtime/Engine/Classes/Engine/MapBuildDataRegistry.h"
#include "Runtime/Engine/Classes/Engine/LevelScriptBlueprint.h"
#include "Runtime/Engine/Classes/Engine/BlueprintCore.h"
#include "Runtime/Engine/Classes/Engine/SimpleConstructionScript.h"
#include "Runtime/Engine/Classes/Engine/SCS_Node.h"
#include "Runtime/Engine/Classes/Engine/BlueprintGeneratedClass.h"
#include "Runtime/Engine/Classes/Engine/TimelineTemplate.h"
#include "Runtime/Engine/Classes/Components/TimelineComponent.h"
#include "Runtime/Engine/Classes/Curves/CurveVector.h"
#include "Runtime/Engine/Classes/Engine/InheritableComponentHandler.h"
#include "Runtime/CoreUObject/Public/UObject/CoreNetTypes.h"
#include "Runtime/Engine/Classes/Engine/Breakpoint.h"
#include "Runtime/Engine/Public/Blueprint/BlueprintExtension.h"
#include "Runtime/Engine/Classes/Components/LineBatchComponent.h"
#include "Runtime/Engine/Classes/Engine/LevelStreaming.h"
#include "Runtime/Engine/Classes/Engine/LevelStreamingVolume.h"
#include "Runtime/Engine/Classes/Engine/DemoNetDriver.h"
#include "Runtime/Engine/Classes/Particles/ParticleEventManager.h"
#include "Runtime/Engine/Classes/AI/NavigationSystemBase.h"
#include "Runtime/Engine/Classes/AI/Navigation/AvoidanceManager.h"
#include "Runtime/Engine/Classes/Engine/GameInstance.h"
#include "Runtime/Engine/Classes/GameFramework/OnlineSession.h"
#include "Runtime/Engine/Classes/Materials/MaterialParameterCollectionInstance.h"
#include "Runtime/Engine/Classes/Engine/WorldComposition.h"
#include "Runtime/Engine/Classes/Particles/WorldPSCPool.h"
#include "Runtime/Engine/Classes/Particles/ParticleSystem.h"
#include "Runtime/Engine/Classes/Particles/ParticleEmitter.h"
#include "Runtime/Engine/Public/ParticleHelper.h"
#include "Runtime/Engine/Classes/Particles/ParticleLODLevel.h"
#include "Runtime/Engine/Classes/Particles/ParticleModuleRequired.h"
#include "Runtime/Engine/Classes/Particles/ParticleModule.h"
#include "Runtime/Engine/Classes/Particles/ParticleSpriteEmitter.h"
#include "Runtime/Engine/Classes/Distributions/DistributionFloat.h"
#include "Runtime/Engine/Classes/Distributions/Distribution.h"
#include "Runtime/Engine/Classes/Particles/SubUVAnimation.h"
#include "Runtime/Engine/Classes/Particles/TypeData/ParticleModuleTypeDataBase.h"
#include "Runtime/Engine/Classes/Particles/Spawn/ParticleModuleSpawn.h"
#include "Runtime/Engine/Classes/Particles/Spawn/ParticleModuleSpawnBase.h"
#include "Runtime/Engine/Classes/Particles/Event/ParticleModuleEventGenerator.h"
#include "Runtime/Engine/Classes/Particles/Event/ParticleModuleEventBase.h"
#include "Runtime/Engine/Classes/Particles/ParticleSystemComponent.h"
#include "Runtime/Engine/Classes/Particles/Event/ParticleModuleEventSendToGame.h"
#include "Runtime/Engine/Classes/Particles/Orbit/ParticleModuleOrbit.h"
#include "Runtime/Engine/Classes/Particles/Orbit/ParticleModuleOrbitBase.h"
#include "Runtime/Engine/Classes/Distributions/DistributionVector.h"
#include "Runtime/Engine/Classes/Particles/Event/ParticleModuleEventReceiverBase.h"
#include "Runtime/Engine/Classes/Components/SkeletalMeshComponent.h"
#include "Runtime/Engine/Classes/Components/SkinnedMeshComponent.h"
#include "Runtime/Engine/Classes/Engine/SkeletalMesh.h"
#include "Runtime/Engine/Classes/Engine/SkeletalMeshLODSettings.h"
#include "Runtime/Engine/Classes/Animation/AnimSequence.h"
#include "Runtime/Engine/Classes/Animation/AnimSequenceBase.h"
#include "Runtime/Engine/Classes/Animation/AnimationAsset.h"
#include "Runtime/Engine/Classes/Animation/Skeleton.h"
#include "Runtime/Engine/Classes/Engine/SkeletalMeshSocket.h"
#include "Runtime/Engine/Classes/Animation/SmartName.h"
#include "Runtime/Engine/Classes/Animation/BlendProfile.h"
#include "Runtime/Engine/Public/BoneContainer.h"
#include "Runtime/Engine/Classes/Interfaces/Interface_PreviewMeshProvider.h"
#include "Runtime/Engine/Classes/Animation/Rig.h"
#include "Runtime/Engine/Public/Animation/NodeMappingProviderInterface.h"
#include "Runtime/Engine/Classes/Animation/PreviewAssetAttachComponent.h"
#include "Runtime/Engine/Classes/Animation/AnimMetaData.h"
#include "Runtime/Engine/Classes/Animation/AssetMappingTable.h"
#include "Runtime/Engine/Classes/Animation/PoseAsset.h"
#include "Runtime/Engine/Public/Animation/AnimCurveTypes.h"
#include "Runtime/Engine/Public/Animation/AnimTypes.h"
#include "Runtime/Engine/Classes/Animation/AnimLinkableElement.h"
#include "Runtime/Engine/Classes/Animation/AnimMontage.h"
#include "Runtime/Engine/Classes/Animation/AnimCompositeBase.h"
#include "Runtime/Engine/Public/AlphaBlend.h"
#include "Runtime/Engine/Classes/Animation/AnimEnums.h"
#include "Runtime/Engine/Classes/Animation/TimeStretchCurve.h"
#include "Runtime/Engine/Classes/Animation/AnimNotifies/AnimNotify.h"
#include "Runtime/Engine/Classes/Animation/AnimNotifies/AnimNotifyState.h"
#include "Runtime/Engine/Classes/Animation/AnimBoneCompressionSettings.h"
#include "Runtime/Engine/Classes/Animation/AnimBoneCompressionCodec.h"
#include "Runtime/Engine/Classes/Animation/AnimCurveCompressionSettings.h"
#include "Runtime/Engine/Classes/Animation/AnimCurveCompressionCodec.h"
#include "Runtime/Engine/Classes/Animation/AnimCurveCompressionCodec_CompressedRichCurve.h"
#include "Runtime/Engine/Classes/Animation/CustomAttributes.h"
#include "Runtime/Engine/Classes/Curves/StringCurve.h"
#include "Runtime/Engine/Classes/Curves/IntegralCurve.h"
#include "Runtime/Engine/Classes/Curves/SimpleCurve.h"
#include "Runtime/Engine/Public/SkeletalMeshReductionSettings.h"
#include "Runtime/Engine/Public/Animation/NodeMappingContainer.h"
#include "Runtime/Engine/Classes/PhysicsEngine/PhysicsAsset.h"
#include "Runtime/Engine/Classes/PhysicsEngine/PhysicalAnimationComponent.h"
#include "Runtime/Engine/Classes/PhysicsEngine/PhysicsConstraintTemplate.h"
#include "Runtime/Engine/Classes/PhysicsEngine/ConstraintInstance.h"
#include "Runtime/Engine/Classes/PhysicsEngine/ConstraintTypes.h"
#include "Runtime/Engine/Classes/PhysicsEngine/ConstraintDrives.h"
#include "Runtime/Engine/Classes/Animation/MorphTarget.h"
#include "Runtime/Engine/Classes/Animation/AnimInstance.h"
#include "Runtime/Engine/Public/Animation/PoseSnapshot.h"
#include "Runtime/Engine/Public/Animation/AnimNotifyQueue.h"
#include "Runtime/ClothingSystemRuntimeInterface/Public/ClothingAssetBase.h"
#include "Runtime/Engine/Classes/Engine/SkeletalMeshSampling.h"
#include "Runtime/Engine/Public/Animation/SkinWeightProfile.h"
#include "Runtime/Engine/Classes/Engine/SkeletalMeshEditorData.h"
#include "Runtime/Engine/Public/LODSyncInterface.h"
#include "Runtime/ClothingSystemRuntimeInterface/Public/ClothingSimulationInteractor.h"
#include "Runtime/Engine/Classes/Animation/AnimBlueprintGeneratedClass.h"
#include "Runtime/Engine/Classes/Engine/DynamicBlueprintBinding.h"
#include "Runtime/Engine/Classes/Animation/AnimStateMachineTypes.h"
#include "Runtime/Engine/Classes/Animation/AnimClassInterface.h"
#include "Runtime/Engine/Classes/Animation/AnimNodeBase.h"
#include "Runtime/PropertyAccess/Public/PropertyAccess.h"
#include "Runtime/Engine/Public/SingleAnimationPlayData.h"
#include "Runtime/ClothingSystemRuntimeInterface/Public/ClothingSimulationFactory.h"
#include "Runtime/Engine/Classes/Animation/AnimBlueprint.h"
#include "Runtime/Engine/Classes/Engine/PoseWatch.h"
#include "Runtime/Engine/Classes/Particles/ParticleSystemReplay.h"
#include "Runtime/Engine/Classes/Engine/InterpCurveEdSetup.h"
#include "Runtime/Engine/Classes/Layers/Layer.h"
#include "Runtime/Engine/Classes/Engine/Engine.h"
#include "Runtime/Engine/Classes/GameFramework/GameUserSettings.h"
#include "Runtime/Engine/Classes/Engine/AssetManager.h"
#include "Runtime/Engine/Classes/Engine/EngineCustomTimeStep.h"
#include "Runtime/Engine/Classes/Engine/TimecodeProvider.h"
#include "Runtime/SlateCore/Public/Styling/SlateTypes.h"
#include "Runtime/UMG/Public/Blueprint/WidgetNavigation.h"
#include "Runtime/SlateCore/Public/Layout/FlowDirection.h"
#include "Runtime/UMG/Public/Binding/PropertyBinding.h"
#include "Runtime/UMG/Public/Binding/DynamicPropertyPath.h"
#include "Runtime/PropertyPath/Public/PropertyPathHelpers.h"
#include "Runtime/UMG/Public/Animation/WidgetAnimation.h"
#include "Runtime/MovieScene/Public/MovieSceneSequence.h"
#include "Runtime/MovieScene/Public/MovieSceneSignedObject.h"
#include "Runtime/MovieScene/Public/MovieSceneObjectBindingID.h"
#include "Runtime/MovieScene/Public/Compilation/MovieSceneCompiledDataManager.h"
#include "Runtime/MovieScene/Public/Evaluation/MovieSceneEvaluationTemplate.h"
#include "Runtime/MovieScene/Public/Evaluation/MovieSceneTrackIdentifier.h"
#include "Runtime/MovieScene/Public/Evaluation/MovieSceneEvaluationTrack.h"
#include "Runtime/MovieScene/Public/MovieSceneTrack.h"
#include "Runtime/MovieScene/Public/MovieSceneTrackEvaluationField.h"
#include "Runtime/MovieScene/Public/MovieSceneSection.h"
#include "Runtime/MovieScene/Public/Evaluation/MovieSceneCompletionMode.h"
#include "Runtime/MovieScene/Public/Evaluation/Blending/MovieSceneBlendType.h"
#include "Runtime/MovieScene/Public/Generators/MovieSceneEasingFunction.h"
#include "Runtime/MovieScene/Public/MovieSceneFrameMigration.h"
#include "Runtime/MovieScene/Public/Generators/MovieSceneEasingCurves.h"
#include "Runtime/MovieScene/Public/MovieScene.h"
#include "Runtime/MovieScene/Public/Evaluation/MovieSceneSegment.h"
#include "Runtime/MovieScene/Public/Evaluation/MovieSceneEvalTemplate.h"
#include "Runtime/MovieScene/Public/Evaluation/MovieSceneTrackImplementation.h"
#include "Runtime/MovieScene/Public/Evaluation/MovieSceneSequenceHierarchy.h"
#include "Runtime/MovieScene/Public/MovieSceneSequenceID.h"
#include "Runtime/MovieScene/Public/Evaluation/MovieSceneSequenceTransform.h"
#include "Runtime/MovieScene/Public/Evaluation/MovieSceneTimeTransform.h"
#include "Runtime/MovieScene/Public/Evaluation/MovieSceneTimeWarping.h"
#include "Runtime/MovieScene/Public/Evaluation/MovieSceneSequenceInstanceData.h"
#include "Runtime/MovieScene/Public/Evaluation/MovieSceneEvaluationField.h"
#include "Runtime/MovieScene/Public/Evaluation/MovieSceneEvaluationKey.h"
#include "Runtime/MovieScene/Public/MovieSceneFwd.h"
#include "Runtime/MovieScene/Public/MovieSceneSpawnable.h"
#include "Runtime/MovieScene/Public/MovieScenePossessable.h"
#include "Runtime/MovieScene/Public/MovieSceneBinding.h"
#include "Runtime/MovieScene/Public/MovieSceneFolder.h"
#include "Runtime/UMG/Public/Animation/WidgetAnimationBinding.h"
#include "Runtime/Slate/Public/Widgets/Layout/Anchors.h"
#include "Runtime/UMG/Public/Animation/UMGSequencePlayer.h"
#include "Runtime/MovieScene/Public/Evaluation/MovieSceneEvaluationTemplateInstance.h"
#include "Runtime/MovieScene/Public/EntitySystem/MovieSceneEntitySystemLinker.h"
#include "Runtime/MovieScene/Public/EntitySystem/MovieSceneEntitySystemGraphs.h"
#include "Runtime/UMG/Public/Blueprint/DragDropOperation.h"
#include "Runtime/Engine/Classes/Camera/CameraShakeBase.h"
#include "Runtime/Engine/Classes/Camera/CameraAnimInst.h"
#include "Runtime/Engine/Classes/Camera/CameraAnim.h"
#include "Runtime/Engine/Classes/Matinee/InterpGroup.h"
#include "Runtime/Engine/Classes/Matinee/InterpTrack.h"
#include "Runtime/Engine/Classes/Matinee/InterpTrackInst.h"
#include "Runtime/Engine/Classes/Engine/Scene.h"
#include "Runtime/Engine/Classes/Engine/TextureCube.h"
#include "Runtime/Engine/Classes/Matinee/InterpGroupInst.h"
#include "Runtime/Engine/Classes/Matinee/InterpTrackMove.h"
#include "Runtime/Engine/Classes/Matinee/InterpTrackInstMove.h"
#include "Runtime/Engine/Classes/Camera/CameraTypes.h"
#include "Runtime/Engine/Classes/Camera/CameraShakeSourceComponent.h"
#include "Runtime/Engine/Classes/Camera/CameraShake.h"
#include "Runtime/Engine/Classes/Camera/CameraModifier.h"
#include "Runtime/Engine/Classes/Particles/EmitterCameraLensEffectBase.h"
#include "Runtime/Engine/Classes/Particles/Emitter.h"
#include "Runtime/Engine/Classes/Components/ArrowComponent.h"
#include "Runtime/Engine/Classes/Camera/CameraModifier_CameraShake.h"
#include "Runtime/Engine/Classes/Camera/CameraActor.h"
#include "Runtime/Engine/Classes/Camera/CameraComponent.h"
#include "Runtime/UMG/Public/Animation/UMGSequenceTickManager.h"
#include "Runtime/Engine/Classes/Components/InputComponent.h"
#include "Runtime/Engine/Classes/GameFramework/PlayerInput.h"
#include "Runtime/UMG/Public/Components/NamedSlotInterface.h"
#include "Runtime/Engine/Classes/GameFramework/UpdateLevelVisibilityLevelInfo.h"
#include "Runtime/Engine/Classes/Haptics/HapticFeedbackEffect_Base.h"
#include "Runtime/Engine/Classes/Engine/LatentActionManager.h"
#include "Runtime/Engine/Classes/GameFramework/ForceFeedbackEffect.h"
#include "Runtime/Engine/Classes/GameFramework/TouchInterface.h"
#include "Runtime/Engine/Classes/Matinee/InterpTrackInstDirector.h"
#include "Runtime/Engine/Classes/GameFramework/CheatManager.h"
#include "Runtime/Engine/Classes/Engine/DebugCameraController.h"
#include "Runtime/Engine/Classes/Components/DrawFrustumComponent.h"
#include "Runtime/Engine/Classes/GameFramework/Character.h"
#include "Runtime/Engine/Classes/GameFramework/CharacterMovementReplication.h"
#include "Runtime/Engine/Classes/GameFramework/RootMotionSource.h"
#include "Runtime/Engine/Classes/GameFramework/CharacterMovementComponent.h"
#include "Runtime/Engine/Classes/AI/Navigation/NavigationAvoidanceTypes.h"
#include "Runtime/Engine/Public/AI/RVOAvoidanceInterface.h"
#include "Runtime/Engine/Classes/Interfaces/NetworkPredictionInterface.h"
#include "Runtime/Engine/Public/SceneTypes.h"
#include "Runtime/Engine/Classes/AI/Navigation/NavRelevantInterface.h"
#include "Runtime/Engine/Public/HitProxies.h"
#include "Runtime/Engine/Classes/Components/ChildActorComponent.h"
#include "Runtime/Engine/Classes/Matinee/MatineeActor.h"
#include "Runtime/Engine/Classes/Matinee/InterpData.h"
#include "Runtime/Engine/Classes/Matinee/InterpGroupDirector.h"
#include "Runtime/Engine/Classes/Matinee/InterpFilter.h"
#include "Runtime/Engine/Classes/Kismet/KismetMathLibrary.h"
#include "Runtime/Engine/Classes/Kismet/KismetSystemLibrary.h"
#include "Runtime/Engine/Classes/Engine/CollisionProfile.h"
#include "BP_Mei_Building_BaseObject__pf2826203124.h"
#include "Runtime/Engine/Classes/Engine/DataTable.h"
#include "UI_Mei_ResourceValue__pf4215541020.h"
#include "Runtime/UMG/Public/Components/WrapBoxSlot.h"
#include "STR_Mei_Requirements__pf4030501756.h"
#include "STR_Mei_Resource__pf4030501756.h"
#include "STR_Mei_BuildingObjectSettings__pf4030501756.h"
#include "BP_Mei_Library__pf3770675254.h"
#include "Runtime/Engine/Classes/Kismet/DataTableFunctionLibrary.h"
#include "Runtime/UMG/Public/Blueprint/WidgetBlueprintLibrary.h"
#include "Runtime/Engine/Public/Slate/SGameLayerManager.h"
#include "Runtime/SlateCore/Public/Rendering/RenderingCommon.h"
#include "Runtime/Engine/Classes/Slate/SlateBrushAsset.h"
#include "Runtime/UMG/Public/Components/TextWidgetTypes.h"
#include "Runtime/Slate/Public/Framework/Text/TextLayout.h"
#include "Runtime/SlateCore/Public/Fonts/FontCache.h"
#include "BPI_Mei_Player__pf685842786.h"
#include "Runtime/UMG/Public/Blueprint/WidgetLayoutLibrary.h"
#include "Runtime/UMG/Public/Components/WidgetSwitcherSlot.h"
#include "Runtime/UMG/Public/Components/UniformGridSlot.h"
#include "Runtime/UMG/Public/Components/ScrollBoxSlot.h"
#include "Runtime/UMG/Public/Components/ScaleBoxSlot.h"
#include "Runtime/UMG/Public/Components/SafeZoneSlot.h"
#include "Runtime/UMG/Public/Components/OverlaySlot.h"
#include "Runtime/UMG/Public/Components/HorizontalBoxSlot.h"
#include "Runtime/UMG/Public/Components/GridSlot.h"
#include "Runtime/UMG/Public/Components/BorderSlot.h"
#include "Runtime/UMG/Public/Components/ContentWidget.h"
#include "Runtime/SlateCore/Public/Styling/SlateWidgetStyle.h"
#include "Runtime/SlateCore/Public/Sound/SlateSound.h"
#include "Runtime/SlateCore/Public/Styling/SlateWidgetStyleAsset.h"
#include "Runtime/SlateCore/Public/Styling/SlateWidgetStyleContainerBase.h"
#include "Runtime/SlateCore/Public/Styling/SlateWidgetStyleContainerInterface.h"


#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
PRAGMA_DISABLE_OPTIMIZATION
UUI_Mei_MalletMenu_C__pf4215541020::UUI_Mei_MalletMenu_C__pf4215541020(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer)
{
	
	bpv__BtnClick__pf = nullptr;
	bpv__RequirementsBox__pf = nullptr;
	bpv__RequirementsPartsBox__pf = nullptr;
	bpv__SegmentDescriptionText__pf = nullptr;
	bpv__SegmentsCanvasPanel__pf = nullptr;
	bpv__SegmentTitleText__pf = nullptr;
	bpv__SelectedSegmentInfoBox__pf = nullptr;
	bpv__MenuSegments__pf = TArray<UUI_Mei_MenuSegment_C__pf4215541020*> ();
	bpv__BuildingObjectReference__pf = nullptr;
	bpv__Rotation__pf = 0.000000f;
	bpv__Distance__pf = 0.000000f;
	bpv__ResourcesFont__pf.FontObject = CastChecked<UObject>(CastChecked<UDynamicClass>(UUI_Mei_MalletMenu_C__pf4215541020::StaticClass())->UsedAssets[0], ECastCheckedType::NullAllowed);
	bpv__ResourcesFont__pf.OutlineSettings.bApplyOutlineToDropShadows = true;
	bpv__ResourcesFont__pf.TypefaceFontName = FName(TEXT("Bold"));
	bpv__ResourcesFont__pf.Size = 18;
	bpv__kari_xUpgradeSegment__pfT = nullptr;
	bpv__kari_xRepairSegment__pfT = nullptr;
	bpv__kari_xRotateSegment__pfT = nullptr;
	bpv__kari_xRemoveSegment__pfT = nullptr;
	bpv__kari_xDestructSegment__pfT = nullptr;
	bHasScriptImplementedPaint = false;
}
PRAGMA_ENABLE_OPTIMIZATION
void UUI_Mei_MalletMenu_C__pf4215541020::PostLoadSubobjects(FObjectInstancingGraph* OuterInstanceGraph)
{
	Super::PostLoadSubobjects(OuterInstanceGraph);
}
PRAGMA_DISABLE_OPTIMIZATION
void UUI_Mei_MalletMenu_C__pf4215541020::__CustomDynamicClassInitialization(UDynamicClass* InDynamicClass)
{
	ensure(0 == InDynamicClass->ReferencedConvertedFields.Num());
	ensure(0 == InDynamicClass->MiscConvertedSubobjects.Num());
	ensure(0 == InDynamicClass->DynamicBindingObjects.Num());
	ensure(0 == InDynamicClass->ComponentTemplates.Num());
	ensure(0 == InDynamicClass->Timelines.Num());
	ensure(0 == InDynamicClass->ComponentClassOverrides.Num());
	ensure(nullptr == InDynamicClass->AnimClassImplementation);
	InDynamicClass->AssembleReferenceTokenStream();
	// List of all referenced converted enums
	InDynamicClass->ReferencedConvertedFields.Add(LoadObject<UEnum>(nullptr, TEXT("/Game/Mei/BP/BuildingSystem/Enumerations/E_Mei_BuildingMode.E_Mei_BuildingMode")));
	InDynamicClass->ReferencedConvertedFields.Add(LoadObject<UEnum>(nullptr, TEXT("/Game/Mei/BP/BuildingSystem/Enumerations/E_Mei_ResourceType.E_Mei_ResourceType")));
	// List of all referenced converted classes
	InDynamicClass->ReferencedConvertedFields.Add(UUI_Mei_MenuSegment_C__pf4215541020::StaticClass());
	InDynamicClass->ReferencedConvertedFields.Add(ABP_Mei_Building_BaseObject_C__pf2826203124::StaticClass());
	InDynamicClass->ReferencedConvertedFields.Add(UUI_Mei_ResourceValue_C__pf4215541020::StaticClass());
	InDynamicClass->ReferencedConvertedFields.Add(UBP_Mei_Library_C__pf3770675254::StaticClass());
	extern UClass* Z_Construct_UClass_UBPI_Mei_Player_C();
	InDynamicClass->ReferencedConvertedFields.Add(Z_Construct_UClass_UBPI_Mei_Player_C());
	// List of all referenced converted structures
	extern UScriptStruct* Z_Construct_UScriptStruct_FSTR_Mei_Requirements__pf4030501756();
	InDynamicClass->ReferencedConvertedFields.Add(Z_Construct_UScriptStruct_FSTR_Mei_Requirements__pf4030501756());
	extern UScriptStruct* Z_Construct_UScriptStruct_FSTR_Mei_Resource__pf4030501756();
	InDynamicClass->ReferencedConvertedFields.Add(Z_Construct_UScriptStruct_FSTR_Mei_Resource__pf4030501756());
	extern UScriptStruct* Z_Construct_UScriptStruct_FSTR_Mei_BuildingObjectSettings__pf4030501756();
	InDynamicClass->ReferencedConvertedFields.Add(Z_Construct_UScriptStruct_FSTR_Mei_BuildingObjectSettings__pf4030501756());
	FConvertedBlueprintsDependencies::FillUsedAssetsInDynamicClass(InDynamicClass, &__StaticDependencies_DirectlyUsedAssets);
	auto __Local__0 = NewObject<UComponentDelegateBinding>(InDynamicClass, UComponentDelegateBinding::StaticClass(), TEXT("ComponentDelegateBinding_1"), (EObjectFlags)0x00000000);
	InDynamicClass->DynamicBindingObjects.Add(__Local__0);
	auto __Local__1 = NewObject<UWidgetTree>(InDynamicClass, UWidgetTree::StaticClass(), TEXT("WidgetTree"), (EObjectFlags)0x00000008);
	InDynamicClass->MiscConvertedSubobjects.Add(__Local__1);
	__Local__0->ComponentDelegateBindings = TArray<FBlueprintComponentDelegateBinding> ();
	__Local__0->ComponentDelegateBindings.AddUninitialized(1);
	FBlueprintComponentDelegateBinding::StaticStruct()->InitializeStruct(__Local__0->ComponentDelegateBindings.GetData(), 1);
	auto& __Local__2 = __Local__0->ComponentDelegateBindings[0];
	__Local__2.ComponentPropertyName = FName(TEXT("BtnClick"));
	__Local__2.DelegatePropertyName = FName(TEXT("OnClicked"));
	__Local__2.FunctionNameToBind = FName(TEXT("BndEvt__BtnClick_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature"));
	auto __Local__3 = NewObject<UCanvasPanel>(__Local__1, TEXT("CanvasPanel_0"), (EObjectFlags)0x00280008);
	auto& __Local__4 = (*(AccessPrivateProperty<TArray<UPanelSlot*> >((__Local__3), UPanelWidget::__PPO__Slots() )));
	__Local__4 = TArray<UPanelSlot*> ();
	__Local__4.Reserve(4);
	auto __Local__5 = NewObject<UCanvasPanelSlot>(__Local__3, TEXT("CanvasPanelSlot_2"), (EObjectFlags)0x00280008);
	__Local__5->LayoutData.Offsets.Right = 700.000000f;
	__Local__5->LayoutData.Offsets.Bottom = 700.000000f;
	__Local__5->LayoutData.Anchors.Minimum = FVector2D(0.500000, 0.500000);
	__Local__5->LayoutData.Anchors.Maximum = FVector2D(0.500000, 0.500000);
	__Local__5->LayoutData.Alignment = FVector2D(0.500000, 0.500000);
	__Local__5->Parent = __Local__3;
	auto __Local__6 = NewObject<UImage>(__Local__1, TEXT("BackgroundImage"), (EObjectFlags)0x00280008);
	__Local__6->Brush.ImageSize = FVector2D(1024.000000, 1024.000000);
	__Local__6->ColorAndOpacity = FLinearColor(0.050000, 0.050000, 0.050000, 0.500000);
	__Local__6->Slot = __Local__5;
	__Local__6->bIsVariable = false;
	__Local__5->Content = __Local__6;
	__Local__4.Add(__Local__5);
	auto __Local__7 = NewObject<UCanvasPanelSlot>(__Local__3, TEXT("CanvasPanelSlot_0"), (EObjectFlags)0x00280008);
	__Local__7->LayoutData.Anchors.Minimum = FVector2D(0.500000, 0.500000);
	__Local__7->LayoutData.Anchors.Maximum = FVector2D(0.500000, 0.500000);
	__Local__7->LayoutData.Alignment = FVector2D(0.500000, 0.500000);
	__Local__7->bAutoSize = true;
	__Local__7->Parent = __Local__3;
	auto __Local__8 = NewObject<USizeBox>(__Local__1, TEXT("SizeBox_0"), (EObjectFlags)0x00280008);
	__Local__8->WidthOverride = 400.000000f;
	__Local__8->HeightOverride = 250.000000f;
	__Local__8->bOverride_WidthOverride = true;
	__Local__8->bOverride_HeightOverride = true;
	auto& __Local__9 = (*(AccessPrivateProperty<TArray<UPanelSlot*> >((__Local__8), UPanelWidget::__PPO__Slots() )));
	__Local__9 = TArray<UPanelSlot*> ();
	__Local__9.Reserve(1);
	auto __Local__10 = NewObject<USizeBoxSlot>(__Local__8, TEXT("SizeBoxSlot_0"), (EObjectFlags)0x00280008);
	__Local__10->Parent = __Local__8;
	auto __Local__11 = NewObject<UVerticalBox>(__Local__1, TEXT("SelectedSegmentInfoBox"), (EObjectFlags)0x00280008);
	auto& __Local__12 = (*(AccessPrivateProperty<TArray<UPanelSlot*> >((__Local__11), UPanelWidget::__PPO__Slots() )));
	__Local__12 = TArray<UPanelSlot*> ();
	__Local__12.Reserve(3);
	auto __Local__13 = NewObject<UVerticalBoxSlot>(__Local__11, TEXT("VerticalBoxSlot_0"), (EObjectFlags)0x00280008);
	__Local__13->HorizontalAlignment = EHorizontalAlignment::HAlign_Center;
	__Local__13->Parent = __Local__11;
	auto __Local__14 = NewObject<UTextBlock>(__Local__1, TEXT("SegmentTitleText"), (EObjectFlags)0x00280008);
	__Local__14->Text = FTextStringHelper::CreateFromBuffer(
TEXT("NSLOCTEXT(\"[34A0B0C843B02C49E2E4849A50169C89]\", \"07DAEA034E8F8464AA82F1A940C97A1E\", \"Name\")")	);
	auto& __Local__15 = (*(AccessPrivateProperty<FLinearColor >(&(__Local__14->ColorAndOpacity), FSlateColor::__PPO__SpecifiedColor() )));
	__Local__15 = FLinearColor(1.000000, 0.500000, 0.000000, 1.000000);
	__Local__14->Font.Size = 20;
	__Local__14->Slot = __Local__13;
	__Local__14->bIsVariable = true;
	__Local__13->Content = __Local__14;
	__Local__12.Add(__Local__13);
	auto __Local__16 = NewObject<UVerticalBoxSlot>(__Local__11, TEXT("VerticalBoxSlot_1"), (EObjectFlags)0x00280008);
	__Local__16->Parent = __Local__11;
	auto __Local__17 = NewObject<UTextBlock>(__Local__1, TEXT("SegmentDescriptionText"), (EObjectFlags)0x00280008);
	__Local__17->Text = FTextStringHelper::CreateFromBuffer(
TEXT("NSLOCTEXT(\"[34A0B0C843B02C49E2E4849A50169C89]\", \"9E71954A4017B62CA281458B089FCF86\", \"Description\")")	);
	__Local__17->Font.Size = 16;
	auto& __Local__18 = (*(AccessPrivateProperty<TEnumAsByte<ETextJustify::Type> >((__Local__17), UTextLayoutWidget::__PPO__Justification() )));
	__Local__18 = ETextJustify::Type::Center;
	static TWeakFieldPtr<FProperty> __Local__20{};
	const FProperty* __Local__19 = __Local__20.Get();
	if (nullptr == __Local__19)
	{
		__Local__19 = (UTextLayoutWidget::StaticClass())->FindPropertyByName(FName(TEXT("AutoWrapText")));
		check(__Local__19);
		__Local__20 = __Local__19;
	}
	(((FBoolProperty*)__Local__19)->SetPropertyValue_InContainer((__Local__17), true, 0));
	__Local__17->Slot = __Local__16;
	__Local__17->bIsVariable = true;
	__Local__16->Content = __Local__17;
	__Local__12.Add(__Local__16);
	auto __Local__21 = NewObject<UVerticalBoxSlot>(__Local__11, TEXT("VerticalBoxSlot_2"), (EObjectFlags)0x00280008);
	__Local__21->Size.SizeRule = ESlateSizeRule::Type::Fill;
	__Local__21->HorizontalAlignment = EHorizontalAlignment::HAlign_Center;
	__Local__21->VerticalAlignment = EVerticalAlignment::VAlign_Center;
	__Local__21->Parent = __Local__11;
	auto __Local__22 = NewObject<UVerticalBox>(__Local__1, TEXT("RequirementsBox"), (EObjectFlags)0x00280008);
	auto& __Local__23 = (*(AccessPrivateProperty<TArray<UPanelSlot*> >((__Local__22), UPanelWidget::__PPO__Slots() )));
	__Local__23 = TArray<UPanelSlot*> ();
	__Local__23.Reserve(2);
	auto __Local__24 = NewObject<UVerticalBoxSlot>(__Local__22, TEXT("VerticalBoxSlot_0"), (EObjectFlags)0x00280008);
	__Local__24->HorizontalAlignment = EHorizontalAlignment::HAlign_Center;
	__Local__24->VerticalAlignment = EVerticalAlignment::VAlign_Center;
	__Local__24->Parent = __Local__22;
	auto __Local__25 = NewObject<UTextBlock>(__Local__1, TEXT("TextBlock_2"), (EObjectFlags)0x00280008);
	__Local__25->Text = FTextStringHelper::CreateFromBuffer(
TEXT("NSLOCTEXT(\"[34A0B0C843B02C49E2E4849A50169C89]\", \"2D7DB42144CF5CE0BE17DA9B2CDC5817\", \"Requirements:\")")	);
	auto& __Local__26 = (*(AccessPrivateProperty<FLinearColor >(&(__Local__25->ColorAndOpacity), FSlateColor::__PPO__SpecifiedColor() )));
	__Local__26 = FLinearColor(1.000000, 0.500000, 0.000000, 1.000000);
	__Local__25->Font.Size = 18;
	__Local__25->Slot = __Local__24;
	__Local__24->Content = __Local__25;
	__Local__23.Add(__Local__24);
	auto __Local__27 = NewObject<UVerticalBoxSlot>(__Local__22, TEXT("VerticalBoxSlot_1"), (EObjectFlags)0x00280008);
	__Local__27->Size.SizeRule = ESlateSizeRule::Type::Fill;
	__Local__27->HorizontalAlignment = EHorizontalAlignment::HAlign_Center;
	__Local__27->VerticalAlignment = EVerticalAlignment::VAlign_Center;
	__Local__27->Parent = __Local__22;
	auto __Local__28 = NewObject<UWrapBox>(__Local__1, TEXT("RequirementsPartsBox"), (EObjectFlags)0x00280008);
	__Local__28->Slot = __Local__27;
	__Local__28->bIsVariable = true;
	__Local__27->Content = __Local__28;
	__Local__23.Add(__Local__27);
	__Local__22->Slot = __Local__21;
	__Local__22->bIsVariable = true;
	__Local__21->Content = __Local__22;
	__Local__12.Add(__Local__21);
	__Local__11->Slot = __Local__10;
	__Local__11->bIsVariable = true;
	__Local__11->Visibility = ESlateVisibility::Hidden;
	__Local__10->Content = __Local__11;
	__Local__9.Add(__Local__10);
	__Local__8->Slot = __Local__7;
	__Local__7->Content = __Local__8;
	__Local__4.Add(__Local__7);
	auto __Local__29 = NewObject<UCanvasPanelSlot>(__Local__3, TEXT("CanvasPanelSlot_3"), (EObjectFlags)0x00280008);
	__Local__29->LayoutData.Offsets.Right = 0.000000f;
	__Local__29->LayoutData.Offsets.Bottom = 0.000000f;
	__Local__29->LayoutData.Anchors.Maximum = FVector2D(1.000000, 1.000000);
	__Local__29->Parent = __Local__3;
	auto __Local__30 = NewObject<UCanvasPanel>(__Local__1, TEXT("SegmentsCanvasPanel"), (EObjectFlags)0x00280008);
	__Local__30->Slot = __Local__29;
	__Local__30->bIsVariable = true;
	__Local__29->Content = __Local__30;
	__Local__4.Add(__Local__29);
	auto __Local__31 = NewObject<UCanvasPanelSlot>(__Local__3, TEXT("CanvasPanelSlot_1"), (EObjectFlags)0x00280008);
	__Local__31->LayoutData.Offsets.Right = 0.000000f;
	__Local__31->LayoutData.Offsets.Bottom = 0.000000f;
	__Local__31->LayoutData.Anchors.Maximum = FVector2D(1.000000, 1.000000);
	__Local__31->Parent = __Local__3;
	auto __Local__32 = NewObject<UButton>(__Local__1, TEXT("BtnClick"), (EObjectFlags)0x00280008);
	__Local__32->BackgroundColor = FLinearColor(1.000000, 1.000000, 1.000000, 0.000000);
	__Local__32->IsFocusable = false;
	__Local__32->Slot = __Local__31;
	__Local__31->Content = __Local__32;
	__Local__4.Add(__Local__31);
	__Local__1->RootWidget = __Local__3;
}
PRAGMA_ENABLE_OPTIMIZATION
void UUI_Mei_MalletMenu_C__pf4215541020::GetSlotNames(TArray<FName>& SlotNames) const
{
	TArray<FName>  __Local__33;
	SlotNames.Append(__Local__33);
}
void UUI_Mei_MalletMenu_C__pf4215541020::InitializeNativeClassData()
{
	TArray<UWidgetAnimation*>  __Local__34;
	TArray<FDelegateRuntimeBinding>  __Local__35;
	UWidgetBlueprintGeneratedClass::InitializeWidgetStatic(this, GetClass(), CastChecked<UWidgetTree>(CastChecked<UDynamicClass>(UUI_Mei_MalletMenu_C__pf4215541020::StaticClass())->MiscConvertedSubobjects[0]), __Local__34, __Local__35);
}
void UUI_Mei_MalletMenu_C__pf4215541020::PreSave(const class ITargetPlatform* TargetPlatform)
{
	Super::PreSave(TargetPlatform);
	TArray<FName> LocalNamedSlots;
	GetSlotNames(LocalNamedSlots);
	RemoveObsoleteBindings(LocalNamedSlots);
}
void UUI_Mei_MalletMenu_C__pf4215541020::bpf__ExecuteUbergraph_UI_Mei_MalletMenu__pf_0(int32 bpp__EntryPoint__pf)
{
	int32 bpfv__CallFunc_Array_Length_ReturnValue__pf{};
	bool bpfv__CallFunc_Less_IntInt_ReturnValue_1__pf{};
	int32 bpfv__CallFunc_Add_IntInt_ReturnValue_1__pf{};
	TArray< int32, TInlineAllocator<8> > __StateStack;

	int32 __CurrentState = bpp__EntryPoint__pf;
	do
	{
		switch( __CurrentState )
		{
		case 1:
			{
				bpf__CheckSegmentsConditions__pf(/*out*/ b0l__CallFunc_CheckSegmentsConditions_Success__pf);
			}
		case 2:
			{
				b0l__Temp_int_Loop_Counter_Variable_1__pf = 0;
			}
		case 3:
			{
				b0l__Temp_int_Array_Index_Variable_1__pf = 0;
			}
		case 4:
			{
				bpfv__CallFunc_Array_Length_ReturnValue__pf = FCustomThunkTemplates::Array_Length(bpv__MenuSegments__pf);
				bpfv__CallFunc_Less_IntInt_ReturnValue_1__pf = UKismetMathLibrary::Less_IntInt(b0l__Temp_int_Loop_Counter_Variable_1__pf, bpfv__CallFunc_Array_Length_ReturnValue__pf);
				if (!bpfv__CallFunc_Less_IntInt_ReturnValue_1__pf)
				{
					__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
					break;
				}
			}
		case 5:
			{
				b0l__Temp_int_Array_Index_Variable_1__pf = b0l__Temp_int_Loop_Counter_Variable_1__pf;
			}
		case 6:
			{
				__StateStack.Push(8);
			}
		case 7:
			{
				FCustomThunkTemplates::Array_Get(bpv__MenuSegments__pf, b0l__Temp_int_Array_Index_Variable_1__pf, /*out*/ b0l__CallFunc_Array_Get_Item_1__pf);
				if(::IsValid(b0l__CallFunc_Array_Get_Item_1__pf))
				{
					b0l__CallFunc_Array_Get_Item_1__pf->bpf__CheckSelection__pf(bpv__Rotation__pf, /*out*/ b0l__CallFunc_CheckSelection_Success__pf);
				}
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 8:
			{
				bpfv__CallFunc_Add_IntInt_ReturnValue_1__pf = UKismetMathLibrary::Add_IntInt(b0l__Temp_int_Loop_Counter_Variable_1__pf, 1);
				b0l__Temp_int_Loop_Counter_Variable_1__pf = bpfv__CallFunc_Add_IntInt_ReturnValue_1__pf;
				__CurrentState = 4;
				break;
			}
		case 19:
			{
				__CurrentState = 20;
				break;
			}
		case 20:
			{
				bpf__UpdateMouseRotation__pf(/*out*/ b0l__CallFunc_UpdateMouseRotation_Success__pf);
				__CurrentState = 1;
				break;
			}
		default:
			check(false); // Invalid state
			break;
		}
	} while( __CurrentState != -1 );
}
void UUI_Mei_MalletMenu_C__pf4215541020::bpf__ExecuteUbergraph_UI_Mei_MalletMenu__pf_1(int32 bpp__EntryPoint__pf)
{
	int32 bpfv__CallFunc_Add_IntInt_ReturnValue__pf{};
	int32 bpfv__CallFunc_Array_Length_ReturnValue_1__pf{};
	bool bpfv__CallFunc_Less_IntInt_ReturnValue__pf{};
	TArray< int32, TInlineAllocator<8> > __StateStack;

	int32 __CurrentState = bpp__EntryPoint__pf;
	do
	{
		switch( __CurrentState )
		{
		case 9:
			{
				__StateStack.Push(11);
			}
		case 10:
			{
				FCustomThunkTemplates::Array_Get(bpv__MenuSegments__pf, b0l__Temp_int_Array_Index_Variable__pf, /*out*/ b0l__CallFunc_Array_Get_Item__pf);
				if(::IsValid(b0l__CallFunc_Array_Get_Item__pf))
				{
					b0l__CallFunc_Array_Get_Item__pf->bpf__TryClick__pf();
				}
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 11:
			{
				bpfv__CallFunc_Add_IntInt_ReturnValue__pf = UKismetMathLibrary::Add_IntInt(b0l__Temp_int_Loop_Counter_Variable__pf, 1);
				b0l__Temp_int_Loop_Counter_Variable__pf = bpfv__CallFunc_Add_IntInt_ReturnValue__pf;
			}
		case 12:
			{
				bpfv__CallFunc_Array_Length_ReturnValue_1__pf = FCustomThunkTemplates::Array_Length(bpv__MenuSegments__pf);
				bpfv__CallFunc_Less_IntInt_ReturnValue__pf = UKismetMathLibrary::Less_IntInt(b0l__Temp_int_Loop_Counter_Variable__pf, bpfv__CallFunc_Array_Length_ReturnValue_1__pf);
				if (!bpfv__CallFunc_Less_IntInt_ReturnValue__pf)
				{
					__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
					break;
				}
			}
		case 13:
			{
				b0l__Temp_int_Array_Index_Variable__pf = b0l__Temp_int_Loop_Counter_Variable__pf;
				__CurrentState = 9;
				break;
			}
		case 14:
			{
				b0l__Temp_int_Array_Index_Variable__pf = 0;
				__CurrentState = 12;
				break;
			}
		case 21:
			{
				__CurrentState = 22;
				break;
			}
		case 22:
			{
				b0l__Temp_int_Loop_Counter_Variable__pf = 0;
				__CurrentState = 14;
				break;
			}
		default:
			check(false); // Invalid state
			break;
		}
	} while( __CurrentState != -1 );
}
void UUI_Mei_MalletMenu_C__pf4215541020::bpf__ExecuteUbergraph_UI_Mei_MalletMenu__pf_2(int32 bpp__EntryPoint__pf)
{
	int32 __CurrentState = bpp__EntryPoint__pf;
	do
	{
		switch( __CurrentState )
		{
		case 15:
			{
				__CurrentState = 16;
				break;
			}
		case 16:
			{
				if (!b0l__K2Node_Event_IsDesignTime__pf)
				{
					__CurrentState = -1;
					break;
				}
			}
		case 17:
			{
				bpf__UpdateWidget__pf(/*out*/ b0l__CallFunc_UpdateWidget_Success__pf);
				__CurrentState = -1;
				break;
			}
		case 18:
			{
				__CurrentState = 17;
				break;
			}
		default:
			break;
		}
	} while( __CurrentState != -1 );
}
void UUI_Mei_MalletMenu_C__pf4215541020::bpf__BndEvt__BtnClick_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature__pf()
{
	bpf__ExecuteUbergraph_UI_Mei_MalletMenu__pf_1(21);
}
void UUI_Mei_MalletMenu_C__pf4215541020::bpf__Tick__pf(FGeometry bpp__MyGeometry__pf, float bpp__InDeltaTime__pf)
{
	b0l__K2Node_Event_MyGeometry__pf = bpp__MyGeometry__pf;
	b0l__K2Node_Event_InDeltaTime__pf = bpp__InDeltaTime__pf;
	bpf__ExecuteUbergraph_UI_Mei_MalletMenu__pf_0(19);
}
void UUI_Mei_MalletMenu_C__pf4215541020::bpf__Construct__pf()
{
	bpf__ExecuteUbergraph_UI_Mei_MalletMenu__pf_2(18);
}
void UUI_Mei_MalletMenu_C__pf4215541020::bpf__PreConstruct__pf(bool bpp__IsDesignTime__pf)
{
	b0l__K2Node_Event_IsDesignTime__pf = bpp__IsDesignTime__pf;
	bpf__ExecuteUbergraph_UI_Mei_MalletMenu__pf_2(15);
}
void UUI_Mei_MalletMenu_C__pf4215541020::bpf__UpdateWidget__pf(/*out*/ bool& bpp__Success__pf)
{
	TArray<UUI_Mei_MenuSegment_C__pf4215541020*> bpfv__K2Node_MakeArray_Array__pf{};
	bpfv__K2Node_MakeArray_Array__pf.SetNum(5, true);
	bpfv__K2Node_MakeArray_Array__pf[0] = bpv__kari_xRotateSegment__pfT;
	bpfv__K2Node_MakeArray_Array__pf[1] = bpv__kari_xRepairSegment__pfT;
	bpfv__K2Node_MakeArray_Array__pf[2] = bpv__kari_xUpgradeSegment__pfT;
	bpfv__K2Node_MakeArray_Array__pf[3] = bpv__kari_xRemoveSegment__pfT;
	bpfv__K2Node_MakeArray_Array__pf[4] = bpv__kari_xDestructSegment__pfT;
	bpv__MenuSegments__pf = bpfv__K2Node_MakeArray_Array__pf;
	bpp__Success__pf = true;
}
void UUI_Mei_MalletMenu_C__pf4215541020::bpf__UpdateMouseRotation__pf(/*out*/ bool& bpp__Success__pf)
{
	bool bpfv__Temp_bool_Variable__pf{};
	APlayerController* bpfv__CallFunc_GetOwningPlayer_ReturnValue__pf{};
	FVector2D bpfv__CallFunc_GetViewportSize_ReturnValue__pf(EForceInit::ForceInit);
	float bpfv__CallFunc_GetMousePosition_LocationX__pf{};
	float bpfv__CallFunc_GetMousePosition_LocationY__pf{};
	bool bpfv__CallFunc_GetMousePosition_ReturnValue__pf{};
	FVector2D bpfv__CallFunc_Divide_Vector2DFloat_ReturnValue__pf(EForceInit::ForceInit);
	FVector bpfv__CallFunc_MakeVector_ReturnValue__pf(EForceInit::ForceInit);
	float bpfv__CallFunc_BreakVector2D_X__pf{};
	float bpfv__CallFunc_BreakVector2D_Y__pf{};
	FVector bpfv__CallFunc_MakeVector_ReturnValue_1__pf(EForceInit::ForceInit);
	FRotator bpfv__CallFunc_FindLookAtRotation_ReturnValue__pf(EForceInit::ForceInit);
	FVector bpfv__CallFunc_Subtract_VectorVector_ReturnValue__pf(EForceInit::ForceInit);
	float bpfv__CallFunc_BreakRotator_Roll__pf{};
	float bpfv__CallFunc_BreakRotator_Pitch__pf{};
	float bpfv__CallFunc_BreakRotator_Yaw__pf{};
	float bpfv__CallFunc_VSize_ReturnValue__pf{};
	bool bpfv__CallFunc_Greater_FloatFloat_ReturnValue__pf{};
	float bpfv__CallFunc_Subtract_FloatFloat_ReturnValue__pf{};
	float bpfv__CallFunc_Add_FloatFloat_ReturnValue__pf{};
	float bpfv__K2Node_Select_Default__pf{};
	bpfv__CallFunc_GetOwningPlayer_ReturnValue__pf = GetOwningPlayer();
	bpfv__CallFunc_GetViewportSize_ReturnValue__pf = UWidgetLayoutLibrary::GetViewportSize(this);
	if(::IsValid(bpfv__CallFunc_GetOwningPlayer_ReturnValue__pf))
	{
		bpfv__CallFunc_GetMousePosition_ReturnValue__pf = bpfv__CallFunc_GetOwningPlayer_ReturnValue__pf->APlayerController::GetMousePosition(/*out*/ bpfv__CallFunc_GetMousePosition_LocationX__pf, /*out*/ bpfv__CallFunc_GetMousePosition_LocationY__pf);
	}
	bpfv__CallFunc_Divide_Vector2DFloat_ReturnValue__pf = UKismetMathLibrary::Divide_Vector2DFloat(bpfv__CallFunc_GetViewportSize_ReturnValue__pf, 2.000000);
	bpfv__CallFunc_MakeVector_ReturnValue__pf = UKismetMathLibrary::MakeVector(bpfv__CallFunc_GetMousePosition_LocationX__pf, bpfv__CallFunc_GetMousePosition_LocationY__pf, 0.000000);
	UKismetMathLibrary::BreakVector2D(bpfv__CallFunc_Divide_Vector2DFloat_ReturnValue__pf, /*out*/ bpfv__CallFunc_BreakVector2D_X__pf, /*out*/ bpfv__CallFunc_BreakVector2D_Y__pf);
	bpfv__CallFunc_MakeVector_ReturnValue_1__pf = UKismetMathLibrary::MakeVector(bpfv__CallFunc_BreakVector2D_X__pf, bpfv__CallFunc_BreakVector2D_Y__pf, 0.000000);
	bpfv__CallFunc_FindLookAtRotation_ReturnValue__pf = UKismetMathLibrary::FindLookAtRotation(bpfv__CallFunc_MakeVector_ReturnValue_1__pf, bpfv__CallFunc_MakeVector_ReturnValue__pf);
	UKismetMathLibrary::BreakRotator(bpfv__CallFunc_FindLookAtRotation_ReturnValue__pf, /*out*/ bpfv__CallFunc_BreakRotator_Roll__pf, /*out*/ bpfv__CallFunc_BreakRotator_Pitch__pf, /*out*/ bpfv__CallFunc_BreakRotator_Yaw__pf);
	bpfv__CallFunc_Greater_FloatFloat_ReturnValue__pf = UKismetMathLibrary::Greater_FloatFloat(bpfv__CallFunc_BreakRotator_Yaw__pf, 0.000000);
	bpfv__Temp_bool_Variable__pf = bpfv__CallFunc_Greater_FloatFloat_ReturnValue__pf;
	bpfv__CallFunc_Subtract_FloatFloat_ReturnValue__pf = UKismetMathLibrary::Subtract_FloatFloat(bpfv__CallFunc_BreakRotator_Yaw__pf, 180.000000);
	bpfv__CallFunc_Add_FloatFloat_ReturnValue__pf = UKismetMathLibrary::Add_FloatFloat(bpfv__CallFunc_BreakRotator_Yaw__pf, 180.000000);
	bpv__Rotation__pf = TSwitchValue<bool , float >(bpfv__Temp_bool_Variable__pf, bpfv__K2Node_Select_Default__pf, 2, TSwitchPair<bool , float >(false, bpfv__CallFunc_Add_FloatFloat_ReturnValue__pf), TSwitchPair<bool , float >(true, bpfv__CallFunc_Subtract_FloatFloat_ReturnValue__pf));
	bpfv__CallFunc_GetOwningPlayer_ReturnValue__pf = GetOwningPlayer();
	bpfv__CallFunc_GetViewportSize_ReturnValue__pf = UWidgetLayoutLibrary::GetViewportSize(this);
	if(::IsValid(bpfv__CallFunc_GetOwningPlayer_ReturnValue__pf))
	{
		bpfv__CallFunc_GetMousePosition_ReturnValue__pf = bpfv__CallFunc_GetOwningPlayer_ReturnValue__pf->APlayerController::GetMousePosition(/*out*/ bpfv__CallFunc_GetMousePosition_LocationX__pf, /*out*/ bpfv__CallFunc_GetMousePosition_LocationY__pf);
	}
	bpfv__CallFunc_Divide_Vector2DFloat_ReturnValue__pf = UKismetMathLibrary::Divide_Vector2DFloat(bpfv__CallFunc_GetViewportSize_ReturnValue__pf, 2.000000);
	bpfv__CallFunc_MakeVector_ReturnValue__pf = UKismetMathLibrary::MakeVector(bpfv__CallFunc_GetMousePosition_LocationX__pf, bpfv__CallFunc_GetMousePosition_LocationY__pf, 0.000000);
	UKismetMathLibrary::BreakVector2D(bpfv__CallFunc_Divide_Vector2DFloat_ReturnValue__pf, /*out*/ bpfv__CallFunc_BreakVector2D_X__pf, /*out*/ bpfv__CallFunc_BreakVector2D_Y__pf);
	bpfv__CallFunc_MakeVector_ReturnValue_1__pf = UKismetMathLibrary::MakeVector(bpfv__CallFunc_BreakVector2D_X__pf, bpfv__CallFunc_BreakVector2D_Y__pf, 0.000000);
	bpfv__CallFunc_Subtract_VectorVector_ReturnValue__pf = UKismetMathLibrary::Subtract_VectorVector(bpfv__CallFunc_MakeVector_ReturnValue_1__pf, bpfv__CallFunc_MakeVector_ReturnValue__pf);
	bpfv__CallFunc_VSize_ReturnValue__pf = UKismetMathLibrary::VSize(bpfv__CallFunc_Subtract_VectorVector_ReturnValue__pf);
	bpv__Distance__pf = bpfv__CallFunc_VSize_ReturnValue__pf;
	bpp__Success__pf = true;
}
void UUI_Mei_MalletMenu_C__pf4215541020::bpf__SetBuildingObjectReference__pf(ABP_Mei_Building_BaseObject_C__pf2826203124* bpp__BuildingObject__pf, /*out*/ bool& bpp__Success__pf)
{
	bool bpfv__CallFunc_UpdateWidget_Success__pf{};
	bpv__BuildingObjectReference__pf = bpp__BuildingObject__pf;
	bpf__UpdateWidget__pf(/*out*/ bpfv__CallFunc_UpdateWidget_Success__pf);
	bpp__Success__pf = true;
}
void UUI_Mei_MalletMenu_C__pf4215541020::bpf__SegmentxSelected__pfT(UUI_Mei_MenuSegment_C__pf4215541020* bpp__MenuSegment__pf, E__E_Mei_BuildingMode__pf bpp__BuildingMode__pf, /*out*/ bool& bpp__Success__pf)
{
	UUI_Mei_MenuSegment_C__pf4215541020* bpfv__LocalMenuSegment__pf{};
	bool bpfv__CallFunc_UpdateSegmentInformation_Success__pf{};
	bpfv__LocalMenuSegment__pf = bpp__MenuSegment__pf;
	bpf__UpdateSegmentInformation__pf(bpp__BuildingMode__pf, /*out*/ bpfv__CallFunc_UpdateSegmentInformation_Success__pf);
	bpv__OnMenuSegmentSelected__pf.Broadcast(bpfv__LocalMenuSegment__pf);
	bpp__Success__pf = true;
}
void UUI_Mei_MalletMenu_C__pf4215541020::bpf__SegmentClicked__pf(UUI_Mei_MenuSegment_C__pf4215541020* bpp__MenuSegment__pf, E__E_Mei_BuildingMode__pf bpp__BuildingMode__pf, bool bpp__HideMenu__pf, /*out*/ bool& bpp__Success__pf)
{
	E__E_Mei_BuildingMode__pf bpfv__LocalBuildingMode__pf{};
	bool bpfv__LocalHideMenu__pf{};
	UUI_Mei_MenuSegment_C__pf4215541020* bpfv__LocalMenuSegment__pf{};
	bool bpfv__K2Node_SwitchEnum_CmpSuccess__pf{};
	APlayerController* bpfv__CallFunc_GetOwningPlayer_ReturnValue__pf{};
	TScriptInterface<IBPI_Mei_Player_C> bpfv__K2Node_DynamicCast_AsBPI_Mei_Player__pf{};
	bool bpfv__K2Node_DynamicCast_bSuccess__pf{};
	TScriptInterface<IBPI_Mei_Player_C> bpfv__K2Node_DynamicCast_AsBPI_Mei_Player_1__pf{};
	bool bpfv__K2Node_DynamicCast_bSuccess_1__pf{};
	TScriptInterface<IBPI_Mei_Player_C> bpfv__K2Node_DynamicCast_AsBPI_Mei_Player_2__pf{};
	bool bpfv__K2Node_DynamicCast_bSuccess_2__pf{};
	TScriptInterface<IBPI_Mei_Player_C> bpfv__K2Node_DynamicCast_AsBPI_Mei_Player_3__pf{};
	bool bpfv__K2Node_DynamicCast_bSuccess_3__pf{};
	TScriptInterface<IBPI_Mei_Player_C> bpfv__K2Node_DynamicCast_AsBPI_Mei_Player_4__pf{};
	bool bpfv__K2Node_DynamicCast_bSuccess_4__pf{};
	int32 __CurrentState = 1;
	do
	{
		switch( __CurrentState )
		{
		case 1:
			{
				bpfv__LocalMenuSegment__pf = bpp__MenuSegment__pf;
			}
		case 2:
			{
				bpfv__LocalBuildingMode__pf = bpp__BuildingMode__pf;
			}
		case 3:
			{
				bpfv__LocalHideMenu__pf = bpp__HideMenu__pf;
			}
		case 4:
			{
				bpfv__K2Node_SwitchEnum_CmpSuccess__pf = UKismetMathLibrary::NotEqual_ByteByte(static_cast<uint8>(E__E_Mei_BuildingMode__pf::NewEnumerator0), static_cast<uint8>(E__E_Mei_BuildingMode__pf::NewEnumerator2));
				if (!bpfv__K2Node_SwitchEnum_CmpSuccess__pf)
				{
					__CurrentState = 5;
					break;
				}
				bpfv__K2Node_SwitchEnum_CmpSuccess__pf = UKismetMathLibrary::NotEqual_ByteByte(static_cast<uint8>(E__E_Mei_BuildingMode__pf::NewEnumerator0), static_cast<uint8>(E__E_Mei_BuildingMode__pf::NewEnumerator3));
				if (!bpfv__K2Node_SwitchEnum_CmpSuccess__pf)
				{
					__CurrentState = 9;
					break;
				}
				bpfv__K2Node_SwitchEnum_CmpSuccess__pf = UKismetMathLibrary::NotEqual_ByteByte(static_cast<uint8>(E__E_Mei_BuildingMode__pf::NewEnumerator0), static_cast<uint8>(E__E_Mei_BuildingMode__pf::NewEnumerator4));
				if (!bpfv__K2Node_SwitchEnum_CmpSuccess__pf)
				{
					__CurrentState = 11;
					break;
				}
				bpfv__K2Node_SwitchEnum_CmpSuccess__pf = UKismetMathLibrary::NotEqual_ByteByte(static_cast<uint8>(E__E_Mei_BuildingMode__pf::NewEnumerator0), static_cast<uint8>(E__E_Mei_BuildingMode__pf::NewEnumerator5));
				if (!bpfv__K2Node_SwitchEnum_CmpSuccess__pf)
				{
					__CurrentState = 13;
					break;
				}
				bpfv__K2Node_SwitchEnum_CmpSuccess__pf = UKismetMathLibrary::NotEqual_ByteByte(static_cast<uint8>(E__E_Mei_BuildingMode__pf::NewEnumerator0), static_cast<uint8>(E__E_Mei_BuildingMode__pf::NewEnumerator6));
				if (!bpfv__K2Node_SwitchEnum_CmpSuccess__pf)
				{
					__CurrentState = 15;
					break;
				}
				__CurrentState = -1;
				break;
			}
		case 5:
			{
				bpfv__CallFunc_GetOwningPlayer_ReturnValue__pf = GetOwningPlayer();
				if ( bpfv__CallFunc_GetOwningPlayer_ReturnValue__pf && bpfv__CallFunc_GetOwningPlayer_ReturnValue__pf->GetClass()->ImplementsInterface(UBPI_Mei_Player_C::StaticClass()) )
				{
					bpfv__K2Node_DynamicCast_AsBPI_Mei_Player_3__pf.SetObject(bpfv__CallFunc_GetOwningPlayer_ReturnValue__pf);
					void* IAddress = bpfv__CallFunc_GetOwningPlayer_ReturnValue__pf->GetInterfaceAddress(UBPI_Mei_Player_C::StaticClass());
					bpfv__K2Node_DynamicCast_AsBPI_Mei_Player_3__pf.SetInterface(IAddress);
				}
				else
				{
					bpfv__K2Node_DynamicCast_AsBPI_Mei_Player_3__pf.SetObject(nullptr);
				}
				bpfv__K2Node_DynamicCast_bSuccess_3__pf = (bpfv__K2Node_DynamicCast_AsBPI_Mei_Player_3__pf != nullptr);;
				if (!bpfv__K2Node_DynamicCast_bSuccess_3__pf)
				{
					__CurrentState = 7;
					break;
				}
			}
		case 6:
			{
				if(::IsValid(bpfv__K2Node_DynamicCast_AsBPI_Mei_Player_3__pf))
				{
					IBPI_Mei_Player_C::Execute_bpf__TryRepair_BPI__pf(bpfv__K2Node_DynamicCast_AsBPI_Mei_Player_3__pf.GetObject() , bpv__BuildingObjectReference__pf);
				}
			}
		case 7:
			{
				bpv__OnMenuSegmentClicked__pf.Broadcast(bpfv__LocalMenuSegment__pf, bpfv__LocalHideMenu__pf);
			}
		case 8:
			{
				bpp__Success__pf = true;
				__CurrentState = -1;
				break;
			}
		case 9:
			{
				bpfv__CallFunc_GetOwningPlayer_ReturnValue__pf = GetOwningPlayer();
				if ( bpfv__CallFunc_GetOwningPlayer_ReturnValue__pf && bpfv__CallFunc_GetOwningPlayer_ReturnValue__pf->GetClass()->ImplementsInterface(UBPI_Mei_Player_C::StaticClass()) )
				{
					bpfv__K2Node_DynamicCast_AsBPI_Mei_Player_2__pf.SetObject(bpfv__CallFunc_GetOwningPlayer_ReturnValue__pf);
					void* IAddress = bpfv__CallFunc_GetOwningPlayer_ReturnValue__pf->GetInterfaceAddress(UBPI_Mei_Player_C::StaticClass());
					bpfv__K2Node_DynamicCast_AsBPI_Mei_Player_2__pf.SetInterface(IAddress);
				}
				else
				{
					bpfv__K2Node_DynamicCast_AsBPI_Mei_Player_2__pf.SetObject(nullptr);
				}
				bpfv__K2Node_DynamicCast_bSuccess_2__pf = (bpfv__K2Node_DynamicCast_AsBPI_Mei_Player_2__pf != nullptr);;
				if (!bpfv__K2Node_DynamicCast_bSuccess_2__pf)
				{
					__CurrentState = 7;
					break;
				}
			}
		case 10:
			{
				if(::IsValid(bpfv__K2Node_DynamicCast_AsBPI_Mei_Player_2__pf))
				{
					IBPI_Mei_Player_C::Execute_bpf__TryUpgrade_BPI__pf(bpfv__K2Node_DynamicCast_AsBPI_Mei_Player_2__pf.GetObject() , bpv__BuildingObjectReference__pf);
				}
				__CurrentState = 7;
				break;
			}
		case 11:
			{
				bpfv__CallFunc_GetOwningPlayer_ReturnValue__pf = GetOwningPlayer();
				if ( bpfv__CallFunc_GetOwningPlayer_ReturnValue__pf && bpfv__CallFunc_GetOwningPlayer_ReturnValue__pf->GetClass()->ImplementsInterface(UBPI_Mei_Player_C::StaticClass()) )
				{
					bpfv__K2Node_DynamicCast_AsBPI_Mei_Player_1__pf.SetObject(bpfv__CallFunc_GetOwningPlayer_ReturnValue__pf);
					void* IAddress = bpfv__CallFunc_GetOwningPlayer_ReturnValue__pf->GetInterfaceAddress(UBPI_Mei_Player_C::StaticClass());
					bpfv__K2Node_DynamicCast_AsBPI_Mei_Player_1__pf.SetInterface(IAddress);
				}
				else
				{
					bpfv__K2Node_DynamicCast_AsBPI_Mei_Player_1__pf.SetObject(nullptr);
				}
				bpfv__K2Node_DynamicCast_bSuccess_1__pf = (bpfv__K2Node_DynamicCast_AsBPI_Mei_Player_1__pf != nullptr);;
				if (!bpfv__K2Node_DynamicCast_bSuccess_1__pf)
				{
					__CurrentState = 7;
					break;
				}
			}
		case 12:
			{
				if(::IsValid(bpfv__K2Node_DynamicCast_AsBPI_Mei_Player_1__pf))
				{
					IBPI_Mei_Player_C::Execute_bpf__TryDestruct_BPI__pf(bpfv__K2Node_DynamicCast_AsBPI_Mei_Player_1__pf.GetObject() , bpv__BuildingObjectReference__pf);
				}
				__CurrentState = 7;
				break;
			}
		case 13:
			{
				bpfv__CallFunc_GetOwningPlayer_ReturnValue__pf = GetOwningPlayer();
				if ( bpfv__CallFunc_GetOwningPlayer_ReturnValue__pf && bpfv__CallFunc_GetOwningPlayer_ReturnValue__pf->GetClass()->ImplementsInterface(UBPI_Mei_Player_C::StaticClass()) )
				{
					bpfv__K2Node_DynamicCast_AsBPI_Mei_Player__pf.SetObject(bpfv__CallFunc_GetOwningPlayer_ReturnValue__pf);
					void* IAddress = bpfv__CallFunc_GetOwningPlayer_ReturnValue__pf->GetInterfaceAddress(UBPI_Mei_Player_C::StaticClass());
					bpfv__K2Node_DynamicCast_AsBPI_Mei_Player__pf.SetInterface(IAddress);
				}
				else
				{
					bpfv__K2Node_DynamicCast_AsBPI_Mei_Player__pf.SetObject(nullptr);
				}
				bpfv__K2Node_DynamicCast_bSuccess__pf = (bpfv__K2Node_DynamicCast_AsBPI_Mei_Player__pf != nullptr);;
				if (!bpfv__K2Node_DynamicCast_bSuccess__pf)
				{
					__CurrentState = 7;
					break;
				}
			}
		case 14:
			{
				if(::IsValid(bpfv__K2Node_DynamicCast_AsBPI_Mei_Player__pf))
				{
					IBPI_Mei_Player_C::Execute_bpf__TryRemove_BPI__pf(bpfv__K2Node_DynamicCast_AsBPI_Mei_Player__pf.GetObject() , bpv__BuildingObjectReference__pf);
				}
				__CurrentState = 7;
				break;
			}
		case 15:
			{
				bpfv__CallFunc_GetOwningPlayer_ReturnValue__pf = GetOwningPlayer();
				if ( bpfv__CallFunc_GetOwningPlayer_ReturnValue__pf && bpfv__CallFunc_GetOwningPlayer_ReturnValue__pf->GetClass()->ImplementsInterface(UBPI_Mei_Player_C::StaticClass()) )
				{
					bpfv__K2Node_DynamicCast_AsBPI_Mei_Player_4__pf.SetObject(bpfv__CallFunc_GetOwningPlayer_ReturnValue__pf);
					void* IAddress = bpfv__CallFunc_GetOwningPlayer_ReturnValue__pf->GetInterfaceAddress(UBPI_Mei_Player_C::StaticClass());
					bpfv__K2Node_DynamicCast_AsBPI_Mei_Player_4__pf.SetInterface(IAddress);
				}
				else
				{
					bpfv__K2Node_DynamicCast_AsBPI_Mei_Player_4__pf.SetObject(nullptr);
				}
				bpfv__K2Node_DynamicCast_bSuccess_4__pf = (bpfv__K2Node_DynamicCast_AsBPI_Mei_Player_4__pf != nullptr);;
				if (!bpfv__K2Node_DynamicCast_bSuccess_4__pf)
				{
					__CurrentState = 7;
					break;
				}
			}
		case 16:
			{
				if(::IsValid(bpfv__K2Node_DynamicCast_AsBPI_Mei_Player_4__pf))
				{
					IBPI_Mei_Player_C::Execute_bpf__TryRotate_BPI__pf(bpfv__K2Node_DynamicCast_AsBPI_Mei_Player_4__pf.GetObject() , bpv__BuildingObjectReference__pf);
				}
				__CurrentState = 7;
				break;
			}
		default:
			break;
		}
	} while( __CurrentState != -1 );
}
void UUI_Mei_MalletMenu_C__pf4215541020::bpf__UpdateSegmentInformation__pf(E__E_Mei_BuildingMode__pf bpp__BuildingMode__pf, /*out*/ bool& bpp__Success__pf)
{
	FText bpfv__Temp_text_Variable__pf{};
	bool bpfv__CallFunc_UpdateSegmentRequirements_Success__pf{};
	FText bpfv__Temp_text_Variable_1__pf{};
	FText bpfv__Temp_text_Variable_2__pf{};
	FText bpfv__Temp_text_Variable_3__pf{};
	FText bpfv__Temp_text_Variable_4__pf{};
	FText bpfv__Temp_text_Variable_5__pf{};
	FText bpfv__Temp_text_Variable_6__pf{};
	E__E_Mei_BuildingMode__pf bpfv__Temp_byte_Variable__pf{};
	FText bpfv__Temp_text_Variable_7__pf{};
	FText bpfv__Temp_text_Variable_8__pf{};
	FText bpfv__Temp_text_Variable_9__pf{};
	FText bpfv__Temp_text_Variable_10__pf{};
	FText bpfv__Temp_text_Variable_11__pf{};
	FText bpfv__Temp_text_Variable_12__pf{};
	FText bpfv__Temp_text_Variable_13__pf{};
	E__E_Mei_BuildingMode__pf bpfv__Temp_byte_Variable_1__pf{};
	FText bpfv__K2Node_Select_Default__pf{};
	FText bpfv__K2Node_Select_Default_1__pf{};
	if(::IsValid(bpv__SelectedSegmentInfoBox__pf))
	{
		bpv__SelectedSegmentInfoBox__pf->SetVisibility(ESlateVisibility::Visible);
	}
	bpfv__Temp_text_Variable__pf = FTextStringHelper::CreateFromBuffer(
TEXT("NSLOCTEXT(\"[34A0B0C843B02C49E2E4849A50169C89]\", \"35941C394E451A01289A94A8FCA02B16\", \"Rotate\")")	);
	bpfv__Temp_text_Variable_1__pf = FTextStringHelper::CreateFromBuffer(
TEXT("NSLOCTEXT(\"[34A0B0C843B02C49E2E4849A50169C89]\", \"B980658E4E76C8F346F1A3BD21D342D7\", \"Remove\")")	);
	bpfv__Temp_text_Variable_2__pf = FTextStringHelper::CreateFromBuffer(
TEXT("NSLOCTEXT(\"[34A0B0C843B02C49E2E4849A50169C89]\", \"EFD3C9384229D4B3BC2DC096984CEF69\", \"Destruct\")")	);
	bpfv__Temp_text_Variable_3__pf = FTextStringHelper::CreateFromBuffer(
TEXT("NSLOCTEXT(\"[34A0B0C843B02C49E2E4849A50169C89]\", \"E5A315C544A6CC615B7286925C292E2E\", \"Upgrade\")")	);
	bpfv__Temp_text_Variable_4__pf = FTextStringHelper::CreateFromBuffer(
TEXT("NSLOCTEXT(\"[34A0B0C843B02C49E2E4849A50169C89]\", \"DBBFA9E44A0D5427CC02C0AFBED369B7\", \"Repair\")")	);
	bpfv__Temp_text_Variable_5__pf = FText::GetEmpty();
	bpfv__Temp_text_Variable_6__pf = FText::GetEmpty();
	bpfv__Temp_byte_Variable_1__pf = bpp__BuildingMode__pf;
	if(::IsValid(bpv__SegmentTitleText__pf))
	{
		bpv__SegmentTitleText__pf->SetText(TSwitchValue<E__E_Mei_BuildingMode__pf , FText >(bpfv__Temp_byte_Variable_1__pf, bpfv__K2Node_Select_Default_1__pf, 7, TSwitchPair<E__E_Mei_BuildingMode__pf , FText >(E__E_Mei_BuildingMode__pf::NewEnumerator0, bpfv__Temp_text_Variable_6__pf), TSwitchPair<E__E_Mei_BuildingMode__pf , FText >(E__E_Mei_BuildingMode__pf::NewEnumerator1, bpfv__Temp_text_Variable_5__pf), TSwitchPair<E__E_Mei_BuildingMode__pf , FText >(E__E_Mei_BuildingMode__pf::NewEnumerator2, bpfv__Temp_text_Variable_4__pf), TSwitchPair<E__E_Mei_BuildingMode__pf , FText >(E__E_Mei_BuildingMode__pf::NewEnumerator3, bpfv__Temp_text_Variable_3__pf), TSwitchPair<E__E_Mei_BuildingMode__pf , FText >(E__E_Mei_BuildingMode__pf::NewEnumerator4, bpfv__Temp_text_Variable_2__pf), TSwitchPair<E__E_Mei_BuildingMode__pf , FText >(E__E_Mei_BuildingMode__pf::NewEnumerator5, bpfv__Temp_text_Variable_1__pf), TSwitchPair<E__E_Mei_BuildingMode__pf , FText >(E__E_Mei_BuildingMode__pf::NewEnumerator6, bpfv__Temp_text_Variable__pf)));
	}
	bpfv__Temp_byte_Variable__pf = bpp__BuildingMode__pf;
	bpfv__Temp_text_Variable_7__pf = FTextStringHelper::CreateFromBuffer(
TEXT("NSLOCTEXT(\"[34A0B0C843B02C49E2E4849A50169C89]\", \"097192F34615620DFF5C289D02B9852F\", \"Rotate the target object\")")	);
	bpfv__Temp_text_Variable_8__pf = FTextStringHelper::CreateFromBuffer(
TEXT("NSLOCTEXT(\"[34A0B0C843B02C49E2E4849A50169C89]\", \"F2515AB04030DC7ABFEB1E803FAC08BC\", \"Remove the target object\")")	);
	bpfv__Temp_text_Variable_9__pf = FTextStringHelper::CreateFromBuffer(
TEXT("NSLOCTEXT(\"[34A0B0C843B02C49E2E4849A50169C89]\", \"79BBDF5448EF08A71F6346BB352D4CA2\", \"Destruct the target object\")")	);
	bpfv__Temp_text_Variable_10__pf = FTextStringHelper::CreateFromBuffer(
TEXT("NSLOCTEXT(\"[34A0B0C843B02C49E2E4849A50169C89]\", \"C72787C84997B30AACA9B09D6816BEED\", \"Upgrade the target object\")")	);
	bpfv__Temp_text_Variable_11__pf = FTextStringHelper::CreateFromBuffer(
TEXT("NSLOCTEXT(\"[34A0B0C843B02C49E2E4849A50169C89]\", \"36F1933A46E419838AEBC8B82B79A60F\", \"Repair the target object\")")	);
	bpfv__Temp_text_Variable_12__pf = FText::GetEmpty();
	bpfv__Temp_text_Variable_13__pf = FText::GetEmpty();
	if(::IsValid(bpv__SegmentDescriptionText__pf))
	{
		bpv__SegmentDescriptionText__pf->SetText(TSwitchValue<E__E_Mei_BuildingMode__pf , FText >(bpfv__Temp_byte_Variable__pf, bpfv__K2Node_Select_Default__pf, 7, TSwitchPair<E__E_Mei_BuildingMode__pf , FText >(E__E_Mei_BuildingMode__pf::NewEnumerator0, bpfv__Temp_text_Variable_13__pf), TSwitchPair<E__E_Mei_BuildingMode__pf , FText >(E__E_Mei_BuildingMode__pf::NewEnumerator1, bpfv__Temp_text_Variable_12__pf), TSwitchPair<E__E_Mei_BuildingMode__pf , FText >(E__E_Mei_BuildingMode__pf::NewEnumerator2, bpfv__Temp_text_Variable_11__pf), TSwitchPair<E__E_Mei_BuildingMode__pf , FText >(E__E_Mei_BuildingMode__pf::NewEnumerator3, bpfv__Temp_text_Variable_10__pf), TSwitchPair<E__E_Mei_BuildingMode__pf , FText >(E__E_Mei_BuildingMode__pf::NewEnumerator4, bpfv__Temp_text_Variable_9__pf), TSwitchPair<E__E_Mei_BuildingMode__pf , FText >(E__E_Mei_BuildingMode__pf::NewEnumerator5, bpfv__Temp_text_Variable_8__pf), TSwitchPair<E__E_Mei_BuildingMode__pf , FText >(E__E_Mei_BuildingMode__pf::NewEnumerator6, bpfv__Temp_text_Variable_7__pf)));
	}
	bpf__UpdateSegmentRequirements__pf(bpp__BuildingMode__pf, /*out*/ bpfv__CallFunc_UpdateSegmentRequirements_Success__pf);
	bpp__Success__pf = true;
}
void UUI_Mei_MalletMenu_C__pf4215541020::bpf__UpdateSegmentRequirements__pf(E__E_Mei_BuildingMode__pf bpp__BuildingMode__pf, /*out*/ bool& bpp__Success__pf)
{
	FDataTableRowHandle bpfv__LocalRequirementsHandle__pf{};
	bool bpfv__CallFunc_EqualEqual_ByteByte_ReturnValue__pf{};
	bool bpfv__CallFunc_EqualEqual_ByteByte_ReturnValue_1__pf{};
	int32 bpfv__Temp_int_Array_Index_Variable__pf{};
	UUI_Mei_ResourceValue_C__pf4215541020* bpfv__CallFunc_Create_ReturnValue__pf{};
	UWrapBoxSlot* bpfv__CallFunc_AddChildToWrapBox_ReturnValue__pf{};
	bool bpfv__CallFunc_IsValidHandle_IsValid__pf{};
	FSTR_Mei_Requirements__pf4030501756 bpfv__CallFunc_GetDataTableRowFromName_OutRow__pf{};
	bool bpfv__CallFunc_GetDataTableRowFromName_ReturnValue__pf{};
	int32 bpfv__Temp_int_Loop_Counter_Variable__pf{};
	FSTR_Mei_Resource__pf4030501756 bpfv__CallFunc_Array_Get_Item__pf{};
	int32 bpfv__CallFunc_Add_IntInt_ReturnValue__pf{};
	int32 bpfv__CallFunc_Array_Length_ReturnValue__pf{};
	bool bpfv__CallFunc_Less_IntInt_ReturnValue__pf{};
	bool bpfv__CallFunc_IsValid_ReturnValue__pf{};
	bool bpfv__CallFunc_IsValidHandle_IsValid_1__pf{};
	TArray< int32, TInlineAllocator<8> > __StateStack;

	int32 __CurrentState = 1;
	do
	{
		switch( __CurrentState )
		{
		case 1:
			{
				const UScriptStruct* __Local__37 = FDataTableRowHandle::StaticStruct();
				uint8* __Local__38 = (uint8*)FMemory_Alloca(__Local__37->GetStructureSize());
				__Local__37->InitializeStruct(__Local__38);
				FDataTableRowHandle& __Local__36 = *reinterpret_cast<FDataTableRowHandle*>(__Local__38);
				bpfv__LocalRequirementsHandle__pf = __Local__36;
			}
		case 2:
			{
				bpfv__CallFunc_IsValid_ReturnValue__pf = UKismetSystemLibrary::IsValid(bpv__BuildingObjectReference__pf);
				if (!bpfv__CallFunc_IsValid_ReturnValue__pf)
				{
					__CurrentState = 18;
					break;
				}
			}
		case 3:
			{
				bpfv__CallFunc_EqualEqual_ByteByte_ReturnValue_1__pf = UKismetMathLibrary::EqualEqual_ByteByte(static_cast<uint8>(bpp__BuildingMode__pf), static_cast<uint8>(E__E_Mei_BuildingMode__pf::NewEnumerator2));
				if (!bpfv__CallFunc_EqualEqual_ByteByte_ReturnValue_1__pf)
				{
					__CurrentState = 19;
					break;
				}
			}
		case 4:
			{
				auto __Local__40 = FDataTableRowHandle{};
				FDataTableRowHandle  __Local__39 = __Local__40;
				bpfv__LocalRequirementsHandle__pf = ((::IsValid(bpv__BuildingObjectReference__pf)) ? (bpv__BuildingObjectReference__pf->bpv__BuildingObjectSettings__pf.bpv__RepairRequirements_47_D9B527B3455199214DFE7296184F5155__pf) : (__Local__39));
			}
		case 5:
			{
				UBP_Mei_Library_C__pf3770675254::bpf__IsValidHandle__pf(bpfv__LocalRequirementsHandle__pf, this, /*out*/ bpfv__CallFunc_IsValidHandle_IsValid__pf);
				if (!bpfv__CallFunc_IsValidHandle_IsValid__pf)
				{
					__CurrentState = 18;
					break;
				}
			}
		case 6:
			{
				if(::IsValid(bpv__RequirementsPartsBox__pf))
				{
					bpv__RequirementsPartsBox__pf->ClearChildren();
				}
			}
		case 7:
			{
				bpfv__CallFunc_GetDataTableRowFromName_ReturnValue__pf = FCustomThunkTemplates::GetDataTableRowFromName(const_cast<UDataTable*>(bpfv__LocalRequirementsHandle__pf.DataTable), bpfv__LocalRequirementsHandle__pf.RowName, /*out*/ bpfv__CallFunc_GetDataTableRowFromName_OutRow__pf);
			}
		case 8:
			{
				if (!bpfv__CallFunc_GetDataTableRowFromName_ReturnValue__pf)
				{
					__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
					break;
				}
			}
		case 9:
			{
				bpfv__Temp_int_Loop_Counter_Variable__pf = 0;
			}
		case 10:
			{
				bpfv__Temp_int_Array_Index_Variable__pf = 0;
			}
		case 11:
			{
				bpfv__CallFunc_Array_Length_ReturnValue__pf = FCustomThunkTemplates::Array_Length(bpfv__CallFunc_GetDataTableRowFromName_OutRow__pf.bpv__Resources_16_3A0355734D3515248A58DE8C48E19955__pf);
				bpfv__CallFunc_Less_IntInt_ReturnValue__pf = UKismetMathLibrary::Less_IntInt(bpfv__Temp_int_Loop_Counter_Variable__pf, bpfv__CallFunc_Array_Length_ReturnValue__pf);
				if (!bpfv__CallFunc_Less_IntInt_ReturnValue__pf)
				{
					__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
					break;
				}
			}
		case 12:
			{
				bpfv__Temp_int_Array_Index_Variable__pf = bpfv__Temp_int_Loop_Counter_Variable__pf;
			}
		case 13:
			{
				__StateStack.Push(22);
			}
		case 14:
			{
				bpfv__CallFunc_Create_ReturnValue__pf = CastChecked<UUI_Mei_ResourceValue_C__pf4215541020>(UWidgetBlueprintLibrary::Create(this, UUI_Mei_ResourceValue_C__pf4215541020::StaticClass(), ((APlayerController*)nullptr)), ECastCheckedType::NullAllowed);
			}
		case 15:
			{
				FCustomThunkTemplates::SetStructurePropertyByName(bpfv__CallFunc_Create_ReturnValue__pf, FName(TEXT("Font")), bpv__ResourcesFont__pf);
			}
		case 16:
			{
				FCustomThunkTemplates::Array_Get(bpfv__CallFunc_GetDataTableRowFromName_OutRow__pf.bpv__Resources_16_3A0355734D3515248A58DE8C48E19955__pf, bpfv__Temp_int_Array_Index_Variable__pf, /*out*/ bpfv__CallFunc_Array_Get_Item__pf);
				FCustomThunkTemplates::SetStructurePropertyByName(bpfv__CallFunc_Create_ReturnValue__pf, FName(TEXT("Resource")), bpfv__CallFunc_Array_Get_Item__pf);
			}
		case 17:
			{
				if(::IsValid(bpv__RequirementsPartsBox__pf))
				{
					bpfv__CallFunc_AddChildToWrapBox_ReturnValue__pf = bpv__RequirementsPartsBox__pf->UWrapBox::AddChildToWrapBox(bpfv__CallFunc_Create_ReturnValue__pf);
				}
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 18:
			{
				if(::IsValid(bpv__RequirementsBox__pf))
				{
					bpv__RequirementsBox__pf->SetVisibility(ESlateVisibility::Collapsed);
				}
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 19:
			{
				bpfv__CallFunc_EqualEqual_ByteByte_ReturnValue__pf = UKismetMathLibrary::EqualEqual_ByteByte(static_cast<uint8>(bpp__BuildingMode__pf), static_cast<uint8>(E__E_Mei_BuildingMode__pf::NewEnumerator3));
				if (!bpfv__CallFunc_EqualEqual_ByteByte_ReturnValue__pf)
				{
					__CurrentState = 18;
					break;
				}
			}
		case 20:
			{
				auto __Local__42 = FDataTableRowHandle{};
				FDataTableRowHandle  __Local__41 = __Local__42;
				bpfv__LocalRequirementsHandle__pf = ((::IsValid(bpv__BuildingObjectReference__pf)) ? (bpv__BuildingObjectReference__pf->bpv__BuildingObjectSettings__pf.bpv__UpgradeRequirements_46_C46FECF742E0A90A0A51F1922055E18E__pf) : (__Local__41));
			}
		case 21:
			{
				auto __Local__44 = FDataTableRowHandle{};
				FDataTableRowHandle  __Local__43 = __Local__44;
				UBP_Mei_Library_C__pf3770675254::bpf__IsValidHandle__pf(((::IsValid(bpv__BuildingObjectReference__pf)) ? (bpv__BuildingObjectReference__pf->bpv__BuildingObjectSettings__pf.bpv__UpgradeObject_39_22B9ACB343873184F429F3B583C711A7__pf) : (__Local__43)), this, /*out*/ bpfv__CallFunc_IsValidHandle_IsValid_1__pf);
				if (!bpfv__CallFunc_IsValidHandle_IsValid_1__pf)
				{
					__CurrentState = 18;
					break;
				}
				__CurrentState = 5;
				break;
			}
		case 22:
			{
				bpfv__CallFunc_Add_IntInt_ReturnValue__pf = UKismetMathLibrary::Add_IntInt(bpfv__Temp_int_Loop_Counter_Variable__pf, 1);
				bpfv__Temp_int_Loop_Counter_Variable__pf = bpfv__CallFunc_Add_IntInt_ReturnValue__pf;
				__CurrentState = 11;
				break;
			}
		default:
			check(false); // Invalid state
			break;
		}
	} while( __CurrentState != -1 );
}
void UUI_Mei_MalletMenu_C__pf4215541020::bpf__CheckSegmentsConditions__pf(/*out*/ bool& bpp__Success__pf)
{
	APlayerController* bpfv__CallFunc_GetOwningPlayer_ReturnValue__pf{};
	bool bpfv__CallFunc_CheckClaim_Result__pf{};
	bool bpfv__CallFunc_IsValid_ReturnValue__pf{};
	bool bpfv__CallFunc_CheckRotate_Success__pf{};
	bool bpfv__CallFunc_CheckRepair_Result__pf{};
	bool bpfv__CallFunc_CheckUpgrade_Success__pf{};
	TArray< int32, TInlineAllocator<8> > __StateStack;

	int32 __CurrentState = 1;
	do
	{
		switch( __CurrentState )
		{
		case 1:
			{
				bpfv__CallFunc_IsValid_ReturnValue__pf = UKismetSystemLibrary::IsValid(bpv__BuildingObjectReference__pf);
				if (!bpfv__CallFunc_IsValid_ReturnValue__pf)
				{
					__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
					break;
				}
			}
		case 2:
			{
				__StateStack.Push(11);
				__StateStack.Push(9);
				__StateStack.Push(7);
				__StateStack.Push(5);
			}
		case 3:
			{
				bpfv__CallFunc_GetOwningPlayer_ReturnValue__pf = GetOwningPlayer();
				if(::IsValid(bpv__BuildingObjectReference__pf))
				{
					bpv__BuildingObjectReference__pf->bpf__CheckRotate__pf(bpfv__CallFunc_GetOwningPlayer_ReturnValue__pf, /*out*/ bpfv__CallFunc_CheckRotate_Success__pf);
				}
			}
		case 4:
			{
				SetIsEnabled(bpfv__CallFunc_CheckRotate_Success__pf);
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 5:
			{
				bpfv__CallFunc_GetOwningPlayer_ReturnValue__pf = GetOwningPlayer();
				if(::IsValid(bpv__BuildingObjectReference__pf))
				{
					bpv__BuildingObjectReference__pf->bpf__CheckRepair__pf(bpfv__CallFunc_GetOwningPlayer_ReturnValue__pf, /*out*/ bpfv__CallFunc_CheckRepair_Result__pf);
				}
			}
		case 6:
			{
				SetIsEnabled(bpfv__CallFunc_CheckRepair_Result__pf);
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 7:
			{
				bpfv__CallFunc_GetOwningPlayer_ReturnValue__pf = GetOwningPlayer();
				if(::IsValid(bpv__BuildingObjectReference__pf))
				{
					bpv__BuildingObjectReference__pf->bpf__CheckUpgrade__pf(bpfv__CallFunc_GetOwningPlayer_ReturnValue__pf, /*out*/ bpfv__CallFunc_CheckUpgrade_Success__pf);
				}
			}
		case 8:
			{
				SetIsEnabled(bpfv__CallFunc_CheckUpgrade_Success__pf);
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 9:
			{
				bpfv__CallFunc_GetOwningPlayer_ReturnValue__pf = GetOwningPlayer();
				if(::IsValid(bpv__BuildingObjectReference__pf))
				{
					bpv__BuildingObjectReference__pf->bpf__CheckClaim__pf(bpfv__CallFunc_GetOwningPlayer_ReturnValue__pf, /*out*/ bpfv__CallFunc_CheckClaim_Result__pf);
				}
			}
		case 10:
			{
				SetIsEnabled(bpfv__CallFunc_CheckClaim_Result__pf);
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 11:
			{
				bpp__Success__pf = true;
				__CurrentState = -1;
				break;
			}
		default:
			check(false); // Invalid state
			break;
		}
	} while( __CurrentState != -1 );
}
PRAGMA_DISABLE_OPTIMIZATION
void UUI_Mei_MalletMenu_C__pf4215541020::__StaticDependencies_DirectlyUsedAssets(TArray<FBlueprintDependencyData>& AssetsToLoad)
{
	const FCompactBlueprintDependencyData LocCompactBlueprintDependencyData[] =
	{
		{62, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Font /Engine/EngineFonts/Roboto.Roboto 
	};
	for(const FCompactBlueprintDependencyData& CompactData : LocCompactBlueprintDependencyData)
	{
		AssetsToLoad.Add(FBlueprintDependencyData(F__NativeDependencies::Get(CompactData.ObjectRefIndex), CompactData));
	}
}
PRAGMA_ENABLE_OPTIMIZATION
PRAGMA_DISABLE_OPTIMIZATION
void UUI_Mei_MalletMenu_C__pf4215541020::__StaticDependenciesAssets(TArray<FBlueprintDependencyData>& AssetsToLoad)
{
	__StaticDependencies_DirectlyUsedAssets(AssetsToLoad);
	const FCompactBlueprintDependencyData LocCompactBlueprintDependencyData[] =
	{
		{66, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  ScriptStruct /Script/SlateCore.Geometry 
		{27, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.KismetArrayLibrary 
		{14, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.KismetMathLibrary 
		{39, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/UMG.UserWidget 
		{23, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.PlayerController 
		{17, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.KismetSystemLibrary 
		{1, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  ScriptStruct /Script/Engine.DataTableRowHandle 
		{83, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/UMG.WrapBoxSlot 
		{3, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.Texture2D 
		{4, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.StaticMesh 
		{78, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/UMG.WrapBox 
		{22, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.DataTableFunctionLibrary 
		{21, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.DataTable 
		{46, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/UMG.WidgetBlueprintLibrary 
		{74, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  ScriptStruct /Script/SlateCore.SlateFontInfo 
		{60, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/UMG.VerticalBox 
		{63, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/UMG.TextBlock 
		{67, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/UMG.WidgetLayoutLibrary 
		{34, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  ScriptStruct /Script/Engine.PointerToUberGraphFrame 
		{77, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/UMG.Button 
		{82, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/UMG.CanvasPanel 
		{5, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.SceneComponent 
		{6, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.StaticMeshComponent 
		{7, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  StaticMesh /Game/Mei/Mesh/BuildingSystem/Structures/Dummy/SM_Dummy_Foundation.SM_Dummy_Foundation 
		{8, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  MaterialInstanceConstant /Game/Mei/Material/BuildingSystem/Instances/Dummy/MI_Dummy_Structures_Base.MI_Dummy_Structures_Base 
		{9, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.Actor 
		{10, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  ScriptStruct /Script/Engine.HitResult 
		{11, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.DamageType 
		{12, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.Controller 
		{13, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.MaterialInstanceDynamic 
		{15, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.NetPushModelHelpers 
		{16, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.TimelineComponent 
		{18, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.GameplayStatics 
		{19, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.SoundBase 
		{20, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.SaveGame 
		{24, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.BlueprintMapLibrary 
		{25, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.PrimitiveComponent 
		{26, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.KismetStringLibrary 
		{28, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.ActorComponent 
		{29, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Enum /Script/Engine.ECollisionResponse 
		{30, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Enum /Script/Engine.EObjectTypeQuery 
		{31, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/PhysicsCore.PhysicalMaterial 
		{32, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.KismetNodeHelperLibrary 
		{33, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Enum /Script/Engine.ECollisionChannel 
		{35, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Enum /Script/Engine.ETimelineDirection 
		{36, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.BlueprintFunctionLibrary 
		{37, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.PlayerState 
		{38, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Landscape.Landscape 
		{40, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  ScriptStruct /Script/Engine.FormatArgumentData 
		{41, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Enum /Script/Engine.EFormatArgumentType 
		{42, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Enum /Script/Engine.ETextGender 
		{43, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.KismetTextLibrary 
		{44, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  DelegateFunction /Script/Engine.TimerDynamicDelegate__DelegateSignature 
		{45, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  ScriptStruct /Script/Engine.TimerHandle 
		{47, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.PlayerCameraManager 
		{48, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.MaterialInterface 
		{49, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.MeshComponent 
		{50, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Niagara.NiagaraComponent 
		{51, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Niagara.NiagaraFunctionLibrary 
		{52, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  NiagaraSystem /Game/Mei/VFX/BuildingSystem/Dummy/Dummy.Dummy 
		{53, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Enum /Script/Engine.EDrawDebugTrace 
		{54, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.Pawn 
		{55, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.HUD 
		{56, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.Character 
		{57, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  MaterialInstanceConstant /Game/Mei/Material/BuildingSystem/Instances/Dummy/MI_Can_Build.MI_Can_Build 
		{58, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  MaterialInstanceConstant /Game/Mei/Material/BuildingSystem/Instances/Dummy/MI_CanNot_Build.MI_CanNot_Build 
		{59, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/UMG.Image 
		{61, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  DataTable /Game/Mei/BP/BuildingSystem/DataTables/DT_Mei_BuildingObjects.DT_Mei_BuildingObjects 
		{64, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Enum /Script/UMG.ESlateVisibility 
		{65, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/UMG.Border 
		{68, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/UMG.Widget 
		{69, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/UMG.UMGSequencePlayer 
		{70, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/UMG.WidgetAnimation 
		{71, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  ScriptStruct /Script/InputCore.Key 
		{72, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/UMG.ProgressBar 
		{73, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.AnimMontage 
		{75, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  ScriptStruct /Script/SlateCore.SlateColor 
		{76, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Enum /Script/SlateCore.ESlateColorStylingMode 
		{79, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/UMG.Overlay 
		{80, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  ScriptStruct /Script/Slate.Anchors 
		{81, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/UMG.CanvasPanelSlot 
		{84, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.BoxComponent 
		{85, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/NavigationSystem.NavArea_Obstacle 
		{86, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/ApexDestruction.DestructibleComponent 
		{87, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/ApexDestruction.DestructibleActor 
		{88, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/ApexDestruction.DestructibleMesh 
		{317, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  WidgetBlueprintGeneratedClass /Game/Mei/UI/BuildingSystem/UI_Mei_MenuSegment.UI_Mei_MenuSegment_C 
		{89, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  BlueprintGeneratedClass /Game/Mei/BP/BuildingSystem/BuildingObject/Base/BP_Mei_Building_BaseObject.BP_Mei_Building_BaseObject_C 
		{318, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  WidgetBlueprintGeneratedClass /Game/Mei/UI/BuildingSystem/UI_Mei_ResourceValue.UI_Mei_ResourceValue_C 
		{302, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  BlueprintGeneratedClass /Game/Mei/BP/BuildingSystem/Game/BP_Mei_Library.BP_Mei_Library_C 
		{303, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  BlueprintGeneratedClass /Game/Mei/BP/Interfaces/BuildingSystem/BPI_Mei_Player.BPI_Mei_Player_C 
		{319, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  UserDefinedStruct /Game/Mei/BP/BuildingSystem/Structures/STR_Mei_Requirements.STR_Mei_Requirements 
		{2, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  UserDefinedStruct /Game/Mei/BP/BuildingSystem/Structures/STR_Mei_Resource.STR_Mei_Resource 
		{306, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  UserDefinedStruct /Game/Mei/BP/BuildingSystem/Structures/STR_Mei_BuildingObjectSettings.STR_Mei_BuildingObjectSettings 
		{307, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  UserDefinedEnum /Game/Mei/BP/BuildingSystem/Enumerations/E_Mei_BuildingMode.E_Mei_BuildingMode 
		{0, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  UserDefinedEnum /Game/Mei/BP/BuildingSystem/Enumerations/E_Mei_ResourceType.E_Mei_ResourceType 
	};
	for(const FCompactBlueprintDependencyData& CompactData : LocCompactBlueprintDependencyData)
	{
		AssetsToLoad.Add(FBlueprintDependencyData(F__NativeDependencies::Get(CompactData.ObjectRefIndex), CompactData));
	}
}
PRAGMA_ENABLE_OPTIMIZATION
struct FRegisterHelper__UUI_Mei_MalletMenu_C__pf4215541020
{
	FRegisterHelper__UUI_Mei_MalletMenu_C__pf4215541020()
	{
		FConvertedBlueprintsDependencies::Get().RegisterConvertedClass(TEXT("/Game/Mei/UI/BuildingSystem/UI_Mei_MalletMenu"), &UUI_Mei_MalletMenu_C__pf4215541020::__StaticDependenciesAssets);
	}
	static FRegisterHelper__UUI_Mei_MalletMenu_C__pf4215541020 Instance;
};
FRegisterHelper__UUI_Mei_MalletMenu_C__pf4215541020 FRegisterHelper__UUI_Mei_MalletMenu_C__pf4215541020::Instance;
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
