#include "NativizedAssets.h"
#include "BP_Mei_BuildingComponent__pf1731449071.h"
#include "GeneratedCodeHelpers.h"
#include "Runtime/Engine/Classes/GameFramework/Actor.h"
#include "Runtime/Engine/Classes/Engine/EngineBaseTypes.h"
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
#include "Runtime/Engine/Classes/Engine/Font.h"
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
#include "Runtime/UMG/Public/Blueprint/UserWidget.h"
#include "Runtime/UMG/Public/Components/Widget.h"
#include "Runtime/UMG/Public/Components/Visual.h"
#include "Runtime/UMG/Public/Components/SlateWrapperTypes.h"
#include "Runtime/UMG/Public/Slate/WidgetTransform.h"
#include "Runtime/SlateCore/Public/Types/SlateEnums.h"
#include "Runtime/SlateCore/Public/Input/NavigationReply.h"
#include "Runtime/SlateCore/Public/Layout/Clipping.h"
#include "Runtime/SlateCore/Public/Layout/Geometry.h"
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
#include "Runtime/UMG/Public/Blueprint/WidgetTree.h"
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
#include "BP_Mei_Building_BaseObject__pf2826203124.h"
#include "Runtime/Engine/Classes/Kismet/KismetTextLibrary.h"
#include "Runtime/Engine/Classes/Kismet/BlueprintFunctionLibrary.h"
#include "Runtime/Engine/Classes/Kismet/KismetNodeHelperLibrary.h"
#include "Runtime/Engine/Classes/Kismet/KismetMathLibrary.h"
#include "Runtime/Engine/Classes/Kismet/KismetSystemLibrary.h"
#include "Runtime/Engine/Classes/Engine/CollisionProfile.h"
#include "E_Mei_BuildingType__pf424568635.h"
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
#include "BPI_Mei_BuildingWidget__pf685842786.h"
#include "BPI_Mei_Floor__pf685842786.h"
#include "Runtime/Engine/Classes/Kismet/KismetArrayLibrary.h"
#include "Runtime/UMG/Public/Blueprint/WidgetBlueprintLibrary.h"
#include "Runtime/Engine/Public/Slate/SGameLayerManager.h"
#include "Runtime/SlateCore/Public/Rendering/RenderingCommon.h"
#include "Runtime/Engine/Classes/Slate/SlateBrushAsset.h"
#include "../Plugins/FX/Niagara/Source/Niagara/Public/NiagaraComponent.h"
#include "Runtime/Engine/Classes/Engine/TextureRenderTarget.h"
#include "../Plugins/FX/Niagara/Source/Niagara/Public/NiagaraCommon.h"
#include "../Plugins/FX/Niagara/Source/Niagara/Classes/NiagaraSystem.h"
#include "../Plugins/FX/Niagara/Source/Niagara/Classes/NiagaraEffectType.h"
#include "../Plugins/FX/Niagara/Source/Niagara/Classes/NiagaraPlatformSet.h"
#include "../Plugins/FX/Niagara/Source/Niagara/Classes/NiagaraEmitterHandle.h"
#include "../Plugins/FX/Niagara/Source/Niagara/Classes/NiagaraEmitter.h"
#include "../Plugins/FX/Niagara/Source/Niagara/Classes/NiagaraScript.h"
#include "../Plugins/FX/Niagara/Source/NiagaraShader/Public/NiagaraScriptBase.h"
#include "../Plugins/FX/Niagara/Source/Niagara/Public/NiagaraParameterStore.h"
#include "../Plugins/FX/Niagara/Source/Niagara/Public/NiagaraTypes.h"
#include "../Plugins/FX/Niagara/Source/Niagara/Classes/NiagaraDataInterface.h"
#include "../Plugins/FX/Niagara/Source/NiagaraCore/Public/NiagaraDataInterfaceBase.h"
#include "../Plugins/FX/Niagara/Source/NiagaraCore/Public/NiagaraMergeable.h"
#include "../Plugins/FX/Niagara/Source/Niagara/Public/NiagaraScriptExecutionParameterStore.h"
#include "../Plugins/FX/Niagara/Source/NiagaraCore/Public/NiagaraCompileHash.h"
#include "../Plugins/FX/Niagara/Source/NiagaraShader/Public/NiagaraShared.h"
#include "../Plugins/FX/Niagara/Source/Niagara/Public/NiagaraParameters.h"
#include "../Plugins/FX/Niagara/Source/Niagara/Classes/NiagaraParameterCollection.h"
#include "../Plugins/FX/Niagara/Source/Niagara/Public/NiagaraConvertInPlaceUtilityBase.h"
#include "../Plugins/FX/Niagara/Source/Niagara/Classes/NiagaraScriptHighlight.h"
#include "../Plugins/FX/Niagara/Source/Niagara/Classes/NiagaraScriptSourceBase.h"
#include "../Plugins/FX/Niagara/Source/Niagara/Classes/NiagaraDataSet.h"
#include "../Plugins/FX/Niagara/Source/Niagara/Public/NiagaraRendererProperties.h"
#include "../Plugins/FX/Niagara/Source/Niagara/Public/NiagaraSimulationStageBase.h"
#include "../Plugins/FX/Niagara/Source/Niagara/Public/NiagaraEditorDataBase.h"
#include "../Plugins/FX/Niagara/Source/Niagara/Public/NiagaraMessageDataBase.h"
#include "../Plugins/FX/Niagara/Source/Niagara/Public/NiagaraUserRedirectionParameterStore.h"
#include "../Plugins/FX/Niagara/Source/Niagara/Public/NiagaraVariant.h"
#include "../Plugins/FX/Niagara/Source/Niagara/Public/NiagaraFunctionLibrary.h"
#include "../Plugins/FX/Niagara/Source/Niagara/Public/NiagaraComponentPool.h"
#include "Runtime/Engine/Classes/Engine/VolumeTexture.h"
#include "BP_Mei_Library__pf3770675254.h"
#include "STR_Mei_BuildingObjectSettings__pf4030501756.h"
#include "BPI_Mei_Player__pf685842786.h"
#include "Runtime/Engine/Classes/Kismet/DataTableFunctionLibrary.h"
#include "BP_Mei_Building_Foundation__pf3022723389.h"
#include "Runtime/Engine/Classes/Materials/MaterialInstanceConstant.h"
#include "UI_Mei_HUD__pf4215541020.h"


#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
PRAGMA_DISABLE_OPTIMIZATION
UBP_Mei_BuildingComponent_C__pf1731449071::UBP_Mei_BuildingComponent_C__pf1731449071(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer)
{
	
	bpv__PlayerController__pf = nullptr;
	bpv__IsLocalPlayer__pf = false;
	bpv__InputBuildingRotationZ__pf = 0.000000f;
	bpv__InputBuildingOffsetZ__pf = -10.000000f;
	bpv__BuildingMode__pf = E__E_Mei_BuildingMode__pf::NewEnumerator0;
	bpv__BuildingObject__pf = nullptr;
	bpv__BuildTransform__pf = FTransform( FQuat(0.000000,0.000000,0.000000,1.000000), FVector(0.000000,0.000000,0.000000), FVector(1.000000,1.000000,1.000000) );
	bpv__TargetActor__pf = nullptr;
	bpv__TargetBuildingObject__pf = nullptr;
	bpv__CanBeBuilt__pf = false;
	bpv__DisplayedFloor__pf = 1;
	bpv__LastBuildingObjectClass__pf = ABP_Mei_Building_Foundation_C__pf3022723389::StaticClass();
	bpv__ManualInit__pf = false;
	bpv__TraceToMouseMode__pf = false;
	bpv__TraceDistance__pf = 1000.000000f;
	bpv__MinTraceDistance__pf = 0.000000f;
	bpv__MaxTraceDistance__pf = 1000.000000f;
	bpv__TopDownViewMode__pf = false;
	bpv__TopDownTraceDistance__pf = 5000.000000f;
	bpv__NearSnappingMode__pf = true;
	bpv__AutoStartBuildMode__pf = true;
	bpv__DestructChunksLifeTime__pf = 5.000000f;
	bpv__GridMode__pf = false;
	bpv__GridModeForProps__pf = false;
	bpv__GridFoundationOffset__pf = 300.000000f;
	bpv__GridFoundationOffsetZ__pf = 50.000000f;
	bpv__GridPropsOffset__pf = 100.000000f;
	bpv__GridCorrectOffset__pf = 50.000000f;
	bpv__BuildingRotationStepZ__pf = 10.000000f;
	bpv__BuildingOffsetStepZ__pf = 10.000000f;
	bpv__FloorNumberLimit__pf = 5;
	bpv__CanBuildMaterial__pf = CastChecked<UMaterialInterface>(CastChecked<UDynamicClass>(UBP_Mei_BuildingComponent_C__pf1731449071::StaticClass())->UsedAssets[0], ECastCheckedType::NullAllowed);
	bpv__CannotBuildMaterial__pf = CastChecked<UMaterialInterface>(CastChecked<UDynamicClass>(UBP_Mei_BuildingComponent_C__pf1731449071::StaticClass())->UsedAssets[1], ECastCheckedType::NullAllowed);
	bpv__MinBuildingOffsetZ__pf = -200.000000f;
	bpv__MaxBuildingOffsetZ__pf = 200.000000f;
	bpv__BuildingWidgetClass__pf = UUI_Mei_HUD_C__pf4215541020::StaticClass();
	bpv__BuildingWidget__pf = nullptr;
	bpv__DebugMode__pf = false;
	bpv__DebugInformation__pf = FText::GetEmpty();
	PrimaryComponentTick.bCanEverTick = true;
	static TWeakFieldPtr<FProperty> __Local__1{};
	const FProperty* __Local__0 = __Local__1.Get();
	if (nullptr == __Local__0)
	{
		__Local__0 = (UActorComponent::StaticClass())->FindPropertyByName(FName(TEXT("bReplicates")));
		check(__Local__0);
		__Local__1 = __Local__0;
	}
	(((FBoolProperty*)__Local__0)->SetPropertyValue_InContainer((this), true, 0));
	bCanEverAffectNavigation = false;
}
PRAGMA_ENABLE_OPTIMIZATION
void UBP_Mei_BuildingComponent_C__pf1731449071::PostLoadSubobjects(FObjectInstancingGraph* OuterInstanceGraph)
{
	Super::PostLoadSubobjects(OuterInstanceGraph);
}
PRAGMA_DISABLE_OPTIMIZATION
void UBP_Mei_BuildingComponent_C__pf1731449071::__CustomDynamicClassInitialization(UDynamicClass* InDynamicClass)
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
	InDynamicClass->ReferencedConvertedFields.Add(LoadObject<UEnum>(nullptr, TEXT("/Game/Mei/BP/BuildingSystem/Enumerations/E_Mei_BuildingType.E_Mei_BuildingType")));
	InDynamicClass->ReferencedConvertedFields.Add(LoadObject<UEnum>(nullptr, TEXT("/Game/Mei/BP/BuildingSystem/Enumerations/E_Mei_ChangeVariableOperation.E_Mei_ChangeVariableOperation")));
	// List of all referenced converted classes
	InDynamicClass->ReferencedConvertedFields.Add(ABP_Mei_Building_BaseObject_C__pf2826203124::StaticClass());
	extern UClass* Z_Construct_UClass_UBPI_Mei_BuildingWidget_C();
	InDynamicClass->ReferencedConvertedFields.Add(Z_Construct_UClass_UBPI_Mei_BuildingWidget_C());
	extern UClass* Z_Construct_UClass_UBPI_Mei_Floor_C();
	InDynamicClass->ReferencedConvertedFields.Add(Z_Construct_UClass_UBPI_Mei_Floor_C());
	InDynamicClass->ReferencedConvertedFields.Add(UBP_Mei_Library_C__pf3770675254::StaticClass());
	extern UClass* Z_Construct_UClass_UBPI_Mei_Player_C();
	InDynamicClass->ReferencedConvertedFields.Add(Z_Construct_UClass_UBPI_Mei_Player_C());
	InDynamicClass->ReferencedConvertedFields.Add(ABP_Mei_Building_Foundation_C__pf3022723389::StaticClass());
	InDynamicClass->ReferencedConvertedFields.Add(UUI_Mei_HUD_C__pf4215541020::StaticClass());
	// List of all referenced converted structures
	extern UScriptStruct* Z_Construct_UScriptStruct_FSTR_Mei_BuildingObjectSettings__pf4030501756();
	InDynamicClass->ReferencedConvertedFields.Add(Z_Construct_UScriptStruct_FSTR_Mei_BuildingObjectSettings__pf4030501756());
	FConvertedBlueprintsDependencies::FillUsedAssetsInDynamicClass(InDynamicClass, &__StaticDependencies_DirectlyUsedAssets);
}
PRAGMA_ENABLE_OPTIMIZATION
void UBP_Mei_BuildingComponent_C__pf1731449071::bpf__ExecuteUbergraph_BP_Mei_BuildingComponent__pf_0(int32 bpp__EntryPoint__pf)
{
	check(bpp__EntryPoint__pf == 49);
	// optimized KCST_UnconditionalGoto
	bpf__ChangeBuildingWidget__pf(b0l__K2Node_CustomEvent_BuildingWidgetClass__pf, /*out*/ b0l__CallFunc_ChangeBuildingWidget_Success__pf);
	return; // KCST_GotoReturn
}
void UBP_Mei_BuildingComponent_C__pf1731449071::bpf__ExecuteUbergraph_BP_Mei_BuildingComponent__pf_1(int32 bpp__EntryPoint__pf)
{
	AActor* bpfv__CallFunc_GetOwner_ReturnValue__pf{};
	check(bpp__EntryPoint__pf == 47);
	// optimized KCST_UnconditionalGoto
	bpv__IsLocalPlayer__pf = true;
	// optimized KCST_UnconditionalGoto
	bpfv__CallFunc_GetOwner_ReturnValue__pf = UActorComponent::GetOwner();
	b0l__K2Node_DynamicCast_AsPlayer_Controller__pf = Cast<APlayerController>(bpfv__CallFunc_GetOwner_ReturnValue__pf);
	b0l__K2Node_DynamicCast_bSuccess__pf = (b0l__K2Node_DynamicCast_AsPlayer_Controller__pf != nullptr);;
	if (!b0l__K2Node_DynamicCast_bSuccess__pf)
	{
		return; //KCST_GotoReturnIfNot
	}
	bpv__PlayerController__pf = b0l__K2Node_DynamicCast_AsPlayer_Controller__pf;
	return; // KCST_GotoReturn
}
void UBP_Mei_BuildingComponent_C__pf1731449071::bpf__ExecuteUbergraph_BP_Mei_BuildingComponent__pf_2(int32 bpp__EntryPoint__pf)
{
	check(bpp__EntryPoint__pf == 46);
	// optimized KCST_UnconditionalGoto
	bpf__UpdateProcess__pf(/*out*/ b0l__CallFunc_UpdateProcess_Success__pf);
	return; // KCST_GotoReturn
}
void UBP_Mei_BuildingComponent_C__pf1731449071::bpf__ExecuteUbergraph_BP_Mei_BuildingComponent__pf_3(int32 bpp__EntryPoint__pf)
{
	check(bpp__EntryPoint__pf == 44);
	// optimized KCST_UnconditionalGoto
	bpf__TryStartBuildObject__pf(b0l__K2Node_CustomEvent_BuildingObjectHandle__pf, /*out*/ b0l__CallFunc_TryStartBuildObject_Success__pf);
	return; // KCST_GotoReturn
}
void UBP_Mei_BuildingComponent_C__pf1731449071::bpf__ExecuteUbergraph_BP_Mei_BuildingComponent__pf_4(int32 bpp__EntryPoint__pf)
{
	check(bpp__EntryPoint__pf == 42);
	// optimized KCST_UnconditionalGoto
	bpf__StartBuildObject__pf(b0l__K2Node_CustomEvent_BuildingObjectHandle_1__pf, /*out*/ b0l__CallFunc_StartBuildObject_Success__pf);
	return; // KCST_GotoReturn
}
void UBP_Mei_BuildingComponent_C__pf1731449071::bpf__ExecuteUbergraph_BP_Mei_BuildingComponent__pf_5(int32 bpp__EntryPoint__pf)
{
	check(bpp__EntryPoint__pf == 41);
	// optimized KCST_UnconditionalGoto
	bpf__CancelBuildxxClientx__pfTLK();
	return; // KCST_GotoReturn
}
void UBP_Mei_BuildingComponent_C__pf1731449071::bpf__ExecuteUbergraph_BP_Mei_BuildingComponent__pf_6(int32 bpp__EntryPoint__pf)
{
	check(bpp__EntryPoint__pf == 40);
	// optimized KCST_UnconditionalGoto
	bpf__CancelBuild__pf(/*out*/ b0l__CallFunc_CancelBuild_Success__pf);
	return; // KCST_GotoReturn
}
void UBP_Mei_BuildingComponent_C__pf1731449071::bpf__ExecuteUbergraph_BP_Mei_BuildingComponent__pf_7(int32 bpp__EntryPoint__pf)
{
	check(bpp__EntryPoint__pf == 35);
	// optimized KCST_UnconditionalGoto
	bpf__SendBuildingMessage__pf(b0l__K2Node_CustomEvent_BuildingMode__pf, b0l__K2Node_CustomEvent_InteractionResult__pf, b0l__K2Node_CustomEvent_Message__pf, /*out*/ b0l__CallFunc_SendBuildingMessage_Success__pf);
	return; // KCST_GotoReturn
}
void UBP_Mei_BuildingComponent_C__pf1731449071::bpf__ExecuteUbergraph_BP_Mei_BuildingComponent__pf_8(int32 bpp__EntryPoint__pf)
{
	check(bpp__EntryPoint__pf == 37);
	// optimized KCST_UnconditionalGoto
	bpf__TryBuild__pf(/*out*/ b0l__CallFunc_TryBuild_Success__pf);
	return; // KCST_GotoReturn
}
void UBP_Mei_BuildingComponent_C__pf1731449071::bpf__ExecuteUbergraph_BP_Mei_BuildingComponent__pf_9(int32 bpp__EntryPoint__pf)
{
	check(bpp__EntryPoint__pf == 33);
	// optimized KCST_UnconditionalGoto
	bpf__ChangeBuildingMode__pf(b0l__K2Node_CustomEvent_BuildingMode_1__pf, /*out*/ b0l__CallFunc_ChangeBuildingMode_Success__pf);
	return; // KCST_GotoReturn
}
void UBP_Mei_BuildingComponent_C__pf1731449071::bpf__ExecuteUbergraph_BP_Mei_BuildingComponent__pf_10(int32 bpp__EntryPoint__pf)
{
	check(bpp__EntryPoint__pf == 31);
	// optimized KCST_UnconditionalGoto
	bpf__UpdateBuildingList__pf(b0l__K2Node_CustomEvent_BuildingListHandle__pf, /*out*/ b0l__CallFunc_UpdateBuildingList_Success__pf);
	return; // KCST_GotoReturn
}
void UBP_Mei_BuildingComponent_C__pf1731449071::bpf__ExecuteUbergraph_BP_Mei_BuildingComponent__pf_11(int32 bpp__EntryPoint__pf)
{
	check(bpp__EntryPoint__pf == 29);
	// optimized KCST_UnconditionalGoto
	bpf__HideBuildingMenu__pf(/*out*/ b0l__CallFunc_HideBuildingMenu_Success__pf);
	return; // KCST_GotoReturn
}
void UBP_Mei_BuildingComponent_C__pf1731449071::bpf__ExecuteUbergraph_BP_Mei_BuildingComponent__pf_12(int32 bpp__EntryPoint__pf)
{
	check(bpp__EntryPoint__pf == 27);
	// optimized KCST_UnconditionalGoto
	bpf__ShowBuildingMenu__pf(/*out*/ b0l__CallFunc_ShowBuildingMenu_Success__pf);
	return; // KCST_GotoReturn
}
void UBP_Mei_BuildingComponent_C__pf1731449071::bpf__ExecuteUbergraph_BP_Mei_BuildingComponent__pf_13(int32 bpp__EntryPoint__pf)
{
	check(bpp__EntryPoint__pf == 22);
	// optimized KCST_UnconditionalGoto
	bpf__TryRepairxxServerx__pfTLK(bpv__TargetBuildingObject__pf);
	return; // KCST_GotoReturn
}
void UBP_Mei_BuildingComponent_C__pf1731449071::bpf__ExecuteUbergraph_BP_Mei_BuildingComponent__pf_14(int32 bpp__EntryPoint__pf)
{
	check(bpp__EntryPoint__pf == 24);
	// optimized KCST_UnconditionalGoto
	bpf__TryRepair__pf(b0l__K2Node_CustomEvent_TargetObject__pf, /*out*/ b0l__CallFunc_TryRepair_Success__pf);
	return; // KCST_GotoReturn
}
void UBP_Mei_BuildingComponent_C__pf1731449071::bpf__ExecuteUbergraph_BP_Mei_BuildingComponent__pf_15(int32 bpp__EntryPoint__pf)
{
	check(bpp__EntryPoint__pf == 19);
	// optimized KCST_UnconditionalGoto
	bpf__TryRotate__pf(b0l__K2Node_CustomEvent_TargetObject_1__pf, /*out*/ b0l__CallFunc_TryRotate_Success__pf);
	return; // KCST_GotoReturn
}
void UBP_Mei_BuildingComponent_C__pf1731449071::bpf__ExecuteUbergraph_BP_Mei_BuildingComponent__pf_16(int32 bpp__EntryPoint__pf)
{
	check(bpp__EntryPoint__pf == 17);
	// optimized KCST_UnconditionalGoto
	bpf__TryRotatexxServerx__pfTLK(((ABP_Mei_Building_BaseObject_C__pf2826203124*)nullptr));
	return; // KCST_GotoReturn
}
void UBP_Mei_BuildingComponent_C__pf1731449071::bpf__ExecuteUbergraph_BP_Mei_BuildingComponent__pf_17(int32 bpp__EntryPoint__pf)
{
	check(bpp__EntryPoint__pf == 13);
	// optimized KCST_UnconditionalGoto
	bpf__TryUpgradexxServerx__pfTLK(bpv__TargetBuildingObject__pf);
	return; // KCST_GotoReturn
}
void UBP_Mei_BuildingComponent_C__pf1731449071::bpf__ExecuteUbergraph_BP_Mei_BuildingComponent__pf_18(int32 bpp__EntryPoint__pf)
{
	check(bpp__EntryPoint__pf == 15);
	// optimized KCST_UnconditionalGoto
	bpf__TryUpgrade__pf(b0l__K2Node_CustomEvent_TargetObject_2__pf, /*out*/ b0l__CallFunc_TryUpgrade_Success__pf, /*out*/ b0l__CallFunc_TryUpgrade_Message__pf);
	return; // KCST_GotoReturn
}
void UBP_Mei_BuildingComponent_C__pf1731449071::bpf__ExecuteUbergraph_BP_Mei_BuildingComponent__pf_19(int32 bpp__EntryPoint__pf)
{
	check(bpp__EntryPoint__pf == 9);
	// optimized KCST_UnconditionalGoto
	bpf__TryDestructxxServerx__pfTLK(bpv__TargetBuildingObject__pf);
	return; // KCST_GotoReturn
}
void UBP_Mei_BuildingComponent_C__pf1731449071::bpf__ExecuteUbergraph_BP_Mei_BuildingComponent__pf_20(int32 bpp__EntryPoint__pf)
{
	check(bpp__EntryPoint__pf == 11);
	// optimized KCST_UnconditionalGoto
	bpf__TryDestruct__pf(b0l__K2Node_CustomEvent_TargetObject_3__pf, /*out*/ b0l__CallFunc_TryDestruct_Success__pf);
	return; // KCST_GotoReturn
}
void UBP_Mei_BuildingComponent_C__pf1731449071::bpf__ExecuteUbergraph_BP_Mei_BuildingComponent__pf_21(int32 bpp__EntryPoint__pf)
{
	check(bpp__EntryPoint__pf == 5);
	// optimized KCST_UnconditionalGoto
	bpf__TryRemovexxServerx__pfTLK(bpv__TargetBuildingObject__pf);
	return; // KCST_GotoReturn
}
void UBP_Mei_BuildingComponent_C__pf1731449071::bpf__ExecuteUbergraph_BP_Mei_BuildingComponent__pf_22(int32 bpp__EntryPoint__pf)
{
	check(bpp__EntryPoint__pf == 7);
	// optimized KCST_UnconditionalGoto
	bpf__TryRemove__pf(b0l__K2Node_CustomEvent_TargetObject_4__pf, /*out*/ b0l__CallFunc_TryRemove_Success__pf);
	return; // KCST_GotoReturn
}
void UBP_Mei_BuildingComponent_C__pf1731449071::bpf__ExecuteUbergraph_BP_Mei_BuildingComponent__pf_23(int32 bpp__EntryPoint__pf)
{
	check(bpp__EntryPoint__pf == 1);
	// optimized KCST_UnconditionalGoto
	bpf__FinishBuild__pf(b0l__K2Node_CustomEvent_BuildingObjectClass__pf, b0l__K2Node_CustomEvent_BuildingObjectHandle_2__pf, b0l__K2Node_CustomEvent_BuildingTransform__pf, b0l__K2Node_CustomEvent_TargetActor__pf, /*out*/ b0l__CallFunc_FinishBuild_Success__pf);
	return; // KCST_GotoReturn
}
void UBP_Mei_BuildingComponent_C__pf1731449071::bpf__ChangeBuildingWidgetxxClientx__pfTLK_Implementation(UClass* bpp__BuildingWidgetClass__pf)
{
	b0l__K2Node_CustomEvent_BuildingWidgetClass__pf = bpp__BuildingWidgetClass__pf;
	bpf__ExecuteUbergraph_BP_Mei_BuildingComponent__pf_0(49);
}
void UBP_Mei_BuildingComponent_C__pf1731449071::bpf__ReceiveBeginPlay__pf()
{
	bpf__ExecuteUbergraph_BP_Mei_BuildingComponent__pf_1(47);
}
void UBP_Mei_BuildingComponent_C__pf1731449071::bpf__ReceiveTick__pf(float bpp__DeltaSeconds__pf)
{
	b0l__K2Node_Event_DeltaSeconds__pf = bpp__DeltaSeconds__pf;
	bpf__ExecuteUbergraph_BP_Mei_BuildingComponent__pf_2(46);
}
void UBP_Mei_BuildingComponent_C__pf1731449071::bpf__TryStartBuildObjectxxServerx__pfTLK_Implementation(FDataTableRowHandle bpp__BuildingObjectHandle__pf)
{
	b0l__K2Node_CustomEvent_BuildingObjectHandle__pf = bpp__BuildingObjectHandle__pf;
	bpf__ExecuteUbergraph_BP_Mei_BuildingComponent__pf_3(44);
}
void UBP_Mei_BuildingComponent_C__pf1731449071::bpf__StartBuildObjectxxClientx__pfTLK_Implementation(FDataTableRowHandle bpp__BuildingObjectHandle__pf)
{
	b0l__K2Node_CustomEvent_BuildingObjectHandle_1__pf = bpp__BuildingObjectHandle__pf;
	bpf__ExecuteUbergraph_BP_Mei_BuildingComponent__pf_4(42);
}
void UBP_Mei_BuildingComponent_C__pf1731449071::bpf__TryCancelBuildxxServerx__pfTLK_Implementation()
{
	bpf__ExecuteUbergraph_BP_Mei_BuildingComponent__pf_5(41);
}
void UBP_Mei_BuildingComponent_C__pf1731449071::bpf__CancelBuildxxClientx__pfTLK_Implementation()
{
	bpf__ExecuteUbergraph_BP_Mei_BuildingComponent__pf_6(40);
}
void UBP_Mei_BuildingComponent_C__pf1731449071::bpf__TryQuickBuildxxClientx__pfTLK_Implementation()
{
	bpf__ExecuteUbergraph_BP_Mei_BuildingComponent__pf_8(37);
}
void UBP_Mei_BuildingComponent_C__pf1731449071::bpf__SendBuildingMessagexxClientx__pfTLK_Implementation(E__E_Mei_BuildingMode__pf bpp__BuildingMode__pf, bool bpp__InteractionResult__pf, const FText& bpp__Message__pf__const)
{
	typedef FText  T__Local__2;
	T__Local__2& bpp__Message__pf = *const_cast<T__Local__2 *>(&bpp__Message__pf__const);
	b0l__K2Node_CustomEvent_BuildingMode__pf = bpp__BuildingMode__pf;
	b0l__K2Node_CustomEvent_InteractionResult__pf = bpp__InteractionResult__pf;
	b0l__K2Node_CustomEvent_Message__pf = bpp__Message__pf;
	bpf__ExecuteUbergraph_BP_Mei_BuildingComponent__pf_7(35);
}
void UBP_Mei_BuildingComponent_C__pf1731449071::bpf__SetBuildingModexxClientx__pfTLK_Implementation(E__E_Mei_BuildingMode__pf bpp__BuildingMode__pf)
{
	b0l__K2Node_CustomEvent_BuildingMode_1__pf = bpp__BuildingMode__pf;
	bpf__ExecuteUbergraph_BP_Mei_BuildingComponent__pf_9(33);
}
void UBP_Mei_BuildingComponent_C__pf1731449071::bpf__UpdateBuildingListxxClientx__pfTLK_Implementation(FDataTableRowHandle bpp__BuildingListHandle__pf)
{
	b0l__K2Node_CustomEvent_BuildingListHandle__pf = bpp__BuildingListHandle__pf;
	bpf__ExecuteUbergraph_BP_Mei_BuildingComponent__pf_10(31);
}
void UBP_Mei_BuildingComponent_C__pf1731449071::bpf__HideBuildingMenuxxClientx__pfTLK_Implementation()
{
	bpf__ExecuteUbergraph_BP_Mei_BuildingComponent__pf_11(29);
}
void UBP_Mei_BuildingComponent_C__pf1731449071::bpf__ShowBuildingMenuxxClientx__pfTLK_Implementation()
{
	bpf__ExecuteUbergraph_BP_Mei_BuildingComponent__pf_12(27);
}
void UBP_Mei_BuildingComponent_C__pf1731449071::bpf__TryRepairxxServerx__pfTLK_Implementation(ABP_Mei_Building_BaseObject_C__pf2826203124* bpp__TargetObject__pf)
{
	b0l__K2Node_CustomEvent_TargetObject__pf = bpp__TargetObject__pf;
	bpf__ExecuteUbergraph_BP_Mei_BuildingComponent__pf_14(24);
}
void UBP_Mei_BuildingComponent_C__pf1731449071::bpf__TryQuickRepairxxClientx__pfTLK_Implementation()
{
	bpf__ExecuteUbergraph_BP_Mei_BuildingComponent__pf_13(22);
}
void UBP_Mei_BuildingComponent_C__pf1731449071::bpf__TryRotatexxServerx__pfTLK_Implementation(ABP_Mei_Building_BaseObject_C__pf2826203124* bpp__TargetObject__pf)
{
	b0l__K2Node_CustomEvent_TargetObject_1__pf = bpp__TargetObject__pf;
	bpf__ExecuteUbergraph_BP_Mei_BuildingComponent__pf_15(19);
}
void UBP_Mei_BuildingComponent_C__pf1731449071::bpf__TryQuickRotatexxClientx__pfTLK_Implementation()
{
	bpf__ExecuteUbergraph_BP_Mei_BuildingComponent__pf_16(17);
}
void UBP_Mei_BuildingComponent_C__pf1731449071::bpf__TryUpgradexxServerx__pfTLK_Implementation(ABP_Mei_Building_BaseObject_C__pf2826203124* bpp__TargetObject__pf)
{
	b0l__K2Node_CustomEvent_TargetObject_2__pf = bpp__TargetObject__pf;
	bpf__ExecuteUbergraph_BP_Mei_BuildingComponent__pf_18(15);
}
void UBP_Mei_BuildingComponent_C__pf1731449071::bpf__TryQuickUpgradexxClientx__pfTLK_Implementation()
{
	bpf__ExecuteUbergraph_BP_Mei_BuildingComponent__pf_17(13);
}
void UBP_Mei_BuildingComponent_C__pf1731449071::bpf__TryDestructxxServerx__pfTLK_Implementation(ABP_Mei_Building_BaseObject_C__pf2826203124* bpp__TargetObject__pf)
{
	b0l__K2Node_CustomEvent_TargetObject_3__pf = bpp__TargetObject__pf;
	bpf__ExecuteUbergraph_BP_Mei_BuildingComponent__pf_20(11);
}
void UBP_Mei_BuildingComponent_C__pf1731449071::bpf__TryQuickDestructxxClientx__pfTLK_Implementation()
{
	bpf__ExecuteUbergraph_BP_Mei_BuildingComponent__pf_19(9);
}
void UBP_Mei_BuildingComponent_C__pf1731449071::bpf__TryRemovexxServerx__pfTLK_Implementation(ABP_Mei_Building_BaseObject_C__pf2826203124* bpp__TargetObject__pf)
{
	b0l__K2Node_CustomEvent_TargetObject_4__pf = bpp__TargetObject__pf;
	bpf__ExecuteUbergraph_BP_Mei_BuildingComponent__pf_22(7);
}
void UBP_Mei_BuildingComponent_C__pf1731449071::bpf__TryQuickRemovexxClientx__pfTLK_Implementation()
{
	bpf__ExecuteUbergraph_BP_Mei_BuildingComponent__pf_21(5);
}
void UBP_Mei_BuildingComponent_C__pf1731449071::bpf__FinishBuildxxServerx__pfTLK_Implementation(UClass* bpp__BuildingObjectClass__pf, FDataTableRowHandle bpp__BuildingObjectHandle__pf, FTransform bpp__BuildingTransform__pf, AActor* bpp__TargetActor__pf)
{
	b0l__K2Node_CustomEvent_BuildingObjectClass__pf = bpp__BuildingObjectClass__pf;
	b0l__K2Node_CustomEvent_BuildingObjectHandle_2__pf = bpp__BuildingObjectHandle__pf;
	b0l__K2Node_CustomEvent_BuildingTransform__pf = bpp__BuildingTransform__pf;
	b0l__K2Node_CustomEvent_TargetActor__pf = bpp__TargetActor__pf;
	bpf__ExecuteUbergraph_BP_Mei_BuildingComponent__pf_23(1);
}
void UBP_Mei_BuildingComponent_C__pf1731449071::bpf__InitComponent__pf(/*out*/ bool& bpp__Success__pf)
{
	bool bpfv__CallFunc_IsValid_ReturnValue__pf{};
	AHUD* bpfv__CallFunc_GetHUD_ReturnValue__pf{};
	bool bpfv__CallFunc_IsValid_ReturnValue_1__pf{};
	bool bpfv__CallFunc_TryToCreateBuildingWidget_Success__pf{};
	AActor* bpfv__CallFunc_GetOwner_ReturnValue__pf{};
	APlayerController* bpfv__K2Node_DynamicCast_AsPlayer_Controller__pf{};
	bool bpfv__K2Node_DynamicCast_bSuccess__pf{};
	ACharacter* bpfv__K2Node_DynamicCast_AsCharacter__pf{};
	bool bpfv__K2Node_DynamicCast_bSuccess_1__pf{};
	AController* bpfv__CallFunc_GetController_ReturnValue__pf{};
	APlayerController* bpfv__K2Node_DynamicCast_AsPlayer_Controller_1__pf{};
	bool bpfv__K2Node_DynamicCast_bSuccess_2__pf{};
	int32 __CurrentState = 1;
	do
	{
		switch( __CurrentState )
		{
		case 1:
			{
				bpfv__CallFunc_GetOwner_ReturnValue__pf = UActorComponent::GetOwner();
				bpfv__K2Node_DynamicCast_AsPlayer_Controller__pf = Cast<APlayerController>(bpfv__CallFunc_GetOwner_ReturnValue__pf);
				bpfv__K2Node_DynamicCast_bSuccess__pf = (bpfv__K2Node_DynamicCast_AsPlayer_Controller__pf != nullptr);;
				if (!bpfv__K2Node_DynamicCast_bSuccess__pf)
				{
					__CurrentState = 9;
					break;
				}
			}
		case 2:
			{
				bpv__PlayerController__pf = bpfv__K2Node_DynamicCast_AsPlayer_Controller__pf;
			}
		case 3:
			{
				bpfv__CallFunc_IsValid_ReturnValue__pf = UKismetSystemLibrary::IsValid(bpv__PlayerController__pf);
				if (!bpfv__CallFunc_IsValid_ReturnValue__pf)
				{
					__CurrentState = -1;
					break;
				}
			}
		case 4:
			{
				if(::IsValid(bpv__PlayerController__pf))
				{
					bpfv__CallFunc_GetHUD_ReturnValue__pf = bpv__PlayerController__pf->APlayerController::GetHUD();
				}
				bpfv__CallFunc_IsValid_ReturnValue_1__pf = UKismetSystemLibrary::IsValid(bpfv__CallFunc_GetHUD_ReturnValue__pf);
				bpv__IsLocalPlayer__pf = bpfv__CallFunc_IsValid_ReturnValue_1__pf;
			}
		case 5:
			{
				if (!bpv__IsLocalPlayer__pf)
				{
					__CurrentState = -1;
					break;
				}
			}
		case 6:
			{
				bpf__TryToCreateBuildingWidget__pf(/*out*/ bpfv__CallFunc_TryToCreateBuildingWidget_Success__pf);
			}
		case 7:
			{
				SetComponentTickEnabled(true);
			}
		case 8:
			{
				bpp__Success__pf = true;
				__CurrentState = -1;
				break;
			}
		case 9:
			{
				bpfv__CallFunc_GetOwner_ReturnValue__pf = UActorComponent::GetOwner();
				bpfv__K2Node_DynamicCast_AsCharacter__pf = Cast<ACharacter>(bpfv__CallFunc_GetOwner_ReturnValue__pf);
				bpfv__K2Node_DynamicCast_bSuccess_1__pf = (bpfv__K2Node_DynamicCast_AsCharacter__pf != nullptr);;
				if (!bpfv__K2Node_DynamicCast_bSuccess_1__pf)
				{
					__CurrentState = -1;
					break;
				}
			}
		case 10:
			{
				if(::IsValid(bpfv__K2Node_DynamicCast_AsCharacter__pf))
				{
					bpfv__CallFunc_GetController_ReturnValue__pf = bpfv__K2Node_DynamicCast_AsCharacter__pf->APawn::GetController();
				}
				bpfv__K2Node_DynamicCast_AsPlayer_Controller_1__pf = Cast<APlayerController>(bpfv__CallFunc_GetController_ReturnValue__pf);
				bpfv__K2Node_DynamicCast_bSuccess_2__pf = (bpfv__K2Node_DynamicCast_AsPlayer_Controller_1__pf != nullptr);;
				if (!bpfv__K2Node_DynamicCast_bSuccess_2__pf)
				{
					__CurrentState = -1;
					break;
				}
			}
		case 11:
			{
				bpv__PlayerController__pf = bpfv__K2Node_DynamicCast_AsPlayer_Controller_1__pf;
				__CurrentState = 3;
				break;
			}
		default:
			break;
		}
	} while( __CurrentState != -1 );
}
void UBP_Mei_BuildingComponent_C__pf1731449071::bpf__ChangeBuildingRotationZ__pf(E__E_Mei_ChangeVariableOperation__pf bpp__Operation__pf, float bpp__Value__pf, /*out*/ bool& bpp__Success__pf)
{
	E__E_Mei_ChangeVariableOperation__pf bpfv__Temp_byte_Variable__pf{};
	float bpfv__CallFunc_Subtract_FloatFloat_ReturnValue__pf{};
	bool bpfv__CallFunc_Greater_FloatFloat_ReturnValue__pf{};
	float bpfv__CallFunc_Add_FloatFloat_ReturnValue__pf{};
	bool bpfv__CallFunc_Less_FloatFloat_ReturnValue__pf{};
	float bpfv__CallFunc_Add_FloatFloat_ReturnValue_1__pf{};
	float bpfv__CallFunc_Subtract_FloatFloat_ReturnValue_1__pf{};
	float bpfv__K2Node_Select_Default__pf{};
	int32 __CurrentState = 1;
	do
	{
		switch( __CurrentState )
		{
		case 1:
			{
				bpfv__Temp_byte_Variable__pf = bpp__Operation__pf;
				bpfv__CallFunc_Add_FloatFloat_ReturnValue_1__pf = UKismetMathLibrary::Add_FloatFloat(bpv__InputBuildingRotationZ__pf, bpp__Value__pf);
				bpfv__CallFunc_Subtract_FloatFloat_ReturnValue_1__pf = UKismetMathLibrary::Subtract_FloatFloat(bpv__InputBuildingRotationZ__pf, bpp__Value__pf);
				bpv__InputBuildingRotationZ__pf = TSwitchValue<E__E_Mei_ChangeVariableOperation__pf , float >(bpfv__Temp_byte_Variable__pf, bpfv__K2Node_Select_Default__pf, 3, TSwitchPair<E__E_Mei_ChangeVariableOperation__pf , float >(E__E_Mei_ChangeVariableOperation__pf::NewEnumerator0, bpfv__CallFunc_Add_FloatFloat_ReturnValue_1__pf), TSwitchPair<E__E_Mei_ChangeVariableOperation__pf , float >(E__E_Mei_ChangeVariableOperation__pf::NewEnumerator1, bpfv__CallFunc_Subtract_FloatFloat_ReturnValue_1__pf), TSwitchPair<E__E_Mei_ChangeVariableOperation__pf , float >(E__E_Mei_ChangeVariableOperation__pf::NewEnumerator2, bpp__Value__pf));
			}
		case 2:
			{
				bpfv__CallFunc_Less_FloatFloat_ReturnValue__pf = UKismetMathLibrary::Less_FloatFloat(bpv__InputBuildingRotationZ__pf, 0.000000);
				if (!bpfv__CallFunc_Less_FloatFloat_ReturnValue__pf)
				{
					__CurrentState = 5;
					break;
				}
			}
		case 3:
			{
				bpfv__CallFunc_Add_FloatFloat_ReturnValue__pf = UKismetMathLibrary::Add_FloatFloat(bpv__InputBuildingRotationZ__pf, 360.000000);
				bpv__InputBuildingRotationZ__pf = bpfv__CallFunc_Add_FloatFloat_ReturnValue__pf;
			}
		case 4:
			{
				bpp__Success__pf = true;
				__CurrentState = -1;
				break;
			}
		case 5:
			{
				bpfv__CallFunc_Greater_FloatFloat_ReturnValue__pf = UKismetMathLibrary::Greater_FloatFloat(bpv__InputBuildingRotationZ__pf, 360.000000);
				if (!bpfv__CallFunc_Greater_FloatFloat_ReturnValue__pf)
				{
					__CurrentState = -1;
					break;
				}
			}
		case 6:
			{
				bpfv__CallFunc_Subtract_FloatFloat_ReturnValue__pf = UKismetMathLibrary::Subtract_FloatFloat(bpv__InputBuildingRotationZ__pf, 360.000000);
				bpv__InputBuildingRotationZ__pf = bpfv__CallFunc_Subtract_FloatFloat_ReturnValue__pf;
				__CurrentState = 4;
				break;
			}
		default:
			break;
		}
	} while( __CurrentState != -1 );
}
void UBP_Mei_BuildingComponent_C__pf1731449071::bpf__ChangeBuildingOffsetZ__pf(E__E_Mei_ChangeVariableOperation__pf bpp__Operation__pf, float bpp__Value__pf, /*out*/ bool& bpp__Success__pf)
{
	E__E_Mei_ChangeVariableOperation__pf bpfv__Temp_byte_Variable__pf{};
	float bpfv__CallFunc_Add_FloatFloat_ReturnValue__pf{};
	float bpfv__CallFunc_Subtract_FloatFloat_ReturnValue__pf{};
	float bpfv__K2Node_Select_Default__pf{};
	float bpfv__CallFunc_FClamp_ReturnValue__pf{};
	bpfv__Temp_byte_Variable__pf = bpp__Operation__pf;
	bpfv__CallFunc_Add_FloatFloat_ReturnValue__pf = UKismetMathLibrary::Add_FloatFloat(bpv__InputBuildingOffsetZ__pf, bpp__Value__pf);
	bpfv__CallFunc_Subtract_FloatFloat_ReturnValue__pf = UKismetMathLibrary::Subtract_FloatFloat(bpv__InputBuildingOffsetZ__pf, bpp__Value__pf);
	bpfv__CallFunc_FClamp_ReturnValue__pf = UKismetMathLibrary::FClamp(TSwitchValue<E__E_Mei_ChangeVariableOperation__pf , float >(bpfv__Temp_byte_Variable__pf, bpfv__K2Node_Select_Default__pf, 3, TSwitchPair<E__E_Mei_ChangeVariableOperation__pf , float >(E__E_Mei_ChangeVariableOperation__pf::NewEnumerator0, bpfv__CallFunc_Add_FloatFloat_ReturnValue__pf), TSwitchPair<E__E_Mei_ChangeVariableOperation__pf , float >(E__E_Mei_ChangeVariableOperation__pf::NewEnumerator1, bpfv__CallFunc_Subtract_FloatFloat_ReturnValue__pf), TSwitchPair<E__E_Mei_ChangeVariableOperation__pf , float >(E__E_Mei_ChangeVariableOperation__pf::NewEnumerator2, bpp__Value__pf)), bpv__MinBuildingOffsetZ__pf, bpv__MaxBuildingOffsetZ__pf);
	bpv__InputBuildingOffsetZ__pf = bpfv__CallFunc_FClamp_ReturnValue__pf;
	bpp__Success__pf = true;
}
void UBP_Mei_BuildingComponent_C__pf1731449071::bpf__ChangeMinBuildingOffsetZ__pf(E__E_Mei_ChangeVariableOperation__pf bpp__Operation__pf, float bpp__Value__pf, /*out*/ bool& bpp__Success__pf)
{
	E__E_Mei_ChangeVariableOperation__pf bpfv__Temp_byte_Variable__pf{};
	float bpfv__CallFunc_Add_FloatFloat_ReturnValue__pf{};
	float bpfv__CallFunc_Subtract_FloatFloat_ReturnValue__pf{};
	float bpfv__K2Node_Select_Default__pf{};
	bpfv__Temp_byte_Variable__pf = bpp__Operation__pf;
	bpfv__CallFunc_Add_FloatFloat_ReturnValue__pf = UKismetMathLibrary::Add_FloatFloat(bpv__MinBuildingOffsetZ__pf, bpp__Value__pf);
	bpfv__CallFunc_Subtract_FloatFloat_ReturnValue__pf = UKismetMathLibrary::Subtract_FloatFloat(bpv__MinBuildingOffsetZ__pf, bpp__Value__pf);
	bpv__MinBuildingOffsetZ__pf = TSwitchValue<E__E_Mei_ChangeVariableOperation__pf , float >(bpfv__Temp_byte_Variable__pf, bpfv__K2Node_Select_Default__pf, 3, TSwitchPair<E__E_Mei_ChangeVariableOperation__pf , float >(E__E_Mei_ChangeVariableOperation__pf::NewEnumerator0, bpfv__CallFunc_Add_FloatFloat_ReturnValue__pf), TSwitchPair<E__E_Mei_ChangeVariableOperation__pf , float >(E__E_Mei_ChangeVariableOperation__pf::NewEnumerator1, bpfv__CallFunc_Subtract_FloatFloat_ReturnValue__pf), TSwitchPair<E__E_Mei_ChangeVariableOperation__pf , float >(E__E_Mei_ChangeVariableOperation__pf::NewEnumerator2, bpp__Value__pf));
	bpp__Success__pf = true;
}
void UBP_Mei_BuildingComponent_C__pf1731449071::bpf__ChangeMaxBuildingOffsetZ__pf(E__E_Mei_ChangeVariableOperation__pf bpp__Operation__pf, float bpp__Value__pf, /*out*/ bool& bpp__Success__pf)
{
	E__E_Mei_ChangeVariableOperation__pf bpfv__Temp_byte_Variable__pf{};
	float bpfv__CallFunc_Add_FloatFloat_ReturnValue__pf{};
	float bpfv__CallFunc_Subtract_FloatFloat_ReturnValue__pf{};
	float bpfv__K2Node_Select_Default__pf{};
	bpfv__Temp_byte_Variable__pf = bpp__Operation__pf;
	bpfv__CallFunc_Add_FloatFloat_ReturnValue__pf = UKismetMathLibrary::Add_FloatFloat(bpv__MaxBuildingOffsetZ__pf, bpp__Value__pf);
	bpfv__CallFunc_Subtract_FloatFloat_ReturnValue__pf = UKismetMathLibrary::Subtract_FloatFloat(bpv__MaxBuildingOffsetZ__pf, bpp__Value__pf);
	bpv__MaxBuildingOffsetZ__pf = TSwitchValue<E__E_Mei_ChangeVariableOperation__pf , float >(bpfv__Temp_byte_Variable__pf, bpfv__K2Node_Select_Default__pf, 3, TSwitchPair<E__E_Mei_ChangeVariableOperation__pf , float >(E__E_Mei_ChangeVariableOperation__pf::NewEnumerator0, bpfv__CallFunc_Add_FloatFloat_ReturnValue__pf), TSwitchPair<E__E_Mei_ChangeVariableOperation__pf , float >(E__E_Mei_ChangeVariableOperation__pf::NewEnumerator1, bpfv__CallFunc_Subtract_FloatFloat_ReturnValue__pf), TSwitchPair<E__E_Mei_ChangeVariableOperation__pf , float >(E__E_Mei_ChangeVariableOperation__pf::NewEnumerator2, bpp__Value__pf));
	bpp__Success__pf = true;
}
void UBP_Mei_BuildingComponent_C__pf1731449071::bpf__ChangeTraceDistance__pf(E__E_Mei_ChangeVariableOperation__pf bpp__Operation__pf, float bpp__Value__pf, /*out*/ bool& bpp__Success__pf)
{
	E__E_Mei_ChangeVariableOperation__pf bpfv__Temp_byte_Variable__pf{};
	float bpfv__CallFunc_Add_FloatFloat_ReturnValue__pf{};
	float bpfv__CallFunc_Subtract_FloatFloat_ReturnValue__pf{};
	float bpfv__K2Node_Select_Default__pf{};
	float bpfv__CallFunc_FClamp_ReturnValue__pf{};
	bpfv__Temp_byte_Variable__pf = bpp__Operation__pf;
	bpfv__CallFunc_Add_FloatFloat_ReturnValue__pf = UKismetMathLibrary::Add_FloatFloat(bpv__TraceDistance__pf, bpp__Value__pf);
	bpfv__CallFunc_Subtract_FloatFloat_ReturnValue__pf = UKismetMathLibrary::Subtract_FloatFloat(bpv__TraceDistance__pf, bpp__Value__pf);
	bpfv__CallFunc_FClamp_ReturnValue__pf = UKismetMathLibrary::FClamp(TSwitchValue<E__E_Mei_ChangeVariableOperation__pf , float >(bpfv__Temp_byte_Variable__pf, bpfv__K2Node_Select_Default__pf, 3, TSwitchPair<E__E_Mei_ChangeVariableOperation__pf , float >(E__E_Mei_ChangeVariableOperation__pf::NewEnumerator0, bpfv__CallFunc_Add_FloatFloat_ReturnValue__pf), TSwitchPair<E__E_Mei_ChangeVariableOperation__pf , float >(E__E_Mei_ChangeVariableOperation__pf::NewEnumerator1, bpfv__CallFunc_Subtract_FloatFloat_ReturnValue__pf), TSwitchPair<E__E_Mei_ChangeVariableOperation__pf , float >(E__E_Mei_ChangeVariableOperation__pf::NewEnumerator2, bpp__Value__pf)), bpv__MinTraceDistance__pf, bpv__MaxTraceDistance__pf);
	bpv__TraceDistance__pf = bpfv__CallFunc_FClamp_ReturnValue__pf;
	bpp__Success__pf = true;
}
void UBP_Mei_BuildingComponent_C__pf1731449071::bpf__ChangeMaxTraceDistance__pf(E__E_Mei_ChangeVariableOperation__pf bpp__Operation__pf, float bpp__Value__pf, /*out*/ bool& bpp__Success__pf)
{
	E__E_Mei_ChangeVariableOperation__pf bpfv__Temp_byte_Variable__pf{};
	float bpfv__CallFunc_Add_FloatFloat_ReturnValue__pf{};
	float bpfv__CallFunc_Subtract_FloatFloat_ReturnValue__pf{};
	float bpfv__K2Node_Select_Default__pf{};
	bpfv__Temp_byte_Variable__pf = bpp__Operation__pf;
	bpfv__CallFunc_Add_FloatFloat_ReturnValue__pf = UKismetMathLibrary::Add_FloatFloat(bpv__MaxTraceDistance__pf, bpp__Value__pf);
	bpfv__CallFunc_Subtract_FloatFloat_ReturnValue__pf = UKismetMathLibrary::Subtract_FloatFloat(bpv__MaxTraceDistance__pf, bpp__Value__pf);
	bpv__MaxTraceDistance__pf = TSwitchValue<E__E_Mei_ChangeVariableOperation__pf , float >(bpfv__Temp_byte_Variable__pf, bpfv__K2Node_Select_Default__pf, 3, TSwitchPair<E__E_Mei_ChangeVariableOperation__pf , float >(E__E_Mei_ChangeVariableOperation__pf::NewEnumerator0, bpfv__CallFunc_Add_FloatFloat_ReturnValue__pf), TSwitchPair<E__E_Mei_ChangeVariableOperation__pf , float >(E__E_Mei_ChangeVariableOperation__pf::NewEnumerator1, bpfv__CallFunc_Subtract_FloatFloat_ReturnValue__pf), TSwitchPair<E__E_Mei_ChangeVariableOperation__pf , float >(E__E_Mei_ChangeVariableOperation__pf::NewEnumerator2, bpp__Value__pf));
	bpp__Success__pf = true;
}
void UBP_Mei_BuildingComponent_C__pf1731449071::bpf__ChangeDisplayedFloor__pf(E__E_Mei_ChangeVariableOperation__pf bpp__Operation__pf, int32 bpp__Value__pf, bool bpp__UpdateVisibility__pf, /*out*/ bool& bpp__Success__pf)
{
	bool bpfv__LocalUpdateVisibility__pf{};
	E__E_Mei_ChangeVariableOperation__pf bpfv__Temp_byte_Variable__pf{};
	bool bpfv__CallFunc_UpdateFloorActorsVisibility_Success__pf{};
	bool bpfv__CallFunc_Greater_IntInt_ReturnValue__pf{};
	bool bpfv__Temp_bool_Variable__pf{};
	int32 bpfv__CallFunc_Add_IntInt_ReturnValue__pf{};
	int32 bpfv__CallFunc_Subtract_IntInt_ReturnValue__pf{};
	int32 bpfv__K2Node_Select_Default__pf{};
	int32 bpfv__K2Node_Select_Default_1__pf{};
	int32 bpfv__CallFunc_Clamp_ReturnValue__pf{};
	int32 __CurrentState = 1;
	do
	{
		switch( __CurrentState )
		{
		case 1:
			{
				bpfv__LocalUpdateVisibility__pf = bpp__UpdateVisibility__pf;
			}
		case 2:
			{
				bpfv__Temp_byte_Variable__pf = bpp__Operation__pf;
				bpfv__CallFunc_Greater_IntInt_ReturnValue__pf = UKismetMathLibrary::Greater_IntInt(bpv__FloorNumberLimit__pf, 0);
				bpfv__Temp_bool_Variable__pf = bpfv__CallFunc_Greater_IntInt_ReturnValue__pf;
				bpfv__CallFunc_Add_IntInt_ReturnValue__pf = UKismetMathLibrary::Add_IntInt(bpv__DisplayedFloor__pf, bpp__Value__pf);
				bpfv__CallFunc_Subtract_IntInt_ReturnValue__pf = UKismetMathLibrary::Subtract_IntInt(bpv__DisplayedFloor__pf, bpp__Value__pf);
				bpfv__CallFunc_Clamp_ReturnValue__pf = UKismetMathLibrary::Clamp(TSwitchValue<E__E_Mei_ChangeVariableOperation__pf , int32 >(bpfv__Temp_byte_Variable__pf, bpfv__K2Node_Select_Default__pf, 3, TSwitchPair<E__E_Mei_ChangeVariableOperation__pf , int32 >(E__E_Mei_ChangeVariableOperation__pf::NewEnumerator0, bpfv__CallFunc_Add_IntInt_ReturnValue__pf), TSwitchPair<E__E_Mei_ChangeVariableOperation__pf , int32 >(E__E_Mei_ChangeVariableOperation__pf::NewEnumerator1, bpfv__CallFunc_Subtract_IntInt_ReturnValue__pf), TSwitchPair<E__E_Mei_ChangeVariableOperation__pf , int32 >(E__E_Mei_ChangeVariableOperation__pf::NewEnumerator2, bpp__Value__pf)), 1, TSwitchValue<bool , int32 >(bpfv__Temp_bool_Variable__pf, bpfv__K2Node_Select_Default_1__pf, 2, TSwitchPair<bool , int32 >(false, TSwitchValue<E__E_Mei_ChangeVariableOperation__pf , int32 >(bpfv__Temp_byte_Variable__pf, bpfv__K2Node_Select_Default__pf, 3, TSwitchPair<E__E_Mei_ChangeVariableOperation__pf , int32 >(E__E_Mei_ChangeVariableOperation__pf::NewEnumerator0, bpfv__CallFunc_Add_IntInt_ReturnValue__pf), TSwitchPair<E__E_Mei_ChangeVariableOperation__pf , int32 >(E__E_Mei_ChangeVariableOperation__pf::NewEnumerator1, bpfv__CallFunc_Subtract_IntInt_ReturnValue__pf), TSwitchPair<E__E_Mei_ChangeVariableOperation__pf , int32 >(E__E_Mei_ChangeVariableOperation__pf::NewEnumerator2, bpp__Value__pf))), TSwitchPair<bool , int32 >(true, bpv__FloorNumberLimit__pf)));
				bpv__DisplayedFloor__pf = bpfv__CallFunc_Clamp_ReturnValue__pf;
			}
		case 3:
			{
				if (!bpfv__LocalUpdateVisibility__pf)
				{
					__CurrentState = -1;
					break;
				}
			}
		case 4:
			{
				bpf__UpdateFloorActorsVisibility__pf(/*out*/ bpfv__CallFunc_UpdateFloorActorsVisibility_Success__pf);
			}
		case 5:
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
void UBP_Mei_BuildingComponent_C__pf1731449071::bpf__ChangeTopDownViewMode__pf(bool bpp__TopDownViewMode__pf, bool bpp__TraceToMouseMode__pf, /*out*/ bool& bpp__Success__pf)
{
	bool bpfv__CallFunc_UpdateFloorActorsVisibility_Success__pf{};
	bool bpfv__CallFunc_ResetFloorActorsVisibility_Success__pf{};
	int32 __CurrentState = 1;
	do
	{
		switch( __CurrentState )
		{
		case 1:
			{
				bpv__TopDownViewMode__pf = bpp__TopDownViewMode__pf;
			}
		case 2:
			{
				bpv__TraceToMouseMode__pf = bpp__TraceToMouseMode__pf;
			}
		case 3:
			{
				if (!bpv__TopDownViewMode__pf)
				{
					__CurrentState = 6;
					break;
				}
			}
		case 4:
			{
				bpf__UpdateFloorActorsVisibility__pf(/*out*/ bpfv__CallFunc_UpdateFloorActorsVisibility_Success__pf);
			}
		case 5:
			{
				bpp__Success__pf = true;
				__CurrentState = -1;
				break;
			}
		case 6:
			{
				bpf__ResetFloorActorsVisibility__pf(/*out*/ bpfv__CallFunc_ResetFloorActorsVisibility_Success__pf);
				__CurrentState = 5;
				break;
			}
		default:
			break;
		}
	} while( __CurrentState != -1 );
}
void UBP_Mei_BuildingComponent_C__pf1731449071::bpf__ChangeGridMode__pf(bool bpp__GridMode__pf, /*out*/ bool& bpp__Success__pf)
{
	bpv__GridMode__pf = bpp__GridMode__pf;
	bpv__GridModeForProps__pf = bpp__GridMode__pf;
	bpp__Success__pf = true;
}
void UBP_Mei_BuildingComponent_C__pf1731449071::bpf__ChangeNearSnappingMode__pf(bool bpp__NearSnappingMode__pf, /*out*/ bool& bpp__Success__pf)
{
	bpv__NearSnappingMode__pf = bpp__NearSnappingMode__pf;
	bpp__Success__pf = true;
}
void UBP_Mei_BuildingComponent_C__pf1731449071::bpf__ChangeBuildingMode__pf(E__E_Mei_BuildingMode__pf bpp__BuildingMode__pf, /*out*/ bool& bpp__Success__pf)
{
	E__E_Mei_BuildingMode__pf bpfv__LocalPrevBuildingMode__pf{};
	E__E_Mei_BuildingMode__pf bpfv__LocalNewBuildingMode__pf{};
	bool bpfv__CallFunc_DestroyBuildingObject_Success__pf{};
	bool bpfv__CallFunc_EqualEqual_ByteByte_ReturnValue__pf{};
	int32 __CurrentState = 1;
	do
	{
		switch( __CurrentState )
		{
		case 1:
			{
				bpfv__LocalNewBuildingMode__pf = bpp__BuildingMode__pf;
			}
		case 2:
			{
				bpfv__LocalPrevBuildingMode__pf = bpv__BuildingMode__pf;
			}
		case 3:
			{
				bpv__BuildingMode__pf = bpfv__LocalNewBuildingMode__pf;
			}
		case 4:
			{
				bpf__DestroyBuildingObject__pf(/*out*/ bpfv__CallFunc_DestroyBuildingObject_Success__pf);
			}
		case 5:
			{
				bpfv__CallFunc_EqualEqual_ByteByte_ReturnValue__pf = UKismetMathLibrary::EqualEqual_ByteByte(static_cast<uint8>(bpv__BuildingMode__pf), static_cast<uint8>(E__E_Mei_BuildingMode__pf::NewEnumerator0));
				if (!bpfv__CallFunc_EqualEqual_ByteByte_ReturnValue__pf)
				{
					__CurrentState = 9;
					break;
				}
			}
		case 6:
			{
				Deactivate();
			}
		case 7:
			{
				bpv__OnBuildingModeChanged__pf.Broadcast(bpfv__LocalNewBuildingMode__pf, bpfv__LocalPrevBuildingMode__pf);
			}
		case 8:
			{
				bpp__Success__pf = true;
				__CurrentState = -1;
				break;
			}
		case 9:
			{
				Activate(false);
				__CurrentState = 7;
				break;
			}
		default:
			break;
		}
	} while( __CurrentState != -1 );
}
void UBP_Mei_BuildingComponent_C__pf1731449071::bpf__StartBuildObject__pf(FDataTableRowHandle bpp__BuildingObjectHandle__pf, /*out*/ bool& bpp__Success__pf)
{
	FTransform bpfv__CallFunc_MakeTransform_ReturnValue__pf{};
	FTransform bpfv__CallFunc_MakeTransform_ReturnValue_1__pf{};
	AActor* bpfv__CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue__pf{};
	bool bpfv__CallFunc_ChangeBuildingMode_Success__pf{};
	ABP_Mei_Building_BaseObject_C__pf2826203124* bpfv__CallFunc_FinishSpawningActor_ReturnValue__pf{};
	bool bpfv__CallFunc_DestroyBuildingObject_Success__pf{};
	bpf__ChangeBuildingMode__pf(E__E_Mei_BuildingMode__pf::NewEnumerator1, /*out*/ bpfv__CallFunc_ChangeBuildingMode_Success__pf);
	bpf__DestroyBuildingObject__pf(/*out*/ bpfv__CallFunc_DestroyBuildingObject_Success__pf);
	bpfv__CallFunc_MakeTransform_ReturnValue__pf = UKismetMathLibrary::MakeTransform(FVector(0.000000,0.000000,0.000000), FRotator(0.000000,0.000000,0.000000), FVector(1.000000,1.000000,1.000000));
	bpfv__CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue__pf = UGameplayStatics::BeginDeferredActorSpawnFromClass(this, bpv__LastBuildingObjectClass__pf, bpfv__CallFunc_MakeTransform_ReturnValue__pf, ESpawnActorCollisionHandlingMethod::AlwaysSpawn, ((AActor*)nullptr));
	bpfv__CallFunc_MakeTransform_ReturnValue__pf = UKismetMathLibrary::MakeTransform(FVector(0.000000,0.000000,0.000000), FRotator(0.000000,0.000000,0.000000), FVector(1.000000,1.000000,1.000000));
	bpfv__CallFunc_FinishSpawningActor_ReturnValue__pf = CastChecked<ABP_Mei_Building_BaseObject_C__pf2826203124>(UGameplayStatics::FinishSpawningActor(bpfv__CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue__pf, bpfv__CallFunc_MakeTransform_ReturnValue__pf), ECastCheckedType::NullAllowed);
	bpv__BuildingObject__pf = bpfv__CallFunc_FinishSpawningActor_ReturnValue__pf;
	bpfv__CallFunc_MakeTransform_ReturnValue_1__pf = UKismetMathLibrary::MakeTransform(FVector(0.000000,0.000000,0.000000), FRotator(0.000000,0.000000,0.000000), FVector(1.000000,1.000000,1.000000));
	bpv__BuildTransform__pf = bpfv__CallFunc_MakeTransform_ReturnValue_1__pf;
	bpp__Success__pf = true;
}
void UBP_Mei_BuildingComponent_C__pf1731449071::bpf__CancelBuild__pf(/*out*/ bool& bpp__Success__pf)
{
	bool bpfv__CallFunc_ChangeBuildingMode_Success__pf{};
	bpf__ChangeBuildingMode__pf(E__E_Mei_BuildingMode__pf::NewEnumerator0, /*out*/ bpfv__CallFunc_ChangeBuildingMode_Success__pf);
	bpp__Success__pf = true;
}
void UBP_Mei_BuildingComponent_C__pf1731449071::bpf__TryBuild__pf(/*out*/ bool& bpp__Success__pf)
{
	int32 bpfv__LocalFloorNumber__pf{};
	bool bpfv__CallFunc_ChangeBuildingMode_Success__pf{};
	bool bpfv__CallFunc_DestroyBuildingObject_Success__pf{};
	int32 __CurrentState = 1;
	do
	{
		switch( __CurrentState )
		{
		case 1:
			{
				bpfv__LocalFloorNumber__pf = 0;
			}
		case 2:
			{
				if (!bpv__CanBeBuilt__pf)
				{
					__CurrentState = 8;
					break;
				}
			}
		case 3:
			{
				bpf__DestroyBuildingObject__pf(/*out*/ bpfv__CallFunc_DestroyBuildingObject_Success__pf);
			}
		case 4:
			{
				bpf__FinishBuildxxServerx__pfTLK(bpv__LastBuildingObjectClass__pf, bpv__LastBuildingObjectHandle__pf, bpv__BuildTransform__pf, bpv__TargetActor__pf);
			}
		case 5:
			{
				if (!bpv__AutoStartBuildMode__pf)
				{
					__CurrentState = 10;
					break;
				}
			}
		case 6:
			{
				bpf__TryStartBuildObjectxxServerx__pfTLK(bpv__LastBuildingObjectHandle__pf);
			}
		case 7:
			{
				bpp__Success__pf = true;
				__CurrentState = -1;
				break;
			}
		case 8:
			{
				bpf__SendBuildingMessagexxClientx__pfTLK(E__E_Mei_BuildingMode__pf::NewEnumerator0, false, FTextStringHelper::CreateFromBuffer(
TEXT("NSLOCTEXT(\"[5A93550A4BE6203FC591F7828865BF25]\", \"E2CB213E406D16A80A90F0B48CB6B04D\", \"You can\\'t build here.\")")	));
			}
		case 9:
			{
				bpp__Success__pf = false;
				__CurrentState = -1;
				break;
			}
		case 10:
			{
				bpf__ChangeBuildingMode__pf(E__E_Mei_BuildingMode__pf::NewEnumerator0, /*out*/ bpfv__CallFunc_ChangeBuildingMode_Success__pf);
				__CurrentState = 7;
				break;
			}
		default:
			break;
		}
	} while( __CurrentState != -1 );
}
void UBP_Mei_BuildingComponent_C__pf1731449071::bpf__DestroyBuildingObject__pf(/*out*/ bool& bpp__Success__pf)
{
	bool bpfv__CallFunc_IsValid_ReturnValue__pf{};
	int32 __CurrentState = 1;
	do
	{
		switch( __CurrentState )
		{
		case 1:
			{
				bpfv__CallFunc_IsValid_ReturnValue__pf = UKismetSystemLibrary::IsValid(bpv__BuildingObject__pf);
				if (!bpfv__CallFunc_IsValid_ReturnValue__pf)
				{
					__CurrentState = -1;
					break;
				}
			}
		case 2:
			{
				if(::IsValid(bpv__BuildingObject__pf))
				{
					bpv__BuildingObject__pf->K2_DestroyActor();
				}
			}
		case 3:
			{
				bpv__BuildingObject__pf = ((ABP_Mei_Building_BaseObject_C__pf2826203124*)nullptr);
			}
		case 4:
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
void UBP_Mei_BuildingComponent_C__pf1731449071::bpf__TryRemove__pf(ABP_Mei_Building_BaseObject_C__pf2826203124* bpp__TargetObject__pf, /*out*/ bool& bpp__Success__pf)
{
	ABP_Mei_Building_BaseObject_C__pf2826203124* bpfv__LocalBuildingObject__pf{};
	bool bpfv__CallFunc_CompleteRemove_Success__pf{};
	bool bpfv__CallFunc_CheckClaim_Result__pf{};
	bool bpfv__CallFunc_IsValid_ReturnValue__pf{};
	int32 __CurrentState = 1;
	do
	{
		switch( __CurrentState )
		{
		case 1:
			{
				bpfv__LocalBuildingObject__pf = bpp__TargetObject__pf;
			}
		case 2:
			{
				bpfv__CallFunc_IsValid_ReturnValue__pf = UKismetSystemLibrary::IsValid(bpfv__LocalBuildingObject__pf);
				if (!bpfv__CallFunc_IsValid_ReturnValue__pf)
				{
					__CurrentState = 10;
					break;
				}
			}
		case 3:
			{
				if(::IsValid(bpfv__LocalBuildingObject__pf))
				{
					bpfv__LocalBuildingObject__pf->bpf__CheckClaim__pf(bpv__PlayerController__pf, /*out*/ bpfv__CallFunc_CheckClaim_Result__pf);
				}
			}
		case 4:
			{
				if (!bpfv__CallFunc_CheckClaim_Result__pf)
				{
					__CurrentState = 10;
					break;
				}
			}
		case 5:
			{
				if(::IsValid(bpfv__LocalBuildingObject__pf))
				{
					bpfv__LocalBuildingObject__pf->bpf__CompleteRemove__pf(bpv__PlayerController__pf, false, /*out*/ bpfv__CallFunc_CompleteRemove_Success__pf);
				}
			}
		case 6:
			{
				bpf__SendBuildingMessagexxClientx__pfTLK(E__E_Mei_BuildingMode__pf::NewEnumerator5, true, FTextStringHelper::CreateFromBuffer(
TEXT("NSLOCTEXT(\"[5A93550A4BE6203FC591F7828865BF25]\", \"CE8D80AA4B3BEA5C14FC009E66313FE5\", \"Removing completed!\")")	));
			}
		case 7:
			{
				bpv__OnBuildingInteractionCompleted__pf.Broadcast(E__E_Mei_BuildingMode__pf::NewEnumerator5, bpfv__LocalBuildingObject__pf);
			}
		case 8:
			{
				bpv__OnRemovingCompleted__pf.Broadcast(bpfv__LocalBuildingObject__pf);
			}
		case 9:
			{
				bpp__Success__pf = true;
				__CurrentState = -1;
				break;
			}
		case 10:
			{
				bpf__SendBuildingMessagexxClientx__pfTLK(E__E_Mei_BuildingMode__pf::NewEnumerator5, false, FTextStringHelper::CreateFromBuffer(
TEXT("NSLOCTEXT(\"[5A93550A4BE6203FC591F7828865BF25]\", \"C6B9C83C454FB29A7A87EE9408BC608C\", \"You can\\'t remove the target object.\")")	));
			}
		case 11:
			{
				bpp__Success__pf = false;
				__CurrentState = -1;
				break;
			}
		default:
			break;
		}
	} while( __CurrentState != -1 );
}
void UBP_Mei_BuildingComponent_C__pf1731449071::bpf__TryDestruct__pf(ABP_Mei_Building_BaseObject_C__pf2826203124* bpp__TargetObject__pf, /*out*/ bool& bpp__Success__pf)
{
	ABP_Mei_Building_BaseObject_C__pf2826203124* bpfv__LocalBuildingObject__pf{};
	bool bpfv__CallFunc_CompleteRemove_Success__pf{};
	bool bpfv__CallFunc_CheckClaim_Result__pf{};
	bool bpfv__CallFunc_IsValid_ReturnValue__pf{};
	int32 __CurrentState = 1;
	do
	{
		switch( __CurrentState )
		{
		case 1:
			{
				bpfv__LocalBuildingObject__pf = bpp__TargetObject__pf;
			}
		case 2:
			{
				bpfv__CallFunc_IsValid_ReturnValue__pf = UKismetSystemLibrary::IsValid(bpfv__LocalBuildingObject__pf);
				if (!bpfv__CallFunc_IsValid_ReturnValue__pf)
				{
					__CurrentState = 10;
					break;
				}
			}
		case 3:
			{
				if(::IsValid(bpfv__LocalBuildingObject__pf))
				{
					bpfv__LocalBuildingObject__pf->bpf__CheckClaim__pf(bpv__PlayerController__pf, /*out*/ bpfv__CallFunc_CheckClaim_Result__pf);
				}
			}
		case 4:
			{
				if (!bpfv__CallFunc_CheckClaim_Result__pf)
				{
					__CurrentState = 10;
					break;
				}
			}
		case 5:
			{
				if(::IsValid(bpfv__LocalBuildingObject__pf))
				{
					bpfv__LocalBuildingObject__pf->bpf__CompleteRemove__pf(bpv__PlayerController__pf, false, /*out*/ bpfv__CallFunc_CompleteRemove_Success__pf);
				}
			}
		case 6:
			{
				bpf__SendBuildingMessagexxClientx__pfTLK(E__E_Mei_BuildingMode__pf::NewEnumerator4, true, FTextStringHelper::CreateFromBuffer(
TEXT("NSLOCTEXT(\"[5A93550A4BE6203FC591F7828865BF25]\", \"FDE9E95D4451E4676FE04BB0AD637F47\", \"Destruction completed!\")")	));
			}
		case 7:
			{
				bpv__OnBuildingInteractionCompleted__pf.Broadcast(E__E_Mei_BuildingMode__pf::NewEnumerator4, bpfv__LocalBuildingObject__pf);
			}
		case 8:
			{
				bpv__OnDestructionCompleted__pf.Broadcast(bpfv__LocalBuildingObject__pf);
			}
		case 9:
			{
				bpp__Success__pf = true;
				__CurrentState = -1;
				break;
			}
		case 10:
			{
				bpf__SendBuildingMessagexxClientx__pfTLK(E__E_Mei_BuildingMode__pf::NewEnumerator4, false, FTextStringHelper::CreateFromBuffer(
TEXT("NSLOCTEXT(\"[5A93550A4BE6203FC591F7828865BF25]\", \"5A88C31F4C5D55C9E4FE32B8B8638672\", \"You can\\'t destruct the target object.\")")	));
			}
		case 11:
			{
				bpp__Success__pf = false;
				__CurrentState = -1;
				break;
			}
		default:
			break;
		}
	} while( __CurrentState != -1 );
}
void UBP_Mei_BuildingComponent_C__pf1731449071::bpf__TryRepair__pf(ABP_Mei_Building_BaseObject_C__pf2826203124* bpp__TargetObject__pf, /*out*/ bool& bpp__Success__pf)
{
	ABP_Mei_Building_BaseObject_C__pf2826203124* bpfv__LocalBuildingObject__pf{};
	bool bpfv__CallFunc_IsValid_ReturnValue__pf{};
	bool bpfv__CallFunc_CompleteRepair_Success__pf{};
	bool bpfv__CallFunc_CheckRepair_Result__pf{};
	int32 __CurrentState = 1;
	do
	{
		switch( __CurrentState )
		{
		case 1:
			{
				bpfv__LocalBuildingObject__pf = bpp__TargetObject__pf;
			}
		case 2:
			{
				bpfv__CallFunc_IsValid_ReturnValue__pf = UKismetSystemLibrary::IsValid(bpfv__LocalBuildingObject__pf);
				if (!bpfv__CallFunc_IsValid_ReturnValue__pf)
				{
					__CurrentState = 10;
					break;
				}
			}
		case 3:
			{
				if(::IsValid(bpfv__LocalBuildingObject__pf))
				{
					bpfv__LocalBuildingObject__pf->bpf__CheckRepair__pf(bpv__PlayerController__pf, /*out*/ bpfv__CallFunc_CheckRepair_Result__pf);
				}
			}
		case 4:
			{
				if (!true)
				{
					__CurrentState = 10;
					break;
				}
			}
		case 5:
			{
				if(::IsValid(bpfv__LocalBuildingObject__pf))
				{
					bpfv__LocalBuildingObject__pf->bpf__CompleteRepair__pf(bpv__PlayerController__pf, /*out*/ bpfv__CallFunc_CompleteRepair_Success__pf);
				}
			}
		case 6:
			{
				bpf__SendBuildingMessagexxClientx__pfTLK(E__E_Mei_BuildingMode__pf::NewEnumerator2, true, FTextStringHelper::CreateFromBuffer(
TEXT("NSLOCTEXT(\"[5A93550A4BE6203FC591F7828865BF25]\", \"FD6999174DBA6645CC18979249DBE1B2\", \"Repairing completed!\")")	));
			}
		case 7:
			{
				bpv__OnBuildingInteractionCompleted__pf.Broadcast(E__E_Mei_BuildingMode__pf::NewEnumerator2, bpfv__LocalBuildingObject__pf);
			}
		case 8:
			{
				bpv__OnRepairingCompleted__pf.Broadcast(bpfv__LocalBuildingObject__pf);
			}
		case 9:
			{
				bpp__Success__pf = true;
				__CurrentState = -1;
				break;
			}
		case 10:
			{
				bpf__SendBuildingMessagexxClientx__pfTLK(E__E_Mei_BuildingMode__pf::NewEnumerator2, false, FTextStringHelper::CreateFromBuffer(
TEXT("NSLOCTEXT(\"[5A93550A4BE6203FC591F7828865BF25]\", \"6F2CAAD344A8780A51449793131A9C8B\", \"You can\\'t repair the target object.\")")	));
			}
		case 11:
			{
				bpp__Success__pf = false;
				__CurrentState = -1;
				break;
			}
		default:
			break;
		}
	} while( __CurrentState != -1 );
}
void UBP_Mei_BuildingComponent_C__pf1731449071::bpf__TryUpgrade__pf(ABP_Mei_Building_BaseObject_C__pf2826203124* bpp__TargetObject__pf, /*out*/ bool& bpp__Success__pf, /*out*/ FText& bpp__Message__pf)
{
	ABP_Mei_Building_BaseObject_C__pf2826203124* bpfv__LocalBuildingObject__pf{};
	bool bpfv__CallFunc_IsValid_ReturnValue__pf{};
	bool bpfv__CallFunc_CompleteUpgrade_Success__pf{};
	bool bpfv__CallFunc_CheckUpgrade_Success__pf{};
	int32 __CurrentState = 1;
	do
	{
		switch( __CurrentState )
		{
		case 1:
			{
				bpfv__LocalBuildingObject__pf = bpp__TargetObject__pf;
			}
		case 2:
			{
				bpfv__CallFunc_IsValid_ReturnValue__pf = UKismetSystemLibrary::IsValid(bpfv__LocalBuildingObject__pf);
				if (!bpfv__CallFunc_IsValid_ReturnValue__pf)
				{
					__CurrentState = 10;
					break;
				}
			}
		case 3:
			{
				if(::IsValid(bpfv__LocalBuildingObject__pf))
				{
					bpfv__LocalBuildingObject__pf->bpf__CheckUpgrade__pf(bpv__PlayerController__pf, /*out*/ bpfv__CallFunc_CheckUpgrade_Success__pf);
				}
			}
		case 4:
			{
				if (!bpfv__CallFunc_CheckUpgrade_Success__pf)
				{
					__CurrentState = 10;
					break;
				}
			}
		case 5:
			{
				if(::IsValid(bpfv__LocalBuildingObject__pf))
				{
					bpfv__LocalBuildingObject__pf->bpf__CompleteUpgrade__pf(bpv__PlayerController__pf, /*out*/ bpfv__CallFunc_CompleteUpgrade_Success__pf);
				}
			}
		case 6:
			{
				bpf__SendBuildingMessagexxClientx__pfTLK(E__E_Mei_BuildingMode__pf::NewEnumerator3, true, FTextStringHelper::CreateFromBuffer(
TEXT("NSLOCTEXT(\"[5A93550A4BE6203FC591F7828865BF25]\", \"C93EF3B5443DAC867E04AB841CCD2E68\", \"Upgrading completed!\")")	));
			}
		case 7:
			{
				bpv__OnBuildingInteractionCompleted__pf.Broadcast(E__E_Mei_BuildingMode__pf::NewEnumerator3, bpfv__LocalBuildingObject__pf);
			}
		case 8:
			{
				bpv__OnUpgradingCompleted__pf.Broadcast(bpfv__LocalBuildingObject__pf);
			}
		case 9:
			{
				bpp__Success__pf = true;
				bpp__Message__pf = FText::GetEmpty();
				__CurrentState = -1;
				break;
			}
		case 10:
			{
				bpf__SendBuildingMessagexxClientx__pfTLK(E__E_Mei_BuildingMode__pf::NewEnumerator3, false, FTextStringHelper::CreateFromBuffer(
TEXT("NSLOCTEXT(\"[5A93550A4BE6203FC591F7828865BF25]\", \"5BC34F3943F8A3BFD688B58F699A6975\", \"You can\\'t upgrade the target object.\")")	));
			}
		case 11:
			{
				bpp__Success__pf = false;
				bpp__Message__pf = FText::GetEmpty();
				__CurrentState = -1;
				break;
			}
		default:
			break;
		}
	} while( __CurrentState != -1 );
}
void UBP_Mei_BuildingComponent_C__pf1731449071::bpf__TryRotate__pf(ABP_Mei_Building_BaseObject_C__pf2826203124* bpp__TargetObject__pf, /*out*/ bool& bpp__Success__pf)
{
	ABP_Mei_Building_BaseObject_C__pf2826203124* bpfv__LocalBuildingObject__pf{};
	bool bpfv__CallFunc_IsValid_ReturnValue__pf{};
	bool bpfv__CallFunc_CompleteRotate_Success__pf{};
	bool bpfv__CallFunc_CheckRotate_Success__pf{};
	int32 __CurrentState = 1;
	do
	{
		switch( __CurrentState )
		{
		case 1:
			{
				bpfv__LocalBuildingObject__pf = bpp__TargetObject__pf;
			}
		case 2:
			{
				bpfv__CallFunc_IsValid_ReturnValue__pf = UKismetSystemLibrary::IsValid(bpfv__LocalBuildingObject__pf);
				if (!bpfv__CallFunc_IsValid_ReturnValue__pf)
				{
					__CurrentState = 10;
					break;
				}
			}
		case 3:
			{
				if(::IsValid(bpfv__LocalBuildingObject__pf))
				{
					bpfv__LocalBuildingObject__pf->bpf__CheckRotate__pf(bpv__PlayerController__pf, /*out*/ bpfv__CallFunc_CheckRotate_Success__pf);
				}
			}
		case 4:
			{
				if (!bpfv__CallFunc_CheckRotate_Success__pf)
				{
					__CurrentState = 10;
					break;
				}
			}
		case 5:
			{
				if(::IsValid(bpfv__LocalBuildingObject__pf))
				{
					bpfv__LocalBuildingObject__pf->bpf__CompleteRotate__pf(bpv__PlayerController__pf, /*out*/ bpfv__CallFunc_CompleteRotate_Success__pf);
				}
			}
		case 6:
			{
				bpf__SendBuildingMessagexxClientx__pfTLK(E__E_Mei_BuildingMode__pf::NewEnumerator6, true, FTextStringHelper::CreateFromBuffer(
TEXT("NSLOCTEXT(\"[5A93550A4BE6203FC591F7828865BF25]\", \"7C49B03A4AAEFD7F6808B28715F1A094\", \"Rotation completed!\")")	));
			}
		case 7:
			{
				bpv__OnBuildingInteractionCompleted__pf.Broadcast(E__E_Mei_BuildingMode__pf::NewEnumerator6, bpfv__LocalBuildingObject__pf);
			}
		case 8:
			{
				bpv__OnRotationCompleted__pf.Broadcast(bpfv__LocalBuildingObject__pf);
			}
		case 9:
			{
				bpp__Success__pf = true;
				__CurrentState = -1;
				break;
			}
		case 10:
			{
				bpf__SendBuildingMessagexxClientx__pfTLK(E__E_Mei_BuildingMode__pf::NewEnumerator6, false, FTextStringHelper::CreateFromBuffer(
TEXT("NSLOCTEXT(\"[5A93550A4BE6203FC591F7828865BF25]\", \"8DA96709423C69D698E3AE964E3CD13F\", \"You can\\'t rotate the target object.\")")	));
			}
		case 11:
			{
				bpp__Success__pf = false;
				__CurrentState = -1;
				break;
			}
		default:
			break;
		}
	} while( __CurrentState != -1 );
}
void UBP_Mei_BuildingComponent_C__pf1731449071::bpf__FinishBuild__pf(UClass* bpp__BuildingObjectClass__pf, FDataTableRowHandle bpp__BuildingObjectHandle__pf, FTransform bpp__BuildingTransform__pf, AActor* bpp__TargetActor__pf, /*out*/ bool& bpp__Success__pf)
{
	ABP_Mei_Building_BaseObject_C__pf2826203124* bpfv__LocalBuildingObject__pf{};
	AActor* bpfv__LocalTargetActor__pf{};
	FTransform bpfv__LocalTransform__pf{};
	FDataTableRowHandle bpfv__LocalBuildingObjectHandle__pf{};
	UClass* bpfv__LocalBuildingObjectClass__pf{};
	bool bpfv__CallFunc_CompleteRemove_Success__pf{};
	bool bpfv__CallFunc_CheckSupport_HasSupport__pf{};
	bool bpfv__CallFunc_CompleteBuild_Success__pf{};
	bool bpfv__CallFunc_CompleteBuildingRequirements_Success__pf{};
	AActor* bpfv__CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue__pf{};
	ABP_Mei_Building_BaseObject_C__pf2826203124* bpfv__CallFunc_FinishSpawningActor_ReturnValue__pf{};
	AActor* bpfv__CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue_1__pf{};
	ABP_Mei_Building_BaseObject_C__pf2826203124* bpfv__CallFunc_FinishSpawningActor_ReturnValue_1__pf{};
	bool bpfv__CallFunc_CheckAndAttachToTarget_Success__pf{};
	bool bpfv__CallFunc_CheckBuildStatus_CanBeBuilt__pf{};
	int32 __CurrentState = 1;
	do
	{
		switch( __CurrentState )
		{
		case 1:
			{
				const UScriptStruct* __Local__4 = FDataTableRowHandle::StaticStruct();
				uint8* __Local__5 = (uint8*)FMemory_Alloca(__Local__4->GetStructureSize());
				__Local__4->InitializeStruct(__Local__5);
				FDataTableRowHandle& __Local__3 = *reinterpret_cast<FDataTableRowHandle*>(__Local__5);
				bpfv__LocalBuildingObjectHandle__pf = __Local__3;
			}
		case 2:
			{
				bpfv__LocalBuildingObjectClass__pf = bpp__BuildingObjectClass__pf;
			}
		case 3:
			{
				bpfv__LocalTransform__pf = bpp__BuildingTransform__pf;
			}
		case 4:
			{
				bpfv__LocalTargetActor__pf = bpp__TargetActor__pf;
			}
		case 5:
			{
				bpfv__CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue_1__pf = UGameplayStatics::BeginDeferredActorSpawnFromClass(this, bpfv__LocalBuildingObjectClass__pf, bpfv__LocalTransform__pf, ESpawnActorCollisionHandlingMethod::Undefined, ((AActor*)nullptr));
			}
		case 6:
			{
				bpfv__CallFunc_FinishSpawningActor_ReturnValue_1__pf = CastChecked<ABP_Mei_Building_BaseObject_C__pf2826203124>(UGameplayStatics::FinishSpawningActor(bpfv__CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue_1__pf, bpfv__LocalTransform__pf), ECastCheckedType::NullAllowed);
			}
		case 7:
			{
				if(::IsValid(bpfv__CallFunc_FinishSpawningActor_ReturnValue_1__pf))
				{
					bpfv__CallFunc_FinishSpawningActor_ReturnValue_1__pf->bpf__CheckBuildStatus__pf(bpfv__LocalTargetActor__pf, /*out*/ bpfv__CallFunc_CheckBuildStatus_CanBeBuilt__pf);
				}
			}
		case 8:
			{
				if(::IsValid(bpfv__CallFunc_FinishSpawningActor_ReturnValue_1__pf))
				{
					bpfv__CallFunc_FinishSpawningActor_ReturnValue_1__pf->K2_DestroyActor();
				}
			}
		case 9:
			{
				if (!bpfv__CallFunc_CheckBuildStatus_CanBeBuilt__pf)
				{
					__CurrentState = 24;
					break;
				}
			}
		case 10:
			{
				bpfv__CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue__pf = UGameplayStatics::BeginDeferredActorSpawnFromClass(this, bpfv__LocalBuildingObjectClass__pf, bpfv__LocalTransform__pf, ESpawnActorCollisionHandlingMethod::Undefined, ((AActor*)nullptr));
			}
		case 11:
			{
				FCustomThunkTemplates::SetStructurePropertyByName(bpfv__CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue__pf, FName(TEXT("BuildingObjectHandle")), bpfv__LocalBuildingObjectHandle__pf);
			}
		case 12:
			{
				UKismetSystemLibrary::SetBoolPropertyByName(bpfv__CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue__pf, FName(TEXT("Built")), true);
			}
		case 13:
			{
				bpfv__CallFunc_FinishSpawningActor_ReturnValue__pf = CastChecked<ABP_Mei_Building_BaseObject_C__pf2826203124>(UGameplayStatics::FinishSpawningActor(bpfv__CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue__pf, bpfv__LocalTransform__pf), ECastCheckedType::NullAllowed);
			}
		case 14:
			{
				bpfv__LocalBuildingObject__pf = bpfv__CallFunc_FinishSpawningActor_ReturnValue__pf;
			}
		case 15:
			{
				if(::IsValid(bpfv__LocalBuildingObject__pf))
				{
					bpfv__LocalBuildingObject__pf->bpf__CheckAndAttachToTarget__pf(bpfv__LocalTargetActor__pf, /*out*/ bpfv__CallFunc_CheckAndAttachToTarget_Success__pf);
				}
			}
		case 16:
			{
				bpf__CompleteBuildingRequirements__pf(bpfv__LocalBuildingObjectHandle__pf, /*out*/ bpfv__CallFunc_CompleteBuildingRequirements_Success__pf);
			}
		case 17:
			{
				if(::IsValid(bpfv__LocalBuildingObject__pf))
				{
					bpfv__LocalBuildingObject__pf->bpf__CheckSupport__pf(/*out*/ bpfv__CallFunc_CheckSupport_HasSupport__pf);
				}
			}
		case 18:
			{
				if (!bpfv__CallFunc_CheckSupport_HasSupport__pf)
				{
					__CurrentState = 25;
					break;
				}
			}
		case 19:
			{
				if(::IsValid(bpfv__LocalBuildingObject__pf))
				{
					bpfv__LocalBuildingObject__pf->bpf__CompleteBuild__pf(bpv__PlayerController__pf, /*out*/ bpfv__CallFunc_CompleteBuild_Success__pf);
				}
			}
		case 20:
			{
				bpf__SendBuildingMessagexxClientx__pfTLK(E__E_Mei_BuildingMode__pf::NewEnumerator1, true, FTextStringHelper::CreateFromBuffer(
TEXT("NSLOCTEXT(\"[5A93550A4BE6203FC591F7828865BF25]\", \"C0EE266E4D97C93C85F6C283528220F7\", \"Building completed!\")")	));
			}
		case 21:
			{
				bpv__OnBuildingInteractionCompleted__pf.Broadcast(E__E_Mei_BuildingMode__pf::NewEnumerator1, bpfv__LocalBuildingObject__pf);
			}
		case 22:
			{
				bpv__OnBuildingCompleted__pf.Broadcast(bpfv__LocalBuildingObject__pf, bpfv__LocalTargetActor__pf);
			}
		case 23:
			{
				bpp__Success__pf = true;
				__CurrentState = -1;
				break;
			}
		case 24:
			{
				bpf__SendBuildingMessagexxClientx__pfTLK(E__E_Mei_BuildingMode__pf::NewEnumerator1, false, FTextStringHelper::CreateFromBuffer(
TEXT("NSLOCTEXT(\"[5A93550A4BE6203FC591F7828865BF25]\", \"0DA35E954AB6D75860C09ABEDAAF7DC7\", \"You can\\'t build here.\")")	));
				__CurrentState = -1;
				break;
			}
		case 25:
			{
				if(::IsValid(bpfv__LocalBuildingObject__pf))
				{
					bpfv__LocalBuildingObject__pf->bpf__CompleteRemove__pf(bpv__PlayerController__pf, false, /*out*/ bpfv__CallFunc_CompleteRemove_Success__pf);
				}
				__CurrentState = 20;
				break;
			}
		default:
			break;
		}
	} while( __CurrentState != -1 );
}
void UBP_Mei_BuildingComponent_C__pf1731449071::bpf__CheckBuildingRequirements__pf(FDataTableRowHandle bpp__BuildingObjectHandle__pf, /*out*/ bool& bpp__Success__pf)
{
	FSTR_Mei_BuildingObjectSettings__pf4030501756 bpfv__CallFunc_GetDataTableRowFromName_OutRow__pf{};
	bool bpfv__CallFunc_GetDataTableRowFromName_ReturnValue__pf{};
	TScriptInterface<IBPI_Mei_Player_C> bpfv__K2Node_DynamicCast_AsBPI_Mei_Player__pf{};
	bool bpfv__K2Node_DynamicCast_bSuccess__pf{};
	bool bpfv__CallFunc_IsValid_ReturnValue__pf{};
	bool bpfv__CallFunc_CheckRequirements_BPI_Success__pf{};
	bool bpfv__CallFunc_DoesImplementInterface_ReturnValue__pf{};
	int32 __CurrentState = 1;
	do
	{
		switch( __CurrentState )
		{
		case 1:
			{
				bpfv__CallFunc_DoesImplementInterface_ReturnValue__pf = UKismetSystemLibrary::DoesImplementInterface(bpv__PlayerController__pf, UBPI_Mei_Player_C::StaticClass());
				if (!bpfv__CallFunc_DoesImplementInterface_ReturnValue__pf)
				{
					__CurrentState = 8;
					break;
				}
			}
		case 2:
			{
				bpfv__CallFunc_IsValid_ReturnValue__pf = UKismetSystemLibrary::IsValid(const_cast<UDataTable*>(bpp__BuildingObjectHandle__pf.DataTable));
				if (!bpfv__CallFunc_IsValid_ReturnValue__pf)
				{
					__CurrentState = 8;
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
					__CurrentState = 9;
					break;
				}
			}
		case 5:
			{
				if ( bpv__PlayerController__pf && bpv__PlayerController__pf->GetClass()->ImplementsInterface(UBPI_Mei_Player_C::StaticClass()) )
				{
					bpfv__K2Node_DynamicCast_AsBPI_Mei_Player__pf.SetObject(bpv__PlayerController__pf);
					void* IAddress = bpv__PlayerController__pf->GetInterfaceAddress(UBPI_Mei_Player_C::StaticClass());
					bpfv__K2Node_DynamicCast_AsBPI_Mei_Player__pf.SetInterface(IAddress);
				}
				else
				{
					bpfv__K2Node_DynamicCast_AsBPI_Mei_Player__pf.SetObject(nullptr);
				}
				bpfv__K2Node_DynamicCast_bSuccess__pf = (bpfv__K2Node_DynamicCast_AsBPI_Mei_Player__pf != nullptr);;
				if (!bpfv__K2Node_DynamicCast_bSuccess__pf)
				{
					__CurrentState = 10;
					break;
				}
			}
		case 6:
			{
				if(::IsValid(bpfv__K2Node_DynamicCast_AsBPI_Mei_Player__pf))
				{
					IBPI_Mei_Player_C::Execute_bpf__CheckRequirements_BPI__pf(bpfv__K2Node_DynamicCast_AsBPI_Mei_Player__pf.GetObject() , bpfv__CallFunc_GetDataTableRowFromName_OutRow__pf.bpv__Handle_2_D22EB0614ADF35BBF5A4879D3DDB4182__pf, /*out*/ bpfv__CallFunc_CheckRequirements_BPI_Success__pf);
				}
			}
		case 7:
			{
				bpp__Success__pf = bpfv__CallFunc_CheckRequirements_BPI_Success__pf;
				__CurrentState = -1;
				break;
			}
		case 8:
			{
				bpp__Success__pf = true;
				__CurrentState = -1;
				break;
			}
		case 9:
			{
				bpp__Success__pf = false;
				__CurrentState = -1;
				break;
			}
		case 10:
			{
				bpfv__CallFunc_CheckRequirements_BPI_Success__pf = false;
				__CurrentState = 7;
				break;
			}
		default:
			break;
		}
	} while( __CurrentState != -1 );
}
void UBP_Mei_BuildingComponent_C__pf1731449071::bpf__CompleteBuildingRequirements__pf(FDataTableRowHandle bpp__BuildingObjectHandle__pf, /*out*/ bool& bpp__Success__pf)
{
	FSTR_Mei_BuildingObjectSettings__pf4030501756 bpfv__CallFunc_GetDataTableRowFromName_OutRow__pf{};
	bool bpfv__CallFunc_GetDataTableRowFromName_ReturnValue__pf{};
	TScriptInterface<IBPI_Mei_Player_C> bpfv__K2Node_DynamicCast_AsBPI_Mei_Player__pf{};
	bool bpfv__K2Node_DynamicCast_bSuccess__pf{};
	bool bpfv__CallFunc_IsValid_ReturnValue__pf{};
	bool bpfv__CallFunc_DoesImplementInterface_ReturnValue__pf{};
	int32 __CurrentState = 1;
	do
	{
		switch( __CurrentState )
		{
		case 1:
			{
				bpfv__CallFunc_DoesImplementInterface_ReturnValue__pf = UKismetSystemLibrary::DoesImplementInterface(bpv__PlayerController__pf, UBPI_Mei_Player_C::StaticClass());
				if (!bpfv__CallFunc_DoesImplementInterface_ReturnValue__pf)
				{
					__CurrentState = 8;
					break;
				}
			}
		case 2:
			{
				bpfv__CallFunc_IsValid_ReturnValue__pf = UKismetSystemLibrary::IsValid(const_cast<UDataTable*>(bpp__BuildingObjectHandle__pf.DataTable));
				if (!bpfv__CallFunc_IsValid_ReturnValue__pf)
				{
					__CurrentState = 8;
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
					__CurrentState = 9;
					break;
				}
			}
		case 5:
			{
				if ( bpv__PlayerController__pf && bpv__PlayerController__pf->GetClass()->ImplementsInterface(UBPI_Mei_Player_C::StaticClass()) )
				{
					bpfv__K2Node_DynamicCast_AsBPI_Mei_Player__pf.SetObject(bpv__PlayerController__pf);
					void* IAddress = bpv__PlayerController__pf->GetInterfaceAddress(UBPI_Mei_Player_C::StaticClass());
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
		case 6:
			{
				if(::IsValid(bpfv__K2Node_DynamicCast_AsBPI_Mei_Player__pf))
				{
					IBPI_Mei_Player_C::Execute_bpf__CompleteRequirements_BPI__pf(bpfv__K2Node_DynamicCast_AsBPI_Mei_Player__pf.GetObject() , bpfv__CallFunc_GetDataTableRowFromName_OutRow__pf.bpv__Handle_2_D22EB0614ADF35BBF5A4879D3DDB4182__pf);
				}
			}
		case 7:
			{
				bpp__Success__pf = true;
				__CurrentState = -1;
				break;
			}
		case 8:
			{
				bpp__Success__pf = true;
				__CurrentState = -1;
				break;
			}
		case 9:
			{
				bpp__Success__pf = false;
				__CurrentState = -1;
				break;
			}
		default:
			break;
		}
	} while( __CurrentState != -1 );
}
void UBP_Mei_BuildingComponent_C__pf1731449071::bpf__UpdateProcess__pf(/*out*/ bool& bpp__Success__pf)
{
	bool bpfv__CallFunc_PrintDebugInformation_Success__pf{};
	FHitResult bpfv__CallFunc_GetTraceHitResult_HitResult__pf{};
	bool bpfv__CallFunc_UpdateTargetActor_Success__pf{};
	AActor* bpfv__CallFunc_UpdateTargetActor_TargetActor__pf{};
	bool bpfv__CallFunc_UpdateBuildingPosition_Success__pf{};
	bool bpfv__K2Node_SwitchEnum_CmpSuccess__pf{};
	int32 __CurrentState = 1;
	do
	{
		switch( __CurrentState )
		{
		case 1:
			{
				if (!bpv__IsLocalPlayer__pf)
				{
					__CurrentState = 4;
					break;
				}
			}
		case 2:
			{
				bpf__PrintDebugInformation__pf(/*out*/ bpfv__CallFunc_PrintDebugInformation_Success__pf);
			}
		case 3:
			{
				bpfv__K2Node_SwitchEnum_CmpSuccess__pf = UKismetMathLibrary::NotEqual_ByteByte(static_cast<uint8>(bpv__BuildingMode__pf), static_cast<uint8>(E__E_Mei_BuildingMode__pf::NewEnumerator0));
				if (!bpfv__K2Node_SwitchEnum_CmpSuccess__pf)
				{
					__CurrentState = 5;
					break;
				}
				bpfv__K2Node_SwitchEnum_CmpSuccess__pf = UKismetMathLibrary::NotEqual_ByteByte(static_cast<uint8>(bpv__BuildingMode__pf), static_cast<uint8>(E__E_Mei_BuildingMode__pf::NewEnumerator1));
				if (!bpfv__K2Node_SwitchEnum_CmpSuccess__pf)
				{
					__CurrentState = 7;
					break;
				}
				bpfv__K2Node_SwitchEnum_CmpSuccess__pf = UKismetMathLibrary::NotEqual_ByteByte(static_cast<uint8>(bpv__BuildingMode__pf), static_cast<uint8>(E__E_Mei_BuildingMode__pf::NewEnumerator2));
				if (!bpfv__K2Node_SwitchEnum_CmpSuccess__pf)
				{
					__CurrentState = 8;
					break;
				}
				bpfv__K2Node_SwitchEnum_CmpSuccess__pf = UKismetMathLibrary::NotEqual_ByteByte(static_cast<uint8>(bpv__BuildingMode__pf), static_cast<uint8>(E__E_Mei_BuildingMode__pf::NewEnumerator3));
				if (!bpfv__K2Node_SwitchEnum_CmpSuccess__pf)
				{
					__CurrentState = 8;
					break;
				}
				bpfv__K2Node_SwitchEnum_CmpSuccess__pf = UKismetMathLibrary::NotEqual_ByteByte(static_cast<uint8>(bpv__BuildingMode__pf), static_cast<uint8>(E__E_Mei_BuildingMode__pf::NewEnumerator4));
				if (!bpfv__K2Node_SwitchEnum_CmpSuccess__pf)
				{
					__CurrentState = 8;
					break;
				}
				bpfv__K2Node_SwitchEnum_CmpSuccess__pf = UKismetMathLibrary::NotEqual_ByteByte(static_cast<uint8>(bpv__BuildingMode__pf), static_cast<uint8>(E__E_Mei_BuildingMode__pf::NewEnumerator5));
				if (!bpfv__K2Node_SwitchEnum_CmpSuccess__pf)
				{
					__CurrentState = 8;
					break;
				}
				bpfv__K2Node_SwitchEnum_CmpSuccess__pf = UKismetMathLibrary::NotEqual_ByteByte(static_cast<uint8>(bpv__BuildingMode__pf), static_cast<uint8>(E__E_Mei_BuildingMode__pf::NewEnumerator6));
				if (!bpfv__K2Node_SwitchEnum_CmpSuccess__pf)
				{
					__CurrentState = 8;
					break;
				}
				__CurrentState = -1;
				break;
			}
		case 4:
			{
				SetComponentTickEnabled(false);
				__CurrentState = -1;
				break;
			}
		case 5:
			{
				SetComponentTickEnabled(false);
			}
		case 6:
			{
				bpp__Success__pf = true;
				__CurrentState = -1;
				break;
			}
		case 7:
			{
				bpf__UpdateBuildingPosition__pf(/*out*/ bpfv__CallFunc_UpdateBuildingPosition_Success__pf);
				__CurrentState = 6;
				break;
			}
		case 8:
			{
				bpf__GetTraceHitResult__pf(/*out*/ bpfv__CallFunc_GetTraceHitResult_HitResult__pf);
			}
		case 9:
			{
				bpf__UpdateTargetActor__pf(bpfv__CallFunc_GetTraceHitResult_HitResult__pf, /*out*/ bpfv__CallFunc_UpdateTargetActor_Success__pf, /*out*/ bpfv__CallFunc_UpdateTargetActor_TargetActor__pf);
				__CurrentState = 6;
				break;
			}
		default:
			break;
		}
	} while( __CurrentState != -1 );
}
void UBP_Mei_BuildingComponent_C__pf1731449071::bpf__UpdateBuildingPosition__pf(/*out*/ bool& bpp__Success__pf)
{
	FVector bpfv__LocalHitLocation__pf(EForceInit::ForceInit);
	bool bpfv__Temp_bool_Variable__pf{};
	FRotator bpfv__CallFunc_GetCorrectBuildingRotation_Rotation__pf(EForceInit::ForceInit);
	bool bpfv__CallFunc_SetCanBeBuilt_Success__pf{};
	FVector bpfv__CallFunc_GetCorrectHitLocation_ReturnLocation__pf(EForceInit::ForceInit);
	FRotator bpfv__CallFunc_GetCorrectBuildingRotation_Rotation_1__pf(EForceInit::ForceInit);
	FTransform bpfv__CallFunc_MakeTransform_ReturnValue__pf{};
	float bpfv__CallFunc_BreakRotator_Roll__pf{};
	float bpfv__CallFunc_BreakRotator_Pitch__pf{};
	float bpfv__CallFunc_BreakRotator_Yaw__pf{};
	bool bpfv__CallFunc_SetBuildingObjectTransform_TransformChanged__pf{};
	bool bpfv__CallFunc_UpdateBuildStatus_Success__pf{};
	bool bpfv__CallFunc_BooleanAND_ReturnValue__pf{};
	bool bpfv__CallFunc_UpdateBuildStatus_Success_1__pf{};
	bool bpfv__CallFunc_BuildingObjectIsFloorPlaceable_Result__pf{};
	bool bpfv__CallFunc_IsValid_ReturnValue__pf{};
	float bpfv__K2Node_Select_Default__pf{};
	bool bpfv__CallFunc_CheckSnap_CanBeSnapped__pf{};
	FTransform bpfv__CallFunc_GetSnapTransform_ReturnTransform__pf{};
	bool bpfv__CallFunc_SetBuildingObjectTransform_TransformChanged_1__pf{};
	bool bpfv__CallFunc_UpdateBuildStatus_Success_2__pf{};
	FTransform bpfv__CallFunc_GetPropTransform_Transform__pf{};
	bool bpfv__CallFunc_SetBuildingObjectTransform_TransformChanged_2__pf{};
	FTransform bpfv__CallFunc_GetFoundationTransform_Transform__pf{};
	bool bpfv__CallFunc_SetBuildingObjectTransform_TransformChanged_3__pf{};
	bool bpfv__CallFunc_BuildingObjectIsFloorPlaceable_Result_1__pf{};
	bool bpfv__CallFunc_Not_PreBool_ReturnValue__pf{};
	FHitResult bpfv__CallFunc_GetTraceHitResult_HitResult__pf{};
	bool bpfv__CallFunc_UpdateTargetActor_Success__pf{};
	AActor* bpfv__CallFunc_UpdateTargetActor_TargetActor__pf{};
	bool bpfv__CallFunc_IsValid_ReturnValue_1__pf{};
	bool bpfv__CallFunc_BreakHitResult_bBlockingHit__pf{};
	bool bpfv__CallFunc_BreakHitResult_bInitialOverlap__pf{};
	float bpfv__CallFunc_BreakHitResult_Time__pf{};
	float bpfv__CallFunc_BreakHitResult_Distance__pf{};
	FVector bpfv__CallFunc_BreakHitResult_Location__pf(EForceInit::ForceInit);
	FVector bpfv__CallFunc_BreakHitResult_ImpactPoint__pf(EForceInit::ForceInit);
	FVector bpfv__CallFunc_BreakHitResult_Normal__pf(EForceInit::ForceInit);
	FVector bpfv__CallFunc_BreakHitResult_ImpactNormal__pf(EForceInit::ForceInit);
	UPhysicalMaterial* bpfv__CallFunc_BreakHitResult_PhysMat__pf{};
	AActor* bpfv__CallFunc_BreakHitResult_HitActor__pf{};
	UPrimitiveComponent* bpfv__CallFunc_BreakHitResult_HitComponent__pf{};
	FName bpfv__CallFunc_BreakHitResult_HitBoneName__pf{};
	int32 bpfv__CallFunc_BreakHitResult_HitItem__pf{};
	int32 bpfv__CallFunc_BreakHitResult_FaceIndex__pf{};
	FVector bpfv__CallFunc_BreakHitResult_TraceStart__pf(EForceInit::ForceInit);
	FVector bpfv__CallFunc_BreakHitResult_TraceEnd__pf(EForceInit::ForceInit);
	bool bpfv__CallFunc_ActorIsLandscape_Result__pf{};
	bool bpfv__CallFunc_BooleanAND_ReturnValue_1__pf{};
	int32 __CurrentState = 1;
	do
	{
		switch( __CurrentState )
		{
		case 1:
			{
				bpfv__LocalHitLocation__pf = FVector(0.000000,0.000000,0.000000);
			}
		case 2:
			{
				bpfv__CallFunc_IsValid_ReturnValue_1__pf = UKismetSystemLibrary::IsValid(bpv__BuildingObject__pf);
				if (!bpfv__CallFunc_IsValid_ReturnValue_1__pf)
				{
					__CurrentState = 12;
					break;
				}
			}
		case 3:
			{
				bpf__GetTraceHitResult__pf(/*out*/ bpfv__CallFunc_GetTraceHitResult_HitResult__pf);
			}
		case 4:
			{
				bpf__UpdateTargetActor__pf(bpfv__CallFunc_GetTraceHitResult_HitResult__pf, /*out*/ bpfv__CallFunc_UpdateTargetActor_Success__pf, /*out*/ bpfv__CallFunc_UpdateTargetActor_TargetActor__pf);
			}
		case 5:
			{
				if (!bpfv__CallFunc_UpdateTargetActor_Success__pf)
				{
					__CurrentState = 13;
					break;
				}
			}
		case 6:
			{
				UGameplayStatics::BreakHitResult(bpfv__CallFunc_GetTraceHitResult_HitResult__pf, /*out*/ bpfv__CallFunc_BreakHitResult_bBlockingHit__pf, /*out*/ bpfv__CallFunc_BreakHitResult_bInitialOverlap__pf, /*out*/ bpfv__CallFunc_BreakHitResult_Time__pf, /*out*/ bpfv__CallFunc_BreakHitResult_Distance__pf, /*out*/ bpfv__CallFunc_BreakHitResult_Location__pf, /*out*/ bpfv__CallFunc_BreakHitResult_ImpactPoint__pf, /*out*/ bpfv__CallFunc_BreakHitResult_Normal__pf, /*out*/ bpfv__CallFunc_BreakHitResult_ImpactNormal__pf, /*out*/ bpfv__CallFunc_BreakHitResult_PhysMat__pf, /*out*/ bpfv__CallFunc_BreakHitResult_HitActor__pf, /*out*/ bpfv__CallFunc_BreakHitResult_HitComponent__pf, /*out*/ bpfv__CallFunc_BreakHitResult_HitBoneName__pf, /*out*/ bpfv__CallFunc_BreakHitResult_HitItem__pf, /*out*/ bpfv__CallFunc_BreakHitResult_FaceIndex__pf, /*out*/ bpfv__CallFunc_BreakHitResult_TraceStart__pf, /*out*/ bpfv__CallFunc_BreakHitResult_TraceEnd__pf);
				bpfv__LocalHitLocation__pf = bpfv__CallFunc_BreakHitResult_Location__pf;
			}
		case 7:
			{
				UGameplayStatics::BreakHitResult(bpfv__CallFunc_GetTraceHitResult_HitResult__pf, /*out*/ bpfv__CallFunc_BreakHitResult_bBlockingHit__pf, /*out*/ bpfv__CallFunc_BreakHitResult_bInitialOverlap__pf, /*out*/ bpfv__CallFunc_BreakHitResult_Time__pf, /*out*/ bpfv__CallFunc_BreakHitResult_Distance__pf, /*out*/ bpfv__CallFunc_BreakHitResult_Location__pf, /*out*/ bpfv__CallFunc_BreakHitResult_ImpactPoint__pf, /*out*/ bpfv__CallFunc_BreakHitResult_Normal__pf, /*out*/ bpfv__CallFunc_BreakHitResult_ImpactNormal__pf, /*out*/ bpfv__CallFunc_BreakHitResult_PhysMat__pf, /*out*/ bpfv__CallFunc_BreakHitResult_HitActor__pf, /*out*/ bpfv__CallFunc_BreakHitResult_HitComponent__pf, /*out*/ bpfv__CallFunc_BreakHitResult_HitBoneName__pf, /*out*/ bpfv__CallFunc_BreakHitResult_HitItem__pf, /*out*/ bpfv__CallFunc_BreakHitResult_FaceIndex__pf, /*out*/ bpfv__CallFunc_BreakHitResult_TraceStart__pf, /*out*/ bpfv__CallFunc_BreakHitResult_TraceEnd__pf);
				UBP_Mei_Library_C__pf3770675254::bpf__ActorIsLandscape__pf(bpfv__CallFunc_BreakHitResult_HitActor__pf, this, /*out*/ bpfv__CallFunc_ActorIsLandscape_Result__pf);
				bool  __Local__6 = false;
				bpfv__CallFunc_BooleanAND_ReturnValue_1__pf = UKismetMathLibrary::BooleanAND(((::IsValid(bpv__BuildingObject__pf)) ? (bpv__BuildingObject__pf->bpv__PlacedOnLandscape__pf) : (__Local__6)), bpfv__CallFunc_ActorIsLandscape_Result__pf);
				if (!bpfv__CallFunc_BooleanAND_ReturnValue_1__pf)
				{
					__CurrentState = 16;
					break;
				}
			}
		case 8:
			{
				UBP_Mei_Library_C__pf3770675254::bpf__BuildingObjectIsFloorPlaceable__pf(bpv__BuildingObject__pf, this, /*out*/ bpfv__CallFunc_BuildingObjectIsFloorPlaceable_Result_1__pf);
				bpfv__CallFunc_Not_PreBool_ReturnValue__pf = UKismetMathLibrary::Not_PreBool(bpfv__CallFunc_BuildingObjectIsFloorPlaceable_Result_1__pf);
				if (!bpfv__CallFunc_Not_PreBool_ReturnValue__pf)
				{
					__CurrentState = 22;
					break;
				}
			}
		case 9:
			{
				bpf__GetFoundationTransform__pf(bpfv__LocalHitLocation__pf, /*out*/ bpfv__CallFunc_GetFoundationTransform_Transform__pf);
			}
		case 10:
			{
				bpf__SetBuildingObjectTransform__pf(bpfv__CallFunc_GetFoundationTransform_Transform__pf, /*out*/ bpfv__CallFunc_SetBuildingObjectTransform_TransformChanged_3__pf);
			}
		case 11:
			{
				bpf__UpdateBuildStatus__pf(/*out*/ bpfv__CallFunc_UpdateBuildStatus_Success_2__pf);
				__CurrentState = -1;
				break;
			}
		case 12:
			{
				bpp__Success__pf = false;
				__CurrentState = -1;
				break;
			}
		case 13:
			{
				UGameplayStatics::BreakHitResult(bpfv__CallFunc_GetTraceHitResult_HitResult__pf, /*out*/ bpfv__CallFunc_BreakHitResult_bBlockingHit__pf, /*out*/ bpfv__CallFunc_BreakHitResult_bInitialOverlap__pf, /*out*/ bpfv__CallFunc_BreakHitResult_Time__pf, /*out*/ bpfv__CallFunc_BreakHitResult_Distance__pf, /*out*/ bpfv__CallFunc_BreakHitResult_Location__pf, /*out*/ bpfv__CallFunc_BreakHitResult_ImpactPoint__pf, /*out*/ bpfv__CallFunc_BreakHitResult_Normal__pf, /*out*/ bpfv__CallFunc_BreakHitResult_ImpactNormal__pf, /*out*/ bpfv__CallFunc_BreakHitResult_PhysMat__pf, /*out*/ bpfv__CallFunc_BreakHitResult_HitActor__pf, /*out*/ bpfv__CallFunc_BreakHitResult_HitComponent__pf, /*out*/ bpfv__CallFunc_BreakHitResult_HitBoneName__pf, /*out*/ bpfv__CallFunc_BreakHitResult_HitItem__pf, /*out*/ bpfv__CallFunc_BreakHitResult_FaceIndex__pf, /*out*/ bpfv__CallFunc_BreakHitResult_TraceStart__pf, /*out*/ bpfv__CallFunc_BreakHitResult_TraceEnd__pf);
				bpfv__LocalHitLocation__pf = bpfv__CallFunc_BreakHitResult_TraceEnd__pf;
			}
		case 14:
			{
				bpf__GetCorrectBuildingRotation__pf(/*out*/ bpfv__CallFunc_GetCorrectBuildingRotation_Rotation__pf);
				bpf__GetCorrectHitLocation__pf(bpfv__LocalHitLocation__pf, /*out*/ bpfv__CallFunc_GetCorrectHitLocation_ReturnLocation__pf);
				bpfv__CallFunc_MakeTransform_ReturnValue__pf = UKismetMathLibrary::MakeTransform(bpfv__CallFunc_GetCorrectHitLocation_ReturnLocation__pf, bpfv__CallFunc_GetCorrectBuildingRotation_Rotation__pf, FVector(1.000000,1.000000,1.000000));
				bpf__SetBuildingObjectTransform__pf(bpfv__CallFunc_MakeTransform_ReturnValue__pf, /*out*/ bpfv__CallFunc_SetBuildingObjectTransform_TransformChanged__pf);
			}
		case 15:
			{
				bpf__SetCanBeBuilt__pf(false, /*out*/ bpfv__CallFunc_SetCanBeBuilt_Success__pf);
				__CurrentState = -1;
				break;
			}
		case 16:
			{
				bpfv__CallFunc_IsValid_ReturnValue__pf = UKismetSystemLibrary::IsValid(bpv__TargetActor__pf);
				if (!bpfv__CallFunc_IsValid_ReturnValue__pf)
				{
					__CurrentState = 14;
					break;
				}
			}
		case 17:
			{
				if(::IsValid(bpv__BuildingObject__pf))
				{
					bpv__BuildingObject__pf->bpf__CheckSnap__pf(((AActor*)nullptr), /*out*/ bpfv__CallFunc_CheckSnap_CanBeSnapped__pf);
				}
			}
		case 18:
			{
				if (!bpfv__CallFunc_CheckSnap_CanBeSnapped__pf)
				{
					__CurrentState = 14;
					break;
				}
			}
		case 19:
			{
				bpf__GetCorrectBuildingRotation__pf(/*out*/ bpfv__CallFunc_GetCorrectBuildingRotation_Rotation_1__pf);
				UKismetMathLibrary::BreakRotator(bpfv__CallFunc_GetCorrectBuildingRotation_Rotation_1__pf, /*out*/ bpfv__CallFunc_BreakRotator_Roll__pf, /*out*/ bpfv__CallFunc_BreakRotator_Pitch__pf, /*out*/ bpfv__CallFunc_BreakRotator_Yaw__pf);
				bpfv__CallFunc_BooleanAND_ReturnValue__pf = UKismetMathLibrary::BooleanAND(bpv__GridMode__pf, bpv__GridModeForProps__pf);
				UBP_Mei_Library_C__pf3770675254::bpf__BuildingObjectIsFloorPlaceable__pf(bpv__BuildingObject__pf, this, /*out*/ bpfv__CallFunc_BuildingObjectIsFloorPlaceable_Result__pf);
				bpfv__Temp_bool_Variable__pf = bpfv__CallFunc_BuildingObjectIsFloorPlaceable_Result__pf;
				if(::IsValid(bpv__BuildingObject__pf))
				{
					bpv__BuildingObject__pf->bpf__GetSnapTransform__pf(bpv__TargetActor__pf, TSwitchValue<bool , float >(bpfv__Temp_bool_Variable__pf, bpfv__K2Node_Select_Default__pf, 2, TSwitchPair<bool , float >(false, bpv__InputBuildingRotationZ__pf), TSwitchPair<bool , float >(true, bpfv__CallFunc_BreakRotator_Yaw__pf)), bpfv__LocalHitLocation__pf, bpfv__CallFunc_BooleanAND_ReturnValue__pf, bpv__NearSnappingMode__pf, /*out*/ bpfv__CallFunc_GetSnapTransform_ReturnTransform__pf);
				}
			}
		case 20:
			{
				bpf__SetBuildingObjectTransform__pf(bpfv__CallFunc_GetSnapTransform_ReturnTransform__pf, /*out*/ bpfv__CallFunc_SetBuildingObjectTransform_TransformChanged_1__pf);
			}
		case 21:
			{
				bpf__UpdateBuildStatus__pf(/*out*/ bpfv__CallFunc_UpdateBuildStatus_Success__pf);
				__CurrentState = -1;
				break;
			}
		case 22:
			{
				bpf__GetPropTransform__pf(bpfv__LocalHitLocation__pf, /*out*/ bpfv__CallFunc_GetPropTransform_Transform__pf);
			}
		case 23:
			{
				bpf__SetBuildingObjectTransform__pf(bpfv__CallFunc_GetPropTransform_Transform__pf, /*out*/ bpfv__CallFunc_SetBuildingObjectTransform_TransformChanged_2__pf);
			}
		case 24:
			{
				bpf__UpdateBuildStatus__pf(/*out*/ bpfv__CallFunc_UpdateBuildStatus_Success_1__pf);
				__CurrentState = -1;
				break;
			}
		default:
			break;
		}
	} while( __CurrentState != -1 );
}
void UBP_Mei_BuildingComponent_C__pf1731449071::bpf__UpdateTargetActor__pf(FHitResult const& bpp__HitResult__pf__const, /*out*/ bool& bpp__Success__pf, /*out*/ AActor*& bpp__TargetActor__pf)
{
	typedef FHitResult  T__Local__7;
	T__Local__7& bpp__HitResult__pf = *const_cast<T__Local__7 *>(&bpp__HitResult__pf__const);
	bool bpfv__CallFunc_BreakHitResult_bBlockingHit__pf{};
	bool bpfv__CallFunc_BreakHitResult_bInitialOverlap__pf{};
	float bpfv__CallFunc_BreakHitResult_Time__pf{};
	float bpfv__CallFunc_BreakHitResult_Distance__pf{};
	FVector bpfv__CallFunc_BreakHitResult_Location__pf(EForceInit::ForceInit);
	FVector bpfv__CallFunc_BreakHitResult_ImpactPoint__pf(EForceInit::ForceInit);
	FVector bpfv__CallFunc_BreakHitResult_Normal__pf(EForceInit::ForceInit);
	FVector bpfv__CallFunc_BreakHitResult_ImpactNormal__pf(EForceInit::ForceInit);
	UPhysicalMaterial* bpfv__CallFunc_BreakHitResult_PhysMat__pf{};
	AActor* bpfv__CallFunc_BreakHitResult_HitActor__pf{};
	UPrimitiveComponent* bpfv__CallFunc_BreakHitResult_HitComponent__pf{};
	FName bpfv__CallFunc_BreakHitResult_HitBoneName__pf{};
	int32 bpfv__CallFunc_BreakHitResult_HitItem__pf{};
	int32 bpfv__CallFunc_BreakHitResult_FaceIndex__pf{};
	FVector bpfv__CallFunc_BreakHitResult_TraceStart__pf(EForceInit::ForceInit);
	FVector bpfv__CallFunc_BreakHitResult_TraceEnd__pf(EForceInit::ForceInit);
	bool bpfv__CallFunc_SetTargetActor_Success__pf{};
	bool bpfv__CallFunc_SetTargetActor_Success_1__pf{};
	int32 __CurrentState = 1;
	do
	{
		switch( __CurrentState )
		{
		case 1:
			{
				UGameplayStatics::BreakHitResult(bpp__HitResult__pf, /*out*/ bpfv__CallFunc_BreakHitResult_bBlockingHit__pf, /*out*/ bpfv__CallFunc_BreakHitResult_bInitialOverlap__pf, /*out*/ bpfv__CallFunc_BreakHitResult_Time__pf, /*out*/ bpfv__CallFunc_BreakHitResult_Distance__pf, /*out*/ bpfv__CallFunc_BreakHitResult_Location__pf, /*out*/ bpfv__CallFunc_BreakHitResult_ImpactPoint__pf, /*out*/ bpfv__CallFunc_BreakHitResult_Normal__pf, /*out*/ bpfv__CallFunc_BreakHitResult_ImpactNormal__pf, /*out*/ bpfv__CallFunc_BreakHitResult_PhysMat__pf, /*out*/ bpfv__CallFunc_BreakHitResult_HitActor__pf, /*out*/ bpfv__CallFunc_BreakHitResult_HitComponent__pf, /*out*/ bpfv__CallFunc_BreakHitResult_HitBoneName__pf, /*out*/ bpfv__CallFunc_BreakHitResult_HitItem__pf, /*out*/ bpfv__CallFunc_BreakHitResult_FaceIndex__pf, /*out*/ bpfv__CallFunc_BreakHitResult_TraceStart__pf, /*out*/ bpfv__CallFunc_BreakHitResult_TraceEnd__pf);
				if (!bpfv__CallFunc_BreakHitResult_bBlockingHit__pf)
				{
					__CurrentState = 4;
					break;
				}
			}
		case 2:
			{
				UGameplayStatics::BreakHitResult(bpp__HitResult__pf, /*out*/ bpfv__CallFunc_BreakHitResult_bBlockingHit__pf, /*out*/ bpfv__CallFunc_BreakHitResult_bInitialOverlap__pf, /*out*/ bpfv__CallFunc_BreakHitResult_Time__pf, /*out*/ bpfv__CallFunc_BreakHitResult_Distance__pf, /*out*/ bpfv__CallFunc_BreakHitResult_Location__pf, /*out*/ bpfv__CallFunc_BreakHitResult_ImpactPoint__pf, /*out*/ bpfv__CallFunc_BreakHitResult_Normal__pf, /*out*/ bpfv__CallFunc_BreakHitResult_ImpactNormal__pf, /*out*/ bpfv__CallFunc_BreakHitResult_PhysMat__pf, /*out*/ bpfv__CallFunc_BreakHitResult_HitActor__pf, /*out*/ bpfv__CallFunc_BreakHitResult_HitComponent__pf, /*out*/ bpfv__CallFunc_BreakHitResult_HitBoneName__pf, /*out*/ bpfv__CallFunc_BreakHitResult_HitItem__pf, /*out*/ bpfv__CallFunc_BreakHitResult_FaceIndex__pf, /*out*/ bpfv__CallFunc_BreakHitResult_TraceStart__pf, /*out*/ bpfv__CallFunc_BreakHitResult_TraceEnd__pf);
				bpf__SetTargetActor__pf(bpfv__CallFunc_BreakHitResult_HitActor__pf, /*out*/ bpfv__CallFunc_SetTargetActor_Success_1__pf);
			}
		case 3:
			{
				bpp__Success__pf = true;
				bpp__TargetActor__pf = bpv__TargetActor__pf;
				__CurrentState = -1;
				break;
			}
		case 4:
			{
				bpf__SetTargetActor__pf(((AActor*)nullptr), /*out*/ bpfv__CallFunc_SetTargetActor_Success__pf);
			}
		case 5:
			{
				bpp__Success__pf = false;
				bpp__TargetActor__pf = ((AActor*)nullptr);
				__CurrentState = -1;
				break;
			}
		default:
			break;
		}
	} while( __CurrentState != -1 );
}
void UBP_Mei_BuildingComponent_C__pf1731449071::bpf__GetTraceHitResult__pf(/*out*/ FHitResult& bpp__HitResult__pf)
{
	TEnumAsByte<EDrawDebugTrace::Type> bpfv__Temp_byte_Variable__pf{};
	TEnumAsByte<EDrawDebugTrace::Type> bpfv__Temp_byte_Variable_1__pf{};
	bool bpfv__Temp_bool_Variable__pf{};
	bool bpfv__Temp_bool_Variable_1__pf{};
	TEnumAsByte<EDrawDebugTrace::Type> bpfv__K2Node_Select_Default__pf{};
	APawn* bpfv__CallFunc_K2_GetPawn_ReturnValue__pf{};
	TArray<AActor*> bpfv__CallFunc_GetFloorIgnoringActors_IgnoringActors__pf{};
	TArray<AActor*> bpfv__K2Node_MakeArray_Array__pf{};
	FRotator bpfv__CallFunc_GetCameraRotation_ReturnValue__pf(EForceInit::ForceInit);
	float bpfv__K2Node_Select_Default_1__pf{};
	FVector bpfv__CallFunc_GetForwardVector_ReturnValue__pf(EForceInit::ForceInit);
	FVector bpfv__CallFunc_GetCameraLocation_ReturnValue__pf(EForceInit::ForceInit);
	FVector bpfv__CallFunc_Multiply_VectorFloat_ReturnValue__pf(EForceInit::ForceInit);
	FVector bpfv__CallFunc_Add_VectorVector_ReturnValue__pf(EForceInit::ForceInit);
	FVector bpfv__CallFunc_DeprojectMousePositionToWorld_WorldLocation__pf(EForceInit::ForceInit);
	FVector bpfv__CallFunc_DeprojectMousePositionToWorld_WorldDirection__pf(EForceInit::ForceInit);
	bool bpfv__CallFunc_DeprojectMousePositionToWorld_ReturnValue__pf{};
	FHitResult bpfv__CallFunc_LineTraceSingle_OutHit__pf{};
	bool bpfv__CallFunc_LineTraceSingle_ReturnValue__pf{};
	FVector bpfv__CallFunc_Multiply_VectorFloat_ReturnValue_1__pf(EForceInit::ForceInit);
	FVector bpfv__CallFunc_Add_VectorVector_ReturnValue_1__pf(EForceInit::ForceInit);
	FHitResult bpfv__CallFunc_LineTraceSingle_OutHit_1__pf{};
	bool bpfv__CallFunc_LineTraceSingle_ReturnValue_1__pf{};
	int32 __CurrentState = 1;
	do
	{
		switch( __CurrentState )
		{
		case 1:
			{
				if (!bpv__TraceToMouseMode__pf)
				{
					__CurrentState = 5;
					break;
				}
			}
		case 2:
			{
				bpf__GetFloorIgnoringActors__pf(bpv__DisplayedFloor__pf, /*out*/ bpfv__CallFunc_GetFloorIgnoringActors_IgnoringActors__pf);
			}
		case 3:
			{
				bpfv__Temp_byte_Variable__pf = EDrawDebugTrace::None;
				bpfv__Temp_byte_Variable_1__pf = EDrawDebugTrace::ForOneFrame;
				bpfv__Temp_bool_Variable__pf = bpv__DebugMode__pf;
				bpfv__Temp_bool_Variable_1__pf = bpv__TopDownViewMode__pf;
				if(::IsValid(bpv__PlayerController__pf))
				{
					bpfv__CallFunc_DeprojectMousePositionToWorld_ReturnValue__pf = bpv__PlayerController__pf->APlayerController::DeprojectMousePositionToWorld(/*out*/ bpfv__CallFunc_DeprojectMousePositionToWorld_WorldLocation__pf, /*out*/ bpfv__CallFunc_DeprojectMousePositionToWorld_WorldDirection__pf);
				}
				bpfv__CallFunc_Multiply_VectorFloat_ReturnValue_1__pf = UKismetMathLibrary::Multiply_VectorFloat(bpfv__CallFunc_DeprojectMousePositionToWorld_WorldDirection__pf, TSwitchValue<bool , float >(bpfv__Temp_bool_Variable_1__pf, bpfv__K2Node_Select_Default_1__pf, 2, TSwitchPair<bool , float >(false, bpv__TraceDistance__pf), TSwitchPair<bool , float >(true, bpv__TopDownTraceDistance__pf)));
				bpfv__CallFunc_Add_VectorVector_ReturnValue_1__pf = UKismetMathLibrary::Add_VectorVector(bpfv__CallFunc_DeprojectMousePositionToWorld_WorldLocation__pf, bpfv__CallFunc_Multiply_VectorFloat_ReturnValue_1__pf);
				bpfv__CallFunc_LineTraceSingle_ReturnValue_1__pf = UKismetSystemLibrary::LineTraceSingle(this, bpfv__CallFunc_DeprojectMousePositionToWorld_WorldLocation__pf, bpfv__CallFunc_Add_VectorVector_ReturnValue_1__pf, ETraceTypeQuery::TraceTypeQuery1, false, bpfv__CallFunc_GetFloorIgnoringActors_IgnoringActors__pf, TSwitchValue<bool , TEnumAsByte<EDrawDebugTrace::Type> >(bpfv__Temp_bool_Variable__pf, bpfv__K2Node_Select_Default__pf, 2, TSwitchPair<bool , TEnumAsByte<EDrawDebugTrace::Type> >(false, bpfv__Temp_byte_Variable__pf), TSwitchPair<bool , TEnumAsByte<EDrawDebugTrace::Type> >(true, bpfv__Temp_byte_Variable_1__pf)), /*out*/ bpfv__CallFunc_LineTraceSingle_OutHit_1__pf, true, FLinearColor(1.000000,0.000000,0.000000,1.000000), FLinearColor(0.000000,1.000000,0.000000,1.000000), 1.000000);
			}
		case 4:
			{
				bpp__HitResult__pf = bpfv__CallFunc_LineTraceSingle_OutHit_1__pf;
				__CurrentState = -1;
				break;
			}
		case 5:
			{
				bpfv__Temp_byte_Variable__pf = EDrawDebugTrace::None;
				bpfv__Temp_byte_Variable_1__pf = EDrawDebugTrace::ForOneFrame;
				bpfv__Temp_bool_Variable__pf = bpv__DebugMode__pf;
				bpfv__Temp_bool_Variable_1__pf = bpv__TopDownViewMode__pf;
				if(::IsValid(bpv__PlayerController__pf))
				{
					bpfv__CallFunc_K2_GetPawn_ReturnValue__pf = bpv__PlayerController__pf->AController::K2_GetPawn();
				}
				bpfv__K2Node_MakeArray_Array__pf.SetNum(2, true);
				bpfv__K2Node_MakeArray_Array__pf[0] = *(AActor**)(&(bpv__BuildingObject__pf));
				bpfv__K2Node_MakeArray_Array__pf[1] = *(AActor**)(&(bpfv__CallFunc_K2_GetPawn_ReturnValue__pf));
				if(::IsValid(bpv__PlayerController__pf) && ::IsValid(bpv__PlayerController__pf->PlayerCameraManager))
				{
					bpfv__CallFunc_GetCameraRotation_ReturnValue__pf = bpv__PlayerController__pf->PlayerCameraManager->GetCameraRotation();
				}
				bpfv__CallFunc_GetForwardVector_ReturnValue__pf = UKismetMathLibrary::GetForwardVector(bpfv__CallFunc_GetCameraRotation_ReturnValue__pf);
				if(::IsValid(bpv__PlayerController__pf) && ::IsValid(bpv__PlayerController__pf->PlayerCameraManager))
				{
					bpfv__CallFunc_GetCameraLocation_ReturnValue__pf = bpv__PlayerController__pf->PlayerCameraManager->GetCameraLocation();
				}
				bpfv__CallFunc_Multiply_VectorFloat_ReturnValue__pf = UKismetMathLibrary::Multiply_VectorFloat(bpfv__CallFunc_GetForwardVector_ReturnValue__pf, TSwitchValue<bool , float >(bpfv__Temp_bool_Variable_1__pf, bpfv__K2Node_Select_Default_1__pf, 2, TSwitchPair<bool , float >(false, bpv__TraceDistance__pf), TSwitchPair<bool , float >(true, bpv__TopDownTraceDistance__pf)));
				bpfv__CallFunc_Add_VectorVector_ReturnValue__pf = UKismetMathLibrary::Add_VectorVector(bpfv__CallFunc_GetCameraLocation_ReturnValue__pf, bpfv__CallFunc_Multiply_VectorFloat_ReturnValue__pf);
				bpfv__CallFunc_LineTraceSingle_ReturnValue__pf = UKismetSystemLibrary::LineTraceSingle(this, bpfv__CallFunc_GetCameraLocation_ReturnValue__pf, bpfv__CallFunc_Add_VectorVector_ReturnValue__pf, ETraceTypeQuery::TraceTypeQuery1, false, bpfv__K2Node_MakeArray_Array__pf, TSwitchValue<bool , TEnumAsByte<EDrawDebugTrace::Type> >(bpfv__Temp_bool_Variable__pf, bpfv__K2Node_Select_Default__pf, 2, TSwitchPair<bool , TEnumAsByte<EDrawDebugTrace::Type> >(false, bpfv__Temp_byte_Variable__pf), TSwitchPair<bool , TEnumAsByte<EDrawDebugTrace::Type> >(true, bpfv__Temp_byte_Variable_1__pf)), /*out*/ bpfv__CallFunc_LineTraceSingle_OutHit__pf, true, FLinearColor(1.000000,0.000000,0.000000,1.000000), FLinearColor(0.000000,1.000000,0.000000,1.000000), 1.000000);
			}
		case 6:
			{
				bpp__HitResult__pf = bpfv__CallFunc_LineTraceSingle_OutHit__pf;
				__CurrentState = -1;
				break;
			}
		default:
			break;
		}
	} while( __CurrentState != -1 );
}
void UBP_Mei_BuildingComponent_C__pf1731449071::bpf__SetBuildingObjectTransform__pf(FTransform bpp__NewTransform__pf, /*out*/ bool& bpp__TransformChanged__pf)
{
	FHitResult bpfv__CallFunc_K2_SetActorTransform_SweepHitResult__pf{};
	bool bpfv__CallFunc_K2_SetActorTransform_ReturnValue__pf{};
	bool bpfv__CallFunc_NearlyEqual_TransformTransform_ReturnValue__pf{};
	bool bpfv__CallFunc_Not_PreBool_ReturnValue__pf{};
	int32 __CurrentState = 1;
	do
	{
		switch( __CurrentState )
		{
		case 1:
			{
				bpfv__CallFunc_NearlyEqual_TransformTransform_ReturnValue__pf = UKismetMathLibrary::NearlyEqual_TransformTransform(bpp__NewTransform__pf, bpv__BuildTransform__pf, 0.010000, 0.010000, 0.010000);
				bpfv__CallFunc_Not_PreBool_ReturnValue__pf = UKismetMathLibrary::Not_PreBool(bpfv__CallFunc_NearlyEqual_TransformTransform_ReturnValue__pf);
				if (!bpfv__CallFunc_Not_PreBool_ReturnValue__pf)
				{
					__CurrentState = 5;
					break;
				}
			}
		case 2:
			{
				bpv__BuildTransform__pf = bpp__NewTransform__pf;
			}
		case 3:
			{
				if(::IsValid(bpv__BuildingObject__pf))
				{
					bpfv__CallFunc_K2_SetActorTransform_ReturnValue__pf = bpv__BuildingObject__pf->AActor::K2_SetActorTransform(bpv__BuildTransform__pf, false, /*out*/ bpfv__CallFunc_K2_SetActorTransform_SweepHitResult__pf, true);
				}
			}
		case 4:
			{
				bpp__TransformChanged__pf = true;
				__CurrentState = -1;
				break;
			}
		case 5:
			{
				bpp__TransformChanged__pf = false;
				__CurrentState = -1;
				break;
			}
		default:
			break;
		}
	} while( __CurrentState != -1 );
}
void UBP_Mei_BuildingComponent_C__pf1731449071::bpf__SetBuildingObjectMaterials__pf(bool bpp__CanBeBuilt__pf, /*out*/ bool& bpp__Success__pf)
{
	bool bpfv__Temp_bool_Variable__pf{};
	int32 bpfv__Temp_int_Loop_Counter_Variable__pf{};
	int32 bpfv__CallFunc_Add_IntInt_ReturnValue__pf{};
	int32 bpfv__Temp_int_Array_Index_Variable__pf{};
	int32 bpfv__Temp_int_Array_Index_Variable_1__pf{};
	int32 bpfv__Temp_int_Loop_Counter_Variable_1__pf{};
	int32 bpfv__CallFunc_Add_IntInt_ReturnValue_1__pf{};
	UMaterialInterface* bpfv__K2Node_Select_Default__pf{};
	bool bpfv__CallFunc_IsValid_ReturnValue__pf{};
	TArray<UMeshComponent*> bpfv__CallFunc_K2_GetComponentsByClass_ReturnValue__pf{};
	UMeshComponent* bpfv__CallFunc_Array_Get_Item__pf{};
	int32 bpfv__CallFunc_Array_Length_ReturnValue__pf{};
	UNiagaraComponent* bpfv__CallFunc_SpawnSystemAttached_ReturnValue__pf{};
	bool bpfv__CallFunc_Less_IntInt_ReturnValue__pf{};
	TArray<UMaterialInterface*> bpfv__CallFunc_GetMaterials_ReturnValue__pf{};
	int32 bpfv__CallFunc_Array_Length_ReturnValue_1__pf{};
	bool bpfv__CallFunc_Less_IntInt_ReturnValue_1__pf{};
	TArray< int32, TInlineAllocator<8> > __StateStack;

	int32 __CurrentState = 1;
	do
	{
		switch( __CurrentState )
		{
		case 1:
			{
				bpfv__CallFunc_IsValid_ReturnValue__pf = UKismetSystemLibrary::IsValid(bpv__BuildingObject__pf);
				if (!bpfv__CallFunc_IsValid_ReturnValue__pf)
				{
					__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
					break;
				}
			}
		case 2:
			{
				bpfv__Temp_int_Loop_Counter_Variable__pf = 0;
			}
		case 3:
			{
				bpfv__Temp_int_Array_Index_Variable__pf = 0;
			}
		case 4:
			{
				if(::IsValid(bpv__BuildingObject__pf))
				{
					bpfv__CallFunc_K2_GetComponentsByClass_ReturnValue__pf = TArrayCaster<UActorComponent*>(bpv__BuildingObject__pf->AActor::K2_GetComponentsByClass(UMeshComponent::StaticClass())).Get<UMeshComponent*>();
				}
				bpfv__CallFunc_Array_Length_ReturnValue__pf = FCustomThunkTemplates::Array_Length(bpfv__CallFunc_K2_GetComponentsByClass_ReturnValue__pf);
				bpfv__CallFunc_Less_IntInt_ReturnValue__pf = UKismetMathLibrary::Less_IntInt(bpfv__Temp_int_Loop_Counter_Variable__pf, bpfv__CallFunc_Array_Length_ReturnValue__pf);
				if (!bpfv__CallFunc_Less_IntInt_ReturnValue__pf)
				{
					__CurrentState = 15;
					break;
				}
			}
		case 5:
			{
				bpfv__Temp_int_Array_Index_Variable__pf = bpfv__Temp_int_Loop_Counter_Variable__pf;
			}
		case 6:
			{
				__StateStack.Push(16);
			}
		case 7:
			{
				bpfv__Temp_int_Loop_Counter_Variable_1__pf = 0;
			}
		case 8:
			{
				bpfv__Temp_int_Array_Index_Variable_1__pf = 0;
			}
		case 9:
			{
				if(::IsValid(bpv__BuildingObject__pf))
				{
					bpfv__CallFunc_K2_GetComponentsByClass_ReturnValue__pf = TArrayCaster<UActorComponent*>(bpv__BuildingObject__pf->AActor::K2_GetComponentsByClass(UMeshComponent::StaticClass())).Get<UMeshComponent*>();
				}
				FCustomThunkTemplates::Array_Get(bpfv__CallFunc_K2_GetComponentsByClass_ReturnValue__pf, bpfv__Temp_int_Array_Index_Variable__pf, /*out*/ bpfv__CallFunc_Array_Get_Item__pf);
				if(::IsValid(bpfv__CallFunc_Array_Get_Item__pf))
				{
					bpfv__CallFunc_GetMaterials_ReturnValue__pf = bpfv__CallFunc_Array_Get_Item__pf->GetMaterials();
				}
				bpfv__CallFunc_Array_Length_ReturnValue_1__pf = FCustomThunkTemplates::Array_Length(bpfv__CallFunc_GetMaterials_ReturnValue__pf);
				bpfv__CallFunc_Less_IntInt_ReturnValue_1__pf = UKismetMathLibrary::Less_IntInt(bpfv__Temp_int_Loop_Counter_Variable_1__pf, bpfv__CallFunc_Array_Length_ReturnValue_1__pf);
				if (!bpfv__CallFunc_Less_IntInt_ReturnValue_1__pf)
				{
					__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
					break;
				}
			}
		case 10:
			{
				bpfv__Temp_int_Array_Index_Variable_1__pf = bpfv__Temp_int_Loop_Counter_Variable_1__pf;
			}
		case 11:
			{
				__StateStack.Push(17);
			}
		case 12:
			{
				bpfv__Temp_bool_Variable__pf = bpp__CanBeBuilt__pf;
				if(::IsValid(bpv__BuildingObject__pf))
				{
					bpfv__CallFunc_K2_GetComponentsByClass_ReturnValue__pf = TArrayCaster<UActorComponent*>(bpv__BuildingObject__pf->AActor::K2_GetComponentsByClass(UMeshComponent::StaticClass())).Get<UMeshComponent*>();
				}
				FCustomThunkTemplates::Array_Get(bpfv__CallFunc_K2_GetComponentsByClass_ReturnValue__pf, bpfv__Temp_int_Array_Index_Variable__pf, /*out*/ bpfv__CallFunc_Array_Get_Item__pf);
				if(::IsValid(bpfv__CallFunc_Array_Get_Item__pf))
				{
					bpfv__CallFunc_Array_Get_Item__pf->SetMaterial(bpfv__Temp_int_Array_Index_Variable_1__pf, TSwitchValue<bool , UMaterialInterface* >(bpfv__Temp_bool_Variable__pf, bpfv__K2Node_Select_Default__pf, 2, TSwitchPair<bool , UMaterialInterface* >(false, bpv__CannotBuildMaterial__pf), TSwitchPair<bool , UMaterialInterface* >(true, bpv__CanBuildMaterial__pf)));
				}
			}
		case 13:
			{
				if(::IsValid(bpv__BuildingObject__pf))
				{
					bpfv__CallFunc_K2_GetComponentsByClass_ReturnValue__pf = TArrayCaster<UActorComponent*>(bpv__BuildingObject__pf->AActor::K2_GetComponentsByClass(UMeshComponent::StaticClass())).Get<UMeshComponent*>();
				}
				FCustomThunkTemplates::Array_Get(bpfv__CallFunc_K2_GetComponentsByClass_ReturnValue__pf, bpfv__Temp_int_Array_Index_Variable__pf, /*out*/ bpfv__CallFunc_Array_Get_Item__pf);
				if(::IsValid(bpfv__CallFunc_Array_Get_Item__pf))
				{
					bpfv__CallFunc_Array_Get_Item__pf->USceneComponent::SetVisibility(false, false);
				}
			}
		case 14:
			{
				if(::IsValid(bpv__BuildingObject__pf))
				{
					bpfv__CallFunc_K2_GetComponentsByClass_ReturnValue__pf = TArrayCaster<UActorComponent*>(bpv__BuildingObject__pf->AActor::K2_GetComponentsByClass(UMeshComponent::StaticClass())).Get<UMeshComponent*>();
				}
				FCustomThunkTemplates::Array_Get(bpfv__CallFunc_K2_GetComponentsByClass_ReturnValue__pf, bpfv__Temp_int_Array_Index_Variable__pf, /*out*/ bpfv__CallFunc_Array_Get_Item__pf);
				bpfv__CallFunc_SpawnSystemAttached_ReturnValue__pf = UNiagaraFunctionLibrary::SpawnSystemAttached(CastChecked<UNiagaraSystem>(CastChecked<UDynamicClass>(UBP_Mei_BuildingComponent_C__pf1731449071::StaticClass())->UsedAssets[2], ECastCheckedType::NullAllowed), bpfv__CallFunc_Array_Get_Item__pf, FName(TEXT("None")), FVector(0.000000,0.000000,0.000000), FRotator(0.000000,0.000000,0.000000), EAttachLocation::KeepRelativeOffset, false, true, ENCPoolMethod::None, true);
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 15:
			{
				bpp__Success__pf = true;
				__CurrentState = -1;
				break;
			}
		case 16:
			{
				bpfv__CallFunc_Add_IntInt_ReturnValue__pf = UKismetMathLibrary::Add_IntInt(bpfv__Temp_int_Loop_Counter_Variable__pf, 1);
				bpfv__Temp_int_Loop_Counter_Variable__pf = bpfv__CallFunc_Add_IntInt_ReturnValue__pf;
				__CurrentState = 4;
				break;
			}
		case 17:
			{
				bpfv__CallFunc_Add_IntInt_ReturnValue_1__pf = UKismetMathLibrary::Add_IntInt(bpfv__Temp_int_Loop_Counter_Variable_1__pf, 1);
				bpfv__Temp_int_Loop_Counter_Variable_1__pf = bpfv__CallFunc_Add_IntInt_ReturnValue_1__pf;
				__CurrentState = 9;
				break;
			}
		default:
			check(false); // Invalid state
			break;
		}
	} while( __CurrentState != -1 );
}
void UBP_Mei_BuildingComponent_C__pf1731449071::bpf__SetCanBeBuilt__pf(bool bpp__CanBeBuilt__pf, /*out*/ bool& bpp__Success__pf)
{
	bool bpfv__CallFunc_SetBuildingObjectMaterials_Success__pf{};
	bpv__CanBeBuilt__pf = bpp__CanBeBuilt__pf;
	bpf__SetBuildingObjectMaterials__pf(bpv__CanBeBuilt__pf, /*out*/ bpfv__CallFunc_SetBuildingObjectMaterials_Success__pf);
	bpp__Success__pf = true;
}
void UBP_Mei_BuildingComponent_C__pf1731449071::bpf__UpdateBuildStatus__pf(/*out*/ bool& bpp__Success__pf)
{
	bool bpfv__CallFunc_SetCanBeBuilt_Success__pf{};
	bool bpfv__CallFunc_CheckBuildStatus_CanBeBuilt__pf{};
	bool bpfv__CallFunc_CheckClaim_Result__pf{};
	bool bpfv__CallFunc_SetCanBeBuilt_Success_1__pf{};
	int32 __CurrentState = 1;
	do
	{
		switch( __CurrentState )
		{
		case 1:
			{
				if (!true)
				{
					__CurrentState = 7;
					break;
				}
			}
		case 2:
			{
				if(::IsValid(bpv__BuildingObject__pf))
				{
					bpv__BuildingObject__pf->bpf__CheckClaim__pf(bpv__PlayerController__pf, /*out*/ bpfv__CallFunc_CheckClaim_Result__pf);
				}
			}
		case 3:
			{
				if (!bpfv__CallFunc_CheckClaim_Result__pf)
				{
					__CurrentState = 7;
					break;
				}
			}
		case 4:
			{
				if(::IsValid(bpv__BuildingObject__pf))
				{
					bpv__BuildingObject__pf->bpf__CheckBuildStatus__pf(bpv__TargetActor__pf, /*out*/ bpfv__CallFunc_CheckBuildStatus_CanBeBuilt__pf);
				}
			}
		case 5:
			{
				bpf__SetCanBeBuilt__pf(bpfv__CallFunc_CheckBuildStatus_CanBeBuilt__pf, /*out*/ bpfv__CallFunc_SetCanBeBuilt_Success_1__pf);
			}
		case 6:
			{
				bpp__Success__pf = true;
				__CurrentState = -1;
				break;
			}
		case 7:
			{
				bpf__SetCanBeBuilt__pf(false, /*out*/ bpfv__CallFunc_SetCanBeBuilt_Success__pf);
				__CurrentState = 6;
				break;
			}
		default:
			break;
		}
	} while( __CurrentState != -1 );
}
void UBP_Mei_BuildingComponent_C__pf1731449071::bpf__GetFloorIgnoringActors__pf(int32 bpp__TargetFloor__pf, /*out*/ TArray<AActor*>& bpp__IgnoringActors__pf)
{
	TArray<AActor*> bpfv__LocalActors__pf{};
	int32 bpfv__Temp_int_Array_Index_Variable__pf{};
	int32 bpfv__Temp_int_Loop_Counter_Variable__pf{};
	int32 bpfv__CallFunc_Add_IntInt_ReturnValue__pf{};
	TArray<AActor*> bpfv__CallFunc_GetAllActorsWithInterface_OutActors__pf{};
	AActor* bpfv__CallFunc_Array_Get_Item__pf{};
	int32 bpfv__CallFunc_Array_Length_ReturnValue__pf{};
	TScriptInterface<IBPI_Mei_Floor_C> bpfv__K2Node_DynamicCast_AsBPI_Mei_Floor__pf{};
	bool bpfv__K2Node_DynamicCast_bSuccess__pf{};
	bool bpfv__CallFunc_Less_IntInt_ReturnValue__pf{};
	int32 bpfv__CallFunc_GetFloorNumber_BPI_FloorNumber__pf{};
	bool bpfv__CallFunc_Greater_IntInt_ReturnValue__pf{};
	int32 bpfv__CallFunc_Array_Add_ReturnValue__pf{};
	TArray< int32, TInlineAllocator<8> > __StateStack;

	int32 __CurrentState = 1;
	do
	{
		switch( __CurrentState )
		{
		case 1:
			{
				(bpfv__CallFunc_GetAllActorsWithInterface_OutActors__pf).Reset();
				UGameplayStatics::GetAllActorsWithInterface(this, UBPI_Mei_Floor_C::StaticClass(), /*out*/ bpfv__CallFunc_GetAllActorsWithInterface_OutActors__pf);
			}
		case 2:
			{
				bpfv__Temp_int_Loop_Counter_Variable__pf = 0;
			}
		case 3:
			{
				bpfv__Temp_int_Array_Index_Variable__pf = 0;
			}
		case 4:
			{
				bpfv__CallFunc_Array_Length_ReturnValue__pf = FCustomThunkTemplates::Array_Length(bpfv__CallFunc_GetAllActorsWithInterface_OutActors__pf);
				bpfv__CallFunc_Less_IntInt_ReturnValue__pf = UKismetMathLibrary::Less_IntInt(bpfv__Temp_int_Loop_Counter_Variable__pf, bpfv__CallFunc_Array_Length_ReturnValue__pf);
				if (!bpfv__CallFunc_Less_IntInt_ReturnValue__pf)
				{
					__CurrentState = 11;
					break;
				}
			}
		case 5:
			{
				bpfv__Temp_int_Array_Index_Variable__pf = bpfv__Temp_int_Loop_Counter_Variable__pf;
			}
		case 6:
			{
				__StateStack.Push(12);
			}
		case 7:
			{
				FCustomThunkTemplates::Array_Get(bpfv__CallFunc_GetAllActorsWithInterface_OutActors__pf, bpfv__Temp_int_Array_Index_Variable__pf, /*out*/ bpfv__CallFunc_Array_Get_Item__pf);
				if ( bpfv__CallFunc_Array_Get_Item__pf && bpfv__CallFunc_Array_Get_Item__pf->GetClass()->ImplementsInterface(UBPI_Mei_Floor_C::StaticClass()) )
				{
					bpfv__K2Node_DynamicCast_AsBPI_Mei_Floor__pf.SetObject(bpfv__CallFunc_Array_Get_Item__pf);
					void* IAddress = bpfv__CallFunc_Array_Get_Item__pf->GetInterfaceAddress(UBPI_Mei_Floor_C::StaticClass());
					bpfv__K2Node_DynamicCast_AsBPI_Mei_Floor__pf.SetInterface(IAddress);
				}
				else
				{
					bpfv__K2Node_DynamicCast_AsBPI_Mei_Floor__pf.SetObject(nullptr);
				}
				bpfv__K2Node_DynamicCast_bSuccess__pf = (bpfv__K2Node_DynamicCast_AsBPI_Mei_Floor__pf != nullptr);;
				if (!bpfv__K2Node_DynamicCast_bSuccess__pf)
				{
					__CurrentState = 13;
					break;
				}
			}
		case 8:
			{
				if(::IsValid(bpfv__K2Node_DynamicCast_AsBPI_Mei_Floor__pf))
				{
					IBPI_Mei_Floor_C::Execute_bpf__GetFloorNumber_BPI__pf(bpfv__K2Node_DynamicCast_AsBPI_Mei_Floor__pf.GetObject() , /*out*/ bpfv__CallFunc_GetFloorNumber_BPI_FloorNumber__pf);
				}
			}
		case 9:
			{
				bpfv__CallFunc_Greater_IntInt_ReturnValue__pf = UKismetMathLibrary::Greater_IntInt(bpfv__CallFunc_GetFloorNumber_BPI_FloorNumber__pf, bpp__TargetFloor__pf);
				if (!bpfv__CallFunc_Greater_IntInt_ReturnValue__pf)
				{
					__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
					break;
				}
			}
		case 10:
			{
				FCustomThunkTemplates::Array_Get(bpfv__CallFunc_GetAllActorsWithInterface_OutActors__pf, bpfv__Temp_int_Array_Index_Variable__pf, /*out*/ bpfv__CallFunc_Array_Get_Item__pf);
				bpfv__CallFunc_Array_Add_ReturnValue__pf = FCustomThunkTemplates::Array_Add(bpfv__LocalActors__pf, bpfv__CallFunc_Array_Get_Item__pf);
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 11:
			{
				bpp__IgnoringActors__pf = bpfv__LocalActors__pf;
				__CurrentState = -1;
				break;
			}
		case 12:
			{
				bpfv__CallFunc_Add_IntInt_ReturnValue__pf = UKismetMathLibrary::Add_IntInt(bpfv__Temp_int_Loop_Counter_Variable__pf, 1);
				bpfv__Temp_int_Loop_Counter_Variable__pf = bpfv__CallFunc_Add_IntInt_ReturnValue__pf;
				__CurrentState = 4;
				break;
			}
		case 13:
			{
				bpfv__CallFunc_GetFloorNumber_BPI_FloorNumber__pf = 0;
				__CurrentState = 9;
				break;
			}
		default:
			check(false); // Invalid state
			break;
		}
	} while( __CurrentState != -1 );
}
void UBP_Mei_BuildingComponent_C__pf1731449071::bpf__GetFoundationTransform__pf(FVector bpp__HitLocation__pf, /*out*/ FTransform& bpp__Transform__pf)
{
	FVector bpfv__LocalHitLocation__pf(EForceInit::ForceInit);
	bool bpfv__Temp_bool_Variable__pf{};
	float bpfv__CallFunc_BreakVector_X__pf{};
	float bpfv__CallFunc_BreakVector_Y__pf{};
	float bpfv__CallFunc_BreakVector_Z__pf{};
	bool bpfv__Temp_bool_Variable_1__pf{};
	bool bpfv__Temp_bool_Variable_2__pf{};
	bool bpfv__Temp_bool_Variable_3__pf{};
	float bpfv__CallFunc_BreakVector_X_1__pf{};
	float bpfv__CallFunc_BreakVector_Y_1__pf{};
	float bpfv__CallFunc_BreakVector_Z_1__pf{};
	FRotator bpfv__CallFunc_GetCorrectBuildingRotation_Rotation__pf(EForceInit::ForceInit);
	float bpfv__CallFunc_Subtract_FloatFloat_ReturnValue__pf{};
	float bpfv__CallFunc_Subtract_FloatFloat_ReturnValue_1__pf{};
	float bpfv__CallFunc_Divide_FloatFloat_ReturnValue__pf{};
	float bpfv__CallFunc_Multiply_FloatFloat_ReturnValue__pf{};
	FRotator bpfv__CallFunc_MakeRotator_ReturnValue__pf(EForceInit::ForceInit);
	FRotator bpfv__K2Node_Select_Default__pf(EForceInit::ForceInit);
	float bpfv__CallFunc_Divide_FloatFloat_ReturnValue_1__pf{};
	int32 bpfv__CallFunc_Round_ReturnValue__pf{};
	float bpfv__CallFunc_Divide_FloatFloat_ReturnValue_2__pf{};
	float bpfv__CallFunc_Multiply_IntFloat_ReturnValue__pf{};
	int32 bpfv__CallFunc_Round_ReturnValue_1__pf{};
	float bpfv__CallFunc_Add_FloatFloat_ReturnValue__pf{};
	float bpfv__CallFunc_Multiply_IntFloat_ReturnValue_1__pf{};
	float bpfv__CallFunc_Add_FloatFloat_ReturnValue_1__pf{};
	float bpfv__K2Node_Select_Default_1__pf{};
	float bpfv__K2Node_Select_Default_2__pf{};
	FVector bpfv__CallFunc_MakeVector_ReturnValue__pf(EForceInit::ForceInit);
	float bpfv__CallFunc_BreakVector_X_2__pf{};
	float bpfv__CallFunc_BreakVector_Y_2__pf{};
	float bpfv__CallFunc_BreakVector_Z_2__pf{};
	FVector bpfv__CallFunc_GetCorrectHitLocation_ReturnLocation__pf(EForceInit::ForceInit);
	float bpfv__CallFunc_Add_FloatFloat_ReturnValue_2__pf{};
	float bpfv__CallFunc_Divide_FloatFloat_ReturnValue_3__pf{};
	int32 bpfv__CallFunc_Round_ReturnValue_2__pf{};
	float bpfv__CallFunc_Multiply_IntFloat_ReturnValue_2__pf{};
	FVector bpfv__CallFunc_MakeVector_ReturnValue_1__pf(EForceInit::ForceInit);
	FVector bpfv__K2Node_Select_Default_3__pf(EForceInit::ForceInit);
	FTransform bpfv__CallFunc_MakeTransform_ReturnValue__pf{};
	bpfv__LocalHitLocation__pf = bpp__HitLocation__pf;
	UKismetMathLibrary::BreakVector(bpp__HitLocation__pf, /*out*/ bpfv__CallFunc_BreakVector_X__pf, /*out*/ bpfv__CallFunc_BreakVector_Y__pf, /*out*/ bpfv__CallFunc_BreakVector_Z__pf);
	UKismetMathLibrary::BreakVector(bpfv__LocalHitLocation__pf, /*out*/ bpfv__CallFunc_BreakVector_X_1__pf, /*out*/ bpfv__CallFunc_BreakVector_Y_1__pf, /*out*/ bpfv__CallFunc_BreakVector_Z_1__pf);
	bpf__GetCorrectBuildingRotation__pf(/*out*/ bpfv__CallFunc_GetCorrectBuildingRotation_Rotation__pf);
	bpfv__CallFunc_Subtract_FloatFloat_ReturnValue__pf = UKismetMathLibrary::Subtract_FloatFloat(bpfv__CallFunc_BreakVector_Y__pf, bpv__GridCorrectOffset__pf);
	bpfv__CallFunc_Subtract_FloatFloat_ReturnValue_1__pf = UKismetMathLibrary::Subtract_FloatFloat(bpfv__CallFunc_BreakVector_X__pf, bpv__GridCorrectOffset__pf);
	bpfv__CallFunc_Divide_FloatFloat_ReturnValue__pf = FCustomThunkTemplates::Divide_FloatFloat(bpv__InputBuildingRotationZ__pf, bpv__BuildingRotationStepZ__pf);
	bpfv__CallFunc_Multiply_FloatFloat_ReturnValue__pf = UKismetMathLibrary::Multiply_FloatFloat(bpfv__CallFunc_Divide_FloatFloat_ReturnValue__pf, 90.000000);
	bpfv__CallFunc_MakeRotator_ReturnValue__pf = UKismetMathLibrary::MakeRotator(0.000000, 0.000000, bpfv__CallFunc_Multiply_FloatFloat_ReturnValue__pf);
	bpfv__Temp_bool_Variable_3__pf = bpv__GridMode__pf;
	bpfv__Temp_bool_Variable__pf = bpv__GridMode__pf;
	bpfv__CallFunc_Divide_FloatFloat_ReturnValue_1__pf = FCustomThunkTemplates::Divide_FloatFloat(bpfv__CallFunc_Subtract_FloatFloat_ReturnValue__pf, bpv__GridFoundationOffset__pf);
	bpfv__CallFunc_Round_ReturnValue__pf = UKismetMathLibrary::Round(bpfv__CallFunc_Divide_FloatFloat_ReturnValue_1__pf);
	bpfv__CallFunc_Divide_FloatFloat_ReturnValue_2__pf = FCustomThunkTemplates::Divide_FloatFloat(bpfv__CallFunc_Subtract_FloatFloat_ReturnValue_1__pf, bpv__GridFoundationOffset__pf);
	bpfv__CallFunc_Multiply_IntFloat_ReturnValue__pf = UKismetMathLibrary::Multiply_IntFloat(bpfv__CallFunc_Round_ReturnValue__pf, bpv__GridFoundationOffset__pf);
	bpfv__CallFunc_Round_ReturnValue_1__pf = UKismetMathLibrary::Round(bpfv__CallFunc_Divide_FloatFloat_ReturnValue_2__pf);
	bpfv__CallFunc_Add_FloatFloat_ReturnValue__pf = UKismetMathLibrary::Add_FloatFloat(bpfv__CallFunc_Multiply_IntFloat_ReturnValue__pf, bpv__GridCorrectOffset__pf);
	bpfv__CallFunc_Multiply_IntFloat_ReturnValue_1__pf = UKismetMathLibrary::Multiply_IntFloat(bpfv__CallFunc_Round_ReturnValue_1__pf, bpv__GridFoundationOffset__pf);
	bpfv__CallFunc_Add_FloatFloat_ReturnValue_1__pf = UKismetMathLibrary::Add_FloatFloat(bpfv__CallFunc_Multiply_IntFloat_ReturnValue_1__pf, bpv__GridCorrectOffset__pf);
	bpfv__Temp_bool_Variable_1__pf = bpv__GridMode__pf;
	bpfv__Temp_bool_Variable_2__pf = bpv__GridMode__pf;
	bpfv__CallFunc_MakeVector_ReturnValue__pf = UKismetMathLibrary::MakeVector(TSwitchValue<bool , float >(bpfv__Temp_bool_Variable_2__pf, bpfv__K2Node_Select_Default_2__pf, 2, TSwitchPair<bool , float >(false, bpfv__CallFunc_BreakVector_X_1__pf), TSwitchPair<bool , float >(true, bpfv__CallFunc_Add_FloatFloat_ReturnValue_1__pf)), TSwitchValue<bool , float >(bpfv__Temp_bool_Variable_1__pf, bpfv__K2Node_Select_Default_1__pf, 2, TSwitchPair<bool , float >(false, bpfv__CallFunc_BreakVector_Y_1__pf), TSwitchPair<bool , float >(true, bpfv__CallFunc_Add_FloatFloat_ReturnValue__pf)), bpfv__CallFunc_BreakVector_Z_1__pf);
	UKismetMathLibrary::BreakVector(bpfv__CallFunc_MakeVector_ReturnValue__pf, /*out*/ bpfv__CallFunc_BreakVector_X_2__pf, /*out*/ bpfv__CallFunc_BreakVector_Y_2__pf, /*out*/ bpfv__CallFunc_BreakVector_Z_2__pf);
	bpf__GetCorrectHitLocation__pf(bpfv__CallFunc_MakeVector_ReturnValue__pf, /*out*/ bpfv__CallFunc_GetCorrectHitLocation_ReturnLocation__pf);
	bpfv__CallFunc_Add_FloatFloat_ReturnValue_2__pf = UKismetMathLibrary::Add_FloatFloat(bpfv__CallFunc_BreakVector_Z_2__pf, bpv__InputBuildingOffsetZ__pf);
	bpfv__CallFunc_Divide_FloatFloat_ReturnValue_3__pf = FCustomThunkTemplates::Divide_FloatFloat(bpfv__CallFunc_Add_FloatFloat_ReturnValue_2__pf, bpv__GridFoundationOffsetZ__pf);
	bpfv__CallFunc_Round_ReturnValue_2__pf = UKismetMathLibrary::Round(bpfv__CallFunc_Divide_FloatFloat_ReturnValue_3__pf);
	bpfv__CallFunc_Multiply_IntFloat_ReturnValue_2__pf = UKismetMathLibrary::Multiply_IntFloat(bpfv__CallFunc_Round_ReturnValue_2__pf, bpv__GridFoundationOffsetZ__pf);
	bpfv__CallFunc_MakeVector_ReturnValue_1__pf = UKismetMathLibrary::MakeVector(bpfv__CallFunc_BreakVector_X_2__pf, bpfv__CallFunc_BreakVector_Y_2__pf, bpfv__CallFunc_Multiply_IntFloat_ReturnValue_2__pf);
	bpfv__CallFunc_MakeTransform_ReturnValue__pf = UKismetMathLibrary::MakeTransform(TSwitchValue<bool , FVector >(bpfv__Temp_bool_Variable_3__pf, bpfv__K2Node_Select_Default_3__pf, 2, TSwitchPair<bool , FVector >(false, bpfv__CallFunc_GetCorrectHitLocation_ReturnLocation__pf), TSwitchPair<bool , FVector >(true, bpfv__CallFunc_MakeVector_ReturnValue_1__pf)), TSwitchValue<bool , FRotator >(bpfv__Temp_bool_Variable__pf, bpfv__K2Node_Select_Default__pf, 2, TSwitchPair<bool , FRotator >(false, bpfv__CallFunc_GetCorrectBuildingRotation_Rotation__pf), TSwitchPair<bool , FRotator >(true, bpfv__CallFunc_MakeRotator_ReturnValue__pf)), FVector(1.000000,1.000000,1.000000));
	bpp__Transform__pf = bpfv__CallFunc_MakeTransform_ReturnValue__pf;
}
void UBP_Mei_BuildingComponent_C__pf1731449071::bpf__GetPropTransform__pf(FVector bpp__HitLocation__pf, /*out*/ FTransform& bpp__Transform__pf)
{
	FVector bpfv__LocalHitLocation__pf(EForceInit::ForceInit);
	bool bpfv__Temp_bool_Variable__pf{};
	float bpfv__CallFunc_BreakVector_X__pf{};
	float bpfv__CallFunc_BreakVector_Y__pf{};
	float bpfv__CallFunc_BreakVector_Z__pf{};
	bool bpfv__Temp_bool_Variable_1__pf{};
	bool bpfv__Temp_bool_Variable_2__pf{};
	bool bpfv__Temp_bool_Variable_3__pf{};
	bool bpfv__CallFunc_BooleanAND_ReturnValue__pf{};
	float bpfv__CallFunc_BreakVector_X_1__pf{};
	float bpfv__CallFunc_BreakVector_Y_1__pf{};
	float bpfv__CallFunc_BreakVector_Z_1__pf{};
	FRotator bpfv__CallFunc_GetCorrectBuildingRotation_Rotation__pf(EForceInit::ForceInit);
	float bpfv__CallFunc_Subtract_FloatFloat_ReturnValue__pf{};
	float bpfv__CallFunc_Subtract_FloatFloat_ReturnValue_1__pf{};
	float bpfv__CallFunc_Divide_FloatFloat_ReturnValue__pf{};
	float bpfv__CallFunc_Divide_FloatFloat_ReturnValue_1__pf{};
	int32 bpfv__CallFunc_Round_ReturnValue__pf{};
	int32 bpfv__CallFunc_Round_ReturnValue_1__pf{};
	float bpfv__CallFunc_Multiply_IntFloat_ReturnValue__pf{};
	float bpfv__CallFunc_Multiply_IntFloat_ReturnValue_1__pf{};
	float bpfv__CallFunc_Add_FloatFloat_ReturnValue__pf{};
	float bpfv__CallFunc_Add_FloatFloat_ReturnValue_1__pf{};
	float bpfv__CallFunc_Divide_FloatFloat_ReturnValue_2__pf{};
	float bpfv__CallFunc_Multiply_FloatFloat_ReturnValue__pf{};
	FRotator bpfv__CallFunc_MakeRotator_ReturnValue__pf(EForceInit::ForceInit);
	bool bpfv__CallFunc_BooleanAND_ReturnValue_1__pf{};
	FRotator bpfv__K2Node_Select_Default__pf(EForceInit::ForceInit);
	float bpfv__K2Node_Select_Default_1__pf{};
	float bpfv__K2Node_Select_Default_2__pf{};
	FVector bpfv__CallFunc_MakeVector_ReturnValue__pf(EForceInit::ForceInit);
	float bpfv__CallFunc_BreakVector_X_2__pf{};
	float bpfv__CallFunc_BreakVector_Y_2__pf{};
	float bpfv__CallFunc_BreakVector_Z_2__pf{};
	FVector bpfv__CallFunc_MakeVector_ReturnValue_1__pf(EForceInit::ForceInit);
	FVector bpfv__K2Node_Select_Default_3__pf(EForceInit::ForceInit);
	FTransform bpfv__CallFunc_MakeTransform_ReturnValue__pf{};
	bpfv__LocalHitLocation__pf = bpp__HitLocation__pf;
	UKismetMathLibrary::BreakVector(bpp__HitLocation__pf, /*out*/ bpfv__CallFunc_BreakVector_X__pf, /*out*/ bpfv__CallFunc_BreakVector_Y__pf, /*out*/ bpfv__CallFunc_BreakVector_Z__pf);
	bpfv__CallFunc_BooleanAND_ReturnValue__pf = UKismetMathLibrary::BooleanAND(bpv__GridMode__pf, bpv__GridModeForProps__pf);
	bpfv__Temp_bool_Variable_3__pf = bpfv__CallFunc_BooleanAND_ReturnValue__pf;
	UKismetMathLibrary::BreakVector(bpfv__LocalHitLocation__pf, /*out*/ bpfv__CallFunc_BreakVector_X_1__pf, /*out*/ bpfv__CallFunc_BreakVector_Y_1__pf, /*out*/ bpfv__CallFunc_BreakVector_Z_1__pf);
	bpfv__Temp_bool_Variable__pf = bpfv__CallFunc_BooleanAND_ReturnValue__pf;
	bpf__GetCorrectBuildingRotation__pf(/*out*/ bpfv__CallFunc_GetCorrectBuildingRotation_Rotation__pf);
	bpfv__CallFunc_Subtract_FloatFloat_ReturnValue__pf = UKismetMathLibrary::Subtract_FloatFloat(bpfv__CallFunc_BreakVector_Y__pf, bpv__GridCorrectOffset__pf);
	bpfv__CallFunc_Subtract_FloatFloat_ReturnValue_1__pf = UKismetMathLibrary::Subtract_FloatFloat(bpfv__CallFunc_BreakVector_X__pf, bpv__GridCorrectOffset__pf);
	bpfv__CallFunc_Divide_FloatFloat_ReturnValue__pf = FCustomThunkTemplates::Divide_FloatFloat(bpfv__CallFunc_Subtract_FloatFloat_ReturnValue__pf, bpv__GridPropsOffset__pf);
	bpfv__CallFunc_Divide_FloatFloat_ReturnValue_1__pf = FCustomThunkTemplates::Divide_FloatFloat(bpfv__CallFunc_Subtract_FloatFloat_ReturnValue_1__pf, bpv__GridPropsOffset__pf);
	bpfv__CallFunc_Round_ReturnValue__pf = UKismetMathLibrary::Round(bpfv__CallFunc_Divide_FloatFloat_ReturnValue__pf);
	bpfv__CallFunc_Round_ReturnValue_1__pf = UKismetMathLibrary::Round(bpfv__CallFunc_Divide_FloatFloat_ReturnValue_1__pf);
	bpfv__CallFunc_Multiply_IntFloat_ReturnValue__pf = UKismetMathLibrary::Multiply_IntFloat(bpfv__CallFunc_Round_ReturnValue__pf, bpv__GridPropsOffset__pf);
	bpfv__CallFunc_Multiply_IntFloat_ReturnValue_1__pf = UKismetMathLibrary::Multiply_IntFloat(bpfv__CallFunc_Round_ReturnValue_1__pf, bpv__GridPropsOffset__pf);
	bpfv__CallFunc_Add_FloatFloat_ReturnValue__pf = UKismetMathLibrary::Add_FloatFloat(bpfv__CallFunc_Multiply_IntFloat_ReturnValue__pf, bpv__GridCorrectOffset__pf);
	bpfv__CallFunc_Add_FloatFloat_ReturnValue_1__pf = UKismetMathLibrary::Add_FloatFloat(bpfv__CallFunc_Multiply_IntFloat_ReturnValue_1__pf, bpv__GridCorrectOffset__pf);
	bpfv__CallFunc_Divide_FloatFloat_ReturnValue_2__pf = FCustomThunkTemplates::Divide_FloatFloat(bpv__InputBuildingRotationZ__pf, bpv__BuildingRotationStepZ__pf);
	bpfv__CallFunc_Multiply_FloatFloat_ReturnValue__pf = UKismetMathLibrary::Multiply_FloatFloat(bpfv__CallFunc_Divide_FloatFloat_ReturnValue_2__pf, 90.000000);
	bpfv__CallFunc_MakeRotator_ReturnValue__pf = UKismetMathLibrary::MakeRotator(0.000000, 0.000000, bpfv__CallFunc_Multiply_FloatFloat_ReturnValue__pf);
	bpfv__CallFunc_BooleanAND_ReturnValue_1__pf = UKismetMathLibrary::BooleanAND(bpv__GridMode__pf, bpv__GridModeForProps__pf);
	bpfv__Temp_bool_Variable_1__pf = bpfv__CallFunc_BooleanAND_ReturnValue_1__pf;
	bpfv__Temp_bool_Variable_2__pf = bpfv__CallFunc_BooleanAND_ReturnValue_1__pf;
	bpfv__CallFunc_MakeVector_ReturnValue__pf = UKismetMathLibrary::MakeVector(TSwitchValue<bool , float >(bpfv__Temp_bool_Variable_2__pf, bpfv__K2Node_Select_Default_2__pf, 2, TSwitchPair<bool , float >(false, bpfv__CallFunc_BreakVector_X_1__pf), TSwitchPair<bool , float >(true, bpfv__CallFunc_Add_FloatFloat_ReturnValue_1__pf)), TSwitchValue<bool , float >(bpfv__Temp_bool_Variable_1__pf, bpfv__K2Node_Select_Default_1__pf, 2, TSwitchPair<bool , float >(false, bpfv__CallFunc_BreakVector_Y_1__pf), TSwitchPair<bool , float >(true, bpfv__CallFunc_Add_FloatFloat_ReturnValue__pf)), bpfv__CallFunc_BreakVector_Z_1__pf);
	UKismetMathLibrary::BreakVector(bpfv__CallFunc_MakeVector_ReturnValue__pf, /*out*/ bpfv__CallFunc_BreakVector_X_2__pf, /*out*/ bpfv__CallFunc_BreakVector_Y_2__pf, /*out*/ bpfv__CallFunc_BreakVector_Z_2__pf);
	bpfv__CallFunc_MakeVector_ReturnValue_1__pf = UKismetMathLibrary::MakeVector(bpfv__CallFunc_BreakVector_X_2__pf, bpfv__CallFunc_BreakVector_Y_2__pf, bpfv__CallFunc_BreakVector_Z_2__pf);
	bpfv__CallFunc_MakeTransform_ReturnValue__pf = UKismetMathLibrary::MakeTransform(TSwitchValue<bool , FVector >(bpfv__Temp_bool_Variable_3__pf, bpfv__K2Node_Select_Default_3__pf, 2, TSwitchPair<bool , FVector >(false, bpfv__CallFunc_MakeVector_ReturnValue__pf), TSwitchPair<bool , FVector >(true, bpfv__CallFunc_MakeVector_ReturnValue_1__pf)), TSwitchValue<bool , FRotator >(bpfv__Temp_bool_Variable__pf, bpfv__K2Node_Select_Default__pf, 2, TSwitchPair<bool , FRotator >(false, bpfv__CallFunc_GetCorrectBuildingRotation_Rotation__pf), TSwitchPair<bool , FRotator >(true, bpfv__CallFunc_MakeRotator_ReturnValue__pf)), FVector(1.000000,1.000000,1.000000));
	bpp__Transform__pf = bpfv__CallFunc_MakeTransform_ReturnValue__pf;
}
void UBP_Mei_BuildingComponent_C__pf1731449071::bpf__GetCorrectHitLocation__pf(FVector bpp__HitLocation__pf, /*out*/ FVector& bpp__ReturnLocation__pf)
{
	float bpfv__CallFunc_BreakVector_X__pf{};
	float bpfv__CallFunc_BreakVector_Y__pf{};
	float bpfv__CallFunc_BreakVector_Z__pf{};
	float bpfv__CallFunc_Add_FloatFloat_ReturnValue__pf{};
	FVector bpfv__CallFunc_MakeVector_ReturnValue__pf(EForceInit::ForceInit);
	UKismetMathLibrary::BreakVector(bpp__HitLocation__pf, /*out*/ bpfv__CallFunc_BreakVector_X__pf, /*out*/ bpfv__CallFunc_BreakVector_Y__pf, /*out*/ bpfv__CallFunc_BreakVector_Z__pf);
	bpfv__CallFunc_Add_FloatFloat_ReturnValue__pf = UKismetMathLibrary::Add_FloatFloat(bpfv__CallFunc_BreakVector_Z__pf, bpv__InputBuildingOffsetZ__pf);
	bpfv__CallFunc_MakeVector_ReturnValue__pf = UKismetMathLibrary::MakeVector(bpfv__CallFunc_BreakVector_X__pf, bpfv__CallFunc_BreakVector_Y__pf, bpfv__CallFunc_Add_FloatFloat_ReturnValue__pf);
	bpp__ReturnLocation__pf = bpfv__CallFunc_MakeVector_ReturnValue__pf;
}
void UBP_Mei_BuildingComponent_C__pf1731449071::bpf__GetCorrectBuildingRotation__pf(/*out*/ FRotator& bpp__Rotation__pf)
{
	bool bpfv__Temp_bool_Variable__pf{};
	FRotator bpfv__CallFunc_GetCameraRotation_ReturnValue__pf(EForceInit::ForceInit);
	float bpfv__CallFunc_BreakRotator_Roll__pf{};
	float bpfv__CallFunc_BreakRotator_Pitch__pf{};
	float bpfv__CallFunc_BreakRotator_Yaw__pf{};
	float bpfv__CallFunc_Add_FloatFloat_ReturnValue__pf{};
	float bpfv__CallFunc_Add_FloatFloat_ReturnValue_1__pf{};
	float bpfv__K2Node_Select_Default__pf{};
	FRotator bpfv__CallFunc_MakeRotator_ReturnValue__pf(EForceInit::ForceInit);
	bpfv__Temp_bool_Variable__pf = bpv__TopDownViewMode__pf;
	if(::IsValid(bpv__PlayerController__pf) && ::IsValid(bpv__PlayerController__pf->PlayerCameraManager))
	{
		bpfv__CallFunc_GetCameraRotation_ReturnValue__pf = bpv__PlayerController__pf->PlayerCameraManager->GetCameraRotation();
	}
	UKismetMathLibrary::BreakRotator(bpfv__CallFunc_GetCameraRotation_ReturnValue__pf, /*out*/ bpfv__CallFunc_BreakRotator_Roll__pf, /*out*/ bpfv__CallFunc_BreakRotator_Pitch__pf, /*out*/ bpfv__CallFunc_BreakRotator_Yaw__pf);
	bpfv__CallFunc_Add_FloatFloat_ReturnValue__pf = UKismetMathLibrary::Add_FloatFloat(bpfv__CallFunc_BreakRotator_Yaw__pf, bpv__InputBuildingRotationZ__pf);
	bpfv__CallFunc_Add_FloatFloat_ReturnValue_1__pf = UKismetMathLibrary::Add_FloatFloat(bpfv__CallFunc_Add_FloatFloat_ReturnValue__pf, 90.000000);
	bpfv__CallFunc_MakeRotator_ReturnValue__pf = UKismetMathLibrary::MakeRotator(0.000000, 0.000000, TSwitchValue<bool , float >(bpfv__Temp_bool_Variable__pf, bpfv__K2Node_Select_Default__pf, 2, TSwitchPair<bool , float >(false, bpfv__CallFunc_Add_FloatFloat_ReturnValue_1__pf), TSwitchPair<bool , float >(true, bpv__InputBuildingRotationZ__pf)));
	bpp__Rotation__pf = bpfv__CallFunc_MakeRotator_ReturnValue__pf;
}
void UBP_Mei_BuildingComponent_C__pf1731449071::bpf__TryQuickInteraction__pf(/*out*/ bool& bpp__Success__pf)
{
	bool bpfv__K2Node_SwitchEnum_CmpSuccess__pf{};
	int32 __CurrentState = 1;
	do
	{
		switch( __CurrentState )
		{
		case 1:
			{
				bpfv__K2Node_SwitchEnum_CmpSuccess__pf = UKismetMathLibrary::NotEqual_ByteByte(static_cast<uint8>(bpv__BuildingMode__pf), static_cast<uint8>(E__E_Mei_BuildingMode__pf::NewEnumerator1));
				if (!bpfv__K2Node_SwitchEnum_CmpSuccess__pf)
				{
					__CurrentState = 2;
					break;
				}
				bpfv__K2Node_SwitchEnum_CmpSuccess__pf = UKismetMathLibrary::NotEqual_ByteByte(static_cast<uint8>(bpv__BuildingMode__pf), static_cast<uint8>(E__E_Mei_BuildingMode__pf::NewEnumerator2));
				if (!bpfv__K2Node_SwitchEnum_CmpSuccess__pf)
				{
					__CurrentState = 4;
					break;
				}
				bpfv__K2Node_SwitchEnum_CmpSuccess__pf = UKismetMathLibrary::NotEqual_ByteByte(static_cast<uint8>(bpv__BuildingMode__pf), static_cast<uint8>(E__E_Mei_BuildingMode__pf::NewEnumerator3));
				if (!bpfv__K2Node_SwitchEnum_CmpSuccess__pf)
				{
					__CurrentState = 5;
					break;
				}
				bpfv__K2Node_SwitchEnum_CmpSuccess__pf = UKismetMathLibrary::NotEqual_ByteByte(static_cast<uint8>(bpv__BuildingMode__pf), static_cast<uint8>(E__E_Mei_BuildingMode__pf::NewEnumerator4));
				if (!bpfv__K2Node_SwitchEnum_CmpSuccess__pf)
				{
					__CurrentState = 6;
					break;
				}
				bpfv__K2Node_SwitchEnum_CmpSuccess__pf = UKismetMathLibrary::NotEqual_ByteByte(static_cast<uint8>(bpv__BuildingMode__pf), static_cast<uint8>(E__E_Mei_BuildingMode__pf::NewEnumerator5));
				if (!bpfv__K2Node_SwitchEnum_CmpSuccess__pf)
				{
					__CurrentState = 7;
					break;
				}
				bpfv__K2Node_SwitchEnum_CmpSuccess__pf = UKismetMathLibrary::NotEqual_ByteByte(static_cast<uint8>(bpv__BuildingMode__pf), static_cast<uint8>(E__E_Mei_BuildingMode__pf::NewEnumerator6));
				if (!bpfv__K2Node_SwitchEnum_CmpSuccess__pf)
				{
					__CurrentState = 8;
					break;
				}
				__CurrentState = -1;
				break;
			}
		case 2:
			{
				bpf__TryQuickBuildxxClientx__pfTLK();
			}
		case 3:
			{
				bpp__Success__pf = true;
				__CurrentState = -1;
				break;
			}
		case 4:
			{
				bpf__TryQuickRepairxxClientx__pfTLK();
				__CurrentState = 3;
				break;
			}
		case 5:
			{
				bpf__TryQuickUpgradexxClientx__pfTLK();
				__CurrentState = 3;
				break;
			}
		case 6:
			{
				bpf__TryQuickDestructxxClientx__pfTLK();
				__CurrentState = 3;
				break;
			}
		case 7:
			{
				bpf__TryQuickRemovexxClientx__pfTLK();
				__CurrentState = 3;
				break;
			}
		case 8:
			{
				bpf__TryQuickRotatexxClientx__pfTLK();
				__CurrentState = 3;
				break;
			}
		default:
			break;
		}
	} while( __CurrentState != -1 );
}
void UBP_Mei_BuildingComponent_C__pf1731449071::bpf__TryToCreateBuildingWidget__pf(/*out*/ bool& bpp__Success__pf)
{
	int32 bpfv__Temp_int_Array_Index_Variable__pf{};
	TScriptInterface<IBPI_Mei_BuildingWidget_C> bpfv__K2Node_DynamicCast_AsBPI_Mei_Building_Widget__pf{};
	bool bpfv__K2Node_DynamicCast_bSuccess__pf{};
	TScriptInterface<IBPI_Mei_BuildingWidget_C> bpfv__K2Node_DynamicCast_AsBPI_Mei_Building_Widget_1__pf{};
	bool bpfv__K2Node_DynamicCast_bSuccess_1__pf{};
	int32 bpfv__Temp_int_Loop_Counter_Variable__pf{};
	UUserWidget* bpfv__CallFunc_Create_ReturnValue__pf{};
	TArray<UUserWidget*> bpfv__CallFunc_GetAllWidgetsOfClass_FoundWidgets__pf{};
	UUserWidget* bpfv__CallFunc_Array_Get_Item__pf{};
	int32 bpfv__CallFunc_Array_Length_ReturnValue__pf{};
	bool bpfv__CallFunc_Less_IntInt_ReturnValue__pf{};
	bool bpfv__CallFunc_IsValidClass_ReturnValue__pf{};
	int32 bpfv__CallFunc_Add_IntInt_ReturnValue__pf{};
	TArray< int32, TInlineAllocator<8> > __StateStack;

	int32 __CurrentState = 1;
	do
	{
		switch( __CurrentState )
		{
		case 1:
			{
				bpfv__CallFunc_IsValidClass_ReturnValue__pf = UKismetSystemLibrary::IsValidClass(bpv__BuildingWidgetClass__pf);
				if (!bpfv__CallFunc_IsValidClass_ReturnValue__pf)
				{
					__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
					break;
				}
			}
		case 2:
			{
				(bpfv__CallFunc_GetAllWidgetsOfClass_FoundWidgets__pf).Reset();
				UWidgetBlueprintLibrary::GetAllWidgetsOfClass(this, /*out*/ bpfv__CallFunc_GetAllWidgetsOfClass_FoundWidgets__pf, bpv__BuildingWidgetClass__pf, true);
			}
		case 3:
			{
				bpfv__Temp_int_Loop_Counter_Variable__pf = 0;
			}
		case 4:
			{
				bpfv__Temp_int_Array_Index_Variable__pf = 0;
			}
		case 5:
			{
				bpfv__CallFunc_Array_Length_ReturnValue__pf = FCustomThunkTemplates::Array_Length(bpfv__CallFunc_GetAllWidgetsOfClass_FoundWidgets__pf);
				bpfv__CallFunc_Less_IntInt_ReturnValue__pf = UKismetMathLibrary::Less_IntInt(bpfv__Temp_int_Loop_Counter_Variable__pf, bpfv__CallFunc_Array_Length_ReturnValue__pf);
				if (!bpfv__CallFunc_Less_IntInt_ReturnValue__pf)
				{
					__CurrentState = 14;
					break;
				}
			}
		case 6:
			{
				bpfv__Temp_int_Array_Index_Variable__pf = bpfv__Temp_int_Loop_Counter_Variable__pf;
			}
		case 7:
			{
				__StateStack.Push(17);
			}
		case 8:
			{
				FCustomThunkTemplates::Array_Get(bpfv__CallFunc_GetAllWidgetsOfClass_FoundWidgets__pf, bpfv__Temp_int_Array_Index_Variable__pf, /*out*/ bpfv__CallFunc_Array_Get_Item__pf);
				bpv__BuildingWidget__pf = bpfv__CallFunc_Array_Get_Item__pf;
			}
		case 9:
			{
				if ( bpv__BuildingWidget__pf && bpv__BuildingWidget__pf->GetClass()->ImplementsInterface(UBPI_Mei_BuildingWidget_C::StaticClass()) )
				{
					bpfv__K2Node_DynamicCast_AsBPI_Mei_Building_Widget_1__pf.SetObject(bpv__BuildingWidget__pf);
					void* IAddress = bpv__BuildingWidget__pf->GetInterfaceAddress(UBPI_Mei_BuildingWidget_C::StaticClass());
					bpfv__K2Node_DynamicCast_AsBPI_Mei_Building_Widget_1__pf.SetInterface(IAddress);
				}
				else
				{
					bpfv__K2Node_DynamicCast_AsBPI_Mei_Building_Widget_1__pf.SetObject(nullptr);
				}
				bpfv__K2Node_DynamicCast_bSuccess_1__pf = (bpfv__K2Node_DynamicCast_AsBPI_Mei_Building_Widget_1__pf != nullptr);;
				if (!bpfv__K2Node_DynamicCast_bSuccess_1__pf)
				{
					__CurrentState = 11;
					break;
				}
			}
		case 10:
			{
				if(::IsValid(bpfv__K2Node_DynamicCast_AsBPI_Mei_Building_Widget_1__pf))
				{
					IBPI_Mei_BuildingWidget_C::Execute_bpf__SetBuildingComponentReference_BPI__pf(bpfv__K2Node_DynamicCast_AsBPI_Mei_Building_Widget_1__pf.GetObject() , this);
				}
			}
		case 11:
			{
				if ( bpv__BuildingWidget__pf && bpv__BuildingWidget__pf->GetClass()->ImplementsInterface(UBPI_Mei_BuildingWidget_C::StaticClass()) )
				{
					bpfv__K2Node_DynamicCast_AsBPI_Mei_Building_Widget__pf.SetObject(bpv__BuildingWidget__pf);
					void* IAddress = bpv__BuildingWidget__pf->GetInterfaceAddress(UBPI_Mei_BuildingWidget_C::StaticClass());
					bpfv__K2Node_DynamicCast_AsBPI_Mei_Building_Widget__pf.SetInterface(IAddress);
				}
				else
				{
					bpfv__K2Node_DynamicCast_AsBPI_Mei_Building_Widget__pf.SetObject(nullptr);
				}
				bpfv__K2Node_DynamicCast_bSuccess__pf = (bpfv__K2Node_DynamicCast_AsBPI_Mei_Building_Widget__pf != nullptr);;
				if (!bpfv__K2Node_DynamicCast_bSuccess__pf)
				{
					__CurrentState = 13;
					break;
				}
			}
		case 12:
			{
				if(::IsValid(bpfv__K2Node_DynamicCast_AsBPI_Mei_Building_Widget__pf))
				{
					IBPI_Mei_BuildingWidget_C::Execute_bpf__UpdateBuildingList_BPI__pf(bpfv__K2Node_DynamicCast_AsBPI_Mei_Building_Widget__pf.GetObject() , bpv__StartingBuildingList__pf);
				}
			}
		case 13:
			{
				bpp__Success__pf = true;
				__CurrentState = -1;
				break;
			}
		case 14:
			{
				bpfv__CallFunc_Create_ReturnValue__pf = UWidgetBlueprintLibrary::Create(this, bpv__BuildingWidgetClass__pf, bpv__PlayerController__pf);
			}
		case 15:
			{
				bpv__BuildingWidget__pf = bpfv__CallFunc_Create_ReturnValue__pf;
			}
		case 16:
			{
				if(::IsValid(bpv__BuildingWidget__pf))
				{
					bpv__BuildingWidget__pf->UUserWidget::AddToViewport(0);
				}
				__CurrentState = 9;
				break;
			}
		case 17:
			{
				bpfv__CallFunc_Add_IntInt_ReturnValue__pf = UKismetMathLibrary::Add_IntInt(bpfv__Temp_int_Loop_Counter_Variable__pf, 1);
				bpfv__Temp_int_Loop_Counter_Variable__pf = bpfv__CallFunc_Add_IntInt_ReturnValue__pf;
				__CurrentState = 5;
				break;
			}
		default:
			check(false); // Invalid state
			break;
		}
	} while( __CurrentState != -1 );
}
void UBP_Mei_BuildingComponent_C__pf1731449071::bpf__ShowBuildingMenu__pf(/*out*/ bool& bpp__Success__pf)
{
	bool bpfv__CallFunc_IsValid_ReturnValue__pf{};
	TScriptInterface<IBPI_Mei_BuildingWidget_C> bpfv__K2Node_DynamicCast_AsBPI_Mei_Building_Widget__pf{};
	bool bpfv__K2Node_DynamicCast_bSuccess__pf{};
	int32 __CurrentState = 1;
	do
	{
		switch( __CurrentState )
		{
		case 1:
			{
				bpfv__CallFunc_IsValid_ReturnValue__pf = UKismetSystemLibrary::IsValid(bpv__BuildingWidget__pf);
				if (!bpfv__CallFunc_IsValid_ReturnValue__pf)
				{
					__CurrentState = -1;
					break;
				}
			}
		case 2:
			{
				if ( bpv__BuildingWidget__pf && bpv__BuildingWidget__pf->GetClass()->ImplementsInterface(UBPI_Mei_BuildingWidget_C::StaticClass()) )
				{
					bpfv__K2Node_DynamicCast_AsBPI_Mei_Building_Widget__pf.SetObject(bpv__BuildingWidget__pf);
					void* IAddress = bpv__BuildingWidget__pf->GetInterfaceAddress(UBPI_Mei_BuildingWidget_C::StaticClass());
					bpfv__K2Node_DynamicCast_AsBPI_Mei_Building_Widget__pf.SetInterface(IAddress);
				}
				else
				{
					bpfv__K2Node_DynamicCast_AsBPI_Mei_Building_Widget__pf.SetObject(nullptr);
				}
				bpfv__K2Node_DynamicCast_bSuccess__pf = (bpfv__K2Node_DynamicCast_AsBPI_Mei_Building_Widget__pf != nullptr);;
				if (!bpfv__K2Node_DynamicCast_bSuccess__pf)
				{
					__CurrentState = 4;
					break;
				}
			}
		case 3:
			{
				if(::IsValid(bpfv__K2Node_DynamicCast_AsBPI_Mei_Building_Widget__pf))
				{
					IBPI_Mei_BuildingWidget_C::Execute_bpf__ShowBuildingMenu_BPI__pf(bpfv__K2Node_DynamicCast_AsBPI_Mei_Building_Widget__pf.GetObject() );
				}
			}
		case 4:
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
void UBP_Mei_BuildingComponent_C__pf1731449071::bpf__HideBuildingMenu__pf(/*out*/ bool& bpp__Success__pf)
{
	bool bpfv__CallFunc_IsValid_ReturnValue__pf{};
	TScriptInterface<IBPI_Mei_BuildingWidget_C> bpfv__K2Node_DynamicCast_AsBPI_Mei_Building_Widget__pf{};
	bool bpfv__K2Node_DynamicCast_bSuccess__pf{};
	int32 __CurrentState = 1;
	do
	{
		switch( __CurrentState )
		{
		case 1:
			{
				bpfv__CallFunc_IsValid_ReturnValue__pf = UKismetSystemLibrary::IsValid(bpv__BuildingWidget__pf);
				if (!bpfv__CallFunc_IsValid_ReturnValue__pf)
				{
					__CurrentState = -1;
					break;
				}
			}
		case 2:
			{
				if ( bpv__BuildingWidget__pf && bpv__BuildingWidget__pf->GetClass()->ImplementsInterface(UBPI_Mei_BuildingWidget_C::StaticClass()) )
				{
					bpfv__K2Node_DynamicCast_AsBPI_Mei_Building_Widget__pf.SetObject(bpv__BuildingWidget__pf);
					void* IAddress = bpv__BuildingWidget__pf->GetInterfaceAddress(UBPI_Mei_BuildingWidget_C::StaticClass());
					bpfv__K2Node_DynamicCast_AsBPI_Mei_Building_Widget__pf.SetInterface(IAddress);
				}
				else
				{
					bpfv__K2Node_DynamicCast_AsBPI_Mei_Building_Widget__pf.SetObject(nullptr);
				}
				bpfv__K2Node_DynamicCast_bSuccess__pf = (bpfv__K2Node_DynamicCast_AsBPI_Mei_Building_Widget__pf != nullptr);;
				if (!bpfv__K2Node_DynamicCast_bSuccess__pf)
				{
					__CurrentState = 4;
					break;
				}
			}
		case 3:
			{
				if(::IsValid(bpfv__K2Node_DynamicCast_AsBPI_Mei_Building_Widget__pf))
				{
					IBPI_Mei_BuildingWidget_C::Execute_bpf__HideBuildingMenu_BPI__pf(bpfv__K2Node_DynamicCast_AsBPI_Mei_Building_Widget__pf.GetObject() );
				}
			}
		case 4:
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
void UBP_Mei_BuildingComponent_C__pf1731449071::bpf__UpdateBuildingList__pf(FDataTableRowHandle bpp__BuildingListHandle__pf, /*out*/ bool& bpp__Success__pf)
{
	TScriptInterface<IBPI_Mei_BuildingWidget_C> bpfv__K2Node_DynamicCast_AsBPI_Mei_Building_Widget__pf{};
	bool bpfv__K2Node_DynamicCast_bSuccess__pf{};
	int32 __CurrentState = 1;
	do
	{
		switch( __CurrentState )
		{
		case 1:
			{
				if ( bpv__BuildingWidget__pf && bpv__BuildingWidget__pf->GetClass()->ImplementsInterface(UBPI_Mei_BuildingWidget_C::StaticClass()) )
				{
					bpfv__K2Node_DynamicCast_AsBPI_Mei_Building_Widget__pf.SetObject(bpv__BuildingWidget__pf);
					void* IAddress = bpv__BuildingWidget__pf->GetInterfaceAddress(UBPI_Mei_BuildingWidget_C::StaticClass());
					bpfv__K2Node_DynamicCast_AsBPI_Mei_Building_Widget__pf.SetInterface(IAddress);
				}
				else
				{
					bpfv__K2Node_DynamicCast_AsBPI_Mei_Building_Widget__pf.SetObject(nullptr);
				}
				bpfv__K2Node_DynamicCast_bSuccess__pf = (bpfv__K2Node_DynamicCast_AsBPI_Mei_Building_Widget__pf != nullptr);;
				if (!bpfv__K2Node_DynamicCast_bSuccess__pf)
				{
					__CurrentState = 3;
					break;
				}
			}
		case 2:
			{
				if(::IsValid(bpfv__K2Node_DynamicCast_AsBPI_Mei_Building_Widget__pf))
				{
					IBPI_Mei_BuildingWidget_C::Execute_bpf__UpdateBuildingList_BPI__pf(bpfv__K2Node_DynamicCast_AsBPI_Mei_Building_Widget__pf.GetObject() , bpp__BuildingListHandle__pf);
				}
			}
		case 3:
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
void UBP_Mei_BuildingComponent_C__pf1731449071::bpf__SetBuildingWidget__pf(UUserWidget* bpp__BuildingWidget__pf, /*out*/ bool& bpp__Success__pf)
{
	bpv__BuildingWidget__pf = bpp__BuildingWidget__pf;
	bpp__Success__pf = true;
}
void UBP_Mei_BuildingComponent_C__pf1731449071::bpf__SendBuildingMessage__pf(E__E_Mei_BuildingMode__pf bpp__BuildingMode__pf, bool bpp__InteractionResult__pf, const FText& bpp__Message__pf__const, /*out*/ bool& bpp__Success__pf)
{
	typedef FText  T__Local__8;
	T__Local__8& bpp__Message__pf = *const_cast<T__Local__8 *>(&bpp__Message__pf__const);
	bpv__OnBuildingMessageReceived__pf.Broadcast(bpp__BuildingMode__pf, bpp__InteractionResult__pf, bpp__Message__pf);
	bpp__Success__pf = true;
}
void UBP_Mei_BuildingComponent_C__pf1731449071::bpf__TryStartBuildObject__pf(FDataTableRowHandle bpp__BuildingObjectHandle__pf, /*out*/ bool& bpp__Success__pf)
{
	bpf__StartBuildObjectxxClientx__pfTLK(bpp__BuildingObjectHandle__pf);
	bpp__Success__pf = true;
}
void UBP_Mei_BuildingComponent_C__pf1731449071::bpf__AutoInitComponent__pf(/*out*/ bool& bpp__Success__pf)
{
	bool bpfv__CallFunc_Not_PreBool_ReturnValue__pf{};
	int32 __CurrentState = 1;
	do
	{
		switch( __CurrentState )
		{
		case 1:
			{
				bpfv__CallFunc_Not_PreBool_ReturnValue__pf = UKismetMathLibrary::Not_PreBool(bpv__ManualInit__pf);
				if (!bpfv__CallFunc_Not_PreBool_ReturnValue__pf)
				{
					__CurrentState = -1;
					break;
				}
			}
		case 2:
			{
				bpf__CheckInitReferences__pf();
			}
		case 3:
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
void UBP_Mei_BuildingComponent_C__pf1731449071::bpf__SetTargetActor__pf(AActor* bpp__TargetActor__pf, /*out*/ bool& bpp__Success__pf)
{
	bool bpfv__CallFunc_SetTargetBuildingObject_Success__pf{};
	bool bpfv__CallFunc_NotEqual_ObjectObject_ReturnValue__pf{};
	int32 __CurrentState = 1;
	do
	{
		switch( __CurrentState )
		{
		case 1:
			{
				bpfv__CallFunc_NotEqual_ObjectObject_ReturnValue__pf = UKismetMathLibrary::NotEqual_ObjectObject(bpp__TargetActor__pf, bpv__TargetActor__pf);
				if (!bpfv__CallFunc_NotEqual_ObjectObject_ReturnValue__pf)
				{
					__CurrentState = -1;
					break;
				}
			}
		case 2:
			{
				bpv__TargetActor__pf = bpp__TargetActor__pf;
			}
		case 3:
			{
				bpf__SetTargetBuildingObject__pf(bpv__TargetActor__pf, /*out*/ bpfv__CallFunc_SetTargetBuildingObject_Success__pf);
			}
		case 4:
			{
				bpv__OnTargetActorChanged__pf.Broadcast(bpv__TargetActor__pf);
			}
		case 5:
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
void UBP_Mei_BuildingComponent_C__pf1731449071::bpf__SetTargetBuildingObject__pf(AActor* bpp__TargetActor__pf, /*out*/ bool& bpp__Success__pf)
{
	ABP_Mei_Building_BaseObject_C__pf2826203124* bpfv__LocalBuildingObject__pf{};
	ABP_Mei_Building_BaseObject_C__pf2826203124* bpfv__K2Node_DynamicCast_AsBP_Mei_Building_Base_Object__pf{};
	bool bpfv__K2Node_DynamicCast_bSuccess__pf{};
	bool bpfv__CallFunc_NotEqual_ObjectObject_ReturnValue__pf{};
	int32 __CurrentState = 1;
	do
	{
		switch( __CurrentState )
		{
		case 1:
			{
				bpfv__K2Node_DynamicCast_AsBP_Mei_Building_Base_Object__pf = Cast<ABP_Mei_Building_BaseObject_C__pf2826203124>(bpp__TargetActor__pf);
				bpfv__K2Node_DynamicCast_bSuccess__pf = (bpfv__K2Node_DynamicCast_AsBP_Mei_Building_Base_Object__pf != nullptr);;
				if (!bpfv__K2Node_DynamicCast_bSuccess__pf)
				{
					__CurrentState = 7;
					break;
				}
			}
		case 2:
			{
				bpfv__LocalBuildingObject__pf = bpfv__K2Node_DynamicCast_AsBP_Mei_Building_Base_Object__pf;
			}
		case 3:
			{
				bpfv__CallFunc_NotEqual_ObjectObject_ReturnValue__pf = UKismetMathLibrary::NotEqual_ObjectObject(bpfv__LocalBuildingObject__pf, bpv__TargetBuildingObject__pf);
				if (!bpfv__CallFunc_NotEqual_ObjectObject_ReturnValue__pf)
				{
					__CurrentState = -1;
					break;
				}
			}
		case 4:
			{
				bpv__TargetBuildingObject__pf = bpfv__LocalBuildingObject__pf;
			}
		case 5:
			{
				bpv__OnTargetBuildingObjectChanged__pf.Broadcast(bpv__TargetBuildingObject__pf);
			}
		case 6:
			{
				bpp__Success__pf = true;
				__CurrentState = -1;
				break;
			}
		case 7:
			{
				bpfv__LocalBuildingObject__pf = ((ABP_Mei_Building_BaseObject_C__pf2826203124*)nullptr);
				__CurrentState = 3;
				break;
			}
		default:
			break;
		}
	} while( __CurrentState != -1 );
}
void UBP_Mei_BuildingComponent_C__pf1731449071::bpf__GetBuildingMode__pf(/*out*/ E__E_Mei_BuildingMode__pf& bpp__BuildingMode__pf)
{
	bpp__BuildingMode__pf = bpv__BuildingMode__pf;
}
void UBP_Mei_BuildingComponent_C__pf1731449071::bpf__GetBuildingStatus__pf(/*out*/ bool& bpp__CanBeBuild__pf, /*out*/ ABP_Mei_Building_BaseObject_C__pf2826203124*& bpp__BuildingObject__pf, /*out*/ AActor*& bpp__TargetActor__pf, /*out*/ ABP_Mei_Building_BaseObject_C__pf2826203124*& bpp__TargetBuildingObject__pf)
{
	bpp__CanBeBuild__pf = bpv__CanBeBuilt__pf;
	bpp__BuildingObject__pf = bpv__BuildingObject__pf;
	bpp__TargetActor__pf = bpv__TargetActor__pf;
	bpp__TargetBuildingObject__pf = bpv__TargetBuildingObject__pf;
}
void UBP_Mei_BuildingComponent_C__pf1731449071::bpf__GetInteractionStatus__pf(/*out*/ E__E_Mei_BuildingMode__pf& bpp__BuildingMode__pf, /*out*/ AActor*& bpp__TargetActor__pf, /*out*/ ABP_Mei_Building_BaseObject_C__pf2826203124*& bpp__TargetBuildingObject__pf)
{
	bpp__BuildingMode__pf = bpv__BuildingMode__pf;
	bpp__TargetActor__pf = bpv__TargetActor__pf;
	bpp__TargetBuildingObject__pf = bpv__TargetBuildingObject__pf;
}
void UBP_Mei_BuildingComponent_C__pf1731449071::bpf__PrintDebugInformation__pf(/*out*/ bool& bpp__Success__pf)
{
	FText bpfv__CallFunc_GetDebugInformation_DebugInformation__pf{};
	int32 __CurrentState = 1;
	do
	{
		switch( __CurrentState )
		{
		case 1:
			{
				if (!bpv__DebugMode__pf)
				{
					__CurrentState = 3;
					break;
				}
			}
		case 2:
			{
				bpf__GetDebugInformation__pf(/*out*/ bpfv__CallFunc_GetDebugInformation_DebugInformation__pf);
				UKismetSystemLibrary::PrintText(this, bpfv__CallFunc_GetDebugInformation_DebugInformation__pf, true, true, FLinearColor(1.000000,0.500000,0.000000,1.000000), 0.000000);
				__CurrentState = -1;
				break;
			}
		case 3:
			{
				bpp__Success__pf = false;
				__CurrentState = -1;
				break;
			}
		default:
			break;
		}
	} while( __CurrentState != -1 );
}
void UBP_Mei_BuildingComponent_C__pf1731449071::bpf__ChangeDebugMode__pf(bool bpp__DebugMode__pf, /*out*/ bool& bpp__Success__pf)
{
	uint8 bpfv__LocalPrevBuildingMode__pf{};
	uint8 bpfv__LocalNewBuildingMode__pf{};
	bpfv__LocalNewBuildingMode__pf = 0;
	bpfv__LocalPrevBuildingMode__pf = 0;
	bpv__DebugMode__pf = bpp__DebugMode__pf;
	bpp__Success__pf = true;
}
void UBP_Mei_BuildingComponent_C__pf1731449071::bpf__CheckFloorNumber__pf(/*out*/ bool& bpp__Result__pf)
{
	bool bpfv__CallFunc_Greater_IntInt_ReturnValue__pf{};
	bool bpfv__CallFunc_LessEqual_IntInt_ReturnValue__pf{};
	bool bpfv__CallFunc_SetFloorNumberByTargetActor_Success__pf{};
	int32 __CurrentState = 1;
	do
	{
		switch( __CurrentState )
		{
		case 1:
			{
				if(::IsValid(bpv__BuildingObject__pf))
				{
					bpv__BuildingObject__pf->bpf__SetFloorNumberByTargetActor__pf(bpv__TargetActor__pf, /*out*/ bpfv__CallFunc_SetFloorNumberByTargetActor_Success__pf);
				}
			}
		case 2:
			{
				bpfv__CallFunc_Greater_IntInt_ReturnValue__pf = UKismetMathLibrary::Greater_IntInt(bpv__FloorNumberLimit__pf, 0);
				if (!bpfv__CallFunc_Greater_IntInt_ReturnValue__pf)
				{
					__CurrentState = 4;
					break;
				}
			}
		case 3:
			{
				int32  __Local__9 = 0;
				bpfv__CallFunc_LessEqual_IntInt_ReturnValue__pf = UKismetMathLibrary::LessEqual_IntInt(((::IsValid(bpv__BuildingObject__pf)) ? (bpv__BuildingObject__pf->bpv__FloorNumber__pf) : (__Local__9)), bpv__FloorNumberLimit__pf);
				bpp__Result__pf = bpfv__CallFunc_LessEqual_IntInt_ReturnValue__pf;
				__CurrentState = -1;
				break;
			}
		case 4:
			{
				bpp__Result__pf = true;
				__CurrentState = -1;
				break;
			}
		default:
			break;
		}
	} while( __CurrentState != -1 );
}
void UBP_Mei_BuildingComponent_C__pf1731449071::bpf__UpdateFloorActorsVisibility__pf(/*out*/ bool& bpp__Success__pf)
{
	int32 bpfv__Temp_int_Array_Index_Variable__pf{};
	int32 bpfv__Temp_int_Loop_Counter_Variable__pf{};
	int32 bpfv__CallFunc_Add_IntInt_ReturnValue__pf{};
	TArray<AActor*> bpfv__CallFunc_GetAllActorsWithInterface_OutActors__pf{};
	AActor* bpfv__CallFunc_Array_Get_Item__pf{};
	int32 bpfv__CallFunc_Array_Length_ReturnValue__pf{};
	TScriptInterface<IBPI_Mei_Floor_C> bpfv__K2Node_DynamicCast_AsBPI_Mei_Floor__pf{};
	bool bpfv__K2Node_DynamicCast_bSuccess__pf{};
	bool bpfv__CallFunc_Less_IntInt_ReturnValue__pf{};
	TScriptInterface<IBPI_Mei_Floor_C> bpfv__K2Node_DynamicCast_AsBPI_Mei_Floor_1__pf{};
	bool bpfv__K2Node_DynamicCast_bSuccess_1__pf{};
	int32 bpfv__CallFunc_GetFloorNumber_BPI_FloorNumber__pf{};
	bool bpfv__CallFunc_Greater_IntInt_ReturnValue__pf{};
	bool bpfv__CallFunc_SetFloorActorHidden_BPI_Success__pf{};
	TArray< int32, TInlineAllocator<8> > __StateStack;

	int32 __CurrentState = 1;
	do
	{
		switch( __CurrentState )
		{
		case 1:
			{
				(bpfv__CallFunc_GetAllActorsWithInterface_OutActors__pf).Reset();
				UGameplayStatics::GetAllActorsWithInterface(this, UBPI_Mei_Floor_C::StaticClass(), /*out*/ bpfv__CallFunc_GetAllActorsWithInterface_OutActors__pf);
			}
		case 2:
			{
				bpfv__Temp_int_Loop_Counter_Variable__pf = 0;
			}
		case 3:
			{
				bpfv__Temp_int_Array_Index_Variable__pf = 0;
			}
		case 4:
			{
				bpfv__CallFunc_Array_Length_ReturnValue__pf = FCustomThunkTemplates::Array_Length(bpfv__CallFunc_GetAllActorsWithInterface_OutActors__pf);
				bpfv__CallFunc_Less_IntInt_ReturnValue__pf = UKismetMathLibrary::Less_IntInt(bpfv__Temp_int_Loop_Counter_Variable__pf, bpfv__CallFunc_Array_Length_ReturnValue__pf);
				if (!bpfv__CallFunc_Less_IntInt_ReturnValue__pf)
				{
					__CurrentState = 11;
					break;
				}
			}
		case 5:
			{
				bpfv__Temp_int_Array_Index_Variable__pf = bpfv__Temp_int_Loop_Counter_Variable__pf;
			}
		case 6:
			{
				__StateStack.Push(12);
			}
		case 7:
			{
				FCustomThunkTemplates::Array_Get(bpfv__CallFunc_GetAllActorsWithInterface_OutActors__pf, bpfv__Temp_int_Array_Index_Variable__pf, /*out*/ bpfv__CallFunc_Array_Get_Item__pf);
				if ( bpfv__CallFunc_Array_Get_Item__pf && bpfv__CallFunc_Array_Get_Item__pf->GetClass()->ImplementsInterface(UBPI_Mei_Floor_C::StaticClass()) )
				{
					bpfv__K2Node_DynamicCast_AsBPI_Mei_Floor_1__pf.SetObject(bpfv__CallFunc_Array_Get_Item__pf);
					void* IAddress = bpfv__CallFunc_Array_Get_Item__pf->GetInterfaceAddress(UBPI_Mei_Floor_C::StaticClass());
					bpfv__K2Node_DynamicCast_AsBPI_Mei_Floor_1__pf.SetInterface(IAddress);
				}
				else
				{
					bpfv__K2Node_DynamicCast_AsBPI_Mei_Floor_1__pf.SetObject(nullptr);
				}
				bpfv__K2Node_DynamicCast_bSuccess_1__pf = (bpfv__K2Node_DynamicCast_AsBPI_Mei_Floor_1__pf != nullptr);;
				if (!bpfv__K2Node_DynamicCast_bSuccess_1__pf)
				{
					__CurrentState = 13;
					break;
				}
			}
		case 8:
			{
				if(::IsValid(bpfv__K2Node_DynamicCast_AsBPI_Mei_Floor_1__pf))
				{
					IBPI_Mei_Floor_C::Execute_bpf__GetFloorNumber_BPI__pf(bpfv__K2Node_DynamicCast_AsBPI_Mei_Floor_1__pf.GetObject() , /*out*/ bpfv__CallFunc_GetFloorNumber_BPI_FloorNumber__pf);
				}
			}
		case 9:
			{
				FCustomThunkTemplates::Array_Get(bpfv__CallFunc_GetAllActorsWithInterface_OutActors__pf, bpfv__Temp_int_Array_Index_Variable__pf, /*out*/ bpfv__CallFunc_Array_Get_Item__pf);
				if ( bpfv__CallFunc_Array_Get_Item__pf && bpfv__CallFunc_Array_Get_Item__pf->GetClass()->ImplementsInterface(UBPI_Mei_Floor_C::StaticClass()) )
				{
					bpfv__K2Node_DynamicCast_AsBPI_Mei_Floor__pf.SetObject(bpfv__CallFunc_Array_Get_Item__pf);
					void* IAddress = bpfv__CallFunc_Array_Get_Item__pf->GetInterfaceAddress(UBPI_Mei_Floor_C::StaticClass());
					bpfv__K2Node_DynamicCast_AsBPI_Mei_Floor__pf.SetInterface(IAddress);
				}
				else
				{
					bpfv__K2Node_DynamicCast_AsBPI_Mei_Floor__pf.SetObject(nullptr);
				}
				bpfv__K2Node_DynamicCast_bSuccess__pf = (bpfv__K2Node_DynamicCast_AsBPI_Mei_Floor__pf != nullptr);;
				if (!bpfv__K2Node_DynamicCast_bSuccess__pf)
				{
					__CurrentState = 14;
					break;
				}
			}
		case 10:
			{
				bpfv__CallFunc_Greater_IntInt_ReturnValue__pf = UKismetMathLibrary::Greater_IntInt(bpfv__CallFunc_GetFloorNumber_BPI_FloorNumber__pf, bpv__DisplayedFloor__pf);
				if(::IsValid(bpfv__K2Node_DynamicCast_AsBPI_Mei_Floor__pf))
				{
					IBPI_Mei_Floor_C::Execute_bpf__SetFloorActorHidden_BPI__pf(bpfv__K2Node_DynamicCast_AsBPI_Mei_Floor__pf.GetObject() , bpfv__CallFunc_Greater_IntInt_ReturnValue__pf, /*out*/ bpfv__CallFunc_SetFloorActorHidden_BPI_Success__pf);
				}
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 11:
			{
				bpp__Success__pf = true;
				__CurrentState = -1;
				break;
			}
		case 12:
			{
				bpfv__CallFunc_Add_IntInt_ReturnValue__pf = UKismetMathLibrary::Add_IntInt(bpfv__Temp_int_Loop_Counter_Variable__pf, 1);
				bpfv__Temp_int_Loop_Counter_Variable__pf = bpfv__CallFunc_Add_IntInt_ReturnValue__pf;
				__CurrentState = 4;
				break;
			}
		case 13:
			{
				bpfv__CallFunc_GetFloorNumber_BPI_FloorNumber__pf = 0;
				__CurrentState = 9;
				break;
			}
		case 14:
			{
				bpfv__CallFunc_SetFloorActorHidden_BPI_Success__pf = false;
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		default:
			check(false); // Invalid state
			break;
		}
	} while( __CurrentState != -1 );
}
void UBP_Mei_BuildingComponent_C__pf1731449071::bpf__ResetFloorActorsVisibility__pf(/*out*/ bool& bpp__Success__pf)
{
	int32 bpfv__Temp_int_Array_Index_Variable__pf{};
	int32 bpfv__Temp_int_Loop_Counter_Variable__pf{};
	int32 bpfv__CallFunc_Add_IntInt_ReturnValue__pf{};
	TArray<AActor*> bpfv__CallFunc_GetAllActorsWithInterface_OutActors__pf{};
	AActor* bpfv__CallFunc_Array_Get_Item__pf{};
	int32 bpfv__CallFunc_Array_Length_ReturnValue__pf{};
	TScriptInterface<IBPI_Mei_Floor_C> bpfv__K2Node_DynamicCast_AsBPI_Mei_Floor__pf{};
	bool bpfv__K2Node_DynamicCast_bSuccess__pf{};
	bool bpfv__CallFunc_Less_IntInt_ReturnValue__pf{};
	bool bpfv__CallFunc_SetFloorActorHidden_BPI_Success__pf{};
	TArray< int32, TInlineAllocator<8> > __StateStack;

	int32 __CurrentState = 1;
	do
	{
		switch( __CurrentState )
		{
		case 1:
			{
				(bpfv__CallFunc_GetAllActorsWithInterface_OutActors__pf).Reset();
				UGameplayStatics::GetAllActorsWithInterface(this, UBPI_Mei_Floor_C::StaticClass(), /*out*/ bpfv__CallFunc_GetAllActorsWithInterface_OutActors__pf);
			}
		case 2:
			{
				bpfv__Temp_int_Loop_Counter_Variable__pf = 0;
			}
		case 3:
			{
				bpfv__Temp_int_Array_Index_Variable__pf = 0;
			}
		case 4:
			{
				bpfv__CallFunc_Array_Length_ReturnValue__pf = FCustomThunkTemplates::Array_Length(bpfv__CallFunc_GetAllActorsWithInterface_OutActors__pf);
				bpfv__CallFunc_Less_IntInt_ReturnValue__pf = UKismetMathLibrary::Less_IntInt(bpfv__Temp_int_Loop_Counter_Variable__pf, bpfv__CallFunc_Array_Length_ReturnValue__pf);
				if (!bpfv__CallFunc_Less_IntInt_ReturnValue__pf)
				{
					__CurrentState = 9;
					break;
				}
			}
		case 5:
			{
				bpfv__Temp_int_Array_Index_Variable__pf = bpfv__Temp_int_Loop_Counter_Variable__pf;
			}
		case 6:
			{
				__StateStack.Push(10);
			}
		case 7:
			{
				FCustomThunkTemplates::Array_Get(bpfv__CallFunc_GetAllActorsWithInterface_OutActors__pf, bpfv__Temp_int_Array_Index_Variable__pf, /*out*/ bpfv__CallFunc_Array_Get_Item__pf);
				if ( bpfv__CallFunc_Array_Get_Item__pf && bpfv__CallFunc_Array_Get_Item__pf->GetClass()->ImplementsInterface(UBPI_Mei_Floor_C::StaticClass()) )
				{
					bpfv__K2Node_DynamicCast_AsBPI_Mei_Floor__pf.SetObject(bpfv__CallFunc_Array_Get_Item__pf);
					void* IAddress = bpfv__CallFunc_Array_Get_Item__pf->GetInterfaceAddress(UBPI_Mei_Floor_C::StaticClass());
					bpfv__K2Node_DynamicCast_AsBPI_Mei_Floor__pf.SetInterface(IAddress);
				}
				else
				{
					bpfv__K2Node_DynamicCast_AsBPI_Mei_Floor__pf.SetObject(nullptr);
				}
				bpfv__K2Node_DynamicCast_bSuccess__pf = (bpfv__K2Node_DynamicCast_AsBPI_Mei_Floor__pf != nullptr);;
				if (!bpfv__K2Node_DynamicCast_bSuccess__pf)
				{
					__CurrentState = 11;
					break;
				}
			}
		case 8:
			{
				if(::IsValid(bpfv__K2Node_DynamicCast_AsBPI_Mei_Floor__pf))
				{
					IBPI_Mei_Floor_C::Execute_bpf__SetFloorActorHidden_BPI__pf(bpfv__K2Node_DynamicCast_AsBPI_Mei_Floor__pf.GetObject() , false, /*out*/ bpfv__CallFunc_SetFloorActorHidden_BPI_Success__pf);
				}
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 9:
			{
				bpp__Success__pf = true;
				__CurrentState = -1;
				break;
			}
		case 10:
			{
				bpfv__CallFunc_Add_IntInt_ReturnValue__pf = UKismetMathLibrary::Add_IntInt(bpfv__Temp_int_Loop_Counter_Variable__pf, 1);
				bpfv__Temp_int_Loop_Counter_Variable__pf = bpfv__CallFunc_Add_IntInt_ReturnValue__pf;
				__CurrentState = 4;
				break;
			}
		case 11:
			{
				bpfv__CallFunc_SetFloorActorHidden_BPI_Success__pf = false;
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		default:
			check(false); // Invalid state
			break;
		}
	} while( __CurrentState != -1 );
}
void UBP_Mei_BuildingComponent_C__pf1731449071::bpf__CheckInitReferences__pf()
{
	bool bpfv__CallFunc_InitComponent_Success__pf{};
	FTimerDynamicDelegate bpfv__K2Node_CreateDelegate_OutputDelegate__pf{};
	FTimerHandle bpfv__CallFunc_K2_SetTimerDelegate_ReturnValue__pf{};
	bool bpfv__CallFunc_IsValid_ReturnValue__pf{};
	int32 __CurrentState = 1;
	do
	{
		switch( __CurrentState )
		{
		case 1:
			{
				bpf__InitComponent__pf(/*out*/ bpfv__CallFunc_InitComponent_Success__pf);
			}
		case 2:
			{
				bpfv__CallFunc_IsValid_ReturnValue__pf = UKismetSystemLibrary::IsValid(bpv__PlayerController__pf);
				if (!bpfv__CallFunc_IsValid_ReturnValue__pf)
				{
					__CurrentState = 3;
					break;
				}
				__CurrentState = -1;
				break;
			}
		case 3:
			{
				bpfv__K2Node_CreateDelegate_OutputDelegate__pf.BindUFunction(this,FName(TEXT("CheckInitReferences")));
				bpfv__CallFunc_K2_SetTimerDelegate_ReturnValue__pf = UKismetSystemLibrary::K2_SetTimerDelegate(bpfv__K2Node_CreateDelegate_OutputDelegate__pf, 1.000000, false, 0.000000, 0.000000);
				__CurrentState = -1;
				break;
			}
		default:
			break;
		}
	} while( __CurrentState != -1 );
}
void UBP_Mei_BuildingComponent_C__pf1731449071::bpf__ShowMalletMenu__pf(AActor* bpp__TargetActor__pf, /*out*/ bool& bpp__Success__pf)
{
	ABP_Mei_Building_BaseObject_C__pf2826203124* bpfv__K2Node_DynamicCast_AsBP_Mei_Building_Base_Object__pf{};
	bool bpfv__K2Node_DynamicCast_bSuccess__pf{};
	bool bpfv__CallFunc_CheckClaim_Result__pf{};
	TScriptInterface<IBPI_Mei_BuildingWidget_C> bpfv__K2Node_DynamicCast_AsBPI_Mei_Building_Widget__pf{};
	bool bpfv__K2Node_DynamicCast_bSuccess_1__pf{};
	bool bpfv__CallFunc_IsValid_ReturnValue__pf{};
	int32 __CurrentState = 1;
	do
	{
		switch( __CurrentState )
		{
		case 1:
			{
				bpfv__CallFunc_IsValid_ReturnValue__pf = UKismetSystemLibrary::IsValid(bpv__BuildingWidget__pf);
				if (!bpfv__CallFunc_IsValid_ReturnValue__pf)
				{
					__CurrentState = -1;
					break;
				}
			}
		case 2:
			{
				bpfv__K2Node_DynamicCast_AsBP_Mei_Building_Base_Object__pf = Cast<ABP_Mei_Building_BaseObject_C__pf2826203124>(bpp__TargetActor__pf);
				bpfv__K2Node_DynamicCast_bSuccess__pf = (bpfv__K2Node_DynamicCast_AsBP_Mei_Building_Base_Object__pf != nullptr);;
				if (!bpfv__K2Node_DynamicCast_bSuccess__pf)
				{
					__CurrentState = -1;
					break;
				}
			}
		case 3:
			{
				if(::IsValid(bpfv__K2Node_DynamicCast_AsBP_Mei_Building_Base_Object__pf))
				{
					bpfv__K2Node_DynamicCast_AsBP_Mei_Building_Base_Object__pf->bpf__CheckClaim__pf(bpv__PlayerController__pf, /*out*/ bpfv__CallFunc_CheckClaim_Result__pf);
				}
			}
		case 4:
			{
				if (!bpfv__CallFunc_CheckClaim_Result__pf)
				{
					__CurrentState = -1;
					break;
				}
			}
		case 5:
			{
				if ( bpv__BuildingWidget__pf && bpv__BuildingWidget__pf->GetClass()->ImplementsInterface(UBPI_Mei_BuildingWidget_C::StaticClass()) )
				{
					bpfv__K2Node_DynamicCast_AsBPI_Mei_Building_Widget__pf.SetObject(bpv__BuildingWidget__pf);
					void* IAddress = bpv__BuildingWidget__pf->GetInterfaceAddress(UBPI_Mei_BuildingWidget_C::StaticClass());
					bpfv__K2Node_DynamicCast_AsBPI_Mei_Building_Widget__pf.SetInterface(IAddress);
				}
				else
				{
					bpfv__K2Node_DynamicCast_AsBPI_Mei_Building_Widget__pf.SetObject(nullptr);
				}
				bpfv__K2Node_DynamicCast_bSuccess_1__pf = (bpfv__K2Node_DynamicCast_AsBPI_Mei_Building_Widget__pf != nullptr);;
				if (!bpfv__K2Node_DynamicCast_bSuccess_1__pf)
				{
					__CurrentState = 7;
					break;
				}
			}
		case 6:
			{
				if(::IsValid(bpfv__K2Node_DynamicCast_AsBPI_Mei_Building_Widget__pf))
				{
					IBPI_Mei_BuildingWidget_C::Execute_bpf__ShowMalletMenu_BPI__pf(bpfv__K2Node_DynamicCast_AsBPI_Mei_Building_Widget__pf.GetObject() , bpfv__K2Node_DynamicCast_AsBP_Mei_Building_Base_Object__pf);
				}
			}
		case 7:
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
void UBP_Mei_BuildingComponent_C__pf1731449071::bpf__HideMalletMenu__pf(/*out*/ bool& bpp__Success__pf)
{
	bool bpfv__CallFunc_IsValid_ReturnValue__pf{};
	TScriptInterface<IBPI_Mei_BuildingWidget_C> bpfv__K2Node_DynamicCast_AsBPI_Mei_Building_Widget__pf{};
	bool bpfv__K2Node_DynamicCast_bSuccess__pf{};
	int32 __CurrentState = 1;
	do
	{
		switch( __CurrentState )
		{
		case 1:
			{
				bpfv__CallFunc_IsValid_ReturnValue__pf = UKismetSystemLibrary::IsValid(bpv__BuildingWidget__pf);
				if (!bpfv__CallFunc_IsValid_ReturnValue__pf)
				{
					__CurrentState = -1;
					break;
				}
			}
		case 2:
			{
				if ( bpv__BuildingWidget__pf && bpv__BuildingWidget__pf->GetClass()->ImplementsInterface(UBPI_Mei_BuildingWidget_C::StaticClass()) )
				{
					bpfv__K2Node_DynamicCast_AsBPI_Mei_Building_Widget__pf.SetObject(bpv__BuildingWidget__pf);
					void* IAddress = bpv__BuildingWidget__pf->GetInterfaceAddress(UBPI_Mei_BuildingWidget_C::StaticClass());
					bpfv__K2Node_DynamicCast_AsBPI_Mei_Building_Widget__pf.SetInterface(IAddress);
				}
				else
				{
					bpfv__K2Node_DynamicCast_AsBPI_Mei_Building_Widget__pf.SetObject(nullptr);
				}
				bpfv__K2Node_DynamicCast_bSuccess__pf = (bpfv__K2Node_DynamicCast_AsBPI_Mei_Building_Widget__pf != nullptr);;
				if (!bpfv__K2Node_DynamicCast_bSuccess__pf)
				{
					__CurrentState = -1;
					break;
				}
			}
		case 3:
			{
				if(::IsValid(bpfv__K2Node_DynamicCast_AsBPI_Mei_Building_Widget__pf))
				{
					IBPI_Mei_BuildingWidget_C::Execute_bpf__HideMalletMenu_BPI__pf(bpfv__K2Node_DynamicCast_AsBPI_Mei_Building_Widget__pf.GetObject() );
				}
				__CurrentState = -1;
				break;
			}
		default:
			break;
		}
	} while( __CurrentState != -1 );
}
void UBP_Mei_BuildingComponent_C__pf1731449071::bpf__ChangeBuildingWidget__pf(UClass* bpp__BuildingWidgetClass__pf, /*out*/ bool& bpp__Success__pf)
{
	bool bpfv__CallFunc_TryToCreateBuildingWidget_Success__pf{};
	TScriptInterface<IBPI_Mei_BuildingWidget_C> bpfv__K2Node_DynamicCast_AsBPI_Mei_Building_Widget__pf{};
	bool bpfv__K2Node_DynamicCast_bSuccess__pf{};
	int32 __CurrentState = 1;
	do
	{
		switch( __CurrentState )
		{
		case 1:
			{
				bpv__BuildingWidgetClass__pf = bpp__BuildingWidgetClass__pf;
			}
		case 2:
			{
				if ( bpv__BuildingWidget__pf && bpv__BuildingWidget__pf->GetClass()->ImplementsInterface(UBPI_Mei_BuildingWidget_C::StaticClass()) )
				{
					bpfv__K2Node_DynamicCast_AsBPI_Mei_Building_Widget__pf.SetObject(bpv__BuildingWidget__pf);
					void* IAddress = bpv__BuildingWidget__pf->GetInterfaceAddress(UBPI_Mei_BuildingWidget_C::StaticClass());
					bpfv__K2Node_DynamicCast_AsBPI_Mei_Building_Widget__pf.SetInterface(IAddress);
				}
				else
				{
					bpfv__K2Node_DynamicCast_AsBPI_Mei_Building_Widget__pf.SetObject(nullptr);
				}
				bpfv__K2Node_DynamicCast_bSuccess__pf = (bpfv__K2Node_DynamicCast_AsBPI_Mei_Building_Widget__pf != nullptr);;
				if (!bpfv__K2Node_DynamicCast_bSuccess__pf)
				{
					__CurrentState = 4;
					break;
				}
			}
		case 3:
			{
				if(::IsValid(bpfv__K2Node_DynamicCast_AsBPI_Mei_Building_Widget__pf))
				{
					IBPI_Mei_BuildingWidget_C::Execute_bpf__SetBuildingComponentReference_BPI__pf(bpfv__K2Node_DynamicCast_AsBPI_Mei_Building_Widget__pf.GetObject() , ((UBP_Mei_BuildingComponent_C__pf1731449071*)nullptr));
				}
			}
		case 4:
			{
				bpf__TryToCreateBuildingWidget__pf(/*out*/ bpfv__CallFunc_TryToCreateBuildingWidget_Success__pf);
			}
		case 5:
			{
				bpp__Success__pf = bpfv__CallFunc_TryToCreateBuildingWidget_Success__pf;
				__CurrentState = -1;
				break;
			}
		default:
			break;
		}
	} while( __CurrentState != -1 );
}
void UBP_Mei_BuildingComponent_C__pf1731449071::bpf__GetDebugInformation__pf(/*out*/ FText& bpp__DebugInformation__pf)
{
	FText bpfv__LocalTargetActorInformation__pf{};
	FText bpfv__LocalBuildingObjectInformation__pf{};
	FText bpfv__LocalDefaultDebugInformation__pf{};
	FFormatArgumentData bpfv__K2Node_MakeStruct_FormatArgumentData__pf{};
	FFormatArgumentData bpfv__K2Node_MakeStruct_FormatArgumentData_1__pf{};
	TArray<FFormatArgumentData> bpfv__K2Node_MakeArray_Array__pf{};
	bool bpfv__CallFunc_IsValid_ReturnValue__pf{};
	FText bpfv__CallFunc_Format_ReturnValue__pf{};
	FString bpfv__CallFunc_GetEnumeratorUserFriendlyName_ReturnValue__pf{};
	FText bpfv__CallFunc_Conv_NameToText_ReturnValue__pf{};
	FText bpfv__CallFunc_Conv_StringToText_ReturnValue__pf{};
	FFormatArgumentData bpfv__K2Node_MakeStruct_FormatArgumentData_2__pf{};
	FFormatArgumentData bpfv__K2Node_MakeStruct_FormatArgumentData_3__pf{};
	UClass* bpfv__CallFunc_GetObjectClass_ReturnValue__pf{};
	FString bpfv__CallFunc_GetClassDisplayName_ReturnValue__pf{};
	bool bpfv__CallFunc_IsValid_ReturnValue_1__pf{};
	FText bpfv__CallFunc_Conv_StringToText_ReturnValue_1__pf{};
	FFormatArgumentData bpfv__K2Node_MakeStruct_FormatArgumentData_4__pf{};
	UClass* bpfv__CallFunc_GetObjectClass_ReturnValue_1__pf{};
	TArray<FFormatArgumentData> bpfv__K2Node_MakeArray_Array_1__pf{};
	FString bpfv__CallFunc_GetClassDisplayName_ReturnValue_1__pf{};
	FText bpfv__CallFunc_Format_ReturnValue_1__pf{};
	FText bpfv__CallFunc_Conv_StringToText_ReturnValue_2__pf{};
	FFormatArgumentData bpfv__K2Node_MakeStruct_FormatArgumentData_5__pf{};
	TArray<FFormatArgumentData> bpfv__K2Node_MakeArray_Array_2__pf{};
	FFormatArgumentData bpfv__K2Node_MakeStruct_FormatArgumentData_6__pf{};
	FText bpfv__CallFunc_Format_ReturnValue_2__pf{};
	bool bpfv__CallFunc_IsValid_ReturnValue_2__pf{};
	bool bpfv__CallFunc_IsValid_ReturnValue_3__pf{};
	UClass* bpfv__CallFunc_GetObjectClass_ReturnValue_2__pf{};
	FString bpfv__CallFunc_GetClassDisplayName_ReturnValue_2__pf{};
	FText bpfv__CallFunc_Conv_StringToText_ReturnValue_3__pf{};
	FText bpfv__CallFunc_Conv_NameToText_ReturnValue_1__pf{};
	FFormatArgumentData bpfv__K2Node_MakeStruct_FormatArgumentData_7__pf{};
	FFormatArgumentData bpfv__K2Node_MakeStruct_FormatArgumentData_8__pf{};
	TArray<FFormatArgumentData> bpfv__K2Node_MakeArray_Array_3__pf{};
	UClass* bpfv__CallFunc_GetObjectClass_ReturnValue_3__pf{};
	FText bpfv__CallFunc_Format_ReturnValue_3__pf{};
	FString bpfv__CallFunc_GetClassDisplayName_ReturnValue_3__pf{};
	FText bpfv__CallFunc_Conv_StringToText_ReturnValue_4__pf{};
	FFormatArgumentData bpfv__K2Node_MakeStruct_FormatArgumentData_9__pf{};
	FString bpfv__CallFunc_GetEnumeratorUserFriendlyName_ReturnValue_1__pf{};
	FText bpfv__CallFunc_Conv_StringToText_ReturnValue_5__pf{};
	FFormatArgumentData bpfv__K2Node_MakeStruct_FormatArgumentData_10__pf{};
	FFormatArgumentData bpfv__K2Node_MakeStruct_FormatArgumentData_11__pf{};
	TArray<FFormatArgumentData> bpfv__K2Node_MakeArray_Array_4__pf{};
	FFormatArgumentData bpfv__K2Node_MakeStruct_FormatArgumentData_12__pf{};
	FText bpfv__CallFunc_Format_ReturnValue_4__pf{};
	TArray<FFormatArgumentData> bpfv__K2Node_MakeArray_Array_5__pf{};
	FText bpfv__CallFunc_Format_ReturnValue_5__pf{};
	bool bpfv__K2Node_SwitchEnum_CmpSuccess__pf{};
	bool bpfv__CallFunc_IsValid_ReturnValue_4__pf{};
	FString bpfv__CallFunc_GetEnumeratorUserFriendlyName_ReturnValue_2__pf{};
	FText bpfv__CallFunc_Conv_NameToText_ReturnValue_2__pf{};
	FText bpfv__CallFunc_Conv_StringToText_ReturnValue_6__pf{};
	FFormatArgumentData bpfv__K2Node_MakeStruct_FormatArgumentData_13__pf{};
	FFormatArgumentData bpfv__K2Node_MakeStruct_FormatArgumentData_14__pf{};
	UClass* bpfv__CallFunc_GetObjectClass_ReturnValue_4__pf{};
	FString bpfv__CallFunc_GetClassDisplayName_ReturnValue_4__pf{};
	FFormatArgumentData bpfv__K2Node_MakeStruct_FormatArgumentData_15__pf{};
	FText bpfv__CallFunc_Conv_StringToText_ReturnValue_7__pf{};
	FFormatArgumentData bpfv__K2Node_MakeStruct_FormatArgumentData_16__pf{};
	FText bpfv__CallFunc_Conv_BoolToText_ReturnValue__pf{};
	TArray<FFormatArgumentData> bpfv__K2Node_MakeArray_Array_6__pf{};
	FFormatArgumentData bpfv__K2Node_MakeStruct_FormatArgumentData_17__pf{};
	FText bpfv__CallFunc_Format_ReturnValue_6__pf{};
	FText bpfv__CallFunc_Conv_BoolToText_ReturnValue_1__pf{};
	FFormatArgumentData bpfv__K2Node_MakeStruct_FormatArgumentData_18__pf{};
	FText bpfv__CallFunc_Conv_BoolToText_ReturnValue_2__pf{};
	FFormatArgumentData bpfv__K2Node_MakeStruct_FormatArgumentData_19__pf{};
	FText bpfv__CallFunc_Conv_BoolToText_ReturnValue_3__pf{};
	FFormatArgumentData bpfv__K2Node_MakeStruct_FormatArgumentData_20__pf{};
	FText bpfv__CallFunc_Conv_BoolToText_ReturnValue_4__pf{};
	FFormatArgumentData bpfv__K2Node_MakeStruct_FormatArgumentData_21__pf{};
	FText bpfv__CallFunc_Conv_BoolToText_ReturnValue_5__pf{};
	FFormatArgumentData bpfv__K2Node_MakeStruct_FormatArgumentData_22__pf{};
	FString bpfv__CallFunc_GetEnumeratorUserFriendlyName_ReturnValue_3__pf{};
	FText bpfv__CallFunc_Conv_StringToText_ReturnValue_8__pf{};
	FFormatArgumentData bpfv__K2Node_MakeStruct_FormatArgumentData_23__pf{};
	TArray<FFormatArgumentData> bpfv__K2Node_MakeArray_Array_7__pf{};
	FText bpfv__CallFunc_Format_ReturnValue_7__pf{};
	int32 __CurrentState = 1;
	do
	{
		switch( __CurrentState )
		{
		case 1:
			{
				bpfv__K2Node_MakeStruct_FormatArgumentData_15__pf.ArgumentName = FString(TEXT("DisplayedFloor"));
				bpfv__K2Node_MakeStruct_FormatArgumentData_15__pf.ArgumentValueType = EFormatArgumentType::Int;
				bpfv__K2Node_MakeStruct_FormatArgumentData_15__pf.ArgumentValue = FText::GetEmpty();
				bpfv__K2Node_MakeStruct_FormatArgumentData_15__pf.ArgumentValueInt = bpv__DisplayedFloor__pf;
				bpfv__K2Node_MakeStruct_FormatArgumentData_15__pf.ArgumentValueFloat = 0.000000;
				bpfv__K2Node_MakeStruct_FormatArgumentData_15__pf.ArgumentValueGender = ETextGender::Masculine;
				bpfv__CallFunc_Conv_BoolToText_ReturnValue__pf = UKismetTextLibrary::Conv_BoolToText(bpv__GridModeForProps__pf);
				bpfv__K2Node_MakeStruct_FormatArgumentData_17__pf.ArgumentName = FString(TEXT("PropsGridMode"));
				bpfv__K2Node_MakeStruct_FormatArgumentData_17__pf.ArgumentValueType = EFormatArgumentType::Text;
				bpfv__K2Node_MakeStruct_FormatArgumentData_17__pf.ArgumentValue = bpfv__CallFunc_Conv_BoolToText_ReturnValue__pf;
				bpfv__K2Node_MakeStruct_FormatArgumentData_17__pf.ArgumentValueInt = 0;
				bpfv__K2Node_MakeStruct_FormatArgumentData_17__pf.ArgumentValueFloat = 0.000000;
				bpfv__K2Node_MakeStruct_FormatArgumentData_17__pf.ArgumentValueGender = ETextGender::Masculine;
				bpfv__CallFunc_Conv_BoolToText_ReturnValue_1__pf = UKismetTextLibrary::Conv_BoolToText(bpv__GridMode__pf);
				bpfv__K2Node_MakeStruct_FormatArgumentData_18__pf.ArgumentName = FString(TEXT("GridMode"));
				bpfv__K2Node_MakeStruct_FormatArgumentData_18__pf.ArgumentValueType = EFormatArgumentType::Text;
				bpfv__K2Node_MakeStruct_FormatArgumentData_18__pf.ArgumentValue = bpfv__CallFunc_Conv_BoolToText_ReturnValue_1__pf;
				bpfv__K2Node_MakeStruct_FormatArgumentData_18__pf.ArgumentValueInt = 0;
				bpfv__K2Node_MakeStruct_FormatArgumentData_18__pf.ArgumentValueFloat = 0.000000;
				bpfv__K2Node_MakeStruct_FormatArgumentData_18__pf.ArgumentValueGender = ETextGender::Masculine;
				bpfv__CallFunc_Conv_BoolToText_ReturnValue_2__pf = UKismetTextLibrary::Conv_BoolToText(bpv__AutoStartBuildMode__pf);
				bpfv__K2Node_MakeStruct_FormatArgumentData_19__pf.ArgumentName = FString(TEXT("AutoStartBuildMode"));
				bpfv__K2Node_MakeStruct_FormatArgumentData_19__pf.ArgumentValueType = EFormatArgumentType::Text;
				bpfv__K2Node_MakeStruct_FormatArgumentData_19__pf.ArgumentValue = bpfv__CallFunc_Conv_BoolToText_ReturnValue_2__pf;
				bpfv__K2Node_MakeStruct_FormatArgumentData_19__pf.ArgumentValueInt = 0;
				bpfv__K2Node_MakeStruct_FormatArgumentData_19__pf.ArgumentValueFloat = 0.000000;
				bpfv__K2Node_MakeStruct_FormatArgumentData_19__pf.ArgumentValueGender = ETextGender::Masculine;
				bpfv__CallFunc_Conv_BoolToText_ReturnValue_3__pf = UKismetTextLibrary::Conv_BoolToText(bpv__NearSnappingMode__pf);
				bpfv__K2Node_MakeStruct_FormatArgumentData_20__pf.ArgumentName = FString(TEXT("NearSnappingMode"));
				bpfv__K2Node_MakeStruct_FormatArgumentData_20__pf.ArgumentValueType = EFormatArgumentType::Text;
				bpfv__K2Node_MakeStruct_FormatArgumentData_20__pf.ArgumentValue = bpfv__CallFunc_Conv_BoolToText_ReturnValue_3__pf;
				bpfv__K2Node_MakeStruct_FormatArgumentData_20__pf.ArgumentValueInt = 0;
				bpfv__K2Node_MakeStruct_FormatArgumentData_20__pf.ArgumentValueFloat = 0.000000;
				bpfv__K2Node_MakeStruct_FormatArgumentData_20__pf.ArgumentValueGender = ETextGender::Masculine;
				bpfv__CallFunc_Conv_BoolToText_ReturnValue_4__pf = UKismetTextLibrary::Conv_BoolToText(bpv__TopDownViewMode__pf);
				bpfv__K2Node_MakeStruct_FormatArgumentData_21__pf.ArgumentName = FString(TEXT("TopDownViewMode"));
				bpfv__K2Node_MakeStruct_FormatArgumentData_21__pf.ArgumentValueType = EFormatArgumentType::Text;
				bpfv__K2Node_MakeStruct_FormatArgumentData_21__pf.ArgumentValue = bpfv__CallFunc_Conv_BoolToText_ReturnValue_4__pf;
				bpfv__K2Node_MakeStruct_FormatArgumentData_21__pf.ArgumentValueInt = 0;
				bpfv__K2Node_MakeStruct_FormatArgumentData_21__pf.ArgumentValueFloat = 0.000000;
				bpfv__K2Node_MakeStruct_FormatArgumentData_21__pf.ArgumentValueGender = ETextGender::Masculine;
				bpfv__CallFunc_Conv_BoolToText_ReturnValue_5__pf = UKismetTextLibrary::Conv_BoolToText(bpv__TraceToMouseMode__pf);
				bpfv__K2Node_MakeStruct_FormatArgumentData_22__pf.ArgumentName = FString(TEXT("TraceToMouseMode"));
				bpfv__K2Node_MakeStruct_FormatArgumentData_22__pf.ArgumentValueType = EFormatArgumentType::Text;
				bpfv__K2Node_MakeStruct_FormatArgumentData_22__pf.ArgumentValue = bpfv__CallFunc_Conv_BoolToText_ReturnValue_5__pf;
				bpfv__K2Node_MakeStruct_FormatArgumentData_22__pf.ArgumentValueInt = 0;
				bpfv__K2Node_MakeStruct_FormatArgumentData_22__pf.ArgumentValueFloat = 0.000000;
				bpfv__K2Node_MakeStruct_FormatArgumentData_22__pf.ArgumentValueGender = ETextGender::Masculine;
				bpfv__CallFunc_GetEnumeratorUserFriendlyName_ReturnValue_3__pf = UKismetNodeHelperLibrary::GetEnumeratorUserFriendlyName(CastChecked<UEnum>(CastChecked<UDynamicClass>(UBP_Mei_BuildingComponent_C__pf1731449071::StaticClass())->ReferencedConvertedFields[0]), static_cast<uint8>(bpv__BuildingMode__pf));
				bpfv__CallFunc_Conv_StringToText_ReturnValue_8__pf = UKismetTextLibrary::Conv_StringToText(bpfv__CallFunc_GetEnumeratorUserFriendlyName_ReturnValue_3__pf);
				bpfv__K2Node_MakeStruct_FormatArgumentData_23__pf.ArgumentName = FString(TEXT("BuildingMode"));
				bpfv__K2Node_MakeStruct_FormatArgumentData_23__pf.ArgumentValueType = EFormatArgumentType::Text;
				bpfv__K2Node_MakeStruct_FormatArgumentData_23__pf.ArgumentValue = bpfv__CallFunc_Conv_StringToText_ReturnValue_8__pf;
				bpfv__K2Node_MakeStruct_FormatArgumentData_23__pf.ArgumentValueInt = 0;
				bpfv__K2Node_MakeStruct_FormatArgumentData_23__pf.ArgumentValueFloat = 0.000000;
				bpfv__K2Node_MakeStruct_FormatArgumentData_23__pf.ArgumentValueGender = ETextGender::Masculine;
				bpfv__K2Node_MakeArray_Array_7__pf.SetNum(8, true);
				bpfv__K2Node_MakeArray_Array_7__pf[0] = bpfv__K2Node_MakeStruct_FormatArgumentData_23__pf;
				bpfv__K2Node_MakeArray_Array_7__pf[1] = bpfv__K2Node_MakeStruct_FormatArgumentData_22__pf;
				bpfv__K2Node_MakeArray_Array_7__pf[2] = bpfv__K2Node_MakeStruct_FormatArgumentData_21__pf;
				bpfv__K2Node_MakeArray_Array_7__pf[3] = bpfv__K2Node_MakeStruct_FormatArgumentData_20__pf;
				bpfv__K2Node_MakeArray_Array_7__pf[4] = bpfv__K2Node_MakeStruct_FormatArgumentData_19__pf;
				bpfv__K2Node_MakeArray_Array_7__pf[5] = bpfv__K2Node_MakeStruct_FormatArgumentData_18__pf;
				bpfv__K2Node_MakeArray_Array_7__pf[6] = bpfv__K2Node_MakeStruct_FormatArgumentData_17__pf;
				bpfv__K2Node_MakeArray_Array_7__pf[7] = bpfv__K2Node_MakeStruct_FormatArgumentData_15__pf;
				bpfv__CallFunc_Format_ReturnValue_7__pf = UKismetTextLibrary::Format(FTextStringHelper::CreateFromBuffer(
TEXT("NSLOCTEXT(\"[5A93550A4BE6203FC591F7828865BF25]\", \"4F9DD0954B21858C8917E38A535D226E\", \"Building Component Debug\\r\\n\\r\\nBuilding Mode: {BuildingMode}\\r\\n\\r\\nTrace To Mouse Mode: {TraceToMouseMode}\\r\\nTop Down View Mode: {TopDownViewMode}\\r\\nN")
		TEXT("ear Snapping Mode: {NearSnappingMode}\\r\\nAuto Start Build Mode: {AutoStartBuildMode}\\r\\nGrid Mode: {GridMode}\\r\\nProps Grid Mode: {PropsGridMode}\\r\\nDisplayed Floor: {DisplayedFloor}\")")	), bpfv__K2Node_MakeArray_Array_7__pf);
				bpfv__LocalDefaultDebugInformation__pf = bpfv__CallFunc_Format_ReturnValue_7__pf;
			}
		case 2:
			{
				bpfv__K2Node_SwitchEnum_CmpSuccess__pf = UKismetMathLibrary::NotEqual_ByteByte(static_cast<uint8>(bpv__BuildingMode__pf), static_cast<uint8>(E__E_Mei_BuildingMode__pf::NewEnumerator0));
				if (!bpfv__K2Node_SwitchEnum_CmpSuccess__pf)
				{
					__CurrentState = 3;
					break;
				}
				bpfv__K2Node_SwitchEnum_CmpSuccess__pf = UKismetMathLibrary::NotEqual_ByteByte(static_cast<uint8>(bpv__BuildingMode__pf), static_cast<uint8>(E__E_Mei_BuildingMode__pf::NewEnumerator1));
				if (!bpfv__K2Node_SwitchEnum_CmpSuccess__pf)
				{
					__CurrentState = 5;
					break;
				}
				bpfv__K2Node_SwitchEnum_CmpSuccess__pf = UKismetMathLibrary::NotEqual_ByteByte(static_cast<uint8>(bpv__BuildingMode__pf), static_cast<uint8>(E__E_Mei_BuildingMode__pf::NewEnumerator2));
				if (!bpfv__K2Node_SwitchEnum_CmpSuccess__pf)
				{
					__CurrentState = 14;
					break;
				}
				bpfv__K2Node_SwitchEnum_CmpSuccess__pf = UKismetMathLibrary::NotEqual_ByteByte(static_cast<uint8>(bpv__BuildingMode__pf), static_cast<uint8>(E__E_Mei_BuildingMode__pf::NewEnumerator3));
				if (!bpfv__K2Node_SwitchEnum_CmpSuccess__pf)
				{
					__CurrentState = 14;
					break;
				}
				bpfv__K2Node_SwitchEnum_CmpSuccess__pf = UKismetMathLibrary::NotEqual_ByteByte(static_cast<uint8>(bpv__BuildingMode__pf), static_cast<uint8>(E__E_Mei_BuildingMode__pf::NewEnumerator4));
				if (!bpfv__K2Node_SwitchEnum_CmpSuccess__pf)
				{
					__CurrentState = 14;
					break;
				}
				bpfv__K2Node_SwitchEnum_CmpSuccess__pf = UKismetMathLibrary::NotEqual_ByteByte(static_cast<uint8>(bpv__BuildingMode__pf), static_cast<uint8>(E__E_Mei_BuildingMode__pf::NewEnumerator5));
				if (!bpfv__K2Node_SwitchEnum_CmpSuccess__pf)
				{
					__CurrentState = 14;
					break;
				}
				bpfv__K2Node_SwitchEnum_CmpSuccess__pf = UKismetMathLibrary::NotEqual_ByteByte(static_cast<uint8>(bpv__BuildingMode__pf), static_cast<uint8>(E__E_Mei_BuildingMode__pf::NewEnumerator6));
				if (!bpfv__K2Node_SwitchEnum_CmpSuccess__pf)
				{
					__CurrentState = 14;
					break;
				}
				__CurrentState = -1;
				break;
			}
		case 3:
			{
				bpv__DebugInformation__pf = bpfv__LocalDefaultDebugInformation__pf;
			}
		case 4:
			{
				bpp__DebugInformation__pf = bpv__DebugInformation__pf;
				__CurrentState = -1;
				break;
			}
		case 5:
			{
				bpfv__CallFunc_IsValid_ReturnValue_4__pf = UKismetSystemLibrary::IsValid(bpv__BuildingObject__pf);
				if (!bpfv__CallFunc_IsValid_ReturnValue_4__pf)
				{
					__CurrentState = 13;
					break;
				}
			}
		case 6:
			{
				E__E_Mei_BuildingType__pf  __Local__10 = E__E_Mei_BuildingType__pf::NewEnumerator0;
				bpfv__CallFunc_GetEnumeratorUserFriendlyName_ReturnValue_2__pf = UKismetNodeHelperLibrary::GetEnumeratorUserFriendlyName(CastChecked<UEnum>(CastChecked<UDynamicClass>(UBP_Mei_BuildingComponent_C__pf1731449071::StaticClass())->ReferencedConvertedFields[1]), static_cast<uint8>(((::IsValid(bpv__BuildingObject__pf)) ? (bpv__BuildingObject__pf->bpv__BuildingType__pf) : (__Local__10))));
				FName  __Local__11 = FName();
				bpfv__CallFunc_Conv_NameToText_ReturnValue_2__pf = UKismetTextLibrary::Conv_NameToText(((::IsValid(bpv__BuildingObject__pf)) ? (bpv__BuildingObject__pf->bpv__BuildingObjectHandle__pf.RowName) : (__Local__11)));
				bpfv__CallFunc_Conv_StringToText_ReturnValue_6__pf = UKismetTextLibrary::Conv_StringToText(bpfv__CallFunc_GetEnumeratorUserFriendlyName_ReturnValue_2__pf);
				bpfv__K2Node_MakeStruct_FormatArgumentData_13__pf.ArgumentName = FString(TEXT("Handle"));
				bpfv__K2Node_MakeStruct_FormatArgumentData_13__pf.ArgumentValueType = EFormatArgumentType::Text;
				bpfv__K2Node_MakeStruct_FormatArgumentData_13__pf.ArgumentValue = bpfv__CallFunc_Conv_NameToText_ReturnValue_2__pf;
				bpfv__K2Node_MakeStruct_FormatArgumentData_13__pf.ArgumentValueInt = 0;
				bpfv__K2Node_MakeStruct_FormatArgumentData_13__pf.ArgumentValueFloat = 0.000000;
				bpfv__K2Node_MakeStruct_FormatArgumentData_13__pf.ArgumentValueGender = ETextGender::Masculine;
				bpfv__K2Node_MakeStruct_FormatArgumentData_14__pf.ArgumentName = FString(TEXT("Type"));
				bpfv__K2Node_MakeStruct_FormatArgumentData_14__pf.ArgumentValueType = EFormatArgumentType::Text;
				bpfv__K2Node_MakeStruct_FormatArgumentData_14__pf.ArgumentValue = bpfv__CallFunc_Conv_StringToText_ReturnValue_6__pf;
				bpfv__K2Node_MakeStruct_FormatArgumentData_14__pf.ArgumentValueInt = 0;
				bpfv__K2Node_MakeStruct_FormatArgumentData_14__pf.ArgumentValueFloat = 0.000000;
				bpfv__K2Node_MakeStruct_FormatArgumentData_14__pf.ArgumentValueGender = ETextGender::Masculine;
				bpfv__CallFunc_GetObjectClass_ReturnValue_4__pf = UGameplayStatics::GetObjectClass(bpv__BuildingObject__pf);
				bpfv__CallFunc_GetClassDisplayName_ReturnValue_4__pf = UKismetSystemLibrary::GetClassDisplayName(bpfv__CallFunc_GetObjectClass_ReturnValue_4__pf);
				bpfv__CallFunc_Conv_StringToText_ReturnValue_7__pf = UKismetTextLibrary::Conv_StringToText(bpfv__CallFunc_GetClassDisplayName_ReturnValue_4__pf);
				bpfv__K2Node_MakeStruct_FormatArgumentData_16__pf.ArgumentName = FString(TEXT("Class"));
				bpfv__K2Node_MakeStruct_FormatArgumentData_16__pf.ArgumentValueType = EFormatArgumentType::Text;
				bpfv__K2Node_MakeStruct_FormatArgumentData_16__pf.ArgumentValue = bpfv__CallFunc_Conv_StringToText_ReturnValue_7__pf;
				bpfv__K2Node_MakeStruct_FormatArgumentData_16__pf.ArgumentValueInt = 0;
				bpfv__K2Node_MakeStruct_FormatArgumentData_16__pf.ArgumentValueFloat = 0.000000;
				bpfv__K2Node_MakeStruct_FormatArgumentData_16__pf.ArgumentValueGender = ETextGender::Masculine;
				bpfv__K2Node_MakeArray_Array_6__pf.SetNum(3, true);
				bpfv__K2Node_MakeArray_Array_6__pf[0] = bpfv__K2Node_MakeStruct_FormatArgumentData_16__pf;
				bpfv__K2Node_MakeArray_Array_6__pf[1] = bpfv__K2Node_MakeStruct_FormatArgumentData_14__pf;
				bpfv__K2Node_MakeArray_Array_6__pf[2] = bpfv__K2Node_MakeStruct_FormatArgumentData_13__pf;
				bpfv__CallFunc_Format_ReturnValue_6__pf = UKismetTextLibrary::Format(FTextStringHelper::CreateFromBuffer(
TEXT("NSLOCTEXT(\"[5A93550A4BE6203FC591F7828865BF25]\", \"A93241764D88EB7371E060A1EC0D9772\", \"Building Object:\\r\\nClass: {Class}\\r\\nBuilding Type: {Type}\\r\\nHandle: {Handle}\")")	), bpfv__K2Node_MakeArray_Array_6__pf);
				bpfv__LocalBuildingObjectInformation__pf = bpfv__CallFunc_Format_ReturnValue_6__pf;
			}
		case 7:
			{
				bpfv__CallFunc_IsValid_ReturnValue_3__pf = UKismetSystemLibrary::IsValid(bpv__TargetActor__pf);
				if (!bpfv__CallFunc_IsValid_ReturnValue_3__pf)
				{
					__CurrentState = 12;
					break;
				}
			}
		case 8:
			{
				bpfv__CallFunc_IsValid_ReturnValue_2__pf = UKismetSystemLibrary::IsValid(bpv__TargetBuildingObject__pf);
				if (!bpfv__CallFunc_IsValid_ReturnValue_2__pf)
				{
					__CurrentState = 21;
					break;
				}
			}
		case 9:
			{
				FName  __Local__12 = FName();
				bpfv__CallFunc_Conv_NameToText_ReturnValue_1__pf = UKismetTextLibrary::Conv_NameToText(((::IsValid(bpv__TargetBuildingObject__pf)) ? (bpv__TargetBuildingObject__pf->bpv__BuildingObjectHandle__pf.RowName) : (__Local__12)));
				bpfv__K2Node_MakeStruct_FormatArgumentData_8__pf.ArgumentName = FString(TEXT("Handle"));
				bpfv__K2Node_MakeStruct_FormatArgumentData_8__pf.ArgumentValueType = EFormatArgumentType::Text;
				bpfv__K2Node_MakeStruct_FormatArgumentData_8__pf.ArgumentValue = bpfv__CallFunc_Conv_NameToText_ReturnValue_1__pf;
				bpfv__K2Node_MakeStruct_FormatArgumentData_8__pf.ArgumentValueInt = 0;
				bpfv__K2Node_MakeStruct_FormatArgumentData_8__pf.ArgumentValueFloat = 0.000000;
				bpfv__K2Node_MakeStruct_FormatArgumentData_8__pf.ArgumentValueGender = ETextGender::Masculine;
				bpfv__CallFunc_GetObjectClass_ReturnValue_3__pf = UGameplayStatics::GetObjectClass(bpv__TargetBuildingObject__pf);
				bpfv__CallFunc_GetClassDisplayName_ReturnValue_3__pf = UKismetSystemLibrary::GetClassDisplayName(bpfv__CallFunc_GetObjectClass_ReturnValue_3__pf);
				bpfv__CallFunc_Conv_StringToText_ReturnValue_4__pf = UKismetTextLibrary::Conv_StringToText(bpfv__CallFunc_GetClassDisplayName_ReturnValue_3__pf);
				bpfv__K2Node_MakeStruct_FormatArgumentData_9__pf.ArgumentName = FString(TEXT("Class"));
				bpfv__K2Node_MakeStruct_FormatArgumentData_9__pf.ArgumentValueType = EFormatArgumentType::Text;
				bpfv__K2Node_MakeStruct_FormatArgumentData_9__pf.ArgumentValue = bpfv__CallFunc_Conv_StringToText_ReturnValue_4__pf;
				bpfv__K2Node_MakeStruct_FormatArgumentData_9__pf.ArgumentValueInt = 0;
				bpfv__K2Node_MakeStruct_FormatArgumentData_9__pf.ArgumentValueFloat = 0.000000;
				bpfv__K2Node_MakeStruct_FormatArgumentData_9__pf.ArgumentValueGender = ETextGender::Masculine;
				E__E_Mei_BuildingType__pf  __Local__13 = E__E_Mei_BuildingType__pf::NewEnumerator0;
				bpfv__CallFunc_GetEnumeratorUserFriendlyName_ReturnValue_1__pf = UKismetNodeHelperLibrary::GetEnumeratorUserFriendlyName(CastChecked<UEnum>(CastChecked<UDynamicClass>(UBP_Mei_BuildingComponent_C__pf1731449071::StaticClass())->ReferencedConvertedFields[1]), static_cast<uint8>(((::IsValid(bpv__TargetBuildingObject__pf)) ? (bpv__TargetBuildingObject__pf->bpv__BuildingType__pf) : (__Local__13))));
				bpfv__CallFunc_Conv_StringToText_ReturnValue_5__pf = UKismetTextLibrary::Conv_StringToText(bpfv__CallFunc_GetEnumeratorUserFriendlyName_ReturnValue_1__pf);
				bpfv__K2Node_MakeStruct_FormatArgumentData_11__pf.ArgumentName = FString(TEXT("Type"));
				bpfv__K2Node_MakeStruct_FormatArgumentData_11__pf.ArgumentValueType = EFormatArgumentType::Text;
				bpfv__K2Node_MakeStruct_FormatArgumentData_11__pf.ArgumentValue = bpfv__CallFunc_Conv_StringToText_ReturnValue_5__pf;
				bpfv__K2Node_MakeStruct_FormatArgumentData_11__pf.ArgumentValueInt = 0;
				bpfv__K2Node_MakeStruct_FormatArgumentData_11__pf.ArgumentValueFloat = 0.000000;
				bpfv__K2Node_MakeStruct_FormatArgumentData_11__pf.ArgumentValueGender = ETextGender::Masculine;
				bpfv__K2Node_MakeArray_Array_4__pf.SetNum(3, true);
				bpfv__K2Node_MakeArray_Array_4__pf[0] = bpfv__K2Node_MakeStruct_FormatArgumentData_9__pf;
				bpfv__K2Node_MakeArray_Array_4__pf[1] = bpfv__K2Node_MakeStruct_FormatArgumentData_11__pf;
				bpfv__K2Node_MakeArray_Array_4__pf[2] = bpfv__K2Node_MakeStruct_FormatArgumentData_8__pf;
				bpfv__CallFunc_Format_ReturnValue_4__pf = UKismetTextLibrary::Format(FTextStringHelper::CreateFromBuffer(
TEXT("NSLOCTEXT(\"[5A93550A4BE6203FC591F7828865BF25]\", \"2229ADCF4CB1BA0E0C32918B93EB9CE8\", \"Target Actor:\\r\\nClass: {Class}\\r\\nBuilding Type: {Type}\\r\\nHandle: {Handle}\")")	), bpfv__K2Node_MakeArray_Array_4__pf);
				bpfv__LocalTargetActorInformation__pf = bpfv__CallFunc_Format_ReturnValue_4__pf;
			}
		case 10:
			{
				bpfv__K2Node_MakeStruct_FormatArgumentData_6__pf.ArgumentName = FString(TEXT("TargetActorInformation"));
				bpfv__K2Node_MakeStruct_FormatArgumentData_6__pf.ArgumentValueType = EFormatArgumentType::Text;
				bpfv__K2Node_MakeStruct_FormatArgumentData_6__pf.ArgumentValue = bpfv__LocalTargetActorInformation__pf;
				bpfv__K2Node_MakeStruct_FormatArgumentData_6__pf.ArgumentValueInt = 0;
				bpfv__K2Node_MakeStruct_FormatArgumentData_6__pf.ArgumentValueFloat = 0.000000;
				bpfv__K2Node_MakeStruct_FormatArgumentData_6__pf.ArgumentValueGender = ETextGender::Masculine;
				bpfv__K2Node_MakeStruct_FormatArgumentData_10__pf.ArgumentName = FString(TEXT("BuildingObjectInformation"));
				bpfv__K2Node_MakeStruct_FormatArgumentData_10__pf.ArgumentValueType = EFormatArgumentType::Text;
				bpfv__K2Node_MakeStruct_FormatArgumentData_10__pf.ArgumentValue = bpfv__LocalBuildingObjectInformation__pf;
				bpfv__K2Node_MakeStruct_FormatArgumentData_10__pf.ArgumentValueInt = 0;
				bpfv__K2Node_MakeStruct_FormatArgumentData_10__pf.ArgumentValueFloat = 0.000000;
				bpfv__K2Node_MakeStruct_FormatArgumentData_10__pf.ArgumentValueGender = ETextGender::Masculine;
				bpfv__K2Node_MakeStruct_FormatArgumentData_12__pf.ArgumentName = FString(TEXT("DefaultDebugInformation"));
				bpfv__K2Node_MakeStruct_FormatArgumentData_12__pf.ArgumentValueType = EFormatArgumentType::Text;
				bpfv__K2Node_MakeStruct_FormatArgumentData_12__pf.ArgumentValue = bpfv__LocalDefaultDebugInformation__pf;
				bpfv__K2Node_MakeStruct_FormatArgumentData_12__pf.ArgumentValueInt = 0;
				bpfv__K2Node_MakeStruct_FormatArgumentData_12__pf.ArgumentValueFloat = 0.000000;
				bpfv__K2Node_MakeStruct_FormatArgumentData_12__pf.ArgumentValueGender = ETextGender::Masculine;
				bpfv__K2Node_MakeArray_Array_5__pf.SetNum(3, true);
				bpfv__K2Node_MakeArray_Array_5__pf[0] = bpfv__K2Node_MakeStruct_FormatArgumentData_12__pf;
				bpfv__K2Node_MakeArray_Array_5__pf[1] = bpfv__K2Node_MakeStruct_FormatArgumentData_10__pf;
				bpfv__K2Node_MakeArray_Array_5__pf[2] = bpfv__K2Node_MakeStruct_FormatArgumentData_6__pf;
				bpfv__CallFunc_Format_ReturnValue_5__pf = UKismetTextLibrary::Format(FTextStringHelper::CreateFromBuffer(
TEXT("NSLOCTEXT(\"[5A93550A4BE6203FC591F7828865BF25]\", \"A02F7DCE4B30B445F17723BFDE97CD98\", \"{DefaultDebugInformation}\\r\\n\\r\\n{BuildingObjectInformation}\\r\\n\\r\\n{TargetActorInformation}\")")	), bpfv__K2Node_MakeArray_Array_5__pf);
				bpv__DebugInformation__pf = bpfv__CallFunc_Format_ReturnValue_5__pf;
			}
		case 11:
			{
				bpp__DebugInformation__pf = bpv__DebugInformation__pf;
				__CurrentState = -1;
				break;
			}
		case 12:
			{
				bpfv__LocalTargetActorInformation__pf = FTextStringHelper::CreateFromBuffer(
TEXT("NSLOCTEXT(\"[5A93550A4BE6203FC591F7828865BF25]\", \"57E5520F4B1C8BDBED60D5AFCCBB2933\", \"Target Actor: Is not Valid.\")")	);
				__CurrentState = 10;
				break;
			}
		case 13:
			{
				bpfv__LocalBuildingObjectInformation__pf = FTextStringHelper::CreateFromBuffer(
TEXT("NSLOCTEXT(\"[5A93550A4BE6203FC591F7828865BF25]\", \"F389969D46F76AB5B8733A8DE4A42753\", \"Building Object: Is not Valid.\")")	);
				__CurrentState = 7;
				break;
			}
		case 14:
			{
				bpfv__CallFunc_IsValid_ReturnValue_1__pf = UKismetSystemLibrary::IsValid(bpv__TargetActor__pf);
				if (!bpfv__CallFunc_IsValid_ReturnValue_1__pf)
				{
					__CurrentState = 20;
					break;
				}
			}
		case 15:
			{
				bpfv__CallFunc_IsValid_ReturnValue__pf = UKismetSystemLibrary::IsValid(bpv__TargetBuildingObject__pf);
				if (!bpfv__CallFunc_IsValid_ReturnValue__pf)
				{
					__CurrentState = 19;
					break;
				}
			}
		case 16:
			{
				E__E_Mei_BuildingType__pf  __Local__14 = E__E_Mei_BuildingType__pf::NewEnumerator0;
				bpfv__CallFunc_GetEnumeratorUserFriendlyName_ReturnValue__pf = UKismetNodeHelperLibrary::GetEnumeratorUserFriendlyName(CastChecked<UEnum>(CastChecked<UDynamicClass>(UBP_Mei_BuildingComponent_C__pf1731449071::StaticClass())->ReferencedConvertedFields[1]), static_cast<uint8>(((::IsValid(bpv__TargetBuildingObject__pf)) ? (bpv__TargetBuildingObject__pf->bpv__BuildingType__pf) : (__Local__14))));
				FName  __Local__15 = FName();
				bpfv__CallFunc_Conv_NameToText_ReturnValue__pf = UKismetTextLibrary::Conv_NameToText(((::IsValid(bpv__TargetBuildingObject__pf)) ? (bpv__TargetBuildingObject__pf->bpv__BuildingObjectHandle__pf.RowName) : (__Local__15)));
				bpfv__CallFunc_Conv_StringToText_ReturnValue__pf = UKismetTextLibrary::Conv_StringToText(bpfv__CallFunc_GetEnumeratorUserFriendlyName_ReturnValue__pf);
				bpfv__K2Node_MakeStruct_FormatArgumentData_2__pf.ArgumentName = FString(TEXT("Handle"));
				bpfv__K2Node_MakeStruct_FormatArgumentData_2__pf.ArgumentValueType = EFormatArgumentType::Text;
				bpfv__K2Node_MakeStruct_FormatArgumentData_2__pf.ArgumentValue = bpfv__CallFunc_Conv_NameToText_ReturnValue__pf;
				bpfv__K2Node_MakeStruct_FormatArgumentData_2__pf.ArgumentValueInt = 0;
				bpfv__K2Node_MakeStruct_FormatArgumentData_2__pf.ArgumentValueFloat = 0.000000;
				bpfv__K2Node_MakeStruct_FormatArgumentData_2__pf.ArgumentValueGender = ETextGender::Masculine;
				bpfv__K2Node_MakeStruct_FormatArgumentData_3__pf.ArgumentName = FString(TEXT("Type"));
				bpfv__K2Node_MakeStruct_FormatArgumentData_3__pf.ArgumentValueType = EFormatArgumentType::Text;
				bpfv__K2Node_MakeStruct_FormatArgumentData_3__pf.ArgumentValue = bpfv__CallFunc_Conv_StringToText_ReturnValue__pf;
				bpfv__K2Node_MakeStruct_FormatArgumentData_3__pf.ArgumentValueInt = 0;
				bpfv__K2Node_MakeStruct_FormatArgumentData_3__pf.ArgumentValueFloat = 0.000000;
				bpfv__K2Node_MakeStruct_FormatArgumentData_3__pf.ArgumentValueGender = ETextGender::Masculine;
				bpfv__CallFunc_GetObjectClass_ReturnValue__pf = UGameplayStatics::GetObjectClass(bpv__TargetBuildingObject__pf);
				bpfv__CallFunc_GetClassDisplayName_ReturnValue__pf = UKismetSystemLibrary::GetClassDisplayName(bpfv__CallFunc_GetObjectClass_ReturnValue__pf);
				bpfv__CallFunc_Conv_StringToText_ReturnValue_1__pf = UKismetTextLibrary::Conv_StringToText(bpfv__CallFunc_GetClassDisplayName_ReturnValue__pf);
				bpfv__K2Node_MakeStruct_FormatArgumentData_4__pf.ArgumentName = FString(TEXT("Class"));
				bpfv__K2Node_MakeStruct_FormatArgumentData_4__pf.ArgumentValueType = EFormatArgumentType::Text;
				bpfv__K2Node_MakeStruct_FormatArgumentData_4__pf.ArgumentValue = bpfv__CallFunc_Conv_StringToText_ReturnValue_1__pf;
				bpfv__K2Node_MakeStruct_FormatArgumentData_4__pf.ArgumentValueInt = 0;
				bpfv__K2Node_MakeStruct_FormatArgumentData_4__pf.ArgumentValueFloat = 0.000000;
				bpfv__K2Node_MakeStruct_FormatArgumentData_4__pf.ArgumentValueGender = ETextGender::Masculine;
				bpfv__K2Node_MakeArray_Array_1__pf.SetNum(3, true);
				bpfv__K2Node_MakeArray_Array_1__pf[0] = bpfv__K2Node_MakeStruct_FormatArgumentData_4__pf;
				bpfv__K2Node_MakeArray_Array_1__pf[1] = bpfv__K2Node_MakeStruct_FormatArgumentData_3__pf;
				bpfv__K2Node_MakeArray_Array_1__pf[2] = bpfv__K2Node_MakeStruct_FormatArgumentData_2__pf;
				bpfv__CallFunc_Format_ReturnValue_1__pf = UKismetTextLibrary::Format(FTextStringHelper::CreateFromBuffer(
TEXT("NSLOCTEXT(\"[5A93550A4BE6203FC591F7828865BF25]\", \"E5F30EB74F406A5828CAD49D0A22D476\", \"Target Actor:\\r\\nClass: {Class}\\r\\nBuilding Type: {Type}\\r\\nHandle: {Handle}\")")	), bpfv__K2Node_MakeArray_Array_1__pf);
				bpfv__LocalTargetActorInformation__pf = bpfv__CallFunc_Format_ReturnValue_1__pf;
			}
		case 17:
			{
				bpfv__K2Node_MakeStruct_FormatArgumentData__pf.ArgumentName = FString(TEXT("TargetActorInformation"));
				bpfv__K2Node_MakeStruct_FormatArgumentData__pf.ArgumentValueType = EFormatArgumentType::Text;
				bpfv__K2Node_MakeStruct_FormatArgumentData__pf.ArgumentValue = bpfv__LocalTargetActorInformation__pf;
				bpfv__K2Node_MakeStruct_FormatArgumentData__pf.ArgumentValueInt = 0;
				bpfv__K2Node_MakeStruct_FormatArgumentData__pf.ArgumentValueFloat = 0.000000;
				bpfv__K2Node_MakeStruct_FormatArgumentData__pf.ArgumentValueGender = ETextGender::Masculine;
				bpfv__K2Node_MakeStruct_FormatArgumentData_1__pf.ArgumentName = FString(TEXT("DefaultDebugInformation"));
				bpfv__K2Node_MakeStruct_FormatArgumentData_1__pf.ArgumentValueType = EFormatArgumentType::Text;
				bpfv__K2Node_MakeStruct_FormatArgumentData_1__pf.ArgumentValue = bpfv__LocalDefaultDebugInformation__pf;
				bpfv__K2Node_MakeStruct_FormatArgumentData_1__pf.ArgumentValueInt = 0;
				bpfv__K2Node_MakeStruct_FormatArgumentData_1__pf.ArgumentValueFloat = 0.000000;
				bpfv__K2Node_MakeStruct_FormatArgumentData_1__pf.ArgumentValueGender = ETextGender::Masculine;
				bpfv__K2Node_MakeArray_Array__pf.SetNum(2, true);
				bpfv__K2Node_MakeArray_Array__pf[0] = bpfv__K2Node_MakeStruct_FormatArgumentData_1__pf;
				bpfv__K2Node_MakeArray_Array__pf[1] = bpfv__K2Node_MakeStruct_FormatArgumentData__pf;
				bpfv__CallFunc_Format_ReturnValue__pf = UKismetTextLibrary::Format(FTextStringHelper::CreateFromBuffer(
TEXT("NSLOCTEXT(\"[5A93550A4BE6203FC591F7828865BF25]\", \"50067D4143E0F194C89474BC08210E6C\", \"{DefaultDebugInformation}\\r\\n\\r\\n{TargetActorInformation}\")")	), bpfv__K2Node_MakeArray_Array__pf);
				bpv__DebugInformation__pf = bpfv__CallFunc_Format_ReturnValue__pf;
			}
		case 18:
			{
				bpp__DebugInformation__pf = bpv__DebugInformation__pf;
				__CurrentState = -1;
				break;
			}
		case 19:
			{
				bpfv__CallFunc_GetObjectClass_ReturnValue_1__pf = UGameplayStatics::GetObjectClass(bpv__TargetActor__pf);
				bpfv__CallFunc_GetClassDisplayName_ReturnValue_1__pf = UKismetSystemLibrary::GetClassDisplayName(bpfv__CallFunc_GetObjectClass_ReturnValue_1__pf);
				bpfv__CallFunc_Conv_StringToText_ReturnValue_2__pf = UKismetTextLibrary::Conv_StringToText(bpfv__CallFunc_GetClassDisplayName_ReturnValue_1__pf);
				bpfv__K2Node_MakeStruct_FormatArgumentData_5__pf.ArgumentName = FString(TEXT("Class"));
				bpfv__K2Node_MakeStruct_FormatArgumentData_5__pf.ArgumentValueType = EFormatArgumentType::Text;
				bpfv__K2Node_MakeStruct_FormatArgumentData_5__pf.ArgumentValue = bpfv__CallFunc_Conv_StringToText_ReturnValue_2__pf;
				bpfv__K2Node_MakeStruct_FormatArgumentData_5__pf.ArgumentValueInt = 0;
				bpfv__K2Node_MakeStruct_FormatArgumentData_5__pf.ArgumentValueFloat = 0.000000;
				bpfv__K2Node_MakeStruct_FormatArgumentData_5__pf.ArgumentValueGender = ETextGender::Masculine;
				bpfv__K2Node_MakeArray_Array_2__pf.SetNum(1, true);
				bpfv__K2Node_MakeArray_Array_2__pf[0] = bpfv__K2Node_MakeStruct_FormatArgumentData_5__pf;
				bpfv__CallFunc_Format_ReturnValue_2__pf = UKismetTextLibrary::Format(FTextStringHelper::CreateFromBuffer(
TEXT("NSLOCTEXT(\"[5A93550A4BE6203FC591F7828865BF25]\", \"6C107A274711202FF861B5AA2292F8F7\", \"Target Actor:\\r\\nClass: {Class}\")")	), bpfv__K2Node_MakeArray_Array_2__pf);
				bpfv__LocalTargetActorInformation__pf = bpfv__CallFunc_Format_ReturnValue_2__pf;
				__CurrentState = 17;
				break;
			}
		case 20:
			{
				bpfv__LocalTargetActorInformation__pf = FTextStringHelper::CreateFromBuffer(
TEXT("NSLOCTEXT(\"[5A93550A4BE6203FC591F7828865BF25]\", \"79DB27C14093F2E54910EEB0D1723AE9\", \"Target Actor: Is not Valid.\")")	);
				__CurrentState = 17;
				break;
			}
		case 21:
			{
				bpfv__CallFunc_GetObjectClass_ReturnValue_2__pf = UGameplayStatics::GetObjectClass(bpv__TargetActor__pf);
				bpfv__CallFunc_GetClassDisplayName_ReturnValue_2__pf = UKismetSystemLibrary::GetClassDisplayName(bpfv__CallFunc_GetObjectClass_ReturnValue_2__pf);
				bpfv__CallFunc_Conv_StringToText_ReturnValue_3__pf = UKismetTextLibrary::Conv_StringToText(bpfv__CallFunc_GetClassDisplayName_ReturnValue_2__pf);
				bpfv__K2Node_MakeStruct_FormatArgumentData_7__pf.ArgumentName = FString(TEXT("Class"));
				bpfv__K2Node_MakeStruct_FormatArgumentData_7__pf.ArgumentValueType = EFormatArgumentType::Text;
				bpfv__K2Node_MakeStruct_FormatArgumentData_7__pf.ArgumentValue = bpfv__CallFunc_Conv_StringToText_ReturnValue_3__pf;
				bpfv__K2Node_MakeStruct_FormatArgumentData_7__pf.ArgumentValueInt = 0;
				bpfv__K2Node_MakeStruct_FormatArgumentData_7__pf.ArgumentValueFloat = 0.000000;
				bpfv__K2Node_MakeStruct_FormatArgumentData_7__pf.ArgumentValueGender = ETextGender::Masculine;
				bpfv__K2Node_MakeArray_Array_3__pf.SetNum(1, true);
				bpfv__K2Node_MakeArray_Array_3__pf[0] = bpfv__K2Node_MakeStruct_FormatArgumentData_7__pf;
				bpfv__CallFunc_Format_ReturnValue_3__pf = UKismetTextLibrary::Format(FTextStringHelper::CreateFromBuffer(
TEXT("NSLOCTEXT(\"[5A93550A4BE6203FC591F7828865BF25]\", \"B4A403504EC42282108FD6A52C4B3E4B\", \"Target Actor:\\r\\nClass: {Class}\")")	), bpfv__K2Node_MakeArray_Array_3__pf);
				bpfv__LocalTargetActorInformation__pf = bpfv__CallFunc_Format_ReturnValue_3__pf;
				__CurrentState = 10;
				break;
			}
		default:
			break;
		}
	} while( __CurrentState != -1 );
}
PRAGMA_DISABLE_OPTIMIZATION
void UBP_Mei_BuildingComponent_C__pf1731449071::__StaticDependencies_DirectlyUsedAssets(TArray<FBlueprintDependencyData>& AssetsToLoad)
{
	const FCompactBlueprintDependencyData LocCompactBlueprintDependencyData[] =
	{
		{57, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  MaterialInstanceConstant /Game/Mei/Material/BuildingSystem/Instances/Dummy/MI_Can_Build.MI_Can_Build 
		{58, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  MaterialInstanceConstant /Game/Mei/Material/BuildingSystem/Instances/Dummy/MI_CanNot_Build.MI_CanNot_Build 
		{52, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  NiagaraSystem /Game/Mei/VFX/BuildingSystem/Dummy/Dummy.Dummy 
	};
	for(const FCompactBlueprintDependencyData& CompactData : LocCompactBlueprintDependencyData)
	{
		AssetsToLoad.Add(FBlueprintDependencyData(F__NativeDependencies::Get(CompactData.ObjectRefIndex), CompactData));
	}
}
PRAGMA_ENABLE_OPTIMIZATION
PRAGMA_DISABLE_OPTIMIZATION
void UBP_Mei_BuildingComponent_C__pf1731449071::__StaticDependenciesAssets(TArray<FBlueprintDependencyData>& AssetsToLoad)
{
	__StaticDependencies_DirectlyUsedAssets(AssetsToLoad);
	const FCompactBlueprintDependencyData LocCompactBlueprintDependencyData[] =
	{
		{9, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.Actor 
		{1, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  ScriptStruct /Script/Engine.DataTableRowHandle 
		{23, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.PlayerController 
		{39, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/UMG.UserWidget 
		{28, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.ActorComponent 
		{40, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  ScriptStruct /Script/Engine.FormatArgumentData 
		{41, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Enum /Script/Engine.EFormatArgumentType 
		{42, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Enum /Script/Engine.ETextGender 
		{43, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.KismetTextLibrary 
		{32, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.KismetNodeHelperLibrary 
		{14, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.KismetMathLibrary 
		{17, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.KismetSystemLibrary 
		{18, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.GameplayStatics 
		{44, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  DelegateFunction /Script/Engine.TimerDynamicDelegate__DelegateSignature 
		{45, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  ScriptStruct /Script/Engine.TimerHandle 
		{27, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.KismetArrayLibrary 
		{46, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/UMG.WidgetBlueprintLibrary 
		{47, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.PlayerCameraManager 
		{48, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.MaterialInterface 
		{49, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.MeshComponent 
		{50, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Niagara.NiagaraComponent 
		{5, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.SceneComponent 
		{51, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Niagara.NiagaraFunctionLibrary 
		{10, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  ScriptStruct /Script/Engine.HitResult 
		{53, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Enum /Script/Engine.EDrawDebugTrace 
		{54, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.Pawn 
		{12, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.Controller 
		{31, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/PhysicsCore.PhysicalMaterial 
		{25, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.PrimitiveComponent 
		{3, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.Texture2D 
		{4, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.StaticMesh 
		{21, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.DataTable 
		{22, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.DataTableFunctionLibrary 
		{55, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.HUD 
		{56, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.Character 
		{34, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  ScriptStruct /Script/Engine.PointerToUberGraphFrame 
		{61, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  DataTable /Game/Mei/BP/BuildingSystem/DataTables/DT_Mei_BuildingObjects.DT_Mei_BuildingObjects 
		{62, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Font /Engine/EngineFonts/Roboto.Roboto 
		{63, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/UMG.TextBlock 
		{64, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Enum /Script/UMG.ESlateVisibility 
		{65, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/UMG.Border 
		{66, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  ScriptStruct /Script/SlateCore.Geometry 
		{67, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/UMG.WidgetLayoutLibrary 
		{68, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/UMG.Widget 
		{69, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/UMG.UMGSequencePlayer 
		{70, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/UMG.WidgetAnimation 
		{19, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.SoundBase 
		{71, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  ScriptStruct /Script/InputCore.Key 
		{72, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/UMG.ProgressBar 
		{59, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/UMG.Image 
		{60, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/UMG.VerticalBox 
		{73, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.AnimMontage 
		{15, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.NetPushModelHelpers 
		{24, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.BlueprintMapLibrary 
		{84, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.BoxComponent 
		{85, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/NavigationSystem.NavArea_Obstacle 
		{26, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.KismetStringLibrary 
		{29, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Enum /Script/Engine.ECollisionResponse 
		{30, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Enum /Script/Engine.EObjectTypeQuery 
		{33, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Enum /Script/Engine.ECollisionChannel 
		{35, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Enum /Script/Engine.ETimelineDirection 
		{36, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.BlueprintFunctionLibrary 
		{37, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.PlayerState 
		{38, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Landscape.Landscape 
		{86, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/ApexDestruction.DestructibleComponent 
		{87, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/ApexDestruction.DestructibleActor 
		{88, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/ApexDestruction.DestructibleMesh 
		{6, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.StaticMeshComponent 
		{7, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  StaticMesh /Game/Mei/Mesh/BuildingSystem/Structures/Dummy/SM_Dummy_Foundation.SM_Dummy_Foundation 
		{8, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  MaterialInstanceConstant /Game/Mei/Material/BuildingSystem/Instances/Dummy/MI_Dummy_Structures_Base.MI_Dummy_Structures_Base 
		{11, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.DamageType 
		{13, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.MaterialInstanceDynamic 
		{16, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.TimelineComponent 
		{20, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.SaveGame 
		{74, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  ScriptStruct /Script/SlateCore.SlateFontInfo 
		{75, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  ScriptStruct /Script/SlateCore.SlateColor 
		{76, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Enum /Script/SlateCore.ESlateColorStylingMode 
		{77, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/UMG.Button 
		{80, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  ScriptStruct /Script/Slate.Anchors 
		{81, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/UMG.CanvasPanelSlot 
		{82, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/UMG.CanvasPanel 
		{83, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/UMG.WrapBoxSlot 
		{78, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/UMG.WrapBox 
		{79, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/UMG.Overlay 
		{89, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  BlueprintGeneratedClass /Game/Mei/BP/BuildingSystem/BuildingObject/Base/BP_Mei_Building_BaseObject.BP_Mei_Building_BaseObject_C 
		{300, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  BlueprintGeneratedClass /Game/Mei/BP/Interfaces/BuildingSystem/BPI_Mei_BuildingWidget.BPI_Mei_BuildingWidget_C 
		{301, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  BlueprintGeneratedClass /Game/Mei/BP/Interfaces/BuildingSystem/BPI_Mei_Floor.BPI_Mei_Floor_C 
		{302, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  BlueprintGeneratedClass /Game/Mei/BP/BuildingSystem/Game/BP_Mei_Library.BP_Mei_Library_C 
		{303, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  BlueprintGeneratedClass /Game/Mei/BP/Interfaces/BuildingSystem/BPI_Mei_Player.BPI_Mei_Player_C 
		{304, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  BlueprintGeneratedClass /Game/Mei/BP/BuildingSystem/BuildingObject/Modular/BP_Mei_Building_Foundation.BP_Mei_Building_Foundation_C 
		{305, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  WidgetBlueprintGeneratedClass /Game/Mei/UI/BuildingSystem/UI_Mei_HUD.UI_Mei_HUD_C 
		{306, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  UserDefinedStruct /Game/Mei/BP/BuildingSystem/Structures/STR_Mei_BuildingObjectSettings.STR_Mei_BuildingObjectSettings 
		{307, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  UserDefinedEnum /Game/Mei/BP/BuildingSystem/Enumerations/E_Mei_BuildingMode.E_Mei_BuildingMode 
		{308, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  UserDefinedEnum /Game/Mei/BP/BuildingSystem/Enumerations/E_Mei_BuildingType.E_Mei_BuildingType 
		{309, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  UserDefinedEnum /Game/Mei/BP/BuildingSystem/Enumerations/E_Mei_ChangeVariableOperation.E_Mei_ChangeVariableOperation 
	};
	for(const FCompactBlueprintDependencyData& CompactData : LocCompactBlueprintDependencyData)
	{
		AssetsToLoad.Add(FBlueprintDependencyData(F__NativeDependencies::Get(CompactData.ObjectRefIndex), CompactData));
	}
}
PRAGMA_ENABLE_OPTIMIZATION
struct FRegisterHelper__UBP_Mei_BuildingComponent_C__pf1731449071
{
	FRegisterHelper__UBP_Mei_BuildingComponent_C__pf1731449071()
	{
		FConvertedBlueprintsDependencies::Get().RegisterConvertedClass(TEXT("/Game/Mei/BP/BuildingSystem/Components/BP_Mei_BuildingComponent"), &UBP_Mei_BuildingComponent_C__pf1731449071::__StaticDependenciesAssets);
	}
	static FRegisterHelper__UBP_Mei_BuildingComponent_C__pf1731449071 Instance;
};
FRegisterHelper__UBP_Mei_BuildingComponent_C__pf1731449071 FRegisterHelper__UBP_Mei_BuildingComponent_C__pf1731449071::Instance;
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
