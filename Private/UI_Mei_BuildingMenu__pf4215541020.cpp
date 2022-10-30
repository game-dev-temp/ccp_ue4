#include "NativizedAssets.h"
#include "UI_Mei_BuildingMenu__pf4215541020.h"
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
#include "Runtime/Engine/Classes/Kismet/DataTableFunctionLibrary.h"
#include "Runtime/UMG/Public/Components/TextWidgetTypes.h"
#include "Runtime/Slate/Public/Framework/Text/TextLayout.h"
#include "Runtime/SlateCore/Public/Fonts/FontCache.h"
#include "UI_Mei_BuildingMenuSegment__pf4215541020.h"
#include "Runtime/Engine/Classes/Engine/Texture2DDynamic.h"
#include "Runtime/Engine/Public/Slate/SlateTextureAtlasInterface.h"
#include "Runtime/Engine/Classes/Slate/SlateBrushAsset.h"
#include "Runtime/Engine/Classes/Kismet/GameplayStatics.h"
#include "Runtime/Engine/Classes/Components/AudioComponent.h"
#include "Runtime/AudioMixer/Public/Quartz/AudioMixerClockHandle.h"
#include "Runtime/Engine/Classes/Sound/QuartzQuantizationUtilities.h"
#include "Runtime/Engine/Classes/GameFramework/ForceFeedbackAttenuation.h"
#include "Runtime/Engine/Classes/Components/ForceFeedbackComponent.h"
#include "Runtime/Engine/Classes/Sound/DialogueWave.h"
#include "Runtime/Engine/Classes/Sound/DialogueTypes.h"
#include "Runtime/Engine/Classes/Sound/DialogueVoice.h"
#include "Runtime/Engine/Classes/Sound/DialogueSoundWaveProxy.h"
#include "Runtime/Engine/Classes/Components/DecalComponent.h"
#include "Runtime/Engine/Classes/GameFramework/SaveGame.h"
#include "Runtime/Engine/Classes/Kismet/GameplayStaticsTypes.h"
#include "Runtime/UMG/Public/Components/Overlay.h"
#include "Runtime/UMG/Public/Components/OverlaySlot.h"
#include "Runtime/UMG/Public/Blueprint/WidgetBlueprintLibrary.h"
#include "Runtime/Engine/Public/Slate/SGameLayerManager.h"
#include "Runtime/SlateCore/Public/Rendering/RenderingCommon.h"
#include "Runtime/UMG/Public/Blueprint/WidgetLayoutLibrary.h"
#include "Runtime/UMG/Public/Components/WrapBoxSlot.h"
#include "Runtime/UMG/Public/Components/WidgetSwitcherSlot.h"
#include "Runtime/UMG/Public/Components/UniformGridSlot.h"
#include "Runtime/UMG/Public/Components/ScrollBoxSlot.h"
#include "Runtime/UMG/Public/Components/ScaleBoxSlot.h"
#include "Runtime/UMG/Public/Components/SafeZoneSlot.h"
#include "Runtime/UMG/Public/Components/HorizontalBoxSlot.h"
#include "Runtime/UMG/Public/Components/GridSlot.h"
#include "Runtime/UMG/Public/Components/BorderSlot.h"
#include "STR_Mei_BuildingObjectSettings__pf4030501756.h"
#include "UI_Mei_ResourceValue__pf4215541020.h"
#include "STR_Mei_Requirements__pf4030501756.h"
#include "STR_Mei_Resource__pf4030501756.h"
#include "BP_Mei_Library__pf3770675254.h"
#include "STR_Mei_BuildingList__pf4030501756.h"
#include "Runtime/UMG/Public/Components/ContentWidget.h"
#include "Runtime/SlateCore/Public/Styling/SlateWidgetStyle.h"
#include "Runtime/SlateCore/Public/Sound/SlateSound.h"
#include "Runtime/SlateCore/Public/Styling/SlateWidgetStyleAsset.h"
#include "Runtime/SlateCore/Public/Styling/SlateWidgetStyleContainerBase.h"
#include "Runtime/SlateCore/Public/Styling/SlateWidgetStyleContainerInterface.h"
#include "BP_Mei_Building_BaseObject__pf2826203124.h"


#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
PRAGMA_DISABLE_OPTIMIZATION
UUI_Mei_BuildingMenu_C__pf4215541020::UUI_Mei_BuildingMenu_C__pf4215541020(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer)
{
	
	bpv__BtnClick__pf = nullptr;
	bpv__RequirementsBox__pf = nullptr;
	bpv__RequirementsPartsBox__pf = nullptr;
	bpv__SegmentDescriptionText__pf = nullptr;
	bpv__SegmentsCanvasPanel__pf = nullptr;
	bpv__SegmentTitleText__pf = nullptr;
	bpv__SelectedSegmentInfoBox__pf = nullptr;
	bpv__DefaultBuildingDataTable__pf = CastChecked<UDataTable>(CastChecked<UDynamicClass>(UUI_Mei_BuildingMenu_C__pf4215541020::StaticClass())->UsedAssets[0], ECastCheckedType::NullAllowed);
	bpv__MaxSegmentCount__pf = 6;
	bpv__CurrentPage__pf = 1;
	bpv__Pages__pf = 0;
	bpv__CurrentBuildingList__pf.RowName = FName(TEXT("Dummy"));
	bpv__CurrentBuildingDataTable__pf = nullptr;
	bpv__BuildingObjects__pf = TArray<FDataTableRowHandle> ();
	bpv__MenuSegments__pf = TArray<UUI_Mei_MenuSegment_C__pf4215541020*> ();
	bpv__Rotation__pf = 0.000000f;
	bpv__Distance__pf = 0.000000f;
	bpv__NextPageSegment__pf = nullptr;
	bpv__PrevPageSegment__pf = nullptr;
	bpv__ResourcesFont__pf.FontObject = CastChecked<UObject>(CastChecked<UDynamicClass>(UUI_Mei_BuildingMenu_C__pf4215541020::StaticClass())->UsedAssets[1], ECastCheckedType::NullAllowed);
	bpv__ResourcesFont__pf.OutlineSettings.bApplyOutlineToDropShadows = true;
	bpv__ResourcesFont__pf.TypefaceFontName = FName(TEXT("Bold"));
	bpv__ResourcesFont__pf.Size = 18;
	bpv__PrevPageIcon__pf = nullptr;
	bpv__NextPageIcon__pf = nullptr;
	bpv__PageIconsColor__pf = FLinearColor(0.255208, 0.255208, 0.255208, 1.000000);
	bHasScriptImplementedPaint = false;
}
PRAGMA_ENABLE_OPTIMIZATION
void UUI_Mei_BuildingMenu_C__pf4215541020::PostLoadSubobjects(FObjectInstancingGraph* OuterInstanceGraph)
{
	Super::PostLoadSubobjects(OuterInstanceGraph);
}
PRAGMA_DISABLE_OPTIMIZATION
void UUI_Mei_BuildingMenu_C__pf4215541020::__CustomDynamicClassInitialization(UDynamicClass* InDynamicClass)
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
	InDynamicClass->ReferencedConvertedFields.Add(LoadObject<UEnum>(nullptr, TEXT("/Game/Mei/BP/BuildingSystem/Enumerations/E_Mei_ResourceType.E_Mei_ResourceType")));
	// List of all referenced converted classes
	InDynamicClass->ReferencedConvertedFields.Add(UUI_Mei_MenuSegment_C__pf4215541020::StaticClass());
	InDynamicClass->ReferencedConvertedFields.Add(UUI_Mei_BuildingMenuSegment_C__pf4215541020::StaticClass());
	InDynamicClass->ReferencedConvertedFields.Add(ABP_Mei_Building_BaseObject_C__pf2826203124::StaticClass());
	InDynamicClass->ReferencedConvertedFields.Add(UUI_Mei_ResourceValue_C__pf4215541020::StaticClass());
	InDynamicClass->ReferencedConvertedFields.Add(UBP_Mei_Library_C__pf3770675254::StaticClass());
	// List of all referenced converted structures
	extern UScriptStruct* Z_Construct_UScriptStruct_FSTR_Mei_BuildingObjectSettings__pf4030501756();
	InDynamicClass->ReferencedConvertedFields.Add(Z_Construct_UScriptStruct_FSTR_Mei_BuildingObjectSettings__pf4030501756());
	extern UScriptStruct* Z_Construct_UScriptStruct_FSTR_Mei_Requirements__pf4030501756();
	InDynamicClass->ReferencedConvertedFields.Add(Z_Construct_UScriptStruct_FSTR_Mei_Requirements__pf4030501756());
	extern UScriptStruct* Z_Construct_UScriptStruct_FSTR_Mei_Resource__pf4030501756();
	InDynamicClass->ReferencedConvertedFields.Add(Z_Construct_UScriptStruct_FSTR_Mei_Resource__pf4030501756());
	extern UScriptStruct* Z_Construct_UScriptStruct_FSTR_Mei_BuildingList__pf4030501756();
	InDynamicClass->ReferencedConvertedFields.Add(Z_Construct_UScriptStruct_FSTR_Mei_BuildingList__pf4030501756());
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
TEXT("NSLOCTEXT(\"[9BD0CCE04953FF97A773A988F9B880C2]\", \"39265D104693345AF01EB0AFD984BB10\", \"Name\")")	);
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
TEXT("NSLOCTEXT(\"[9BD0CCE04953FF97A773A988F9B880C2]\", \"E872A23B4EBD86221CF8A6AA72868D26\", \"Description\")")	);
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
TEXT("NSLOCTEXT(\"[9BD0CCE04953FF97A773A988F9B880C2]\", \"8E88FC6E44854C889B209E8CC39D4988\", \"Requirements:\")")	);
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
void UUI_Mei_BuildingMenu_C__pf4215541020::GetSlotNames(TArray<FName>& SlotNames) const
{
	TArray<FName>  __Local__33;
	SlotNames.Append(__Local__33);
}
void UUI_Mei_BuildingMenu_C__pf4215541020::InitializeNativeClassData()
{
	TArray<UWidgetAnimation*>  __Local__34;
	TArray<FDelegateRuntimeBinding>  __Local__35;
	UWidgetBlueprintGeneratedClass::InitializeWidgetStatic(this, GetClass(), CastChecked<UWidgetTree>(CastChecked<UDynamicClass>(UUI_Mei_BuildingMenu_C__pf4215541020::StaticClass())->MiscConvertedSubobjects[0]), __Local__34, __Local__35);
}
void UUI_Mei_BuildingMenu_C__pf4215541020::PreSave(const class ITargetPlatform* TargetPlatform)
{
	Super::PreSave(TargetPlatform);
	TArray<FName> LocalNamedSlots;
	GetSlotNames(LocalNamedSlots);
	RemoveObsoleteBindings(LocalNamedSlots);
}
void UUI_Mei_BuildingMenu_C__pf4215541020::bpf__ExecuteUbergraph_UI_Mei_BuildingMenu__pf_0(int32 bpp__EntryPoint__pf)
{
	int32 bpfv__CallFunc_Add_IntInt_ReturnValue__pf{};
	int32 bpfv__CallFunc_Array_Length_ReturnValue_1__pf{};
	bool bpfv__CallFunc_Less_IntInt_ReturnValue_1__pf{};
	TArray< int32, TInlineAllocator<8> > __StateStack;

	int32 __CurrentState = bpp__EntryPoint__pf;
	do
	{
		switch( __CurrentState )
		{
		case 8:
			{
				__StateStack.Push(10);
			}
		case 9:
			{
				FCustomThunkTemplates::Array_Get(bpv__MenuSegments__pf, b0l__Temp_int_Array_Index_Variable_1__pf, /*out*/ b0l__CallFunc_Array_Get_Item_1__pf);
				if(::IsValid(b0l__CallFunc_Array_Get_Item_1__pf))
				{
					b0l__CallFunc_Array_Get_Item_1__pf->bpf__TryClick__pf();
				}
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 10:
			{
				bpfv__CallFunc_Add_IntInt_ReturnValue__pf = UKismetMathLibrary::Add_IntInt(b0l__Temp_int_Loop_Counter_Variable__pf, 1);
				b0l__Temp_int_Loop_Counter_Variable__pf = bpfv__CallFunc_Add_IntInt_ReturnValue__pf;
			}
		case 11:
			{
				bpfv__CallFunc_Array_Length_ReturnValue_1__pf = FCustomThunkTemplates::Array_Length(bpv__MenuSegments__pf);
				bpfv__CallFunc_Less_IntInt_ReturnValue_1__pf = UKismetMathLibrary::Less_IntInt(b0l__Temp_int_Loop_Counter_Variable__pf, bpfv__CallFunc_Array_Length_ReturnValue_1__pf);
				if (!bpfv__CallFunc_Less_IntInt_ReturnValue_1__pf)
				{
					__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
					break;
				}
			}
		case 12:
			{
				b0l__Temp_int_Array_Index_Variable_1__pf = b0l__Temp_int_Loop_Counter_Variable__pf;
				__CurrentState = 8;
				break;
			}
		case 13:
			{
				b0l__Temp_int_Loop_Counter_Variable__pf = 0;
			}
		case 14:
			{
				b0l__Temp_int_Array_Index_Variable_1__pf = 0;
				__CurrentState = 11;
				break;
			}
		case 21:
			{
				__CurrentState = 13;
				break;
			}
		default:
			check(false); // Invalid state
			break;
		}
	} while( __CurrentState != -1 );
}
void UUI_Mei_BuildingMenu_C__pf4215541020::bpf__ExecuteUbergraph_UI_Mei_BuildingMenu__pf_1(int32 bpp__EntryPoint__pf)
{
	int32 bpfv__CallFunc_Array_Length_ReturnValue__pf{};
	bool bpfv__CallFunc_Less_IntInt_ReturnValue__pf{};
	int32 bpfv__CallFunc_Add_IntInt_ReturnValue_1__pf{};
	TArray< int32, TInlineAllocator<8> > __StateStack;

	int32 __CurrentState = bpp__EntryPoint__pf;
	do
	{
		switch( __CurrentState )
		{
		case 2:
			{
				__StateStack.Push(4);
			}
		case 3:
			{
				FCustomThunkTemplates::Array_Get(bpv__MenuSegments__pf, b0l__Temp_int_Array_Index_Variable__pf, /*out*/ b0l__CallFunc_Array_Get_Item__pf);
				if(::IsValid(b0l__CallFunc_Array_Get_Item__pf))
				{
					b0l__CallFunc_Array_Get_Item__pf->bpf__CheckSelection__pf(bpv__Rotation__pf, /*out*/ b0l__CallFunc_CheckSelection_Success__pf);
				}
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 4:
			{
				bpfv__CallFunc_Add_IntInt_ReturnValue_1__pf = UKismetMathLibrary::Add_IntInt(b0l__Temp_int_Loop_Counter_Variable_1__pf, 1);
				b0l__Temp_int_Loop_Counter_Variable_1__pf = bpfv__CallFunc_Add_IntInt_ReturnValue_1__pf;
			}
		case 5:
			{
				bpfv__CallFunc_Array_Length_ReturnValue__pf = FCustomThunkTemplates::Array_Length(bpv__MenuSegments__pf);
				bpfv__CallFunc_Less_IntInt_ReturnValue__pf = UKismetMathLibrary::Less_IntInt(b0l__Temp_int_Loop_Counter_Variable_1__pf, bpfv__CallFunc_Array_Length_ReturnValue__pf);
				if (!bpfv__CallFunc_Less_IntInt_ReturnValue__pf)
				{
					__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
					break;
				}
			}
		case 6:
			{
				b0l__Temp_int_Array_Index_Variable__pf = b0l__Temp_int_Loop_Counter_Variable_1__pf;
				__CurrentState = 2;
				break;
			}
		case 7:
			{
				b0l__Temp_int_Array_Index_Variable__pf = 0;
				__CurrentState = 5;
				break;
			}
		case 18:
			{
				__CurrentState = 19;
				break;
			}
		case 19:
			{
				bpf__UpdateMouseRotation__pf(/*out*/ b0l__CallFunc_UpdateMouseRotation_Success__pf);
			}
		case 20:
			{
				b0l__Temp_int_Loop_Counter_Variable_1__pf = 0;
				__CurrentState = 7;
				break;
			}
		default:
			check(false); // Invalid state
			break;
		}
	} while( __CurrentState != -1 );
}
void UUI_Mei_BuildingMenu_C__pf4215541020::bpf__ExecuteUbergraph_UI_Mei_BuildingMenu__pf_2(int32 bpp__EntryPoint__pf)
{
	int32 __CurrentState = bpp__EntryPoint__pf;
	do
	{
		switch( __CurrentState )
		{
		case 1:
			{
				bpf__ConstructWidget__pf(/*out*/ b0l__CallFunc_ConstructWidget_Success__pf);
				__CurrentState = -1;
				break;
			}
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
				__CurrentState = 1;
				break;
			}
		case 17:
			{
				__CurrentState = 1;
				break;
			}
		default:
			break;
		}
	} while( __CurrentState != -1 );
}
void UUI_Mei_BuildingMenu_C__pf4215541020::bpf__BndEvt__BtnClick_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature__pf()
{
	bpf__ExecuteUbergraph_UI_Mei_BuildingMenu__pf_0(21);
}
void UUI_Mei_BuildingMenu_C__pf4215541020::bpf__Tick__pf(FGeometry bpp__MyGeometry__pf, float bpp__InDeltaTime__pf)
{
	b0l__K2Node_Event_MyGeometry__pf = bpp__MyGeometry__pf;
	b0l__K2Node_Event_InDeltaTime__pf = bpp__InDeltaTime__pf;
	bpf__ExecuteUbergraph_UI_Mei_BuildingMenu__pf_1(18);
}
void UUI_Mei_BuildingMenu_C__pf4215541020::bpf__Construct__pf()
{
	bpf__ExecuteUbergraph_UI_Mei_BuildingMenu__pf_2(17);
}
void UUI_Mei_BuildingMenu_C__pf4215541020::bpf__PreConstruct__pf(bool bpp__IsDesignTime__pf)
{
	b0l__K2Node_Event_IsDesignTime__pf = bpp__IsDesignTime__pf;
	bpf__ExecuteUbergraph_UI_Mei_BuildingMenu__pf_2(15);
}
void UUI_Mei_BuildingMenu_C__pf4215541020::bpf__UpdateWidget__pf(/*out*/ bool& bpp__Success__pf)
{
	int32 bpfv__CallFunc_Clamp_ReturnValue__pf{};
	bool bpfv__CallFunc_UpdateBuildingDataTable_Success__pf{};
	bool bpfv__CallFunc_IsValidHandle_IsValid__pf{};
	bool bpfv__CallFunc_UpdateBuildingList_Success__pf{};
	int32 __CurrentState = 1;
	do
	{
		switch( __CurrentState )
		{
		case 1:
			{
				bpfv__CallFunc_Clamp_ReturnValue__pf = UKismetMathLibrary::Clamp(bpv__MaxSegmentCount__pf, 3, 16);
				bpv__MaxSegmentCount__pf = bpfv__CallFunc_Clamp_ReturnValue__pf;
			}
		case 2:
			{
				UBP_Mei_Library_C__pf3770675254::bpf__IsValidHandle__pf(bpv__CurrentBuildingList__pf, this, /*out*/ bpfv__CallFunc_IsValidHandle_IsValid__pf);
				if (!bpfv__CallFunc_IsValidHandle_IsValid__pf)
				{
					__CurrentState = 5;
					break;
				}
			}
		case 3:
			{
				bpf__UpdateBuildingList__pf(bpv__CurrentBuildingList__pf, /*out*/ bpfv__CallFunc_UpdateBuildingList_Success__pf);
			}
		case 4:
			{
				bpp__Success__pf = true;
				__CurrentState = -1;
				break;
			}
		case 5:
			{
				bpf__UpdateBuildingDataTable__pf(bpv__CurrentBuildingDataTable__pf, /*out*/ bpfv__CallFunc_UpdateBuildingDataTable_Success__pf);
			}
		case 6:
			{
				bpp__Success__pf = true;
				__CurrentState = -1;
				break;
			}
		default:
			break;
		}
	} while( __CurrentState != -1 );
}
void UUI_Mei_BuildingMenu_C__pf4215541020::bpf__UpdateBuildingList__pf(FDataTableRowHandle bpp__BuildingListHandle__pf, /*out*/ bool& bpp__Success__pf)
{
	TArray<FDataTableRowHandle> bpfv__LocalBuildingObjects__pf{};
	FSTR_Mei_BuildingList__pf4030501756 bpfv__CallFunc_GetDataTableRowFromName_OutRow__pf{};
	bool bpfv__CallFunc_GetDataTableRowFromName_ReturnValue__pf{};
	bool bpfv__CallFunc_IsValid_ReturnValue__pf{};
	bool bpfv__CallFunc_UpdateSegments_Success__pf{};
	int32 bpfv__CallFunc_Clamp_ReturnValue__pf{};
	int32 __CurrentState = 1;
	do
	{
		switch( __CurrentState )
		{
		case 1:
			{
				bpfv__CallFunc_Clamp_ReturnValue__pf = UKismetMathLibrary::Clamp(bpv__MaxSegmentCount__pf, 3, 16);
				bpv__MaxSegmentCount__pf = bpfv__CallFunc_Clamp_ReturnValue__pf;
			}
		case 2:
			{
				bpfv__CallFunc_IsValid_ReturnValue__pf = UKismetSystemLibrary::IsValid(const_cast<UDataTable*>(bpp__BuildingListHandle__pf.DataTable));
				if (!bpfv__CallFunc_IsValid_ReturnValue__pf)
				{
					__CurrentState = -1;
					break;
				}
			}
		case 3:
			{
				bpfv__CallFunc_GetDataTableRowFromName_ReturnValue__pf = FCustomThunkTemplates::GetDataTableRowFromName(const_cast<UDataTable*>(bpp__BuildingListHandle__pf.DataTable), bpp__BuildingListHandle__pf.RowName, /*out*/ bpfv__CallFunc_GetDataTableRowFromName_OutRow__pf);
			}
		case 4:
			{
				if (!bpfv__CallFunc_GetDataTableRowFromName_ReturnValue__pf)
				{
					__CurrentState = -1;
					break;
				}
			}
		case 5:
			{
				bpv__CurrentBuildingList__pf = bpp__BuildingListHandle__pf;
			}
		case 6:
			{
				bpv__BuildingObjects__pf = bpfv__CallFunc_GetDataTableRowFromName_OutRow__pf.bpv__BuildingObjects_11_420FE64347F82421023084A663347331__pf;
			}
		case 7:
			{
				bpf__UpdateSegments__pf(/*out*/ bpfv__CallFunc_UpdateSegments_Success__pf);
			}
		case 8:
			{
				bpp__Success__pf = true;
				__CurrentState = -1;
				break;
			}
		default:
			break;
		}
	} while( __CurrentState != -1 );
}
void UUI_Mei_BuildingMenu_C__pf4215541020::bpf__UpdateSelectedBuildingInfo__pf(FDataTableRowHandle bpp__BuildingObjectHandle__pf, /*out*/ bool& bpp__Success__pf)
{
	FSTR_Mei_BuildingObjectSettings__pf4030501756 bpfv__LocalBuildingSettings__pf{};
	ESlateVisibility bpfv__Temp_byte_Variable__pf{};
	FSTR_Mei_BuildingObjectSettings__pf4030501756 bpfv__CallFunc_GetDataTableRowFromName_OutRow__pf{};
	bool bpfv__CallFunc_GetDataTableRowFromName_ReturnValue__pf{};
	bool bpfv__CallFunc_IsValid_ReturnValue__pf{};
	bool bpfv__CallFunc_IsValidHandle_IsValid__pf{};
	int32 bpfv__Temp_int_Array_Index_Variable__pf{};
	UUI_Mei_ResourceValue_C__pf4215541020* bpfv__CallFunc_Create_ReturnValue__pf{};
	UWrapBoxSlot* bpfv__CallFunc_AddChildToWrapBox_ReturnValue__pf{};
	ESlateVisibility bpfv__Temp_byte_Variable_1__pf{};
	FSTR_Mei_Requirements__pf4030501756 bpfv__CallFunc_GetDataTableRowFromName_OutRow_1__pf{};
	bool bpfv__CallFunc_GetDataTableRowFromName_ReturnValue_1__pf{};
	bool bpfv__CallFunc_IsValid_ReturnValue_1__pf{};
	FSTR_Mei_Resource__pf4030501756 bpfv__CallFunc_Array_Get_Item__pf{};
	int32 bpfv__CallFunc_Array_Length_ReturnValue__pf{};
	int32 bpfv__Temp_int_Loop_Counter_Variable__pf{};
	bool bpfv__CallFunc_Less_IntInt_ReturnValue__pf{};
	int32 bpfv__CallFunc_Add_IntInt_ReturnValue__pf{};
	bool bpfv__Temp_bool_Variable__pf{};
	ESlateVisibility bpfv__K2Node_Select_Default__pf{};
	TArray< int32, TInlineAllocator<8> > __StateStack;

	int32 __CurrentState = 1;
	do
	{
		switch( __CurrentState )
		{
		case 1:
			{
				if(::IsValid(bpv__RequirementsPartsBox__pf))
				{
					bpv__RequirementsPartsBox__pf->ClearChildren();
				}
			}
		case 2:
			{
				bpfv__CallFunc_IsValid_ReturnValue__pf = UKismetSystemLibrary::IsValid(const_cast<UDataTable*>(bpp__BuildingObjectHandle__pf.DataTable));
				if (!bpfv__CallFunc_IsValid_ReturnValue__pf)
				{
					__CurrentState = 23;
					break;
				}
			}
		case 3:
			{
				bpfv__CallFunc_GetDataTableRowFromName_ReturnValue__pf = FCustomThunkTemplates::GetDataTableRowFromName(const_cast<UDataTable*>(bpp__BuildingObjectHandle__pf.DataTable), bpp__BuildingObjectHandle__pf.RowName, /*out*/ bpfv__CallFunc_GetDataTableRowFromName_OutRow__pf);
			}
		case 4:
			{
				if (!bpfv__CallFunc_GetDataTableRowFromName_ReturnValue__pf)
				{
					__CurrentState = 23;
					break;
				}
			}
		case 5:
			{
				bpfv__LocalBuildingSettings__pf = bpfv__CallFunc_GetDataTableRowFromName_OutRow__pf;
			}
		case 6:
			{
				if(::IsValid(bpv__SegmentTitleText__pf))
				{
					bpv__SegmentTitleText__pf->SetText(bpfv__CallFunc_GetDataTableRowFromName_OutRow__pf.bpv__Name_5_9117448A4C5B6B9761439D9BD7AA8488__pf);
				}
			}
		case 7:
			{
				if(::IsValid(bpv__SegmentDescriptionText__pf))
				{
					bpv__SegmentDescriptionText__pf->SetText(bpfv__CallFunc_GetDataTableRowFromName_OutRow__pf.bpv__Description_14_CCF4D7F047BD35B327CD80A6F7C6E2A6__pf);
				}
			}
		case 8:
			{
				if(::IsValid(bpv__SelectedSegmentInfoBox__pf))
				{
					bpv__SelectedSegmentInfoBox__pf->SetVisibility(ESlateVisibility::Visible);
				}
			}
		case 9:
			{
				bpfv__Temp_byte_Variable__pf = ESlateVisibility::Collapsed;
				UBP_Mei_Library_C__pf3770675254::bpf__IsValidHandle__pf(bpfv__CallFunc_GetDataTableRowFromName_OutRow__pf.bpv__RepairRequirements_47_D9B527B3455199214DFE7296184F5155__pf, this, /*out*/ bpfv__CallFunc_IsValidHandle_IsValid__pf);
				bpfv__Temp_byte_Variable_1__pf = ESlateVisibility::Visible;
				bpfv__Temp_bool_Variable__pf = bpfv__CallFunc_IsValidHandle_IsValid__pf;
				if(::IsValid(bpv__RequirementsBox__pf))
				{
					bpv__RequirementsBox__pf->SetVisibility(TSwitchValue<bool , ESlateVisibility >(bpfv__Temp_bool_Variable__pf, bpfv__K2Node_Select_Default__pf, 2, TSwitchPair<bool , ESlateVisibility >(false, bpfv__Temp_byte_Variable__pf), TSwitchPair<bool , ESlateVisibility >(true, bpfv__Temp_byte_Variable_1__pf)));
				}
			}
		case 10:
			{
				if (!false)
				{
					__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
					break;
				}
			}
		case 11:
			{
				bpfv__CallFunc_IsValid_ReturnValue_1__pf = UKismetSystemLibrary::IsValid(const_cast<UDataTable*>(bpfv__LocalBuildingSettings__pf.bpv__BuildingRequirements_48_04B131E3405DD24A36411D84CD5EF278__pf.DataTable));
				if (!bpfv__CallFunc_IsValid_ReturnValue_1__pf)
				{
					__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
					break;
				}
			}
		case 12:
			{
				bpfv__CallFunc_GetDataTableRowFromName_ReturnValue_1__pf = FCustomThunkTemplates::GetDataTableRowFromName(const_cast<UDataTable*>(bpfv__LocalBuildingSettings__pf.bpv__BuildingRequirements_48_04B131E3405DD24A36411D84CD5EF278__pf.DataTable), bpfv__LocalBuildingSettings__pf.bpv__BuildingRequirements_48_04B131E3405DD24A36411D84CD5EF278__pf.RowName, /*out*/ bpfv__CallFunc_GetDataTableRowFromName_OutRow_1__pf);
			}
		case 13:
			{
				if (!bpfv__CallFunc_GetDataTableRowFromName_ReturnValue_1__pf)
				{
					__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
					break;
				}
			}
		case 14:
			{
				bpfv__Temp_int_Loop_Counter_Variable__pf = 0;
			}
		case 15:
			{
				bpfv__Temp_int_Array_Index_Variable__pf = 0;
			}
		case 16:
			{
				bpfv__CallFunc_Array_Length_ReturnValue__pf = FCustomThunkTemplates::Array_Length(bpfv__CallFunc_GetDataTableRowFromName_OutRow_1__pf.bpv__Resources_16_3A0355734D3515248A58DE8C48E19955__pf);
				bpfv__CallFunc_Less_IntInt_ReturnValue__pf = UKismetMathLibrary::Less_IntInt(bpfv__Temp_int_Loop_Counter_Variable__pf, bpfv__CallFunc_Array_Length_ReturnValue__pf);
				if (!bpfv__CallFunc_Less_IntInt_ReturnValue__pf)
				{
					__CurrentState = 26;
					break;
				}
			}
		case 17:
			{
				bpfv__Temp_int_Array_Index_Variable__pf = bpfv__Temp_int_Loop_Counter_Variable__pf;
			}
		case 18:
			{
				__StateStack.Push(27);
			}
		case 19:
			{
				bpfv__CallFunc_Create_ReturnValue__pf = CastChecked<UUI_Mei_ResourceValue_C__pf4215541020>(UWidgetBlueprintLibrary::Create(this, UUI_Mei_ResourceValue_C__pf4215541020::StaticClass(), ((APlayerController*)nullptr)), ECastCheckedType::NullAllowed);
			}
		case 20:
			{
				FCustomThunkTemplates::SetStructurePropertyByName(bpfv__CallFunc_Create_ReturnValue__pf, FName(TEXT("Font")), bpv__ResourcesFont__pf);
			}
		case 21:
			{
				FCustomThunkTemplates::Array_Get(bpfv__CallFunc_GetDataTableRowFromName_OutRow_1__pf.bpv__Resources_16_3A0355734D3515248A58DE8C48E19955__pf, bpfv__Temp_int_Array_Index_Variable__pf, /*out*/ bpfv__CallFunc_Array_Get_Item__pf);
				FCustomThunkTemplates::SetStructurePropertyByName(bpfv__CallFunc_Create_ReturnValue__pf, FName(TEXT("Resource")), bpfv__CallFunc_Array_Get_Item__pf);
			}
		case 22:
			{
				if(::IsValid(bpv__RequirementsPartsBox__pf))
				{
					bpfv__CallFunc_AddChildToWrapBox_ReturnValue__pf = bpv__RequirementsPartsBox__pf->UWrapBox::AddChildToWrapBox(bpfv__CallFunc_Create_ReturnValue__pf);
				}
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 23:
			{
				if(::IsValid(bpv__SelectedSegmentInfoBox__pf))
				{
					bpv__SelectedSegmentInfoBox__pf->SetVisibility(ESlateVisibility::Hidden);
				}
			}
		case 24:
			{
				if(::IsValid(bpv__RequirementsBox__pf))
				{
					bpv__RequirementsBox__pf->SetVisibility(ESlateVisibility::Collapsed);
				}
			}
		case 25:
			{
				bpp__Success__pf = true;
				__CurrentState = -1;
				break;
			}
		case 26:
			{
				bpp__Success__pf = true;
				__CurrentState = -1;
				break;
			}
		case 27:
			{
				bpfv__CallFunc_Add_IntInt_ReturnValue__pf = UKismetMathLibrary::Add_IntInt(bpfv__Temp_int_Loop_Counter_Variable__pf, 1);
				bpfv__Temp_int_Loop_Counter_Variable__pf = bpfv__CallFunc_Add_IntInt_ReturnValue__pf;
				__CurrentState = 16;
				break;
			}
		default:
			check(false); // Invalid state
			break;
		}
	} while( __CurrentState != -1 );
}
void UUI_Mei_BuildingMenu_C__pf4215541020::bpf__SegmentxSelected__pfT(UUI_Mei_MenuSegment_C__pf4215541020* bpp__MenuSegmentWidget__pf)
{
	UUI_Mei_BuildingMenuSegment_C__pf4215541020* bpfv__K2Node_DynamicCast_AsUI_Mei_Building_Menu_Segment__pf{};
	bool bpfv__K2Node_DynamicCast_bSuccess__pf{};
	bool bpfv__CallFunc_UpdateSelectedSegmentInfo_Success__pf{};
	bool bpfv__CallFunc_UpdateSelectedBuildingInfo_Success__pf{};
	int32 __CurrentState = 1;
	do
	{
		switch( __CurrentState )
		{
		case 1:
			{
				bpfv__K2Node_DynamicCast_AsUI_Mei_Building_Menu_Segment__pf = Cast<UUI_Mei_BuildingMenuSegment_C__pf4215541020>(bpp__MenuSegmentWidget__pf);
				bpfv__K2Node_DynamicCast_bSuccess__pf = (bpfv__K2Node_DynamicCast_AsUI_Mei_Building_Menu_Segment__pf != nullptr);;
				if (!bpfv__K2Node_DynamicCast_bSuccess__pf)
				{
					__CurrentState = 4;
					break;
				}
			}
		case 2:
			{
				bpv__OnBuildingSegmentSelected__pf.Broadcast(bpfv__K2Node_DynamicCast_AsUI_Mei_Building_Menu_Segment__pf);
			}
		case 3:
			{
				auto __Local__37 = FDataTableRowHandle{};
				FDataTableRowHandle  __Local__36 = __Local__37;
				bpf__UpdateSelectedBuildingInfo__pf(((::IsValid(bpfv__K2Node_DynamicCast_AsUI_Mei_Building_Menu_Segment__pf)) ? (bpfv__K2Node_DynamicCast_AsUI_Mei_Building_Menu_Segment__pf->bpv__BuildingObjectHandle__pf) : (__Local__36)), /*out*/ bpfv__CallFunc_UpdateSelectedBuildingInfo_Success__pf);
				__CurrentState = -1;
				break;
			}
		case 4:
			{
				bpv__OnMenuSegmentSelected__pf.Broadcast(bpp__MenuSegmentWidget__pf);
			}
		case 5:
			{
				bpf__UpdateSelectedSegmentInfo__pf(bpp__MenuSegmentWidget__pf, /*out*/ bpfv__CallFunc_UpdateSelectedSegmentInfo_Success__pf);
				__CurrentState = -1;
				break;
			}
		default:
			break;
		}
	} while( __CurrentState != -1 );
}
void UUI_Mei_BuildingMenu_C__pf4215541020::bpf__UpdateMouseRotation__pf(/*out*/ bool& bpp__Success__pf)
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
void UUI_Mei_BuildingMenu_C__pf4215541020::bpf__UpdateSegments__pf(/*out*/ bool& bpp__Success__pf)
{
	UUI_Mei_MenuSegment_C__pf4215541020* bpfv__CallFunc_Create_ReturnValue__pf{};
	UUI_Mei_BuildingMenuSegment_C__pf4215541020* bpfv__CallFunc_Create_ReturnValue_1__pf{};
	int32 bpfv__Temp_int_Array_Index_Variable__pf{};
	int32 bpfv__Temp_int_Loop_Counter_Variable__pf{};
	int32 bpfv__CallFunc_Add_IntInt_ReturnValue__pf{};
	int32 bpfv__Temp_int_Array_Index_Variable_1__pf{};
	FOnClicked__pf__UI_Mei_MenuSegment_C__pf__SinglecastDelegate bpfv__K2Node_CreateDelegate_OutputDelegate__pf{};
	int32 bpfv__Temp_int_Loop_Counter_Variable_1__pf{};
	TArray<FDataTableRowHandle> bpfv__CallFunc_CorrectPageDetails_ResultBuildingObjects__pf{};
	bool bpfv__CallFunc_CorrectPageDetails_AddNextPage__pf{};
	bool bpfv__CallFunc_CorrectPageDetails_AddPrevPage__pf{};
	FDataTableRowHandle bpfv__CallFunc_Array_Get_Item__pf{};
	int32 bpfv__CallFunc_Array_Length_ReturnValue__pf{};
	bool bpfv__CallFunc_Less_IntInt_ReturnValue__pf{};
	int32 bpfv__CallFunc_Add_IntInt_ReturnValue_1__pf{};
	FOnClicked__pf__UI_Mei_MenuSegment_C__pf__SinglecastDelegate bpfv__K2Node_CreateDelegate_OutputDelegate_1__pf{};
	FOnClicked__pf__UI_Mei_MenuSegment_C__pf__SinglecastDelegate bpfv__K2Node_CreateDelegate_OutputDelegate_2__pf{};
	UUI_Mei_MenuSegment_C__pf4215541020* bpfv__CallFunc_Create_ReturnValue_2__pf{};
	FAnchors bpfv__K2Node_MakeStruct_Anchors__pf{};
	UUI_Mei_MenuSegment_C__pf4215541020* bpfv__CallFunc_Array_Get_Item_1__pf{};
	int32 bpfv__CallFunc_Array_Length_ReturnValue_1__pf{};
	bool bpfv__CallFunc_Less_IntInt_ReturnValue_1__pf{};
	UCanvasPanelSlot* bpfv__CallFunc_AddChildToCanvas_ReturnValue__pf{};
	int32 bpfv__CallFunc_Array_Length_ReturnValue_2__pf{};
	int32 bpfv__CallFunc_Divide_IntInt_ReturnValue__pf{};
	int32 bpfv__CallFunc_Array_Add_ReturnValue__pf{};
	TArray< int32, TInlineAllocator<8> > __StateStack;

	int32 __CurrentState = 1;
	do
	{
		switch( __CurrentState )
		{
		case 1:
			{
				if(::IsValid(bpv__SegmentsCanvasPanel__pf))
				{
					bpv__SegmentsCanvasPanel__pf->ClearChildren();
				}
			}
		case 2:
			{
				FCustomThunkTemplates::Array_Clear(bpv__MenuSegments__pf);
			}
		case 3:
			{
				bpf__CorrectPageDetails__pf(/*out*/ bpv__BuildingObjects__pf, /*out*/ bpfv__CallFunc_CorrectPageDetails_ResultBuildingObjects__pf, /*out*/ bpfv__CallFunc_CorrectPageDetails_AddNextPage__pf, /*out*/ bpfv__CallFunc_CorrectPageDetails_AddPrevPage__pf);
			}
		case 4:
			{
				bpfv__Temp_int_Loop_Counter_Variable__pf = 0;
			}
		case 5:
			{
				bpfv__Temp_int_Array_Index_Variable_1__pf = 0;
			}
		case 6:
			{
				bpfv__CallFunc_Array_Length_ReturnValue__pf = FCustomThunkTemplates::Array_Length(bpfv__CallFunc_CorrectPageDetails_ResultBuildingObjects__pf);
				bpfv__CallFunc_Less_IntInt_ReturnValue__pf = UKismetMathLibrary::Less_IntInt(bpfv__Temp_int_Loop_Counter_Variable__pf, bpfv__CallFunc_Array_Length_ReturnValue__pf);
				if (!bpfv__CallFunc_Less_IntInt_ReturnValue__pf)
				{
					__CurrentState = 13;
					break;
				}
			}
		case 7:
			{
				bpfv__Temp_int_Array_Index_Variable_1__pf = bpfv__Temp_int_Loop_Counter_Variable__pf;
			}
		case 8:
			{
				__StateStack.Push(27);
			}
		case 9:
			{
				bpfv__CallFunc_Create_ReturnValue_1__pf = CastChecked<UUI_Mei_BuildingMenuSegment_C__pf4215541020>(UWidgetBlueprintLibrary::Create(this, UUI_Mei_BuildingMenuSegment_C__pf4215541020::StaticClass(), ((APlayerController*)nullptr)), ECastCheckedType::NullAllowed);
			}
		case 10:
			{
				FCustomThunkTemplates::Array_Get(bpfv__CallFunc_CorrectPageDetails_ResultBuildingObjects__pf, bpfv__Temp_int_Array_Index_Variable_1__pf, /*out*/ bpfv__CallFunc_Array_Get_Item__pf);
				FCustomThunkTemplates::SetStructurePropertyByName(bpfv__CallFunc_Create_ReturnValue_1__pf, FName(TEXT("BuildingObjectHandle")), bpfv__CallFunc_Array_Get_Item__pf);
			}
		case 11:
			{
				UKismetSystemLibrary::SetIntPropertyByName(bpfv__CallFunc_Create_ReturnValue_1__pf, FName(TEXT("SegmentIndex")), bpfv__Temp_int_Array_Index_Variable_1__pf);
			}
		case 12:
			{
				bpfv__CallFunc_Array_Add_ReturnValue__pf = FCustomThunkTemplates::Array_Add(bpv__MenuSegments__pf, *(UUI_Mei_MenuSegment_C__pf4215541020**)(&(bpfv__CallFunc_Create_ReturnValue_1__pf)));
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 13:
			{
				__StateStack.Push(28);
				__StateStack.Push(21);
			}
		case 14:
			{
				if (!bpfv__CallFunc_CorrectPageDetails_AddPrevPage__pf)
				{
					__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
					break;
				}
			}
		case 15:
			{
				bpfv__CallFunc_Create_ReturnValue_2__pf = CastChecked<UUI_Mei_MenuSegment_C__pf4215541020>(UWidgetBlueprintLibrary::Create(this, UUI_Mei_MenuSegment_C__pf4215541020::StaticClass(), ((APlayerController*)nullptr)), ECastCheckedType::NullAllowed);
			}
		case 16:
			{
				UKismetSystemLibrary::SetObjectPropertyByName(bpfv__CallFunc_Create_ReturnValue_2__pf, FName(TEXT("IconTexture")), bpv__PrevPageIcon__pf);
			}
		case 17:
			{
				FCustomThunkTemplates::SetStructurePropertyByName(bpfv__CallFunc_Create_ReturnValue_2__pf, FName(TEXT("IconColor")), bpv__PageIconsColor__pf);
			}
		case 18:
			{
				bpv__PrevPageSegment__pf = bpfv__CallFunc_Create_ReturnValue_2__pf;
			}
		case 19:
			{
				FCustomThunkTemplates::Array_Insert(bpv__MenuSegments__pf, bpv__PrevPageSegment__pf, 0);
			}
		case 20:
			{
				bpfv__K2Node_CreateDelegate_OutputDelegate__pf.BindUFunction(this,FName(TEXT("PrevPageClicked")));
				if(::IsValid(bpv__PrevPageSegment__pf))
				{
					bpv__PrevPageSegment__pf->bpv__OnClicked__pf.AddUnique(bpfv__K2Node_CreateDelegate_OutputDelegate__pf);
				}
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 21:
			{
				if (!bpfv__CallFunc_CorrectPageDetails_AddNextPage__pf)
				{
					__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
					break;
				}
			}
		case 22:
			{
				bpfv__CallFunc_Create_ReturnValue__pf = CastChecked<UUI_Mei_MenuSegment_C__pf4215541020>(UWidgetBlueprintLibrary::Create(this, UUI_Mei_MenuSegment_C__pf4215541020::StaticClass(), ((APlayerController*)nullptr)), ECastCheckedType::NullAllowed);
			}
		case 23:
			{
				UKismetSystemLibrary::SetObjectPropertyByName(bpfv__CallFunc_Create_ReturnValue__pf, FName(TEXT("IconTexture")), bpv__NextPageIcon__pf);
			}
		case 24:
			{
				FCustomThunkTemplates::SetStructurePropertyByName(bpfv__CallFunc_Create_ReturnValue__pf, FName(TEXT("IconColor")), bpv__PageIconsColor__pf);
			}
		case 25:
			{
				bpv__NextPageSegment__pf = bpfv__CallFunc_Create_ReturnValue__pf;
			}
		case 26:
			{
				bpfv__CallFunc_Divide_IntInt_ReturnValue__pf = UKismetMathLibrary::Divide_IntInt(bpv__MaxSegmentCount__pf, 2);
				FCustomThunkTemplates::Array_Insert(bpv__MenuSegments__pf, bpv__NextPageSegment__pf, bpfv__CallFunc_Divide_IntInt_ReturnValue__pf);
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 27:
			{
				bpfv__CallFunc_Add_IntInt_ReturnValue__pf = UKismetMathLibrary::Add_IntInt(bpfv__Temp_int_Loop_Counter_Variable__pf, 1);
				bpfv__Temp_int_Loop_Counter_Variable__pf = bpfv__CallFunc_Add_IntInt_ReturnValue__pf;
				__CurrentState = 6;
				break;
			}
		case 28:
			{
				bpfv__Temp_int_Loop_Counter_Variable_1__pf = 0;
			}
		case 29:
			{
				bpfv__Temp_int_Array_Index_Variable__pf = 0;
			}
		case 30:
			{
				bpfv__CallFunc_Array_Length_ReturnValue_1__pf = FCustomThunkTemplates::Array_Length(bpv__MenuSegments__pf);
				bpfv__CallFunc_Less_IntInt_ReturnValue_1__pf = UKismetMathLibrary::Less_IntInt(bpfv__Temp_int_Loop_Counter_Variable_1__pf, bpfv__CallFunc_Array_Length_ReturnValue_1__pf);
				if (!bpfv__CallFunc_Less_IntInt_ReturnValue_1__pf)
				{
					__CurrentState = 42;
					break;
				}
			}
		case 31:
			{
				bpfv__Temp_int_Array_Index_Variable__pf = bpfv__Temp_int_Loop_Counter_Variable_1__pf;
			}
		case 32:
			{
				__StateStack.Push(41);
			}
		case 33:
			{
				FCustomThunkTemplates::Array_Get(bpv__MenuSegments__pf, bpfv__Temp_int_Array_Index_Variable__pf, /*out*/ bpfv__CallFunc_Array_Get_Item_1__pf);
				bpfv__CallFunc_Array_Length_ReturnValue_2__pf = FCustomThunkTemplates::Array_Length(bpv__MenuSegments__pf);
				if(::IsValid(bpfv__CallFunc_Array_Get_Item_1__pf))
				{
					bpfv__CallFunc_Array_Get_Item_1__pf->bpf__SetSegmentIndexAndCount__pf(bpfv__Temp_int_Array_Index_Variable__pf, bpfv__CallFunc_Array_Length_ReturnValue_2__pf);
				}
			}
		case 34:
			{
				FCustomThunkTemplates::Array_Get(bpv__MenuSegments__pf, bpfv__Temp_int_Array_Index_Variable__pf, /*out*/ bpfv__CallFunc_Array_Get_Item_1__pf);
				if(::IsValid(bpv__SegmentsCanvasPanel__pf))
				{
					bpfv__CallFunc_AddChildToCanvas_ReturnValue__pf = bpv__SegmentsCanvasPanel__pf->UCanvasPanel::AddChildToCanvas(bpfv__CallFunc_Array_Get_Item_1__pf);
				}
			}
		case 35:
			{
				bpfv__K2Node_MakeStruct_Anchors__pf.Minimum = FVector2D(0.500000,0.500000);
				bpfv__K2Node_MakeStruct_Anchors__pf.Maximum = FVector2D(0.500000,0.500000);
				if(::IsValid(bpfv__CallFunc_AddChildToCanvas_ReturnValue__pf))
				{
					bpfv__CallFunc_AddChildToCanvas_ReturnValue__pf->UCanvasPanelSlot::SetAnchors(bpfv__K2Node_MakeStruct_Anchors__pf);
				}
			}
		case 36:
			{
				if(::IsValid(bpfv__CallFunc_AddChildToCanvas_ReturnValue__pf))
				{
					bpfv__CallFunc_AddChildToCanvas_ReturnValue__pf->UCanvasPanelSlot::SetAlignment(FVector2D(0.500000,0.500000));
				}
			}
		case 37:
			{
				if(::IsValid(bpfv__CallFunc_AddChildToCanvas_ReturnValue__pf))
				{
					bpfv__CallFunc_AddChildToCanvas_ReturnValue__pf->UCanvasPanelSlot::SetAutoSize(true);
				}
			}
		case 38:
			{
				FCustomThunkTemplates::Array_Get(bpv__MenuSegments__pf, bpfv__Temp_int_Array_Index_Variable__pf, /*out*/ bpfv__CallFunc_Array_Get_Item_1__pf);
				if(::IsValid(bpfv__CallFunc_Array_Get_Item_1__pf))
				{
					bpfv__CallFunc_Array_Get_Item_1__pf->UWidget::SetRenderScale(FVector2D(0.750000,0.750000));
				}
			}
		case 39:
			{
				bpfv__K2Node_CreateDelegate_OutputDelegate_2__pf.BindUFunction(this,FName(TEXT("Segment Selected")));
				FCustomThunkTemplates::Array_Get(bpv__MenuSegments__pf, bpfv__Temp_int_Array_Index_Variable__pf, /*out*/ bpfv__CallFunc_Array_Get_Item_1__pf);
				if(::IsValid(bpfv__CallFunc_Array_Get_Item_1__pf))
				{
					bpfv__CallFunc_Array_Get_Item_1__pf->bpv__OnClicked__pf.AddUnique(bpfv__K2Node_CreateDelegate_OutputDelegate_2__pf);
				}
			}
		case 40:
			{
				bpfv__K2Node_CreateDelegate_OutputDelegate_1__pf.BindUFunction(this,FName(TEXT("SegmentClicked")));
				FCustomThunkTemplates::Array_Get(bpv__MenuSegments__pf, bpfv__Temp_int_Array_Index_Variable__pf, /*out*/ bpfv__CallFunc_Array_Get_Item_1__pf);
				if(::IsValid(bpfv__CallFunc_Array_Get_Item_1__pf))
				{
					bpfv__CallFunc_Array_Get_Item_1__pf->bpv__OnClicked__pf.AddUnique(bpfv__K2Node_CreateDelegate_OutputDelegate_1__pf);
				}
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 41:
			{
				bpfv__CallFunc_Add_IntInt_ReturnValue_1__pf = UKismetMathLibrary::Add_IntInt(bpfv__Temp_int_Loop_Counter_Variable_1__pf, 1);
				bpfv__Temp_int_Loop_Counter_Variable_1__pf = bpfv__CallFunc_Add_IntInt_ReturnValue_1__pf;
				__CurrentState = 30;
				break;
			}
		case 42:
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
void UUI_Mei_BuildingMenu_C__pf4215541020::bpf__CorrectPageDetails__pf(/*out*/ TArray<FDataTableRowHandle>& bpp__BuildingObjects__pf, /*out*/ TArray<FDataTableRowHandle>& bpp__ResultBuildingObjects__pf, /*out*/ bool& bpp__AddNextPage__pf, /*out*/ bool& bpp__AddPrevPage__pf)
{
	TArray<FDataTableRowHandle> bpfv__LocalResultBuildingObjects__pf{};
	int32 bpfv__LocalMaxPage__pf{};
	int32 bpfv__LocalLength__pf{};
	bool bpfv__LocalAddPrevPage__pf{};
	bool bpfv__LocalAddNextPage__pf{};
	int32 bpfv__LocalStartIndex__pf{};
	TArray<FDataTableRowHandle> bpfv__LocalBuildingObjects__pf{};
	int32 bpfv__Temp_int_Variable__pf{};
	int32 bpfv__CallFunc_Array_Length_ReturnValue__pf{};
	int32 bpfv__Temp_int_Variable_1__pf{};
	bool bpfv__Temp_bool_Variable__pf{};
	int32 bpfv__Temp_int_Variable_2__pf{};
	int32 bpfv__Temp_int_Variable_3__pf{};
	bool bpfv__Temp_bool_Variable_1__pf{};
	int32 bpfv__Temp_int_Variable_4__pf{};
	bool bpfv__CallFunc_Greater_IntInt_ReturnValue__pf{};
	bool bpfv__CallFunc_EqualEqual_IntInt_ReturnValue__pf{};
	bool bpfv__CallFunc_Not_PreBool_ReturnValue__pf{};
	int32 bpfv__Temp_int_Array_Index_Variable__pf{};
	bool bpfv__Temp_bool_Variable_2__pf{};
	int32 bpfv__K2Node_Select_Default__pf{};
	int32 bpfv__K2Node_Select_Default_1__pf{};
	int32 bpfv__CallFunc_Add_IntInt_ReturnValue__pf{};
	int32 bpfv__CallFunc_Array_Length_ReturnValue_1__pf{};
	int32 bpfv__CallFunc_Subtract_IntInt_ReturnValue__pf{};
	bool bpfv__CallFunc_Less_IntInt_ReturnValue__pf{};
	bool bpfv__CallFunc_GreaterEqual_IntInt_ReturnValue__pf{};
	int32 bpfv__Temp_int_Loop_Counter_Variable__pf{};
	int32 bpfv__CallFunc_Add_IntInt_ReturnValue_1__pf{};
	FDataTableRowHandle bpfv__CallFunc_Array_Get_Item__pf{};
	int32 bpfv__CallFunc_Array_Length_ReturnValue_2__pf{};
	int32 bpfv__CallFunc_Array_Add_ReturnValue__pf{};
	bool bpfv__CallFunc_Less_IntInt_ReturnValue_1__pf{};
	bool bpfv__CallFunc_NotEqual_IntInt_ReturnValue__pf{};
	bool bpfv__CallFunc_NotEqual_IntInt_ReturnValue_1__pf{};
	int32 bpfv__CallFunc_Subtract_IntInt_ReturnValue_1__pf{};
	int32 bpfv__CallFunc_Subtract_IntInt_ReturnValue_2__pf{};
	int32 bpfv__CallFunc_Subtract_IntInt_ReturnValue_3__pf{};
	int32 bpfv__CallFunc_Multiply_IntInt_ReturnValue__pf{};
	int32 bpfv__CallFunc_Add_IntInt_ReturnValue_2__pf{};
	int32 bpfv__K2Node_Select_Default_2__pf{};
	int32 bpfv__CallFunc_Clamp_ReturnValue__pf{};
	int32 bpfv__CallFunc_Add_IntInt_ReturnValue_3__pf{};
	int32 bpfv__CallFunc_Subtract_IntInt_ReturnValue_4__pf{};
	int32 bpfv__CallFunc_Subtract_IntInt_ReturnValue_5__pf{};
	int32 bpfv__CallFunc_Subtract_IntInt_ReturnValue_6__pf{};
	int32 bpfv__CallFunc_Multiply_IntInt_ReturnValue_1__pf{};
	int32 bpfv__CallFunc_Multiply_IntInt_ReturnValue_2__pf{};
	int32 bpfv__CallFunc_Add_IntInt_ReturnValue_4__pf{};
	int32 bpfv__CallFunc_Subtract_IntInt_ReturnValue_7__pf{};
	bool bpfv__CallFunc_Less_IntInt_ReturnValue_2__pf{};
	int32 bpfv__CallFunc_Multiply_IntInt_ReturnValue_3__pf{};
	bool bpfv__CallFunc_LessEqual_IntInt_ReturnValue__pf{};
	bool bpfv__CallFunc_LessEqual_IntInt_ReturnValue_1__pf{};
	int32 bpfv__CallFunc_Subtract_IntInt_ReturnValue_8__pf{};
	int32 bpfv__CallFunc_Subtract_IntInt_ReturnValue_9__pf{};
	int32 bpfv__CallFunc_Clamp_ReturnValue_1__pf{};
	int32 bpfv__CallFunc_Multiply_IntInt_ReturnValue_4__pf{};
	TArray< int32, TInlineAllocator<8> > __StateStack;

	int32 __CurrentState = 1;
	do
	{
		switch( __CurrentState )
		{
		case 1:
			{
				bpfv__LocalLength__pf = 0;
			}
		case 2:
			{
				bpfv__LocalMaxPage__pf = 3;
			}
		case 3:
			{
				bpfv__LocalBuildingObjects__pf = bpp__BuildingObjects__pf;
			}
		case 4:
			{
				bpfv__CallFunc_Array_Length_ReturnValue__pf = FCustomThunkTemplates::Array_Length(bpp__BuildingObjects__pf);
				bpfv__LocalLength__pf = bpfv__CallFunc_Array_Length_ReturnValue__pf;
			}
		case 5:
			{
				bpfv__CallFunc_LessEqual_IntInt_ReturnValue_1__pf = UKismetMathLibrary::LessEqual_IntInt(bpfv__LocalLength__pf, bpv__MaxSegmentCount__pf);
				if (!bpfv__CallFunc_LessEqual_IntInt_ReturnValue_1__pf)
				{
					__CurrentState = 19;
					break;
				}
			}
		case 6:
			{
				bpv__Pages__pf = 1;
			}
		case 7:
			{
				bpv__CurrentPage__pf = 1;
			}
		case 8:
			{
				bpfv__LocalStartIndex__pf = 0;
			}
		case 9:
			{
				bpfv__LocalAddNextPage__pf = false;
			}
		case 10:
			{
				bpfv__LocalAddPrevPage__pf = false;
			}
		case 11:
			{
				bpfv__Temp_int_Loop_Counter_Variable__pf = 0;
			}
		case 12:
			{
				bpfv__Temp_int_Array_Index_Variable__pf = 0;
			}
		case 13:
			{
				bpfv__CallFunc_Array_Length_ReturnValue_2__pf = FCustomThunkTemplates::Array_Length(bpfv__LocalBuildingObjects__pf);
				bpfv__CallFunc_Less_IntInt_ReturnValue_1__pf = UKismetMathLibrary::Less_IntInt(bpfv__Temp_int_Loop_Counter_Variable__pf, bpfv__CallFunc_Array_Length_ReturnValue_2__pf);
				if (!bpfv__CallFunc_Less_IntInt_ReturnValue_1__pf)
				{
					__CurrentState = 33;
					break;
				}
			}
		case 14:
			{
				bpfv__Temp_int_Array_Index_Variable__pf = bpfv__Temp_int_Loop_Counter_Variable__pf;
			}
		case 15:
			{
				__StateStack.Push(34);
			}
		case 16:
			{
				bpfv__Temp_int_Variable__pf = 1;
				bpfv__Temp_int_Variable_1__pf = 0;
				bpfv__Temp_int_Variable_2__pf = 1;
				bpfv__Temp_int_Variable_3__pf = 0;
				bpfv__Temp_bool_Variable_2__pf = bpfv__LocalAddPrevPage__pf;
				bpfv__Temp_bool_Variable__pf = bpfv__LocalAddNextPage__pf;
				bpfv__CallFunc_Add_IntInt_ReturnValue__pf = UKismetMathLibrary::Add_IntInt(TSwitchValue<bool , int32 >(bpfv__Temp_bool_Variable__pf, bpfv__K2Node_Select_Default_1__pf, 2, TSwitchPair<bool , int32 >(false, bpfv__Temp_int_Variable_3__pf), TSwitchPair<bool , int32 >(true, bpfv__Temp_int_Variable_2__pf)), TSwitchValue<bool , int32 >(bpfv__Temp_bool_Variable_2__pf, bpfv__K2Node_Select_Default__pf, 2, TSwitchPair<bool , int32 >(false, bpfv__Temp_int_Variable_1__pf), TSwitchPair<bool , int32 >(true, bpfv__Temp_int_Variable__pf)));
				bpfv__CallFunc_Array_Length_ReturnValue_1__pf = FCustomThunkTemplates::Array_Length(bpfv__LocalResultBuildingObjects__pf);
				bpfv__CallFunc_Subtract_IntInt_ReturnValue__pf = UKismetMathLibrary::Subtract_IntInt(bpv__MaxSegmentCount__pf, bpfv__CallFunc_Add_IntInt_ReturnValue__pf);
				bpfv__CallFunc_Less_IntInt_ReturnValue__pf = UKismetMathLibrary::Less_IntInt(bpfv__CallFunc_Array_Length_ReturnValue_1__pf, bpfv__CallFunc_Subtract_IntInt_ReturnValue__pf);
				if (!bpfv__CallFunc_Less_IntInt_ReturnValue__pf)
				{
					__CurrentState = 33;
					break;
				}
			}
		case 17:
			{
				bpfv__CallFunc_GreaterEqual_IntInt_ReturnValue__pf = UKismetMathLibrary::GreaterEqual_IntInt(bpfv__Temp_int_Array_Index_Variable__pf, bpfv__LocalStartIndex__pf);
				if (!bpfv__CallFunc_GreaterEqual_IntInt_ReturnValue__pf)
				{
					__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
					break;
				}
			}
		case 18:
			{
				FCustomThunkTemplates::Array_Get(bpfv__LocalBuildingObjects__pf, bpfv__Temp_int_Array_Index_Variable__pf, /*out*/ bpfv__CallFunc_Array_Get_Item__pf);
				bpfv__CallFunc_Array_Add_ReturnValue__pf = FCustomThunkTemplates::Array_Add(bpfv__LocalResultBuildingObjects__pf, bpfv__CallFunc_Array_Get_Item__pf);
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 19:
			{
				bpfv__CallFunc_Subtract_IntInt_ReturnValue_7__pf = UKismetMathLibrary::Subtract_IntInt(bpv__MaxSegmentCount__pf, 1);
				bpfv__CallFunc_Multiply_IntInt_ReturnValue_3__pf = UKismetMathLibrary::Multiply_IntInt(bpfv__CallFunc_Subtract_IntInt_ReturnValue_7__pf, 2);
				bpfv__CallFunc_LessEqual_IntInt_ReturnValue__pf = UKismetMathLibrary::LessEqual_IntInt(bpfv__LocalLength__pf, bpfv__CallFunc_Multiply_IntInt_ReturnValue_3__pf);
				if (!bpfv__CallFunc_LessEqual_IntInt_ReturnValue__pf)
				{
					__CurrentState = 25;
					break;
				}
			}
		case 20:
			{
				bpv__Pages__pf = 2;
			}
		case 21:
			{
				bpfv__CallFunc_Clamp_ReturnValue_1__pf = UKismetMathLibrary::Clamp(bpv__CurrentPage__pf, 1, 2);
				bpv__CurrentPage__pf = bpfv__CallFunc_Clamp_ReturnValue_1__pf;
			}
		case 22:
			{
				bpfv__CallFunc_Subtract_IntInt_ReturnValue_8__pf = UKismetMathLibrary::Subtract_IntInt(bpv__CurrentPage__pf, 1);
				bpfv__CallFunc_Subtract_IntInt_ReturnValue_9__pf = UKismetMathLibrary::Subtract_IntInt(bpv__MaxSegmentCount__pf, 1);
				bpfv__CallFunc_Multiply_IntInt_ReturnValue_4__pf = UKismetMathLibrary::Multiply_IntInt(bpfv__CallFunc_Subtract_IntInt_ReturnValue_8__pf, bpfv__CallFunc_Subtract_IntInt_ReturnValue_9__pf);
				bpfv__LocalStartIndex__pf = bpfv__CallFunc_Multiply_IntInt_ReturnValue_4__pf;
			}
		case 23:
			{
				bpfv__CallFunc_EqualEqual_IntInt_ReturnValue__pf = UKismetMathLibrary::EqualEqual_IntInt(bpv__CurrentPage__pf, 1);
				bpfv__LocalAddNextPage__pf = bpfv__CallFunc_EqualEqual_IntInt_ReturnValue__pf;
			}
		case 24:
			{
				bpfv__CallFunc_EqualEqual_IntInt_ReturnValue__pf = UKismetMathLibrary::EqualEqual_IntInt(bpv__CurrentPage__pf, 1);
				bpfv__CallFunc_Not_PreBool_ReturnValue__pf = UKismetMathLibrary::Not_PreBool(bpfv__CallFunc_EqualEqual_IntInt_ReturnValue__pf);
				bpfv__LocalAddPrevPage__pf = bpfv__CallFunc_Not_PreBool_ReturnValue__pf;
				__CurrentState = 11;
				break;
			}
		case 25:
			{
				bpv__Pages__pf = 3;
			}
		case 26:
			{
				bpfv__CallFunc_Subtract_IntInt_ReturnValue_4__pf = UKismetMathLibrary::Subtract_IntInt(bpv__Pages__pf, 2);
				bpfv__CallFunc_Subtract_IntInt_ReturnValue_5__pf = UKismetMathLibrary::Subtract_IntInt(bpv__MaxSegmentCount__pf, 2);
				bpfv__CallFunc_Subtract_IntInt_ReturnValue_6__pf = UKismetMathLibrary::Subtract_IntInt(bpv__MaxSegmentCount__pf, 1);
				bpfv__CallFunc_Multiply_IntInt_ReturnValue_1__pf = UKismetMathLibrary::Multiply_IntInt(bpfv__CallFunc_Subtract_IntInt_ReturnValue_4__pf, bpfv__CallFunc_Subtract_IntInt_ReturnValue_5__pf);
				bpfv__CallFunc_Multiply_IntInt_ReturnValue_2__pf = UKismetMathLibrary::Multiply_IntInt(bpfv__CallFunc_Subtract_IntInt_ReturnValue_6__pf, 2);
				bpfv__CallFunc_Add_IntInt_ReturnValue_4__pf = UKismetMathLibrary::Add_IntInt(bpfv__CallFunc_Multiply_IntInt_ReturnValue_2__pf, bpfv__CallFunc_Multiply_IntInt_ReturnValue_1__pf);
				bpfv__CallFunc_Less_IntInt_ReturnValue_2__pf = UKismetMathLibrary::Less_IntInt(bpfv__CallFunc_Add_IntInt_ReturnValue_4__pf, bpfv__LocalLength__pf);
				if (!bpfv__CallFunc_Less_IntInt_ReturnValue_2__pf)
				{
					__CurrentState = 29;
					break;
				}
			}
		case 27:
			{
				__StateStack.Push(26);
			}
		case 28:
			{
				bpfv__CallFunc_Add_IntInt_ReturnValue_3__pf = UKismetMathLibrary::Add_IntInt(bpv__Pages__pf, 1);
				bpv__Pages__pf = bpfv__CallFunc_Add_IntInt_ReturnValue_3__pf;
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 29:
			{
				bpfv__CallFunc_Clamp_ReturnValue__pf = UKismetMathLibrary::Clamp(bpv__CurrentPage__pf, 1, bpv__Pages__pf);
				bpv__CurrentPage__pf = bpfv__CallFunc_Clamp_ReturnValue__pf;
			}
		case 30:
			{
				bpfv__Temp_int_Variable_4__pf = 0;
				bpfv__CallFunc_Greater_IntInt_ReturnValue__pf = UKismetMathLibrary::Greater_IntInt(bpv__CurrentPage__pf, 1);
				bpfv__Temp_bool_Variable_1__pf = bpfv__CallFunc_Greater_IntInt_ReturnValue__pf;
				bpfv__CallFunc_Subtract_IntInt_ReturnValue_1__pf = UKismetMathLibrary::Subtract_IntInt(bpv__CurrentPage__pf, 2);
				bpfv__CallFunc_Subtract_IntInt_ReturnValue_2__pf = UKismetMathLibrary::Subtract_IntInt(bpv__MaxSegmentCount__pf, 2);
				bpfv__CallFunc_Subtract_IntInt_ReturnValue_3__pf = UKismetMathLibrary::Subtract_IntInt(bpv__MaxSegmentCount__pf, 1);
				bpfv__CallFunc_Multiply_IntInt_ReturnValue__pf = UKismetMathLibrary::Multiply_IntInt(bpfv__CallFunc_Subtract_IntInt_ReturnValue_1__pf, bpfv__CallFunc_Subtract_IntInt_ReturnValue_2__pf);
				bpfv__CallFunc_Add_IntInt_ReturnValue_2__pf = UKismetMathLibrary::Add_IntInt(bpfv__CallFunc_Subtract_IntInt_ReturnValue_3__pf, bpfv__CallFunc_Multiply_IntInt_ReturnValue__pf);
				bpfv__LocalStartIndex__pf = TSwitchValue<bool , int32 >(bpfv__Temp_bool_Variable_1__pf, bpfv__K2Node_Select_Default_2__pf, 2, TSwitchPair<bool , int32 >(false, bpfv__Temp_int_Variable_4__pf), TSwitchPair<bool , int32 >(true, bpfv__CallFunc_Add_IntInt_ReturnValue_2__pf));
			}
		case 31:
			{
				bpfv__CallFunc_NotEqual_IntInt_ReturnValue_1__pf = UKismetMathLibrary::NotEqual_IntInt(bpv__CurrentPage__pf, bpv__Pages__pf);
				bpfv__LocalAddNextPage__pf = bpfv__CallFunc_NotEqual_IntInt_ReturnValue_1__pf;
			}
		case 32:
			{
				bpfv__CallFunc_NotEqual_IntInt_ReturnValue__pf = UKismetMathLibrary::NotEqual_IntInt(bpv__CurrentPage__pf, 1);
				bpfv__LocalAddPrevPage__pf = bpfv__CallFunc_NotEqual_IntInt_ReturnValue__pf;
				__CurrentState = 11;
				break;
			}
		case 33:
			{
				bpp__ResultBuildingObjects__pf = bpfv__LocalResultBuildingObjects__pf;
				bpp__AddNextPage__pf = bpfv__LocalAddNextPage__pf;
				bpp__AddPrevPage__pf = bpfv__LocalAddPrevPage__pf;
				__CurrentState = -1;
				break;
			}
		case 34:
			{
				bpfv__CallFunc_Add_IntInt_ReturnValue_1__pf = UKismetMathLibrary::Add_IntInt(bpfv__Temp_int_Loop_Counter_Variable__pf, 1);
				bpfv__Temp_int_Loop_Counter_Variable__pf = bpfv__CallFunc_Add_IntInt_ReturnValue_1__pf;
				__CurrentState = 13;
				break;
			}
		default:
			check(false); // Invalid state
			break;
		}
	} while( __CurrentState != -1 );
}
void UUI_Mei_BuildingMenu_C__pf4215541020::bpf__NextPageClicked__pf(UUI_Mei_MenuSegment_C__pf4215541020* bpp__MenuSegmentWidget__pf)
{
	bool bpfv__CallFunc_UpdateSegments_Success__pf{};
	int32 bpfv__CallFunc_Add_IntInt_ReturnValue__pf{};
	int32 bpfv__CallFunc_Clamp_ReturnValue__pf{};
	bpfv__CallFunc_Add_IntInt_ReturnValue__pf = UKismetMathLibrary::Add_IntInt(bpv__CurrentPage__pf, 1);
	bpfv__CallFunc_Clamp_ReturnValue__pf = UKismetMathLibrary::Clamp(bpfv__CallFunc_Add_IntInt_ReturnValue__pf, 1, bpv__Pages__pf);
	bpv__CurrentPage__pf = bpfv__CallFunc_Clamp_ReturnValue__pf;
	bpf__UpdateSegments__pf(/*out*/ bpfv__CallFunc_UpdateSegments_Success__pf);
}
void UUI_Mei_BuildingMenu_C__pf4215541020::bpf__PrevPageClicked__pf(UUI_Mei_MenuSegment_C__pf4215541020* bpp__MenuSegmentWidget__pf)
{
	bool bpfv__CallFunc_UpdateSegments_Success__pf{};
	int32 bpfv__CallFunc_Subtract_IntInt_ReturnValue__pf{};
	int32 bpfv__CallFunc_Clamp_ReturnValue__pf{};
	bpfv__CallFunc_Subtract_IntInt_ReturnValue__pf = UKismetMathLibrary::Subtract_IntInt(bpv__CurrentPage__pf, 1);
	bpfv__CallFunc_Clamp_ReturnValue__pf = UKismetMathLibrary::Clamp(bpfv__CallFunc_Subtract_IntInt_ReturnValue__pf, 1, bpv__Pages__pf);
	bpv__CurrentPage__pf = bpfv__CallFunc_Clamp_ReturnValue__pf;
	bpf__UpdateSegments__pf(/*out*/ bpfv__CallFunc_UpdateSegments_Success__pf);
}
void UUI_Mei_BuildingMenu_C__pf4215541020::bpf__SegmentClicked__pf(UUI_Mei_MenuSegment_C__pf4215541020* bpp__MenuSegmentWidget__pf)
{
	UUI_Mei_BuildingMenuSegment_C__pf4215541020* bpfv__K2Node_DynamicCast_AsUI_Mei_Building_Menu_Segment__pf{};
	bool bpfv__K2Node_DynamicCast_bSuccess__pf{};
	int32 __CurrentState = 1;
	do
	{
		switch( __CurrentState )
		{
		case 1:
			{
				bpfv__K2Node_DynamicCast_AsUI_Mei_Building_Menu_Segment__pf = Cast<UUI_Mei_BuildingMenuSegment_C__pf4215541020>(bpp__MenuSegmentWidget__pf);
				bpfv__K2Node_DynamicCast_bSuccess__pf = (bpfv__K2Node_DynamicCast_AsUI_Mei_Building_Menu_Segment__pf != nullptr);;
				if (!bpfv__K2Node_DynamicCast_bSuccess__pf)
				{
					__CurrentState = 3;
					break;
				}
			}
		case 2:
			{
				bpv__OnBuildingSegmentClicked__pf.Broadcast(bpfv__K2Node_DynamicCast_AsUI_Mei_Building_Menu_Segment__pf);
				__CurrentState = -1;
				break;
			}
		case 3:
			{
				bpv__OnMenuSegmentClicked__pf.Broadcast(bpp__MenuSegmentWidget__pf);
				__CurrentState = -1;
				break;
			}
		default:
			break;
		}
	} while( __CurrentState != -1 );
}
void UUI_Mei_BuildingMenu_C__pf4215541020::bpf__UpdateSelectedSegmentInfo__pf(UUI_Mei_MenuSegment_C__pf4215541020* bpp__MenuSegment__pf, /*out*/ bool& bpp__Success__pf)
{
	bool bpfv__CallFunc_EqualEqual_ObjectObject_ReturnValue__pf{};
	bool bpfv__CallFunc_EqualEqual_ObjectObject_ReturnValue_1__pf{};
	int32 __CurrentState = 1;
	do
	{
		switch( __CurrentState )
		{
		case 1:
			{
				if(::IsValid(bpv__RequirementsBox__pf))
				{
					bpv__RequirementsBox__pf->SetVisibility(ESlateVisibility::Hidden);
				}
			}
		case 2:
			{
				bpfv__CallFunc_EqualEqual_ObjectObject_ReturnValue_1__pf = UKismetMathLibrary::EqualEqual_ObjectObject(bpp__MenuSegment__pf, bpv__NextPageSegment__pf);
				if (!bpfv__CallFunc_EqualEqual_ObjectObject_ReturnValue_1__pf)
				{
					__CurrentState = 7;
					break;
				}
			}
		case 3:
			{
				if(::IsValid(bpv__SelectedSegmentInfoBox__pf))
				{
					bpv__SelectedSegmentInfoBox__pf->SetVisibility(ESlateVisibility::Visible);
				}
			}
		case 4:
			{
				if(::IsValid(bpv__SegmentTitleText__pf))
				{
					bpv__SegmentTitleText__pf->SetText(FTextStringHelper::CreateFromBuffer(
TEXT("NSLOCTEXT(\"[9BD0CCE04953FF97A773A988F9B880C2]\", \"C83B98B14BB771377CA8BD96045C2291\", \"Next\")")	));
				}
			}
		case 5:
			{
				if(::IsValid(bpv__SegmentDescriptionText__pf))
				{
					bpv__SegmentDescriptionText__pf->SetText(FTextStringHelper::CreateFromBuffer(
TEXT("NSLOCTEXT(\"[9BD0CCE04953FF97A773A988F9B880C2]\", \"63B7D3F94A3FE1CF700F89BC182E5DAF\", \"Go to the next menu page\")")	));
				}
			}
		case 6:
			{
				bpp__Success__pf = true;
				__CurrentState = -1;
				break;
			}
		case 7:
			{
				bpfv__CallFunc_EqualEqual_ObjectObject_ReturnValue__pf = UKismetMathLibrary::EqualEqual_ObjectObject(bpp__MenuSegment__pf, bpv__PrevPageSegment__pf);
				if (!bpfv__CallFunc_EqualEqual_ObjectObject_ReturnValue__pf)
				{
					__CurrentState = -1;
					break;
				}
			}
		case 8:
			{
				if(::IsValid(bpv__SelectedSegmentInfoBox__pf))
				{
					bpv__SelectedSegmentInfoBox__pf->SetVisibility(ESlateVisibility::Visible);
				}
			}
		case 9:
			{
				if(::IsValid(bpv__SegmentTitleText__pf))
				{
					bpv__SegmentTitleText__pf->SetText(FTextStringHelper::CreateFromBuffer(
TEXT("NSLOCTEXT(\"[9BD0CCE04953FF97A773A988F9B880C2]\", \"0452807C469C9BC2A443ABA18FC2A196\", \"Back\")")	));
				}
			}
		case 10:
			{
				if(::IsValid(bpv__SegmentDescriptionText__pf))
				{
					bpv__SegmentDescriptionText__pf->SetText(FTextStringHelper::CreateFromBuffer(
TEXT("NSLOCTEXT(\"[9BD0CCE04953FF97A773A988F9B880C2]\", \"ED51442D41316EAA151C6ABF724B4ABD\", \"Go to the previous menu page\")")	));
				}
			}
		case 11:
			{
				bpp__Success__pf = true;
				__CurrentState = -1;
				break;
			}
		default:
			break;
		}
	} while( __CurrentState != -1 );
}
void UUI_Mei_BuildingMenu_C__pf4215541020::bpf__UpdateBuildingDataTable__pf(UDataTable* bpp__DataTable__pf, /*out*/ bool& bpp__Success__pf)
{
	bool bpfv__CallFunc_IsValid_ReturnValue__pf{};
	int32 bpfv__Temp_int_Array_Index_Variable__pf{};
	int32 bpfv__Temp_int_Loop_Counter_Variable__pf{};
	TArray<FName> bpfv__CallFunc_GetDataTableRowNames_OutRowNames__pf{};
	FName bpfv__CallFunc_Array_Get_Item__pf{};
	int32 bpfv__CallFunc_Array_Length_ReturnValue__pf{};
	int32 bpfv__CallFunc_Add_IntInt_ReturnValue__pf{};
	bool bpfv__CallFunc_Less_IntInt_ReturnValue__pf{};
	bool bpfv__CallFunc_UpdateSegments_Success__pf{};
	FDataTableRowHandle bpfv__K2Node_MakeStruct_DataTableRowHandle__pf{};
	int32 bpfv__CallFunc_Array_Add_ReturnValue__pf{};
	TArray< int32, TInlineAllocator<8> > __StateStack;

	int32 __CurrentState = 1;
	do
	{
		switch( __CurrentState )
		{
		case 1:
			{
				bpfv__CallFunc_IsValid_ReturnValue__pf = UKismetSystemLibrary::IsValid(bpp__DataTable__pf);
				if (!bpfv__CallFunc_IsValid_ReturnValue__pf)
				{
					__CurrentState = 11;
					break;
				}
			}
		case 2:
			{
				bpv__CurrentBuildingDataTable__pf = bpp__DataTable__pf;
			}
		case 3:
			{
				(bpfv__CallFunc_GetDataTableRowNames_OutRowNames__pf).Reset();
				UDataTableFunctionLibrary::GetDataTableRowNames(bpv__CurrentBuildingDataTable__pf, /*out*/ bpfv__CallFunc_GetDataTableRowNames_OutRowNames__pf);
			}
		case 4:
			{
				FCustomThunkTemplates::Array_Clear(bpv__BuildingObjects__pf);
			}
		case 5:
			{
				bpfv__Temp_int_Loop_Counter_Variable__pf = 0;
			}
		case 6:
			{
				bpfv__Temp_int_Array_Index_Variable__pf = 0;
			}
		case 7:
			{
				bpfv__CallFunc_Array_Length_ReturnValue__pf = FCustomThunkTemplates::Array_Length(bpfv__CallFunc_GetDataTableRowNames_OutRowNames__pf);
				bpfv__CallFunc_Less_IntInt_ReturnValue__pf = UKismetMathLibrary::Less_IntInt(bpfv__Temp_int_Loop_Counter_Variable__pf, bpfv__CallFunc_Array_Length_ReturnValue__pf);
				if (!bpfv__CallFunc_Less_IntInt_ReturnValue__pf)
				{
					__CurrentState = 11;
					break;
				}
			}
		case 8:
			{
				bpfv__Temp_int_Array_Index_Variable__pf = bpfv__Temp_int_Loop_Counter_Variable__pf;
			}
		case 9:
			{
				__StateStack.Push(14);
			}
		case 10:
			{
				FCustomThunkTemplates::Array_Get(bpfv__CallFunc_GetDataTableRowNames_OutRowNames__pf, bpfv__Temp_int_Array_Index_Variable__pf, /*out*/ bpfv__CallFunc_Array_Get_Item__pf);
				static TWeakFieldPtr<FProperty> __Local__39{};
				const FProperty* __Local__38 = __Local__39.Get();
				if (nullptr == __Local__38)
				{
					__Local__38 = (FDataTableRowHandle::StaticStruct())->FindPropertyByName(FName(TEXT("DataTable")));
					check(__Local__38);
					__Local__39 = __Local__38;
				}
				(*(__Local__38->ContainerPtrToValuePtr<UDataTable* >(&(bpfv__K2Node_MakeStruct_DataTableRowHandle__pf), 0))) = bpv__DefaultBuildingDataTable__pf;
				bpfv__K2Node_MakeStruct_DataTableRowHandle__pf.RowName = bpfv__CallFunc_Array_Get_Item__pf;
				bpfv__CallFunc_Array_Add_ReturnValue__pf = FCustomThunkTemplates::Array_Add(bpv__BuildingObjects__pf, bpfv__K2Node_MakeStruct_DataTableRowHandle__pf);
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 11:
			{
				auto __Local__40 = FDataTableRowHandle{};
				bpv__CurrentBuildingList__pf = __Local__40;
			}
		case 12:
			{
				bpf__UpdateSegments__pf(/*out*/ bpfv__CallFunc_UpdateSegments_Success__pf);
			}
		case 13:
			{
				bpp__Success__pf = bpfv__CallFunc_UpdateSegments_Success__pf;
				__CurrentState = -1;
				break;
			}
		case 14:
			{
				bpfv__CallFunc_Add_IntInt_ReturnValue__pf = UKismetMathLibrary::Add_IntInt(bpfv__Temp_int_Loop_Counter_Variable__pf, 1);
				bpfv__Temp_int_Loop_Counter_Variable__pf = bpfv__CallFunc_Add_IntInt_ReturnValue__pf;
				__CurrentState = 7;
				break;
			}
		default:
			check(false); // Invalid state
			break;
		}
	} while( __CurrentState != -1 );
}
void UUI_Mei_BuildingMenu_C__pf4215541020::bpf__ConstructWidget__pf(/*out*/ bool& bpp__Success__pf)
{
	bool bpfv__CallFunc_UpdateWidget_Success__pf{};
	bpv__CurrentBuildingList__pf = bpv__DefaultBuildingList__pf;
	bpv__CurrentBuildingDataTable__pf = bpv__DefaultBuildingDataTable__pf;
	bpf__UpdateWidget__pf(/*out*/ bpfv__CallFunc_UpdateWidget_Success__pf);
	bpp__Success__pf = bpfv__CallFunc_UpdateWidget_Success__pf;
}
PRAGMA_DISABLE_OPTIMIZATION
void UUI_Mei_BuildingMenu_C__pf4215541020::__StaticDependencies_DirectlyUsedAssets(TArray<FBlueprintDependencyData>& AssetsToLoad)
{
	const FCompactBlueprintDependencyData LocCompactBlueprintDependencyData[] =
	{
		{61, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  DataTable /Game/Mei/BP/BuildingSystem/DataTables/DT_Mei_BuildingObjects.DT_Mei_BuildingObjects 
		{62, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Font /Engine/EngineFonts/Roboto.Roboto 
	};
	for(const FCompactBlueprintDependencyData& CompactData : LocCompactBlueprintDependencyData)
	{
		AssetsToLoad.Add(FBlueprintDependencyData(F__NativeDependencies::Get(CompactData.ObjectRefIndex), CompactData));
	}
}
PRAGMA_ENABLE_OPTIMIZATION
PRAGMA_DISABLE_OPTIMIZATION
void UUI_Mei_BuildingMenu_C__pf4215541020::__StaticDependenciesAssets(TArray<FBlueprintDependencyData>& AssetsToLoad)
{
	__StaticDependencies_DirectlyUsedAssets(AssetsToLoad);
	const FCompactBlueprintDependencyData LocCompactBlueprintDependencyData[] =
	{
		{66, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  ScriptStruct /Script/SlateCore.Geometry 
		{27, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.KismetArrayLibrary 
		{14, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.KismetMathLibrary 
		{39, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/UMG.UserWidget 
		{1, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  ScriptStruct /Script/Engine.DataTableRowHandle 
		{21, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.DataTable 
		{17, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.KismetSystemLibrary 
		{22, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.DataTableFunctionLibrary 
		{60, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/UMG.VerticalBox 
		{63, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/UMG.TextBlock 
		{80, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  ScriptStruct /Script/Slate.Anchors 
		{81, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/UMG.CanvasPanelSlot 
		{82, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/UMG.CanvasPanel 
		{46, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/UMG.WidgetBlueprintLibrary 
		{3, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.Texture2D 
		{68, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/UMG.Widget 
		{23, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.PlayerController 
		{67, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/UMG.WidgetLayoutLibrary 
		{4, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.StaticMesh 
		{64, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Enum /Script/UMG.ESlateVisibility 
		{83, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/UMG.WrapBoxSlot 
		{78, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/UMG.WrapBox 
		{74, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  ScriptStruct /Script/SlateCore.SlateFontInfo 
		{34, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  ScriptStruct /Script/Engine.PointerToUberGraphFrame 
		{77, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/UMG.Button 
		{36, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.BlueprintFunctionLibrary 
		{37, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.PlayerState 
		{12, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.Controller 
		{9, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.Actor 
		{18, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.GameplayStatics 
		{38, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Landscape.Landscape 
		{5, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.SceneComponent 
		{6, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.StaticMeshComponent 
		{7, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  StaticMesh /Game/Mei/Mesh/BuildingSystem/Structures/Dummy/SM_Dummy_Foundation.SM_Dummy_Foundation 
		{8, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  MaterialInstanceConstant /Game/Mei/Material/BuildingSystem/Instances/Dummy/MI_Dummy_Structures_Base.MI_Dummy_Structures_Base 
		{10, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  ScriptStruct /Script/Engine.HitResult 
		{11, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.DamageType 
		{13, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.MaterialInstanceDynamic 
		{15, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.NetPushModelHelpers 
		{16, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.TimelineComponent 
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
		{44, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  DelegateFunction /Script/Engine.TimerDynamicDelegate__DelegateSignature 
		{45, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  ScriptStruct /Script/Engine.TimerHandle 
		{86, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/ApexDestruction.DestructibleComponent 
		{87, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/ApexDestruction.DestructibleActor 
		{88, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/ApexDestruction.DestructibleMesh 
		{40, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  ScriptStruct /Script/Engine.FormatArgumentData 
		{41, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Enum /Script/Engine.EFormatArgumentType 
		{42, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Enum /Script/Engine.ETextGender 
		{43, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.KismetTextLibrary 
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
		{71, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  ScriptStruct /Script/InputCore.Key 
		{72, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/UMG.ProgressBar 
		{59, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/UMG.Image 
		{65, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/UMG.Border 
		{69, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/UMG.UMGSequencePlayer 
		{70, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/UMG.WidgetAnimation 
		{73, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.AnimMontage 
		{75, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  ScriptStruct /Script/SlateCore.SlateColor 
		{76, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Enum /Script/SlateCore.ESlateColorStylingMode 
		{79, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/UMG.Overlay 
		{84, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.BoxComponent 
		{85, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/NavigationSystem.NavArea_Obstacle 
		{317, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  WidgetBlueprintGeneratedClass /Game/Mei/UI/BuildingSystem/UI_Mei_MenuSegment.UI_Mei_MenuSegment_C 
		{320, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  WidgetBlueprintGeneratedClass /Game/Mei/UI/BuildingSystem/UI_Mei_BuildingMenuSegment.UI_Mei_BuildingMenuSegment_C 
		{89, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  BlueprintGeneratedClass /Game/Mei/BP/BuildingSystem/BuildingObject/Base/BP_Mei_Building_BaseObject.BP_Mei_Building_BaseObject_C 
		{318, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  WidgetBlueprintGeneratedClass /Game/Mei/UI/BuildingSystem/UI_Mei_ResourceValue.UI_Mei_ResourceValue_C 
		{302, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  BlueprintGeneratedClass /Game/Mei/BP/BuildingSystem/Game/BP_Mei_Library.BP_Mei_Library_C 
		{306, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  UserDefinedStruct /Game/Mei/BP/BuildingSystem/Structures/STR_Mei_BuildingObjectSettings.STR_Mei_BuildingObjectSettings 
		{319, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  UserDefinedStruct /Game/Mei/BP/BuildingSystem/Structures/STR_Mei_Requirements.STR_Mei_Requirements 
		{2, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  UserDefinedStruct /Game/Mei/BP/BuildingSystem/Structures/STR_Mei_Resource.STR_Mei_Resource 
		{321, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  UserDefinedStruct /Game/Mei/BP/BuildingSystem/Structures/STR_Mei_BuildingList.STR_Mei_BuildingList 
		{0, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  UserDefinedEnum /Game/Mei/BP/BuildingSystem/Enumerations/E_Mei_ResourceType.E_Mei_ResourceType 
	};
	for(const FCompactBlueprintDependencyData& CompactData : LocCompactBlueprintDependencyData)
	{
		AssetsToLoad.Add(FBlueprintDependencyData(F__NativeDependencies::Get(CompactData.ObjectRefIndex), CompactData));
	}
}
PRAGMA_ENABLE_OPTIMIZATION
struct FRegisterHelper__UUI_Mei_BuildingMenu_C__pf4215541020
{
	FRegisterHelper__UUI_Mei_BuildingMenu_C__pf4215541020()
	{
		FConvertedBlueprintsDependencies::Get().RegisterConvertedClass(TEXT("/Game/Mei/UI/BuildingSystem/UI_Mei_BuildingMenu"), &UUI_Mei_BuildingMenu_C__pf4215541020::__StaticDependenciesAssets);
	}
	static FRegisterHelper__UUI_Mei_BuildingMenu_C__pf4215541020 Instance;
};
FRegisterHelper__UUI_Mei_BuildingMenu_C__pf4215541020 FRegisterHelper__UUI_Mei_BuildingMenu_C__pf4215541020::Instance;
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
