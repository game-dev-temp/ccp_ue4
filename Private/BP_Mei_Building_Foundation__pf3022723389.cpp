#include "NativizedAssets.h"
#include "BP_Mei_Building_Foundation__pf3022723389.h"
#include "GeneratedCodeHelpers.h"
#include "Runtime/Engine/Classes/Engine/SimpleConstructionScript.h"
#include "Runtime/Engine/Classes/Engine/SCS_Node.h"
#include "Runtime/Engine/Classes/Components/SceneComponent.h"
#include "Runtime/Engine/Classes/Components/ActorComponent.h"
#include "Runtime/CoreUObject/Public/UObject/NoExportTypes.h"
#include "Runtime/Engine/Classes/Engine/EngineBaseTypes.h"
#include "Runtime/Engine/Classes/GameFramework/Actor.h"
#include "Runtime/Engine/Classes/Engine/EngineTypes.h"
#include "Runtime/Engine/Classes/GameFramework/DamageType.h"
#include "Runtime/Engine/Classes/Engine/NetSerialization.h"
#include "Runtime/PhysicsCore/Public/PhysicalMaterials/PhysicalMaterial.h"
#include "Runtime/PhysicsCore/Public/PhysicsSettingsEnums.h"
#include "Runtime/PhysicsCore/Public/PhysicalMaterials/PhysicalMaterialPropertyBase.h"
#include "Runtime/PhysicsCore/Public/Chaos/ChaosEngineInterface.h"
#include "Runtime/Engine/Classes/Components/PrimitiveComponent.h"
#include "Runtime/Engine/Classes/Materials/MaterialInterface.h"
#include "Runtime/Engine/Classes/PhysicalMaterials/PhysicalMaterialMask.h"
#include "Runtime/Engine/Classes/Engine/Texture.h"
#include "Runtime/Engine/Classes/EditorFramework/AssetImportData.h"
#include "Runtime/Engine/Classes/Engine/StreamableRenderAsset.h"
#include "Runtime/Engine/Classes/Engine/TextureDefines.h"
#include "Runtime/Engine/Public/PerPlatformProperties.h"
#include "Runtime/Engine/Classes/Engine/AssetUserData.h"
#include "Runtime/Engine/Classes/Interfaces/Interface_AssetUserData.h"
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
#include "Runtime/Engine/Classes/EdGraph/EdGraphPin.h"
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
#include "Runtime/Engine/Classes/GameFramework/PhysicsVolume.h"
#include "Runtime/Engine/Classes/GameFramework/Volume.h"
#include "Runtime/Engine/Classes/Engine/Brush.h"
#include "Runtime/Engine/Classes/Components/BrushComponent.h"
#include "Runtime/Engine/Classes/Engine/BrushBuilder.h"
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
#include "Runtime/Engine/Public/ComponentInstanceDataCache.h"
#include "Runtime/Engine/Classes/Components/BoxComponent.h"
#include "Runtime/NavigationSystem/Public/NavAreas/NavArea_Obstacle.h"


#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
PRAGMA_DISABLE_OPTIMIZATION
ABP_Mei_Building_Foundation_C__pf3022723389::ABP_Mei_Building_Foundation_C__pf3022723389(const FObjectInitializer& ObjectInitializer) : Super()
{
	
	bpv__SupportCheckers__pf = CreateDefaultSubobject<USceneComponent>(TEXT("SupportCheckers"));
	bpv__SupportChecker1__pf = CreateDefaultSubobject<UBoxComponent>(TEXT("SupportChecker1"));
	bpv__SupportChecker2__pf = CreateDefaultSubobject<UBoxComponent>(TEXT("SupportChecker2"));
	bpv__SupportChecker3__pf = CreateDefaultSubobject<UBoxComponent>(TEXT("SupportChecker3"));
	bpv__SupportChecker4__pf = CreateDefaultSubobject<UBoxComponent>(TEXT("SupportChecker4"));
	bpv__BuildComponents__pf = CreateDefaultSubobject<USceneComponent>(TEXT("BuildComponents"));
	bpv__BuildCollision__pf = CreateDefaultSubobject<UBoxComponent>(TEXT("BuildCollision"));
	bpv__FoundationSockets__pf = CreateDefaultSubobject<USceneComponent>(TEXT("FoundationSockets"));
	bpv__FoundationSocket1__pf = CreateDefaultSubobject<USceneComponent>(TEXT("FoundationSocket1"));
	bpv__FoundationSocket2__pf = CreateDefaultSubobject<USceneComponent>(TEXT("FoundationSocket2"));
	bpv__FoundationSocket3__pf = CreateDefaultSubobject<USceneComponent>(TEXT("FoundationSocket3"));
	bpv__FoundationSocket4__pf = CreateDefaultSubobject<USceneComponent>(TEXT("FoundationSocket4"));
	bpv__TriangleFoundationSockets__pf = CreateDefaultSubobject<USceneComponent>(TEXT("TriangleFoundationSockets"));
	bpv__TriangleFoundationSocket1__pf = CreateDefaultSubobject<USceneComponent>(TEXT("TriangleFoundationSocket1"));
	bpv__TriangleFoundationSocket2__pf = CreateDefaultSubobject<USceneComponent>(TEXT("TriangleFoundationSocket2"));
	bpv__TriangleFoundationSocket3__pf = CreateDefaultSubobject<USceneComponent>(TEXT("TriangleFoundationSocket3"));
	bpv__TriangleFoundationSocket4__pf = CreateDefaultSubobject<USceneComponent>(TEXT("TriangleFoundationSocket4"));
	bpv__WallSockets__pf = CreateDefaultSubobject<USceneComponent>(TEXT("WallSockets"));
	bpv__WallSocket1__pf = CreateDefaultSubobject<USceneComponent>(TEXT("WallSocket1"));
	bpv__WallSocket2__pf = CreateDefaultSubobject<USceneComponent>(TEXT("WallSocket2"));
	bpv__WallSocket3__pf = CreateDefaultSubobject<USceneComponent>(TEXT("WallSocket3"));
	bpv__WallSocket4__pf = CreateDefaultSubobject<USceneComponent>(TEXT("WallSocket4"));
	bpv__RampSockets__pf = CreateDefaultSubobject<USceneComponent>(TEXT("RampSockets"));
	bpv__RampSocket1__pf = CreateDefaultSubobject<USceneComponent>(TEXT("RampSocket1"));
	bpv__RampSocket2__pf = CreateDefaultSubobject<USceneComponent>(TEXT("RampSocket2"));
	bpv__RampSocket3__pf = CreateDefaultSubobject<USceneComponent>(TEXT("RampSocket3"));
	bpv__RampSocket4__pf = CreateDefaultSubobject<USceneComponent>(TEXT("RampSocket4"));
	bpv__StairsSocket__pf = CreateDefaultSubobject<USceneComponent>(TEXT("StairsSocket"));
	bpv__FloorSocket__pf = CreateDefaultSubobject<USceneComponent>(TEXT("FloorSocket"));
	bpv__RoofSocket__pf = CreateDefaultSubobject<USceneComponent>(TEXT("RoofSocket"));
	bpv__SupportCheckers__pf->CreationMethod = EComponentCreationMethod::Native;
	bpv__SupportCheckers__pf->AttachToComponent(bpv__DefaultSceneRoot__pf, FAttachmentTransformRules::KeepRelativeTransform );
	static TWeakFieldPtr<FProperty> __Local__1{};
	const FProperty* __Local__0 = __Local__1.Get();
	if (nullptr == __Local__0)
	{
		__Local__0 = (UActorComponent::StaticClass())->FindPropertyByName(FName(TEXT("bCanEverAffectNavigation")));
		check(__Local__0);
		__Local__1 = __Local__0;
	}
	(((FBoolProperty*)__Local__0)->SetPropertyValue_InContainer((bpv__SupportCheckers__pf), false, 0));
	bpv__SupportChecker1__pf->CreationMethod = EComponentCreationMethod::Native;
	bpv__SupportChecker1__pf->AttachToComponent(bpv__SupportCheckers__pf, FAttachmentTransformRules::KeepRelativeTransform );
	auto& __Local__2 = (*(AccessPrivateProperty<FVector >((bpv__SupportChecker1__pf), UBoxComponent::__PPO__BoxExtent() )));
	__Local__2 = FVector(10.000000, 10.000000, 80.000000);
	bpv__SupportChecker1__pf->AreaClass = UNavArea_Obstacle::StaticClass();
	auto& __Local__3 = (*(AccessPrivateProperty<FVector >((bpv__SupportChecker1__pf), USceneComponent::__PPO__RelativeLocation() )));
	__Local__3 = FVector(-130.000000, -130.000000, -15.000000);
	bpv__SupportChecker1__pf->ComponentTags = TArray<FName> ();
	bpv__SupportChecker1__pf->ComponentTags.Reserve(1);
	bpv__SupportChecker1__pf->ComponentTags.Add(FName(TEXT("SupportChecker")));
	(((FBoolProperty*)__Local__0)->SetPropertyValue_InContainer((bpv__SupportChecker1__pf), true, 0));
	bpv__SupportChecker2__pf->CreationMethod = EComponentCreationMethod::Native;
	bpv__SupportChecker2__pf->AttachToComponent(bpv__SupportCheckers__pf, FAttachmentTransformRules::KeepRelativeTransform );
	auto& __Local__4 = (*(AccessPrivateProperty<FVector >((bpv__SupportChecker2__pf), UBoxComponent::__PPO__BoxExtent() )));
	__Local__4 = FVector(10.000000, 10.000000, 80.000000);
	bpv__SupportChecker2__pf->AreaClass = UNavArea_Obstacle::StaticClass();
	auto& __Local__5 = (*(AccessPrivateProperty<FVector >((bpv__SupportChecker2__pf), USceneComponent::__PPO__RelativeLocation() )));
	__Local__5 = FVector(-130.000000, 130.000000, -15.000000);
	bpv__SupportChecker2__pf->ComponentTags = TArray<FName> ();
	bpv__SupportChecker2__pf->ComponentTags.Reserve(1);
	bpv__SupportChecker2__pf->ComponentTags.Add(FName(TEXT("SupportChecker")));
	(((FBoolProperty*)__Local__0)->SetPropertyValue_InContainer((bpv__SupportChecker2__pf), true, 0));
	bpv__SupportChecker3__pf->CreationMethod = EComponentCreationMethod::Native;
	bpv__SupportChecker3__pf->AttachToComponent(bpv__SupportCheckers__pf, FAttachmentTransformRules::KeepRelativeTransform );
	auto& __Local__6 = (*(AccessPrivateProperty<FVector >((bpv__SupportChecker3__pf), UBoxComponent::__PPO__BoxExtent() )));
	__Local__6 = FVector(10.000000, 10.000000, 80.000000);
	bpv__SupportChecker3__pf->AreaClass = UNavArea_Obstacle::StaticClass();
	auto& __Local__7 = (*(AccessPrivateProperty<FVector >((bpv__SupportChecker3__pf), USceneComponent::__PPO__RelativeLocation() )));
	__Local__7 = FVector(130.000000, 130.000000, -15.000000);
	bpv__SupportChecker3__pf->ComponentTags = TArray<FName> ();
	bpv__SupportChecker3__pf->ComponentTags.Reserve(1);
	bpv__SupportChecker3__pf->ComponentTags.Add(FName(TEXT("SupportChecker")));
	(((FBoolProperty*)__Local__0)->SetPropertyValue_InContainer((bpv__SupportChecker3__pf), true, 0));
	bpv__SupportChecker4__pf->CreationMethod = EComponentCreationMethod::Native;
	bpv__SupportChecker4__pf->AttachToComponent(bpv__SupportCheckers__pf, FAttachmentTransformRules::KeepRelativeTransform );
	auto& __Local__8 = (*(AccessPrivateProperty<FVector >((bpv__SupportChecker4__pf), UBoxComponent::__PPO__BoxExtent() )));
	__Local__8 = FVector(10.000000, 10.000000, 80.000000);
	bpv__SupportChecker4__pf->AreaClass = UNavArea_Obstacle::StaticClass();
	auto& __Local__9 = (*(AccessPrivateProperty<FVector >((bpv__SupportChecker4__pf), USceneComponent::__PPO__RelativeLocation() )));
	__Local__9 = FVector(130.000000, -130.000000, -15.000000);
	bpv__SupportChecker4__pf->ComponentTags = TArray<FName> ();
	bpv__SupportChecker4__pf->ComponentTags.Reserve(1);
	bpv__SupportChecker4__pf->ComponentTags.Add(FName(TEXT("SupportChecker")));
	(((FBoolProperty*)__Local__0)->SetPropertyValue_InContainer((bpv__SupportChecker4__pf), true, 0));
	bpv__BuildComponents__pf->CreationMethod = EComponentCreationMethod::Native;
	bpv__BuildComponents__pf->AttachToComponent(bpv__DefaultSceneRoot__pf, FAttachmentTransformRules::KeepRelativeTransform );
	bpv__BuildComponents__pf->ComponentTags = TArray<FName> ();
	bpv__BuildComponents__pf->ComponentTags.Reserve(1);
	bpv__BuildComponents__pf->ComponentTags.Add(FName(TEXT("BuildComponent")));
	(((FBoolProperty*)__Local__0)->SetPropertyValue_InContainer((bpv__BuildComponents__pf), false, 0));
	bpv__BuildCollision__pf->CreationMethod = EComponentCreationMethod::Native;
	bpv__BuildCollision__pf->AttachToComponent(bpv__BuildComponents__pf, FAttachmentTransformRules::KeepRelativeTransform );
	auto& __Local__10 = (*(AccessPrivateProperty<FVector >((bpv__BuildCollision__pf), UBoxComponent::__PPO__BoxExtent() )));
	__Local__10 = FVector(149.000000, 149.000000, 84.000000);
	bpv__BuildCollision__pf->AreaClass = UNavArea_Obstacle::StaticClass();
	bpv__BuildCollision__pf->ComponentTags = TArray<FName> ();
	bpv__BuildCollision__pf->ComponentTags.Reserve(2);
	bpv__BuildCollision__pf->ComponentTags.Add(FName(TEXT("BuildComponent")));
	bpv__BuildCollision__pf->ComponentTags.Add(FName(TEXT("BuildCollision")));
	(((FBoolProperty*)__Local__0)->SetPropertyValue_InContainer((bpv__BuildCollision__pf), true, 0));
	bpv__FoundationSockets__pf->CreationMethod = EComponentCreationMethod::Native;
	bpv__FoundationSockets__pf->AttachToComponent(bpv__BuildComponents__pf, FAttachmentTransformRules::KeepRelativeTransform );
	bpv__FoundationSockets__pf->ComponentTags = TArray<FName> ();
	bpv__FoundationSockets__pf->ComponentTags.Reserve(1);
	bpv__FoundationSockets__pf->ComponentTags.Add(FName(TEXT("BuildComponent")));
	(((FBoolProperty*)__Local__0)->SetPropertyValue_InContainer((bpv__FoundationSockets__pf), false, 0));
	bpv__FoundationSocket1__pf->CreationMethod = EComponentCreationMethod::Native;
	bpv__FoundationSocket1__pf->AttachToComponent(bpv__FoundationSockets__pf, FAttachmentTransformRules::KeepRelativeTransform );
	auto& __Local__11 = (*(AccessPrivateProperty<FVector >((bpv__FoundationSocket1__pf), USceneComponent::__PPO__RelativeLocation() )));
	__Local__11 = FVector(300.000000, 0.000000, 0.000000);
	bpv__FoundationSocket1__pf->ComponentTags = TArray<FName> ();
	bpv__FoundationSocket1__pf->ComponentTags.Reserve(2);
	bpv__FoundationSocket1__pf->ComponentTags.Add(FName(TEXT("BuildComponent")));
	bpv__FoundationSocket1__pf->ComponentTags.Add(FName(TEXT("FoundationSocket")));
	(((FBoolProperty*)__Local__0)->SetPropertyValue_InContainer((bpv__FoundationSocket1__pf), false, 0));
	bpv__FoundationSocket2__pf->CreationMethod = EComponentCreationMethod::Native;
	bpv__FoundationSocket2__pf->AttachToComponent(bpv__FoundationSockets__pf, FAttachmentTransformRules::KeepRelativeTransform );
	auto& __Local__12 = (*(AccessPrivateProperty<FVector >((bpv__FoundationSocket2__pf), USceneComponent::__PPO__RelativeLocation() )));
	__Local__12 = FVector(0.000000, 300.000000, 0.000000);
	bpv__FoundationSocket2__pf->ComponentTags = TArray<FName> ();
	bpv__FoundationSocket2__pf->ComponentTags.Reserve(2);
	bpv__FoundationSocket2__pf->ComponentTags.Add(FName(TEXT("BuildComponent")));
	bpv__FoundationSocket2__pf->ComponentTags.Add(FName(TEXT("FoundationSocket")));
	(((FBoolProperty*)__Local__0)->SetPropertyValue_InContainer((bpv__FoundationSocket2__pf), false, 0));
	bpv__FoundationSocket3__pf->CreationMethod = EComponentCreationMethod::Native;
	bpv__FoundationSocket3__pf->AttachToComponent(bpv__FoundationSockets__pf, FAttachmentTransformRules::KeepRelativeTransform );
	auto& __Local__13 = (*(AccessPrivateProperty<FVector >((bpv__FoundationSocket3__pf), USceneComponent::__PPO__RelativeLocation() )));
	__Local__13 = FVector(-300.000000, 0.000000, 0.000000);
	bpv__FoundationSocket3__pf->ComponentTags = TArray<FName> ();
	bpv__FoundationSocket3__pf->ComponentTags.Reserve(2);
	bpv__FoundationSocket3__pf->ComponentTags.Add(FName(TEXT("BuildComponent")));
	bpv__FoundationSocket3__pf->ComponentTags.Add(FName(TEXT("FoundationSocket")));
	(((FBoolProperty*)__Local__0)->SetPropertyValue_InContainer((bpv__FoundationSocket3__pf), false, 0));
	bpv__FoundationSocket4__pf->CreationMethod = EComponentCreationMethod::Native;
	bpv__FoundationSocket4__pf->AttachToComponent(bpv__FoundationSockets__pf, FAttachmentTransformRules::KeepRelativeTransform );
	auto& __Local__14 = (*(AccessPrivateProperty<FVector >((bpv__FoundationSocket4__pf), USceneComponent::__PPO__RelativeLocation() )));
	__Local__14 = FVector(0.000000, -300.000000, 0.000000);
	bpv__FoundationSocket4__pf->ComponentTags = TArray<FName> ();
	bpv__FoundationSocket4__pf->ComponentTags.Reserve(2);
	bpv__FoundationSocket4__pf->ComponentTags.Add(FName(TEXT("BuildComponent")));
	bpv__FoundationSocket4__pf->ComponentTags.Add(FName(TEXT("FoundationSocket")));
	(((FBoolProperty*)__Local__0)->SetPropertyValue_InContainer((bpv__FoundationSocket4__pf), false, 0));
	bpv__TriangleFoundationSockets__pf->CreationMethod = EComponentCreationMethod::Native;
	bpv__TriangleFoundationSockets__pf->AttachToComponent(bpv__BuildComponents__pf, FAttachmentTransformRules::KeepRelativeTransform );
	bpv__TriangleFoundationSockets__pf->ComponentTags = TArray<FName> ();
	bpv__TriangleFoundationSockets__pf->ComponentTags.Reserve(1);
	bpv__TriangleFoundationSockets__pf->ComponentTags.Add(FName(TEXT("BuildComponent")));
	(((FBoolProperty*)__Local__0)->SetPropertyValue_InContainer((bpv__TriangleFoundationSockets__pf), false, 0));
	bpv__TriangleFoundationSocket1__pf->CreationMethod = EComponentCreationMethod::Native;
	bpv__TriangleFoundationSocket1__pf->AttachToComponent(bpv__TriangleFoundationSockets__pf, FAttachmentTransformRules::KeepRelativeTransform );
	auto& __Local__15 = (*(AccessPrivateProperty<FVector >((bpv__TriangleFoundationSocket1__pf), USceneComponent::__PPO__RelativeLocation() )));
	__Local__15 = FVector(236.600006, 0.000000, 0.000000);
	auto& __Local__16 = (*(AccessPrivateProperty<FRotator >((bpv__TriangleFoundationSocket1__pf), USceneComponent::__PPO__RelativeRotation() )));
	__Local__16 = FRotator(0.000000, 89.999992, 0.000000);
	bpv__TriangleFoundationSocket1__pf->ComponentTags = TArray<FName> ();
	bpv__TriangleFoundationSocket1__pf->ComponentTags.Reserve(2);
	bpv__TriangleFoundationSocket1__pf->ComponentTags.Add(FName(TEXT("BuildComponent")));
	bpv__TriangleFoundationSocket1__pf->ComponentTags.Add(FName(TEXT("TriangleFoundationSocket")));
	(((FBoolProperty*)__Local__0)->SetPropertyValue_InContainer((bpv__TriangleFoundationSocket1__pf), false, 0));
	bpv__TriangleFoundationSocket2__pf->CreationMethod = EComponentCreationMethod::Native;
	bpv__TriangleFoundationSocket2__pf->AttachToComponent(bpv__TriangleFoundationSockets__pf, FAttachmentTransformRules::KeepRelativeTransform );
	auto& __Local__17 = (*(AccessPrivateProperty<FVector >((bpv__TriangleFoundationSocket2__pf), USceneComponent::__PPO__RelativeLocation() )));
	__Local__17 = FVector(0.000000, 236.600006, 0.000000);
	auto& __Local__18 = (*(AccessPrivateProperty<FRotator >((bpv__TriangleFoundationSocket2__pf), USceneComponent::__PPO__RelativeRotation() )));
	__Local__18 = FRotator(0.000000, -179.999985, 0.000000);
	bpv__TriangleFoundationSocket2__pf->ComponentTags = TArray<FName> ();
	bpv__TriangleFoundationSocket2__pf->ComponentTags.Reserve(2);
	bpv__TriangleFoundationSocket2__pf->ComponentTags.Add(FName(TEXT("BuildComponent")));
	bpv__TriangleFoundationSocket2__pf->ComponentTags.Add(FName(TEXT("TriangleFoundationSocket")));
	(((FBoolProperty*)__Local__0)->SetPropertyValue_InContainer((bpv__TriangleFoundationSocket2__pf), false, 0));
	bpv__TriangleFoundationSocket3__pf->CreationMethod = EComponentCreationMethod::Native;
	bpv__TriangleFoundationSocket3__pf->AttachToComponent(bpv__TriangleFoundationSockets__pf, FAttachmentTransformRules::KeepRelativeTransform );
	auto& __Local__19 = (*(AccessPrivateProperty<FVector >((bpv__TriangleFoundationSocket3__pf), USceneComponent::__PPO__RelativeLocation() )));
	__Local__19 = FVector(-236.600006, 0.000000, 0.000000);
	auto& __Local__20 = (*(AccessPrivateProperty<FRotator >((bpv__TriangleFoundationSocket3__pf), USceneComponent::__PPO__RelativeRotation() )));
	__Local__20 = FRotator(0.000000, -89.999992, 0.000000);
	bpv__TriangleFoundationSocket3__pf->ComponentTags = TArray<FName> ();
	bpv__TriangleFoundationSocket3__pf->ComponentTags.Reserve(2);
	bpv__TriangleFoundationSocket3__pf->ComponentTags.Add(FName(TEXT("BuildComponent")));
	bpv__TriangleFoundationSocket3__pf->ComponentTags.Add(FName(TEXT("TriangleFoundationSocket")));
	(((FBoolProperty*)__Local__0)->SetPropertyValue_InContainer((bpv__TriangleFoundationSocket3__pf), false, 0));
	bpv__TriangleFoundationSocket4__pf->CreationMethod = EComponentCreationMethod::Native;
	bpv__TriangleFoundationSocket4__pf->AttachToComponent(bpv__TriangleFoundationSockets__pf, FAttachmentTransformRules::KeepRelativeTransform );
	auto& __Local__21 = (*(AccessPrivateProperty<FVector >((bpv__TriangleFoundationSocket4__pf), USceneComponent::__PPO__RelativeLocation() )));
	__Local__21 = FVector(-0.000046, -236.599930, 0.000000);
	bpv__TriangleFoundationSocket4__pf->ComponentTags = TArray<FName> ();
	bpv__TriangleFoundationSocket4__pf->ComponentTags.Reserve(2);
	bpv__TriangleFoundationSocket4__pf->ComponentTags.Add(FName(TEXT("BuildComponent")));
	bpv__TriangleFoundationSocket4__pf->ComponentTags.Add(FName(TEXT("TriangleFoundationSocket")));
	(((FBoolProperty*)__Local__0)->SetPropertyValue_InContainer((bpv__TriangleFoundationSocket4__pf), false, 0));
	bpv__WallSockets__pf->CreationMethod = EComponentCreationMethod::Native;
	bpv__WallSockets__pf->AttachToComponent(bpv__BuildComponents__pf, FAttachmentTransformRules::KeepRelativeTransform );
	bpv__WallSockets__pf->ComponentTags = TArray<FName> ();
	bpv__WallSockets__pf->ComponentTags.Reserve(1);
	bpv__WallSockets__pf->ComponentTags.Add(FName(TEXT("BuildComponent")));
	(((FBoolProperty*)__Local__0)->SetPropertyValue_InContainer((bpv__WallSockets__pf), false, 0));
	bpv__WallSocket1__pf->CreationMethod = EComponentCreationMethod::Native;
	bpv__WallSocket1__pf->AttachToComponent(bpv__WallSockets__pf, FAttachmentTransformRules::KeepRelativeTransform );
	auto& __Local__22 = (*(AccessPrivateProperty<FVector >((bpv__WallSocket1__pf), USceneComponent::__PPO__RelativeLocation() )));
	__Local__22 = FVector(150.000000, 0.000000, 235.000000);
	auto& __Local__23 = (*(AccessPrivateProperty<FRotator >((bpv__WallSocket1__pf), USceneComponent::__PPO__RelativeRotation() )));
	__Local__23 = FRotator(0.000000, -89.999992, 0.000000);
	bpv__WallSocket1__pf->ComponentTags = TArray<FName> ();
	bpv__WallSocket1__pf->ComponentTags.Reserve(2);
	bpv__WallSocket1__pf->ComponentTags.Add(FName(TEXT("BuildComponent")));
	bpv__WallSocket1__pf->ComponentTags.Add(FName(TEXT("WallSocket")));
	(((FBoolProperty*)__Local__0)->SetPropertyValue_InContainer((bpv__WallSocket1__pf), false, 0));
	bpv__WallSocket2__pf->CreationMethod = EComponentCreationMethod::Native;
	bpv__WallSocket2__pf->AttachToComponent(bpv__WallSockets__pf, FAttachmentTransformRules::KeepRelativeTransform );
	auto& __Local__24 = (*(AccessPrivateProperty<FVector >((bpv__WallSocket2__pf), USceneComponent::__PPO__RelativeLocation() )));
	__Local__24 = FVector(0.000000, 150.000000, 235.000000);
	bpv__WallSocket2__pf->ComponentTags = TArray<FName> ();
	bpv__WallSocket2__pf->ComponentTags.Reserve(2);
	bpv__WallSocket2__pf->ComponentTags.Add(FName(TEXT("BuildComponent")));
	bpv__WallSocket2__pf->ComponentTags.Add(FName(TEXT("WallSocket")));
	(((FBoolProperty*)__Local__0)->SetPropertyValue_InContainer((bpv__WallSocket2__pf), false, 0));
	bpv__WallSocket3__pf->CreationMethod = EComponentCreationMethod::Native;
	bpv__WallSocket3__pf->AttachToComponent(bpv__WallSockets__pf, FAttachmentTransformRules::KeepRelativeTransform );
	auto& __Local__25 = (*(AccessPrivateProperty<FVector >((bpv__WallSocket3__pf), USceneComponent::__PPO__RelativeLocation() )));
	__Local__25 = FVector(-150.000000, 0.000000, 235.000000);
	auto& __Local__26 = (*(AccessPrivateProperty<FRotator >((bpv__WallSocket3__pf), USceneComponent::__PPO__RelativeRotation() )));
	__Local__26 = FRotator(0.000000, 89.999992, 0.000000);
	bpv__WallSocket3__pf->ComponentTags = TArray<FName> ();
	bpv__WallSocket3__pf->ComponentTags.Reserve(2);
	bpv__WallSocket3__pf->ComponentTags.Add(FName(TEXT("BuildComponent")));
	bpv__WallSocket3__pf->ComponentTags.Add(FName(TEXT("WallSocket")));
	(((FBoolProperty*)__Local__0)->SetPropertyValue_InContainer((bpv__WallSocket3__pf), false, 0));
	bpv__WallSocket4__pf->CreationMethod = EComponentCreationMethod::Native;
	bpv__WallSocket4__pf->AttachToComponent(bpv__WallSockets__pf, FAttachmentTransformRules::KeepRelativeTransform );
	auto& __Local__27 = (*(AccessPrivateProperty<FVector >((bpv__WallSocket4__pf), USceneComponent::__PPO__RelativeLocation() )));
	__Local__27 = FVector(0.000000, -150.000000, 235.000000);
	auto& __Local__28 = (*(AccessPrivateProperty<FRotator >((bpv__WallSocket4__pf), USceneComponent::__PPO__RelativeRotation() )));
	__Local__28 = FRotator(0.000000, -179.999985, 0.000000);
	bpv__WallSocket4__pf->ComponentTags = TArray<FName> ();
	bpv__WallSocket4__pf->ComponentTags.Reserve(2);
	bpv__WallSocket4__pf->ComponentTags.Add(FName(TEXT("BuildComponent")));
	bpv__WallSocket4__pf->ComponentTags.Add(FName(TEXT("WallSocket")));
	(((FBoolProperty*)__Local__0)->SetPropertyValue_InContainer((bpv__WallSocket4__pf), false, 0));
	bpv__RampSockets__pf->CreationMethod = EComponentCreationMethod::Native;
	bpv__RampSockets__pf->AttachToComponent(bpv__BuildComponents__pf, FAttachmentTransformRules::KeepRelativeTransform );
	bpv__RampSockets__pf->ComponentTags = TArray<FName> ();
	bpv__RampSockets__pf->ComponentTags.Reserve(1);
	bpv__RampSockets__pf->ComponentTags.Add(FName(TEXT("BuildComponent")));
	(((FBoolProperty*)__Local__0)->SetPropertyValue_InContainer((bpv__RampSockets__pf), false, 0));
	bpv__RampSocket1__pf->CreationMethod = EComponentCreationMethod::Native;
	bpv__RampSocket1__pf->AttachToComponent(bpv__RampSockets__pf, FAttachmentTransformRules::KeepRelativeTransform );
	auto& __Local__29 = (*(AccessPrivateProperty<FVector >((bpv__RampSocket1__pf), USceneComponent::__PPO__RelativeLocation() )));
	__Local__29 = FVector(0.000000, 300.000000, 0.000000);
	bpv__RampSocket1__pf->ComponentTags = TArray<FName> ();
	bpv__RampSocket1__pf->ComponentTags.Reserve(2);
	bpv__RampSocket1__pf->ComponentTags.Add(FName(TEXT("BuildComponent")));
	bpv__RampSocket1__pf->ComponentTags.Add(FName(TEXT("RampSocket")));
	(((FBoolProperty*)__Local__0)->SetPropertyValue_InContainer((bpv__RampSocket1__pf), false, 0));
	bpv__RampSocket2__pf->CreationMethod = EComponentCreationMethod::Native;
	bpv__RampSocket2__pf->AttachToComponent(bpv__RampSockets__pf, FAttachmentTransformRules::KeepRelativeTransform );
	auto& __Local__30 = (*(AccessPrivateProperty<FVector >((bpv__RampSocket2__pf), USceneComponent::__PPO__RelativeLocation() )));
	__Local__30 = FVector(-300.000000, 0.000000, 0.000000);
	auto& __Local__31 = (*(AccessPrivateProperty<FRotator >((bpv__RampSocket2__pf), USceneComponent::__PPO__RelativeRotation() )));
	__Local__31 = FRotator(0.000000, 90.000000, 0.000000);
	bpv__RampSocket2__pf->ComponentTags = TArray<FName> ();
	bpv__RampSocket2__pf->ComponentTags.Reserve(2);
	bpv__RampSocket2__pf->ComponentTags.Add(FName(TEXT("BuildComponent")));
	bpv__RampSocket2__pf->ComponentTags.Add(FName(TEXT("RampSocket")));
	(((FBoolProperty*)__Local__0)->SetPropertyValue_InContainer((bpv__RampSocket2__pf), false, 0));
	bpv__RampSocket3__pf->CreationMethod = EComponentCreationMethod::Native;
	bpv__RampSocket3__pf->AttachToComponent(bpv__RampSockets__pf, FAttachmentTransformRules::KeepRelativeTransform );
	auto& __Local__32 = (*(AccessPrivateProperty<FVector >((bpv__RampSocket3__pf), USceneComponent::__PPO__RelativeLocation() )));
	__Local__32 = FVector(0.000000, -300.000000, 0.000000);
	auto& __Local__33 = (*(AccessPrivateProperty<FRotator >((bpv__RampSocket3__pf), USceneComponent::__PPO__RelativeRotation() )));
	__Local__33 = FRotator(0.000000, 180.000000, 0.000000);
	bpv__RampSocket3__pf->ComponentTags = TArray<FName> ();
	bpv__RampSocket3__pf->ComponentTags.Reserve(2);
	bpv__RampSocket3__pf->ComponentTags.Add(FName(TEXT("BuildComponent")));
	bpv__RampSocket3__pf->ComponentTags.Add(FName(TEXT("RampSocket")));
	(((FBoolProperty*)__Local__0)->SetPropertyValue_InContainer((bpv__RampSocket3__pf), false, 0));
	bpv__RampSocket4__pf->CreationMethod = EComponentCreationMethod::Native;
	bpv__RampSocket4__pf->AttachToComponent(bpv__RampSockets__pf, FAttachmentTransformRules::KeepRelativeTransform );
	auto& __Local__34 = (*(AccessPrivateProperty<FVector >((bpv__RampSocket4__pf), USceneComponent::__PPO__RelativeLocation() )));
	__Local__34 = FVector(300.000000, 0.000000, 0.000000);
	auto& __Local__35 = (*(AccessPrivateProperty<FRotator >((bpv__RampSocket4__pf), USceneComponent::__PPO__RelativeRotation() )));
	__Local__35 = FRotator(0.000000, -90.000000, 0.000000);
	bpv__RampSocket4__pf->ComponentTags = TArray<FName> ();
	bpv__RampSocket4__pf->ComponentTags.Reserve(2);
	bpv__RampSocket4__pf->ComponentTags.Add(FName(TEXT("BuildComponent")));
	bpv__RampSocket4__pf->ComponentTags.Add(FName(TEXT("RampSocket")));
	(((FBoolProperty*)__Local__0)->SetPropertyValue_InContainer((bpv__RampSocket4__pf), false, 0));
	bpv__StairsSocket__pf->CreationMethod = EComponentCreationMethod::Native;
	bpv__StairsSocket__pf->AttachToComponent(bpv__BuildComponents__pf, FAttachmentTransformRules::KeepRelativeTransform );
	auto& __Local__36 = (*(AccessPrivateProperty<FVector >((bpv__StairsSocket__pf), USceneComponent::__PPO__RelativeLocation() )));
	__Local__36 = FVector(0.000000, 0.000000, 245.000000);
	bpv__StairsSocket__pf->ComponentTags = TArray<FName> ();
	bpv__StairsSocket__pf->ComponentTags.Reserve(2);
	bpv__StairsSocket__pf->ComponentTags.Add(FName(TEXT("BuildComponent")));
	bpv__StairsSocket__pf->ComponentTags.Add(FName(TEXT("StairsSocket")));
	(((FBoolProperty*)__Local__0)->SetPropertyValue_InContainer((bpv__StairsSocket__pf), false, 0));
	bpv__FloorSocket__pf->CreationMethod = EComponentCreationMethod::Native;
	bpv__FloorSocket__pf->AttachToComponent(bpv__BuildComponents__pf, FAttachmentTransformRules::KeepRelativeTransform );
	auto& __Local__37 = (*(AccessPrivateProperty<FVector >((bpv__FloorSocket__pf), USceneComponent::__PPO__RelativeLocation() )));
	__Local__37 = FVector(0.000000, 0.000000, 85.000000);
	bpv__FloorSocket__pf->ComponentTags = TArray<FName> ();
	bpv__FloorSocket__pf->ComponentTags.Reserve(2);
	bpv__FloorSocket__pf->ComponentTags.Add(FName(TEXT("BuildComponent")));
	bpv__FloorSocket__pf->ComponentTags.Add(FName(TEXT("FloorSocket")));
	(((FBoolProperty*)__Local__0)->SetPropertyValue_InContainer((bpv__FloorSocket__pf), false, 0));
	bpv__RoofSocket__pf->CreationMethod = EComponentCreationMethod::Native;
	bpv__RoofSocket__pf->AttachToComponent(bpv__BuildComponents__pf, FAttachmentTransformRules::KeepRelativeTransform );
	auto& __Local__38 = (*(AccessPrivateProperty<FVector >((bpv__RoofSocket__pf), USceneComponent::__PPO__RelativeLocation() )));
	__Local__38 = FVector(0.000000, 0.000000, 235.000000);
	bpv__RoofSocket__pf->ComponentTags = TArray<FName> ();
	bpv__RoofSocket__pf->ComponentTags.Reserve(3);
	bpv__RoofSocket__pf->ComponentTags.Add(FName(TEXT("BuildComponent")));
	bpv__RoofSocket__pf->ComponentTags.Add(FName(TEXT("RoofSocket")));
	bpv__RoofSocket__pf->ComponentTags.Add(FName(TEXT("TopRoofSocket")));
	(((FBoolProperty*)__Local__0)->SetPropertyValue_InContainer((bpv__RoofSocket__pf), false, 0));
	bpv__BuildingType__pf = E__E_Mei_BuildingType__pf::NewEnumerator1;
	bpv__PlacedOnLandscape__pf = true;
	bpv__IsFloor__pf = true;
	bpv__SocketName__pf = FName(TEXT("FoundationSocket"));
	bpv__SnapSettings__pf = TArray<FSTR_Mei_SnapSettings__pf4030501756> ();
	bpv__SnapSettings__pf.AddUninitialized(8);
	FSTR_Mei_SnapSettings__pf4030501756::StaticStruct()->InitializeStruct(bpv__SnapSettings__pf.GetData(), 8);
	auto& __Local__39 = bpv__SnapSettings__pf[0];
	auto& __Local__40 = bpv__SnapSettings__pf[1];
	auto& __Local__41 = bpv__SnapSettings__pf[2];
	auto& __Local__42 = bpv__SnapSettings__pf[3];
	auto& __Local__43 = bpv__SnapSettings__pf[4];
	auto& __Local__44 = bpv__SnapSettings__pf[5];
	auto& __Local__45 = bpv__SnapSettings__pf[6];
	auto& __Local__46 = bpv__SnapSettings__pf[7];
	bpv__IgnoredBuildingTypes__pf = TArray<E__E_Mei_BuildingType__pf> ();
	bpv__IgnoredBuildingTypes__pf.Reserve(2);
	bpv__IgnoredBuildingTypes__pf.Add(E__E_Mei_BuildingType__pf::NewEnumerator16);
	bpv__IgnoredBuildingTypes__pf.Add(E__E_Mei_BuildingType__pf::NewEnumerator19);
	auto& __Local__47 = (*(AccessPrivateProperty<EActorUpdateOverlapsMethod >((this), AActor::__PPO__DefaultUpdateOverlapsMethodDuringLevelStreaming() )));
	__Local__47 = EActorUpdateOverlapsMethod::OnlyUpdateMovable;
}
PRAGMA_ENABLE_OPTIMIZATION
void ABP_Mei_Building_Foundation_C__pf3022723389::PostLoadSubobjects(FObjectInstancingGraph* OuterInstanceGraph)
{
	Super::PostLoadSubobjects(OuterInstanceGraph);
	if(bpv__SupportCheckers__pf)
	{
		bpv__SupportCheckers__pf->CreationMethod = EComponentCreationMethod::Native;
	}
	if(bpv__SupportChecker1__pf)
	{
		bpv__SupportChecker1__pf->CreationMethod = EComponentCreationMethod::Native;
	}
	if(bpv__SupportChecker2__pf)
	{
		bpv__SupportChecker2__pf->CreationMethod = EComponentCreationMethod::Native;
	}
	if(bpv__SupportChecker3__pf)
	{
		bpv__SupportChecker3__pf->CreationMethod = EComponentCreationMethod::Native;
	}
	if(bpv__SupportChecker4__pf)
	{
		bpv__SupportChecker4__pf->CreationMethod = EComponentCreationMethod::Native;
	}
	if(bpv__BuildComponents__pf)
	{
		bpv__BuildComponents__pf->CreationMethod = EComponentCreationMethod::Native;
	}
	if(bpv__BuildCollision__pf)
	{
		bpv__BuildCollision__pf->CreationMethod = EComponentCreationMethod::Native;
	}
	if(bpv__FoundationSockets__pf)
	{
		bpv__FoundationSockets__pf->CreationMethod = EComponentCreationMethod::Native;
	}
	if(bpv__FoundationSocket1__pf)
	{
		bpv__FoundationSocket1__pf->CreationMethod = EComponentCreationMethod::Native;
	}
	if(bpv__FoundationSocket2__pf)
	{
		bpv__FoundationSocket2__pf->CreationMethod = EComponentCreationMethod::Native;
	}
	if(bpv__FoundationSocket3__pf)
	{
		bpv__FoundationSocket3__pf->CreationMethod = EComponentCreationMethod::Native;
	}
	if(bpv__FoundationSocket4__pf)
	{
		bpv__FoundationSocket4__pf->CreationMethod = EComponentCreationMethod::Native;
	}
	if(bpv__TriangleFoundationSockets__pf)
	{
		bpv__TriangleFoundationSockets__pf->CreationMethod = EComponentCreationMethod::Native;
	}
	if(bpv__TriangleFoundationSocket1__pf)
	{
		bpv__TriangleFoundationSocket1__pf->CreationMethod = EComponentCreationMethod::Native;
	}
	if(bpv__TriangleFoundationSocket2__pf)
	{
		bpv__TriangleFoundationSocket2__pf->CreationMethod = EComponentCreationMethod::Native;
	}
	if(bpv__TriangleFoundationSocket3__pf)
	{
		bpv__TriangleFoundationSocket3__pf->CreationMethod = EComponentCreationMethod::Native;
	}
	if(bpv__TriangleFoundationSocket4__pf)
	{
		bpv__TriangleFoundationSocket4__pf->CreationMethod = EComponentCreationMethod::Native;
	}
	if(bpv__WallSockets__pf)
	{
		bpv__WallSockets__pf->CreationMethod = EComponentCreationMethod::Native;
	}
	if(bpv__WallSocket1__pf)
	{
		bpv__WallSocket1__pf->CreationMethod = EComponentCreationMethod::Native;
	}
	if(bpv__WallSocket2__pf)
	{
		bpv__WallSocket2__pf->CreationMethod = EComponentCreationMethod::Native;
	}
	if(bpv__WallSocket3__pf)
	{
		bpv__WallSocket3__pf->CreationMethod = EComponentCreationMethod::Native;
	}
	if(bpv__WallSocket4__pf)
	{
		bpv__WallSocket4__pf->CreationMethod = EComponentCreationMethod::Native;
	}
	if(bpv__RampSockets__pf)
	{
		bpv__RampSockets__pf->CreationMethod = EComponentCreationMethod::Native;
	}
	if(bpv__RampSocket1__pf)
	{
		bpv__RampSocket1__pf->CreationMethod = EComponentCreationMethod::Native;
	}
	if(bpv__RampSocket2__pf)
	{
		bpv__RampSocket2__pf->CreationMethod = EComponentCreationMethod::Native;
	}
	if(bpv__RampSocket3__pf)
	{
		bpv__RampSocket3__pf->CreationMethod = EComponentCreationMethod::Native;
	}
	if(bpv__RampSocket4__pf)
	{
		bpv__RampSocket4__pf->CreationMethod = EComponentCreationMethod::Native;
	}
	if(bpv__StairsSocket__pf)
	{
		bpv__StairsSocket__pf->CreationMethod = EComponentCreationMethod::Native;
	}
	if(bpv__FloorSocket__pf)
	{
		bpv__FloorSocket__pf->CreationMethod = EComponentCreationMethod::Native;
	}
	if(bpv__RoofSocket__pf)
	{
		bpv__RoofSocket__pf->CreationMethod = EComponentCreationMethod::Native;
	}
}
PRAGMA_DISABLE_OPTIMIZATION
void ABP_Mei_Building_Foundation_C__pf3022723389::__CustomDynamicClassInitialization(UDynamicClass* InDynamicClass)
{
	ensure(0 == InDynamicClass->ReferencedConvertedFields.Num());
	ensure(0 == InDynamicClass->MiscConvertedSubobjects.Num());
	ensure(0 == InDynamicClass->DynamicBindingObjects.Num());
	ensure(0 == InDynamicClass->ComponentTemplates.Num());
	ensure(0 == InDynamicClass->Timelines.Num());
	ensure(0 == InDynamicClass->ComponentClassOverrides.Num());
	ensure(nullptr == InDynamicClass->AnimClassImplementation);
	InDynamicClass->AssembleReferenceTokenStream();
	// List of all referenced converted classes
	InDynamicClass->ReferencedConvertedFields.Add(ABP_Mei_Building_BaseObject_C__pf2826203124::StaticClass());
	FConvertedBlueprintsDependencies::FillUsedAssetsInDynamicClass(InDynamicClass, &__StaticDependencies_DirectlyUsedAssets);
	auto __Local__48 = NewObject<USceneComponent>(InDynamicClass, USceneComponent::StaticClass(), TEXT("DefaultSceneRoot_GEN_VARIABLE"), (EObjectFlags)0x00280029);
	InDynamicClass->ComponentTemplates.Add(__Local__48);
	static TWeakFieldPtr<FProperty> __Local__50{};
	const FProperty* __Local__49 = __Local__50.Get();
	if (nullptr == __Local__49)
	{
		__Local__49 = (UActorComponent::StaticClass())->FindPropertyByName(FName(TEXT("bCanEverAffectNavigation")));
		check(__Local__49);
		__Local__50 = __Local__49;
	}
	(((FBoolProperty*)__Local__49)->SetPropertyValue_InContainer((__Local__48), false, 0));
}
PRAGMA_ENABLE_OPTIMIZATION
PRAGMA_DISABLE_OPTIMIZATION
void ABP_Mei_Building_Foundation_C__pf3022723389::__StaticDependencies_DirectlyUsedAssets(TArray<FBlueprintDependencyData>& AssetsToLoad)
{
}
PRAGMA_ENABLE_OPTIMIZATION
PRAGMA_DISABLE_OPTIMIZATION
void ABP_Mei_Building_Foundation_C__pf3022723389::__StaticDependenciesAssets(TArray<FBlueprintDependencyData>& AssetsToLoad)
{
	__StaticDependencies_DirectlyUsedAssets(AssetsToLoad);
	const FCompactBlueprintDependencyData LocCompactBlueprintDependencyData[] =
	{
		{89, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  BlueprintGeneratedClass /Game/Mei/BP/BuildingSystem/BuildingObject/Base/BP_Mei_Building_BaseObject.BP_Mei_Building_BaseObject_C 
		{5, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.SceneComponent 
		{84, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.BoxComponent 
		{85, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/NavigationSystem.NavArea_Obstacle 
		{6, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.StaticMeshComponent 
		{7, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  StaticMesh /Game/Mei/Mesh/BuildingSystem/Structures/Dummy/SM_Dummy_Foundation.SM_Dummy_Foundation 
		{8, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  MaterialInstanceConstant /Game/Mei/Material/BuildingSystem/Instances/Dummy/MI_Dummy_Structures_Base.MI_Dummy_Structures_Base 
		{9, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.Actor 
		{10, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  ScriptStruct /Script/Engine.HitResult 
		{11, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.DamageType 
		{12, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.Controller 
		{13, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.MaterialInstanceDynamic 
		{14, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.KismetMathLibrary 
		{15, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.NetPushModelHelpers 
		{16, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.TimelineComponent 
		{17, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.KismetSystemLibrary 
		{18, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.GameplayStatics 
		{19, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.SoundBase 
		{20, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.SaveGame 
		{1, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  ScriptStruct /Script/Engine.DataTableRowHandle 
		{3, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.Texture2D 
		{4, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.StaticMesh 
		{21, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.DataTable 
		{22, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.DataTableFunctionLibrary 
		{23, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.PlayerController 
		{24, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.BlueprintMapLibrary 
		{25, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.PrimitiveComponent 
		{26, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.KismetStringLibrary 
		{27, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.KismetArrayLibrary 
		{28, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.ActorComponent 
		{29, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Enum /Script/Engine.ECollisionResponse 
		{30, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Enum /Script/Engine.EObjectTypeQuery 
		{31, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/PhysicsCore.PhysicalMaterial 
		{32, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.KismetNodeHelperLibrary 
		{33, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Enum /Script/Engine.ECollisionChannel 
		{34, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  ScriptStruct /Script/Engine.PointerToUberGraphFrame 
		{35, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Enum /Script/Engine.ETimelineDirection 
		{36, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.BlueprintFunctionLibrary 
		{37, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.PlayerState 
		{38, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Landscape.Landscape 
		{39, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/UMG.UserWidget 
		{40, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  ScriptStruct /Script/Engine.FormatArgumentData 
		{41, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Enum /Script/Engine.EFormatArgumentType 
		{42, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Enum /Script/Engine.ETextGender 
		{43, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.KismetTextLibrary 
		{44, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  DelegateFunction /Script/Engine.TimerDynamicDelegate__DelegateSignature 
		{45, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  ScriptStruct /Script/Engine.TimerHandle 
		{46, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/UMG.WidgetBlueprintLibrary 
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
		{59, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/UMG.Image 
		{60, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/UMG.VerticalBox 
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
		{71, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  ScriptStruct /Script/InputCore.Key 
		{72, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/UMG.ProgressBar 
		{73, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.AnimMontage 
		{74, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  ScriptStruct /Script/SlateCore.SlateFontInfo 
		{75, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  ScriptStruct /Script/SlateCore.SlateColor 
		{76, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Enum /Script/SlateCore.ESlateColorStylingMode 
		{77, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/UMG.Button 
		{78, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/UMG.WrapBox 
		{79, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/UMG.Overlay 
		{80, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  ScriptStruct /Script/Slate.Anchors 
		{81, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/UMG.CanvasPanelSlot 
		{82, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/UMG.CanvasPanel 
		{83, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/UMG.WrapBoxSlot 
		{86, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/ApexDestruction.DestructibleComponent 
		{87, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/ApexDestruction.DestructibleActor 
		{88, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/ApexDestruction.DestructibleMesh 
	};
	for(const FCompactBlueprintDependencyData& CompactData : LocCompactBlueprintDependencyData)
	{
		AssetsToLoad.Add(FBlueprintDependencyData(F__NativeDependencies::Get(CompactData.ObjectRefIndex), CompactData));
	}
}
PRAGMA_ENABLE_OPTIMIZATION
struct FRegisterHelper__ABP_Mei_Building_Foundation_C__pf3022723389
{
	FRegisterHelper__ABP_Mei_Building_Foundation_C__pf3022723389()
	{
		FConvertedBlueprintsDependencies::Get().RegisterConvertedClass(TEXT("/Game/Mei/BP/BuildingSystem/BuildingObject/Modular/BP_Mei_Building_Foundation"), &ABP_Mei_Building_Foundation_C__pf3022723389::__StaticDependenciesAssets);
	}
	static FRegisterHelper__ABP_Mei_Building_Foundation_C__pf3022723389 Instance;
};
FRegisterHelper__ABP_Mei_Building_Foundation_C__pf3022723389 FRegisterHelper__ABP_Mei_Building_Foundation_C__pf3022723389::Instance;
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
