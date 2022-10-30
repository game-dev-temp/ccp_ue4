#include "NativizedAssets.h"
#include "Spline_Pathway__pf1402625666.h"
#include "GeneratedCodeHelpers.h"
#include "Runtime/Engine/Classes/Engine/ComponentDelegateBinding.h"
#include "Runtime/Engine/Classes/Engine/TimelineTemplate.h"
#include "Runtime/Engine/Classes/Curves/CurveFloat.h"
#include "Runtime/Engine/Classes/Engine/SimpleConstructionScript.h"
#include "Runtime/Engine/Classes/Engine/SCS_Node.h"
#include "Runtime/Engine/Classes/Components/SceneComponent.h"
#include "Runtime/Engine/Classes/Components/ActorComponent.h"
#include "Runtime/Engine/Classes/Engine/EngineBaseTypes.h"
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
#include "Runtime/Engine/Classes/Components/SplineComponent.h"
#include "Runtime/NavigationSystem/Public/NavAreas/NavArea_Obstacle.h"
#include "NPC__pf1402625666.h"
#include "Runtime/Engine/Classes/Kismet/KismetSystemLibrary.h"
#include "Runtime/Engine/Classes/Kismet/BlueprintFunctionLibrary.h"
#include "Runtime/Engine/Classes/Engine/CollisionProfile.h"
#include "Runtime/Engine/Classes/Kismet/KismetMathLibrary.h"


#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
PRAGMA_DISABLE_OPTIMIZATION
ASpline_Pathway_C__pf1402625666::ASpline_Pathway_C__pf1402625666(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer)
{
	
	bpv__DefaultSceneRoot__pf = CreateDefaultSubobject<USceneComponent>(TEXT("DefaultSceneRoot"));
	bpv__Spline__pf = CreateDefaultSubobject<USplineComponent>(TEXT("Spline"));
	bpv__StaticMesh__pf = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("StaticMesh"));
	bpv__Sphere__pf = CreateDefaultSubobject<USphereComponent>(TEXT("Sphere"));
	RootComponent = bpv__DefaultSceneRoot__pf;
	bpv__DefaultSceneRoot__pf->CreationMethod = EComponentCreationMethod::Native;
	static TWeakFieldPtr<FProperty> __Local__1{};
	const FProperty* __Local__0 = __Local__1.Get();
	if (nullptr == __Local__0)
	{
		__Local__0 = (UActorComponent::StaticClass())->FindPropertyByName(FName(TEXT("bCanEverAffectNavigation")));
		check(__Local__0);
		__Local__1 = __Local__0;
	}
	(((FBoolProperty*)__Local__0)->SetPropertyValue_InContainer((bpv__DefaultSceneRoot__pf), false, 0));
	bpv__Spline__pf->CreationMethod = EComponentCreationMethod::Native;
	bpv__Spline__pf->AttachToComponent(bpv__DefaultSceneRoot__pf, FAttachmentTransformRules::KeepRelativeTransform );
	bpv__Spline__pf->SplineCurves.Position.Points = TArray<FInterpCurvePointVector> ();
	bpv__Spline__pf->SplineCurves.Position.Points.Reserve(5);
	bpv__Spline__pf->SplineCurves.Position.Points.Add(FInterpCurvePointVector{});
	bpv__Spline__pf->SplineCurves.Position.Points[0].ArriveTangent = FVector(-21.560268, 160.884918, 0.000008);
	bpv__Spline__pf->SplineCurves.Position.Points[0].LeaveTangent = FVector(-21.560268, 160.884918, 0.000008);
	bpv__Spline__pf->SplineCurves.Position.Points[0].InterpMode = EInterpCurveMode::CIM_CurveAuto;
	bpv__Spline__pf->SplineCurves.Position.Points.Add(FInterpCurvePointVector{});
	bpv__Spline__pf->SplineCurves.Position.Points[1].InVal = 1.000000f;
	bpv__Spline__pf->SplineCurves.Position.Points[1].OutVal = FVector(-102.879509, 186.013779, 8.910747);
	bpv__Spline__pf->SplineCurves.Position.Points[1].ArriveTangent = FVector(-90.735878, 107.575172, 4.455373);
	bpv__Spline__pf->SplineCurves.Position.Points[1].LeaveTangent = FVector(-90.735878, 107.575172, 4.455373);
	bpv__Spline__pf->SplineCurves.Position.Points[1].InterpMode = EInterpCurveMode::CIM_CurveAuto;
	bpv__Spline__pf->SplineCurves.Position.Points.Add(FInterpCurvePointVector{});
	bpv__Spline__pf->SplineCurves.Position.Points[2].InVal = 2.000000f;
	bpv__Spline__pf->SplineCurves.Position.Points[2].OutVal = FVector(-181.471756, 215.150345, 8.910747);
	bpv__Spline__pf->SplineCurves.Position.Points[2].ArriveTangent = FVector(-89.128586, -119.848862, -0.000008);
	bpv__Spline__pf->SplineCurves.Position.Points[2].LeaveTangent = FVector(-89.128586, -119.848862, -0.000008);
	bpv__Spline__pf->SplineCurves.Position.Points[2].InterpMode = EInterpCurveMode::CIM_CurveAuto;
	bpv__Spline__pf->SplineCurves.Position.Points.Add(FInterpCurvePointVector{});
	bpv__Spline__pf->SplineCurves.Position.Points[3].InVal = 3.000000f;
	bpv__Spline__pf->SplineCurves.Position.Points[3].OutVal = FVector(-281.136688, -53.683945, 8.910731);
	bpv__Spline__pf->SplineCurves.Position.Points[3].ArriveTangent = FVector(60.856392, -175.453201, -0.000008);
	bpv__Spline__pf->SplineCurves.Position.Points[3].LeaveTangent = FVector(60.856392, -175.453201, -0.000008);
	bpv__Spline__pf->SplineCurves.Position.Points[3].InterpMode = EInterpCurveMode::CIM_CurveAuto;
	bpv__Spline__pf->SplineCurves.Position.Points.Add(FInterpCurvePointVector{});
	bpv__Spline__pf->SplineCurves.Position.Points[4].InVal = 4.000000f;
	bpv__Spline__pf->SplineCurves.Position.Points[4].OutVal = FVector(-59.758972, -135.756058, 8.910731);
	bpv__Spline__pf->SplineCurves.Position.Points[4].ArriveTangent = FVector(140.568344, 26.841972, -4.455366);
	bpv__Spline__pf->SplineCurves.Position.Points[4].LeaveTangent = FVector(140.568344, 26.841972, -4.455366);
	bpv__Spline__pf->SplineCurves.Position.Points[4].InterpMode = EInterpCurveMode::CIM_CurveAuto;
	bpv__Spline__pf->SplineCurves.Position.bIsLooped = true;
	bpv__Spline__pf->SplineCurves.Position.LoopKeyOffset = 1.000000f;
	bpv__Spline__pf->SplineCurves.Rotation.Points = TArray<FInterpCurvePointQuat> ();
	bpv__Spline__pf->SplineCurves.Rotation.Points.Reserve(5);
	bpv__Spline__pf->SplineCurves.Rotation.Points.Add(FInterpCurvePointQuat{});
	bpv__Spline__pf->SplineCurves.Rotation.Points[0].ArriveTangent.W = 0.500000f;
	bpv__Spline__pf->SplineCurves.Rotation.Points[0].LeaveTangent.W = 0.500000f;
	bpv__Spline__pf->SplineCurves.Rotation.Points[0].InterpMode = EInterpCurveMode::CIM_CurveAuto;
	bpv__Spline__pf->SplineCurves.Rotation.Points.Add(FInterpCurvePointQuat{});
	bpv__Spline__pf->SplineCurves.Rotation.Points[1].InVal = 1.000000f;
	bpv__Spline__pf->SplineCurves.Rotation.Points[1].ArriveTangent.W = 0.500000f;
	bpv__Spline__pf->SplineCurves.Rotation.Points[1].LeaveTangent.W = 0.500000f;
	bpv__Spline__pf->SplineCurves.Rotation.Points[1].InterpMode = EInterpCurveMode::CIM_CurveAuto;
	bpv__Spline__pf->SplineCurves.Rotation.Points.Add(FInterpCurvePointQuat{});
	bpv__Spline__pf->SplineCurves.Rotation.Points[2].InVal = 2.000000f;
	bpv__Spline__pf->SplineCurves.Rotation.Points[2].ArriveTangent.W = 0.500000f;
	bpv__Spline__pf->SplineCurves.Rotation.Points[2].LeaveTangent.W = 0.500000f;
	bpv__Spline__pf->SplineCurves.Rotation.Points[2].InterpMode = EInterpCurveMode::CIM_CurveAuto;
	bpv__Spline__pf->SplineCurves.Rotation.Points.Add(FInterpCurvePointQuat{});
	bpv__Spline__pf->SplineCurves.Rotation.Points[3].InVal = 3.000000f;
	bpv__Spline__pf->SplineCurves.Rotation.Points[3].ArriveTangent.W = 0.500000f;
	bpv__Spline__pf->SplineCurves.Rotation.Points[3].LeaveTangent.W = 0.500000f;
	bpv__Spline__pf->SplineCurves.Rotation.Points[3].InterpMode = EInterpCurveMode::CIM_CurveAuto;
	bpv__Spline__pf->SplineCurves.Rotation.Points.Add(FInterpCurvePointQuat{});
	bpv__Spline__pf->SplineCurves.Rotation.Points[4].InVal = 4.000000f;
	bpv__Spline__pf->SplineCurves.Rotation.Points[4].ArriveTangent.W = 0.500000f;
	bpv__Spline__pf->SplineCurves.Rotation.Points[4].LeaveTangent.W = 0.500000f;
	bpv__Spline__pf->SplineCurves.Rotation.Points[4].InterpMode = EInterpCurveMode::CIM_CurveAuto;
	bpv__Spline__pf->SplineCurves.Rotation.bIsLooped = true;
	bpv__Spline__pf->SplineCurves.Rotation.LoopKeyOffset = 1.000000f;
	bpv__Spline__pf->SplineCurves.Scale.Points = TArray<FInterpCurvePointVector> ();
	bpv__Spline__pf->SplineCurves.Scale.Points.Reserve(5);
	bpv__Spline__pf->SplineCurves.Scale.Points.Add(FInterpCurvePointVector{});
	bpv__Spline__pf->SplineCurves.Scale.Points[0].OutVal = FVector(1.000000, 1.000000, 1.000000);
	bpv__Spline__pf->SplineCurves.Scale.Points[0].InterpMode = EInterpCurveMode::CIM_CurveAuto;
	bpv__Spline__pf->SplineCurves.Scale.Points.Add(FInterpCurvePointVector{});
	bpv__Spline__pf->SplineCurves.Scale.Points[1].InVal = 1.000000f;
	bpv__Spline__pf->SplineCurves.Scale.Points[1].OutVal = FVector(1.000000, 1.000000, 282.793427);
	bpv__Spline__pf->SplineCurves.Scale.Points[1].ArriveTangent = FVector(0.000000, 0.000000, 140.896713);
	bpv__Spline__pf->SplineCurves.Scale.Points[1].LeaveTangent = FVector(0.000000, 0.000000, 140.896713);
	bpv__Spline__pf->SplineCurves.Scale.Points[1].InterpMode = EInterpCurveMode::CIM_CurveAuto;
	bpv__Spline__pf->SplineCurves.Scale.Points.Add(FInterpCurvePointVector{});
	bpv__Spline__pf->SplineCurves.Scale.Points[2].InVal = 2.000000f;
	bpv__Spline__pf->SplineCurves.Scale.Points[2].OutVal = FVector(1.000000, 1.000000, 282.793427);
	bpv__Spline__pf->SplineCurves.Scale.Points[2].InterpMode = EInterpCurveMode::CIM_CurveAuto;
	bpv__Spline__pf->SplineCurves.Scale.Points.Add(FInterpCurvePointVector{});
	bpv__Spline__pf->SplineCurves.Scale.Points[3].InVal = 3.000000f;
	bpv__Spline__pf->SplineCurves.Scale.Points[3].OutVal = FVector(1.000000, 1.000000, 282.793427);
	bpv__Spline__pf->SplineCurves.Scale.Points[3].InterpMode = EInterpCurveMode::CIM_CurveAuto;
	bpv__Spline__pf->SplineCurves.Scale.Points.Add(FInterpCurvePointVector{});
	bpv__Spline__pf->SplineCurves.Scale.Points[4].InVal = 4.000000f;
	bpv__Spline__pf->SplineCurves.Scale.Points[4].OutVal = FVector(1.000000, 1.000000, 282.793427);
	bpv__Spline__pf->SplineCurves.Scale.Points[4].ArriveTangent = FVector(0.000000, 0.000000, -140.896713);
	bpv__Spline__pf->SplineCurves.Scale.Points[4].LeaveTangent = FVector(0.000000, 0.000000, -140.896713);
	bpv__Spline__pf->SplineCurves.Scale.Points[4].InterpMode = EInterpCurveMode::CIM_CurveAuto;
	bpv__Spline__pf->SplineCurves.Scale.bIsLooped = true;
	bpv__Spline__pf->SplineCurves.Scale.LoopKeyOffset = 1.000000f;
	bpv__Spline__pf->SplineCurves.ReparamTable.Points = TArray<FInterpCurvePointFloat> ();
	bpv__Spline__pf->SplineCurves.ReparamTable.Points.Reserve(51);
	bpv__Spline__pf->SplineCurves.ReparamTable.Points.Add(FInterpCurvePointFloat{});
	bpv__Spline__pf->SplineCurves.ReparamTable.Points.Add(FInterpCurvePointFloat{});
	bpv__Spline__pf->SplineCurves.ReparamTable.Points[1].InVal = 17.705450f;
	bpv__Spline__pf->SplineCurves.ReparamTable.Points[1].OutVal = 0.100000f;
	bpv__Spline__pf->SplineCurves.ReparamTable.Points.Add(FInterpCurvePointFloat{});
	bpv__Spline__pf->SplineCurves.ReparamTable.Points[2].InVal = 38.095013f;
	bpv__Spline__pf->SplineCurves.ReparamTable.Points[2].OutVal = 0.200000f;
	bpv__Spline__pf->SplineCurves.ReparamTable.Points.Add(FInterpCurvePointFloat{});
	bpv__Spline__pf->SplineCurves.ReparamTable.Points[3].InVal = 60.603283f;
	bpv__Spline__pf->SplineCurves.ReparamTable.Points[3].OutVal = 0.300000f;
	bpv__Spline__pf->SplineCurves.ReparamTable.Points.Add(FInterpCurvePointFloat{});
	bpv__Spline__pf->SplineCurves.ReparamTable.Points[4].InVal = 84.540375f;
	bpv__Spline__pf->SplineCurves.ReparamTable.Points[4].OutVal = 0.400000f;
	bpv__Spline__pf->SplineCurves.ReparamTable.Points.Add(FInterpCurvePointFloat{});
	bpv__Spline__pf->SplineCurves.ReparamTable.Points[5].InVal = 109.156311f;
	bpv__Spline__pf->SplineCurves.ReparamTable.Points[5].OutVal = 0.500000f;
	bpv__Spline__pf->SplineCurves.ReparamTable.Points.Add(FInterpCurvePointFloat{});
	bpv__Spline__pf->SplineCurves.ReparamTable.Points[6].InVal = 133.669205f;
	bpv__Spline__pf->SplineCurves.ReparamTable.Points[6].OutVal = 0.600000f;
	bpv__Spline__pf->SplineCurves.ReparamTable.Points.Add(FInterpCurvePointFloat{});
	bpv__Spline__pf->SplineCurves.ReparamTable.Points[7].InVal = 157.279160f;
	bpv__Spline__pf->SplineCurves.ReparamTable.Points[7].OutVal = 0.700000f;
	bpv__Spline__pf->SplineCurves.ReparamTable.Points.Add(FInterpCurvePointFloat{});
	bpv__Spline__pf->SplineCurves.ReparamTable.Points[8].InVal = 179.175842f;
	bpv__Spline__pf->SplineCurves.ReparamTable.Points[8].OutVal = 0.800000f;
	bpv__Spline__pf->SplineCurves.ReparamTable.Points.Add(FInterpCurvePointFloat{});
	bpv__Spline__pf->SplineCurves.ReparamTable.Points[9].InVal = 198.543594f;
	bpv__Spline__pf->SplineCurves.ReparamTable.Points[9].OutVal = 0.900000f;
	bpv__Spline__pf->SplineCurves.ReparamTable.Points.Add(FInterpCurvePointFloat{});
	bpv__Spline__pf->SplineCurves.ReparamTable.Points[10].InVal = 214.566437f;
	bpv__Spline__pf->SplineCurves.ReparamTable.Points[10].OutVal = 1.000000f;
	bpv__Spline__pf->SplineCurves.ReparamTable.Points.Add(FInterpCurvePointFloat{});
	bpv__Spline__pf->SplineCurves.ReparamTable.Points[11].InVal = 228.321304f;
	bpv__Spline__pf->SplineCurves.ReparamTable.Points[11].OutVal = 1.100000f;
	bpv__Spline__pf->SplineCurves.ReparamTable.Points.Add(FInterpCurvePointFloat{});
	bpv__Spline__pf->SplineCurves.ReparamTable.Points[12].InVal = 241.268250f;
	bpv__Spline__pf->SplineCurves.ReparamTable.Points[12].OutVal = 1.200000f;
	bpv__Spline__pf->SplineCurves.ReparamTable.Points.Add(FInterpCurvePointFloat{});
	bpv__Spline__pf->SplineCurves.ReparamTable.Points[13].InVal = 253.172302f;
	bpv__Spline__pf->SplineCurves.ReparamTable.Points[13].OutVal = 1.300000f;
	bpv__Spline__pf->SplineCurves.ReparamTable.Points.Add(FInterpCurvePointFloat{});
	bpv__Spline__pf->SplineCurves.ReparamTable.Points[14].InVal = 263.832642f;
	bpv__Spline__pf->SplineCurves.ReparamTable.Points[14].OutVal = 1.400000f;
	bpv__Spline__pf->SplineCurves.ReparamTable.Points.Add(FInterpCurvePointFloat{});
	bpv__Spline__pf->SplineCurves.ReparamTable.Points[15].InVal = 273.151031f;
	bpv__Spline__pf->SplineCurves.ReparamTable.Points[15].OutVal = 1.500000f;
	bpv__Spline__pf->SplineCurves.ReparamTable.Points.Add(FInterpCurvePointFloat{});
	bpv__Spline__pf->SplineCurves.ReparamTable.Points[16].InVal = 281.267487f;
	bpv__Spline__pf->SplineCurves.ReparamTable.Points[16].OutVal = 1.600000f;
	bpv__Spline__pf->SplineCurves.ReparamTable.Points.Add(FInterpCurvePointFloat{});
	bpv__Spline__pf->SplineCurves.ReparamTable.Points[17].InVal = 288.782898f;
	bpv__Spline__pf->SplineCurves.ReparamTable.Points[17].OutVal = 1.700000f;
	bpv__Spline__pf->SplineCurves.ReparamTable.Points.Add(FInterpCurvePointFloat{});
	bpv__Spline__pf->SplineCurves.ReparamTable.Points[18].InVal = 296.862762f;
	bpv__Spline__pf->SplineCurves.ReparamTable.Points[18].OutVal = 1.800000f;
	bpv__Spline__pf->SplineCurves.ReparamTable.Points.Add(FInterpCurvePointFloat{});
	bpv__Spline__pf->SplineCurves.ReparamTable.Points[19].InVal = 306.888885f;
	bpv__Spline__pf->SplineCurves.ReparamTable.Points[19].OutVal = 1.900000f;
	bpv__Spline__pf->SplineCurves.ReparamTable.Points.Add(FInterpCurvePointFloat{});
	bpv__Spline__pf->SplineCurves.ReparamTable.Points[20].InVal = 320.040985f;
	bpv__Spline__pf->SplineCurves.ReparamTable.Points[20].OutVal = 2.000000f;
	bpv__Spline__pf->SplineCurves.ReparamTable.Points.Add(FInterpCurvePointFloat{});
	bpv__Spline__pf->SplineCurves.ReparamTable.Points[21].InVal = 338.928589f;
	bpv__Spline__pf->SplineCurves.ReparamTable.Points[21].OutVal = 2.100000f;
	bpv__Spline__pf->SplineCurves.ReparamTable.Points.Add(FInterpCurvePointFloat{});
	bpv__Spline__pf->SplineCurves.ReparamTable.Points[22].InVal = 364.592682f;
	bpv__Spline__pf->SplineCurves.ReparamTable.Points[22].OutVal = 2.200000f;
	bpv__Spline__pf->SplineCurves.ReparamTable.Points.Add(FInterpCurvePointFloat{});
	bpv__Spline__pf->SplineCurves.ReparamTable.Points[23].InVal = 395.310852f;
	bpv__Spline__pf->SplineCurves.ReparamTable.Points[23].OutVal = 2.300000f;
	bpv__Spline__pf->SplineCurves.ReparamTable.Points.Add(FInterpCurvePointFloat{});
	bpv__Spline__pf->SplineCurves.ReparamTable.Points[24].InVal = 429.354248f;
	bpv__Spline__pf->SplineCurves.ReparamTable.Points[24].OutVal = 2.400000f;
	bpv__Spline__pf->SplineCurves.ReparamTable.Points.Add(FInterpCurvePointFloat{});
	bpv__Spline__pf->SplineCurves.ReparamTable.Points[25].InVal = 465.006104f;
	bpv__Spline__pf->SplineCurves.ReparamTable.Points[25].OutVal = 2.500000f;
	bpv__Spline__pf->SplineCurves.ReparamTable.Points.Add(FInterpCurvePointFloat{});
	bpv__Spline__pf->SplineCurves.ReparamTable.Points[26].InVal = 500.577271f;
	bpv__Spline__pf->SplineCurves.ReparamTable.Points[26].OutVal = 2.600000f;
	bpv__Spline__pf->SplineCurves.ReparamTable.Points.Add(FInterpCurvePointFloat{});
	bpv__Spline__pf->SplineCurves.ReparamTable.Points[27].InVal = 534.432068f;
	bpv__Spline__pf->SplineCurves.ReparamTable.Points[27].OutVal = 2.700000f;
	bpv__Spline__pf->SplineCurves.ReparamTable.Points.Add(FInterpCurvePointFloat{});
	bpv__Spline__pf->SplineCurves.ReparamTable.Points[28].InVal = 565.043579f;
	bpv__Spline__pf->SplineCurves.ReparamTable.Points[28].OutVal = 2.800000f;
	bpv__Spline__pf->SplineCurves.ReparamTable.Points.Add(FInterpCurvePointFloat{});
	bpv__Spline__pf->SplineCurves.ReparamTable.Points[29].InVal = 591.134827f;
	bpv__Spline__pf->SplineCurves.ReparamTable.Points[29].OutVal = 2.900000f;
	bpv__Spline__pf->SplineCurves.ReparamTable.Points.Add(FInterpCurvePointFloat{});
	bpv__Spline__pf->SplineCurves.ReparamTable.Points[30].InVal = 612.096191f;
	bpv__Spline__pf->SplineCurves.ReparamTable.Points[30].OutVal = 3.000000f;
	bpv__Spline__pf->SplineCurves.ReparamTable.Points.Add(FInterpCurvePointFloat{});
	bpv__Spline__pf->SplineCurves.ReparamTable.Points[31].InVal = 631.643982f;
	bpv__Spline__pf->SplineCurves.ReparamTable.Points[31].OutVal = 3.100000f;
	bpv__Spline__pf->SplineCurves.ReparamTable.Points.Add(FInterpCurvePointFloat{});
	bpv__Spline__pf->SplineCurves.ReparamTable.Points[32].InVal = 654.027039f;
	bpv__Spline__pf->SplineCurves.ReparamTable.Points[32].OutVal = 3.200000f;
	bpv__Spline__pf->SplineCurves.ReparamTable.Points.Add(FInterpCurvePointFloat{});
	bpv__Spline__pf->SplineCurves.ReparamTable.Points[33].InVal = 679.442444f;
	bpv__Spline__pf->SplineCurves.ReparamTable.Points[33].OutVal = 3.300000f;
	bpv__Spline__pf->SplineCurves.ReparamTable.Points.Add(FInterpCurvePointFloat{});
	bpv__Spline__pf->SplineCurves.ReparamTable.Points[34].InVal = 707.242981f;
	bpv__Spline__pf->SplineCurves.ReparamTable.Points[34].OutVal = 3.400000f;
	bpv__Spline__pf->SplineCurves.ReparamTable.Points.Add(FInterpCurvePointFloat{});
	bpv__Spline__pf->SplineCurves.ReparamTable.Points[35].InVal = 736.405457f;
	bpv__Spline__pf->SplineCurves.ReparamTable.Points[35].OutVal = 3.500000f;
	bpv__Spline__pf->SplineCurves.ReparamTable.Points.Add(FInterpCurvePointFloat{});
	bpv__Spline__pf->SplineCurves.ReparamTable.Points[36].InVal = 765.733521f;
	bpv__Spline__pf->SplineCurves.ReparamTable.Points[36].OutVal = 3.600000f;
	bpv__Spline__pf->SplineCurves.ReparamTable.Points.Add(FInterpCurvePointFloat{});
	bpv__Spline__pf->SplineCurves.ReparamTable.Points[37].InVal = 793.948425f;
	bpv__Spline__pf->SplineCurves.ReparamTable.Points[37].OutVal = 3.700000f;
	bpv__Spline__pf->SplineCurves.ReparamTable.Points.Add(FInterpCurvePointFloat{});
	bpv__Spline__pf->SplineCurves.ReparamTable.Points[38].InVal = 819.738403f;
	bpv__Spline__pf->SplineCurves.ReparamTable.Points[38].OutVal = 3.800000f;
	bpv__Spline__pf->SplineCurves.ReparamTable.Points.Add(FInterpCurvePointFloat{});
	bpv__Spline__pf->SplineCurves.ReparamTable.Points[39].InVal = 841.800842f;
	bpv__Spline__pf->SplineCurves.ReparamTable.Points[39].OutVal = 3.900000f;
	bpv__Spline__pf->SplineCurves.ReparamTable.Points.Add(FInterpCurvePointFloat{});
	bpv__Spline__pf->SplineCurves.ReparamTable.Points[40].InVal = 858.924011f;
	bpv__Spline__pf->SplineCurves.ReparamTable.Points[40].OutVal = 4.000000f;
	bpv__Spline__pf->SplineCurves.ReparamTable.Points.Add(FInterpCurvePointFloat{});
	bpv__Spline__pf->SplineCurves.ReparamTable.Points[41].InVal = 872.988708f;
	bpv__Spline__pf->SplineCurves.ReparamTable.Points[41].OutVal = 4.100000f;
	bpv__Spline__pf->SplineCurves.ReparamTable.Points.Add(FInterpCurvePointFloat{});
	bpv__Spline__pf->SplineCurves.ReparamTable.Points[42].InVal = 887.111572f;
	bpv__Spline__pf->SplineCurves.ReparamTable.Points[42].OutVal = 4.200000f;
	bpv__Spline__pf->SplineCurves.ReparamTable.Points.Add(FInterpCurvePointFloat{});
	bpv__Spline__pf->SplineCurves.ReparamTable.Points[43].InVal = 901.863525f;
	bpv__Spline__pf->SplineCurves.ReparamTable.Points[43].OutVal = 4.300000f;
	bpv__Spline__pf->SplineCurves.ReparamTable.Points.Add(FInterpCurvePointFloat{});
	bpv__Spline__pf->SplineCurves.ReparamTable.Points[44].InVal = 917.474609f;
	bpv__Spline__pf->SplineCurves.ReparamTable.Points[44].OutVal = 4.400000f;
	bpv__Spline__pf->SplineCurves.ReparamTable.Points.Add(FInterpCurvePointFloat{});
	bpv__Spline__pf->SplineCurves.ReparamTable.Points[45].InVal = 933.925171f;
	bpv__Spline__pf->SplineCurves.ReparamTable.Points[45].OutVal = 4.500000f;
	bpv__Spline__pf->SplineCurves.ReparamTable.Points.Add(FInterpCurvePointFloat{});
	bpv__Spline__pf->SplineCurves.ReparamTable.Points[46].InVal = 951.036438f;
	bpv__Spline__pf->SplineCurves.ReparamTable.Points[46].OutVal = 4.600000f;
	bpv__Spline__pf->SplineCurves.ReparamTable.Points.Add(FInterpCurvePointFloat{});
	bpv__Spline__pf->SplineCurves.ReparamTable.Points[47].InVal = 968.535583f;
	bpv__Spline__pf->SplineCurves.ReparamTable.Points[47].OutVal = 4.700000f;
	bpv__Spline__pf->SplineCurves.ReparamTable.Points.Add(FInterpCurvePointFloat{});
	bpv__Spline__pf->SplineCurves.ReparamTable.Points[48].InVal = 986.098511f;
	bpv__Spline__pf->SplineCurves.ReparamTable.Points[48].OutVal = 4.800000f;
	bpv__Spline__pf->SplineCurves.ReparamTable.Points.Add(FInterpCurvePointFloat{});
	bpv__Spline__pf->SplineCurves.ReparamTable.Points[49].InVal = 1003.378845f;
	bpv__Spline__pf->SplineCurves.ReparamTable.Points[49].OutVal = 4.900000f;
	bpv__Spline__pf->SplineCurves.ReparamTable.Points.Add(FInterpCurvePointFloat{});
	bpv__Spline__pf->SplineCurves.ReparamTable.Points[50].InVal = 1020.033203f;
	bpv__Spline__pf->SplineCurves.ReparamTable.Points[50].OutVal = 5.000000f;
	auto& __Local__2 = (*(AccessPrivateProperty<bool >((bpv__Spline__pf), USplineComponent::__PPO__bClosedLoop() )));
	__Local__2 = true;
	auto& __Local__3 = (*(AccessPrivateProperty<FVector >((bpv__Spline__pf), USceneComponent::__PPO__RelativeLocation() )));
	__Local__3 = FVector(-4.880463, 0.000000, 0.000000);
	(((FBoolProperty*)__Local__0)->SetPropertyValue_InContainer((bpv__Spline__pf), false, 0));
	bpv__StaticMesh__pf->CreationMethod = EComponentCreationMethod::Native;
	bpv__StaticMesh__pf->AttachToComponent(bpv__Spline__pf, FAttachmentTransformRules::KeepRelativeTransform );
	auto& __Local__4 = (*(AccessPrivateProperty<UStaticMesh* >((bpv__StaticMesh__pf), UStaticMeshComponent::__PPO__StaticMesh() )));
	__Local__4 = CastChecked<UStaticMesh>(CastChecked<UDynamicClass>(ASpline_Pathway_C__pf1402625666::StaticClass())->UsedAssets[0], ECastCheckedType::NullAllowed);
	bpv__StaticMesh__pf->SetCollisionProfileName(FName(TEXT("NoCollision")));
	auto& __Local__5 = (*(AccessPrivateProperty<FVector >((bpv__StaticMesh__pf), USceneComponent::__PPO__RelativeLocation() )));
	__Local__5 = FVector(4.880463, 0.000000, 0.000000);
	(((FBoolProperty*)__Local__0)->SetPropertyValue_InContainer((bpv__StaticMesh__pf), true, 0));
	bpv__Sphere__pf->CreationMethod = EComponentCreationMethod::Native;
	bpv__Sphere__pf->AttachToComponent(bpv__StaticMesh__pf, FAttachmentTransformRules::KeepRelativeTransform );
	bpv__Sphere__pf->AreaClass = UNavArea_Obstacle::StaticClass();
	auto& __Local__6 = (*(AccessPrivateProperty<FVector >((bpv__Sphere__pf), USceneComponent::__PPO__RelativeScale3D() )));
	__Local__6 = FVector(-3.160246, -3.160246, -3.160246);
	(((FBoolProperty*)__Local__0)->SetPropertyValue_InContainer((bpv__Sphere__pf), true, 0));
	bpv__Timeline_0_NewTrack_0_EB67099A4E630B1C55B2CA844C94559A__pf = 0.000000f;
	bpv__Timeline_0__Direction_EB67099A4E630B1C55B2CA844C94559A__pf = ETimelineDirection::Type::Forward;
	bpv__Timeline_0__pf = nullptr;
	bpv__location__pf = FVector(0.000000, 0.000000, 0.000000);
	bpv__OverlappingNPCx__pfzy = false;
	auto& __Local__7 = (*(AccessPrivateProperty<EActorUpdateOverlapsMethod >((this), AActor::__PPO__DefaultUpdateOverlapsMethodDuringLevelStreaming() )));
	__Local__7 = EActorUpdateOverlapsMethod::OnlyUpdateMovable;
}
PRAGMA_ENABLE_OPTIMIZATION
void ASpline_Pathway_C__pf1402625666::PostLoadSubobjects(FObjectInstancingGraph* OuterInstanceGraph)
{
	Super::PostLoadSubobjects(OuterInstanceGraph);
	if(bpv__DefaultSceneRoot__pf)
	{
		bpv__DefaultSceneRoot__pf->CreationMethod = EComponentCreationMethod::Native;
	}
	if(bpv__Spline__pf)
	{
		bpv__Spline__pf->CreationMethod = EComponentCreationMethod::Native;
	}
	if(bpv__StaticMesh__pf)
	{
		bpv__StaticMesh__pf->CreationMethod = EComponentCreationMethod::Native;
	}
	if(bpv__Sphere__pf)
	{
		bpv__Sphere__pf->CreationMethod = EComponentCreationMethod::Native;
	}
}
PRAGMA_DISABLE_OPTIMIZATION
void ASpline_Pathway_C__pf1402625666::__CustomDynamicClassInitialization(UDynamicClass* InDynamicClass)
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
	InDynamicClass->ReferencedConvertedFields.Add(ANPC_C__pf1402625666::StaticClass());
	FConvertedBlueprintsDependencies::FillUsedAssetsInDynamicClass(InDynamicClass, &__StaticDependencies_DirectlyUsedAssets);
	auto __Local__8 = NewObject<UTimelineTemplate>(InDynamicClass, UTimelineTemplate::StaticClass(), TEXT("Timeline_0_Template"), (EObjectFlags)0x00280008);
	InDynamicClass->Timelines.Add(__Local__8);
	auto __Local__9 = NewObject<UComponentDelegateBinding>(InDynamicClass, UComponentDelegateBinding::StaticClass(), TEXT("ComponentDelegateBinding_1"), (EObjectFlags)0x00000000);
	InDynamicClass->DynamicBindingObjects.Add(__Local__9);
	__Local__8->TimelineLength = 10.000000f;
	__Local__8->FloatTracks = TArray<FTTFloatTrack> ();
	__Local__8->FloatTracks.AddUninitialized(1);
	FTTFloatTrack::StaticStruct()->InitializeStruct(__Local__8->FloatTracks.GetData(), 1);
	auto& __Local__10 = __Local__8->FloatTracks[0];
	auto __Local__11 = NewObject<UCurveFloat>(InDynamicClass, UCurveFloat::StaticClass(), TEXT("CurveFloat_0"), (EObjectFlags)0x00280009);
	InDynamicClass->MiscConvertedSubobjects.Add(__Local__11);
	__Local__11->FloatCurve.Keys = TArray<FRichCurveKey> ();
	__Local__11->FloatCurve.Keys.AddUninitialized(2);
	FRichCurveKey::StaticStruct()->InitializeStruct(__Local__11->FloatCurve.Keys.GetData(), 2);
	auto& __Local__12 = __Local__11->FloatCurve.Keys[0];
	auto& __Local__13 = __Local__11->FloatCurve.Keys[1];
	__Local__13.Time = 10.000000f;
	__Local__13.Value = 1.000000f;
	__Local__10.CurveFloat = __Local__11;
	auto& __Local__14 = (*(AccessPrivateProperty<FName >(&(__Local__10), FTTPropertyTrack::__PPO__PropertyName() )));
	__Local__14 = FName(TEXT("Timeline_0_NewTrack_0_EB67099A4E630B1C55B2CA844C94559A"));
	auto& __Local__15 = (*(AccessPrivateProperty<FName >(&(__Local__10), FTTTrackBase::__PPO__TrackName() )));
	__Local__15 = FName(TEXT("NewTrack_0"));
	__Local__8->TimelineGuid = FGuid(0xEB67099A, 0x4E630B1C, 0x55B2CA84, 0x4C94559A);
	auto& __Local__16 = (*(AccessPrivateProperty<FName >((__Local__8), UTimelineTemplate::__PPO__VariableName() )));
	__Local__16 = FName(TEXT("Timeline_0"));
	auto& __Local__17 = (*(AccessPrivateProperty<FName >((__Local__8), UTimelineTemplate::__PPO__DirectionPropertyName() )));
	__Local__17 = FName(TEXT("Timeline_0__Direction_EB67099A4E630B1C55B2CA844C94559A"));
	auto& __Local__18 = (*(AccessPrivateProperty<FName >((__Local__8), UTimelineTemplate::__PPO__UpdateFunctionName() )));
	__Local__18 = FName(TEXT("Timeline_0__UpdateFunc"));
	auto& __Local__19 = (*(AccessPrivateProperty<FName >((__Local__8), UTimelineTemplate::__PPO__FinishedFunctionName() )));
	__Local__19 = FName(TEXT("Timeline_0__FinishedFunc"));
	__Local__9->ComponentDelegateBindings = TArray<FBlueprintComponentDelegateBinding> ();
	__Local__9->ComponentDelegateBindings.AddUninitialized(2);
	FBlueprintComponentDelegateBinding::StaticStruct()->InitializeStruct(__Local__9->ComponentDelegateBindings.GetData(), 2);
	auto& __Local__20 = __Local__9->ComponentDelegateBindings[0];
	__Local__20.ComponentPropertyName = FName(TEXT("Sphere"));
	__Local__20.DelegatePropertyName = FName(TEXT("OnComponentEndOverlap"));
	__Local__20.FunctionNameToBind = FName(TEXT("BndEvt__Spline_Pathway_Sphere_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature"));
	auto& __Local__21 = __Local__9->ComponentDelegateBindings[1];
	__Local__21.ComponentPropertyName = FName(TEXT("Sphere"));
	__Local__21.DelegatePropertyName = FName(TEXT("OnComponentBeginOverlap"));
	__Local__21.FunctionNameToBind = FName(TEXT("BndEvt__Spline_Pathway_Sphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature"));
}
PRAGMA_ENABLE_OPTIMIZATION
void ASpline_Pathway_C__pf1402625666::bpf__ExecuteUbergraph_Spline_Pathway__pf_0(int32 bpp__EntryPoint__pf)
{
	check(bpp__EntryPoint__pf == 15);
	// optimized KCST_UnconditionalGoto
	b0l__K2Node_DynamicCast_AsNPC__pf = Cast<ANPC_C__pf1402625666>(b0l__K2Node_ComponentBoundEvent_OtherActor_1__pf);
	b0l__K2Node_DynamicCast_bSuccess__pf = (b0l__K2Node_DynamicCast_AsNPC__pf != nullptr);;
	if (!b0l__K2Node_DynamicCast_bSuccess__pf)
	{
		return; //KCST_EndOfThreadIfNot
	}
	// optimized KCST_UnconditionalGoto
	bpv__OverlappingNPCx__pfzy = true;
	return; //KCST_EndOfThread
}
void ASpline_Pathway_C__pf1402625666::bpf__ExecuteUbergraph_Spline_Pathway__pf_1(int32 bpp__EntryPoint__pf)
{
	check(bpp__EntryPoint__pf == 17);
	// optimized KCST_UnconditionalGoto
	b0l__K2Node_DynamicCast_AsNPC_1__pf = Cast<ANPC_C__pf1402625666>(b0l__K2Node_ComponentBoundEvent_OtherActor__pf);
	b0l__K2Node_DynamicCast_bSuccess_1__pf = (b0l__K2Node_DynamicCast_AsNPC_1__pf != nullptr);;
	if (!b0l__K2Node_DynamicCast_bSuccess_1__pf)
	{
		return; //KCST_EndOfThreadIfNot
	}
	// optimized KCST_UnconditionalGoto
	bpv__OverlappingNPCx__pfzy = false;
	return; //KCST_EndOfThread
}
void ASpline_Pathway_C__pf1402625666::bpf__ExecuteUbergraph_Spline_Pathway__pf_2(int32 bpp__EntryPoint__pf)
{
	check(bpp__EntryPoint__pf == 14);
	// optimized KCST_UnconditionalGoto
	if(::IsValid(bpv__Timeline_0__pf))
	{
		bpv__Timeline_0__pf->UTimelineComponent::Play();
	}
	return; //KCST_EndOfThread
}
void ASpline_Pathway_C__pf1402625666::bpf__ExecuteUbergraph_Spline_Pathway__pf_3(int32 bpp__EntryPoint__pf)
{
	check(bpp__EntryPoint__pf == 13);
	// optimized KCST_UnconditionalGoto
	if(::IsValid(bpv__Timeline_0__pf))
	{
		bpv__Timeline_0__pf->UTimelineComponent::Stop();
	}
	return; //KCST_EndOfThread
}
void ASpline_Pathway_C__pf1402625666::bpf__ExecuteUbergraph_Spline_Pathway__pf_4(int32 bpp__EntryPoint__pf)
{
	float bpfv__CallFunc_GetSplineLength_ReturnValue__pf{};
	float bpfv__CallFunc_Lerp_ReturnValue__pf{};
	FVector bpfv__CallFunc_GetLocationAtDistanceAlongSpline_ReturnValue__pf(EForceInit::ForceInit);
	check(bpp__EntryPoint__pf == 9);
	// optimized KCST_UnconditionalGoto
	if(::IsValid(bpv__Spline__pf))
	{
		bpfv__CallFunc_GetSplineLength_ReturnValue__pf = bpv__Spline__pf->USplineComponent::GetSplineLength();
	}
	bpfv__CallFunc_Lerp_ReturnValue__pf = UKismetMathLibrary::Lerp(0.000000, bpfv__CallFunc_GetSplineLength_ReturnValue__pf, bpv__Timeline_0_NewTrack_0_EB67099A4E630B1C55B2CA844C94559A__pf);
	if(::IsValid(bpv__Spline__pf))
	{
		bpfv__CallFunc_GetLocationAtDistanceAlongSpline_ReturnValue__pf = bpv__Spline__pf->USplineComponent::GetLocationAtDistanceAlongSpline(bpfv__CallFunc_Lerp_ReturnValue__pf, ESplineCoordinateSpace::World);
	}
	bpv__location__pf = bpfv__CallFunc_GetLocationAtDistanceAlongSpline_ReturnValue__pf;
	if(::IsValid(bpv__Spline__pf))
	{
		bpfv__CallFunc_GetSplineLength_ReturnValue__pf = bpv__Spline__pf->USplineComponent::GetSplineLength();
	}
	bpfv__CallFunc_Lerp_ReturnValue__pf = UKismetMathLibrary::Lerp(0.000000, bpfv__CallFunc_GetSplineLength_ReturnValue__pf, bpv__Timeline_0_NewTrack_0_EB67099A4E630B1C55B2CA844C94559A__pf);
	if(::IsValid(bpv__Spline__pf))
	{
		bpfv__CallFunc_GetLocationAtDistanceAlongSpline_ReturnValue__pf = bpv__Spline__pf->USplineComponent::GetLocationAtDistanceAlongSpline(bpfv__CallFunc_Lerp_ReturnValue__pf, ESplineCoordinateSpace::World);
	}
	if(::IsValid(bpv__StaticMesh__pf))
	{
		bpv__StaticMesh__pf->USceneComponent::K2_SetWorldLocation(bpfv__CallFunc_GetLocationAtDistanceAlongSpline_ReturnValue__pf, false, /*out*/ b0l__CallFunc_K2_SetWorldLocation_SweepHitResult__pf, false);
	}
	return; //KCST_EndOfThread
}
void ASpline_Pathway_C__pf1402625666::bpf__ExecuteUbergraph_Spline_Pathway__pf_5(int32 bpp__EntryPoint__pf)
{
	int32 __CurrentState = bpp__EntryPoint__pf;
	do
	{
		switch( __CurrentState )
		{
		case 2:
			{
				__CurrentState = 3;
				break;
			}
		case 3:
			{
				if(::IsValid(bpv__Timeline_0__pf))
				{
					bpv__Timeline_0__pf->UTimelineComponent::PlayFromStart();
				}
				__CurrentState = -1;
				break;
			}
		case 6:
			{
				__CurrentState = 3;
				break;
			}
		case 8:
			{
				UKismetSystemLibrary::Delay(this, 3.000000, FLatentActionInfo(2, -175104243, TEXT("ExecuteUbergraph_Spline_Pathway_5"), this));
				__CurrentState = -1;
				break;
			}
		case 12:
			{
				__CurrentState = 8;
				break;
			}
		default:
			break;
		}
	} while( __CurrentState != -1 );
}
void ASpline_Pathway_C__pf1402625666::bpf__BndEvt__Spline_Pathway_Sphere_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature__pf(UPrimitiveComponent* bpp__OverlappedComponent__pf, AActor* bpp__OtherActor__pf, UPrimitiveComponent* bpp__OtherComp__pf, int32 bpp__OtherBodyIndex__pf)
{
	b0l__K2Node_ComponentBoundEvent_OverlappedComponent__pf = bpp__OverlappedComponent__pf;
	b0l__K2Node_ComponentBoundEvent_OtherActor__pf = bpp__OtherActor__pf;
	b0l__K2Node_ComponentBoundEvent_OtherComp__pf = bpp__OtherComp__pf;
	b0l__K2Node_ComponentBoundEvent_OtherBodyIndex__pf = bpp__OtherBodyIndex__pf;
	bpf__ExecuteUbergraph_Spline_Pathway__pf_1(17);
}
void ASpline_Pathway_C__pf1402625666::bpf__BndEvt__Spline_Pathway_Sphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature__pf(UPrimitiveComponent* bpp__OverlappedComponent__pf, AActor* bpp__OtherActor__pf, UPrimitiveComponent* bpp__OtherComp__pf, int32 bpp__OtherBodyIndex__pf, bool bpp__bFromSweep__pf, FHitResult const& bpp__SweepResult__pf__const)
{
	typedef FHitResult  T__Local__23;
	T__Local__23& bpp__SweepResult__pf = *const_cast<T__Local__23 *>(&bpp__SweepResult__pf__const);
	b0l__K2Node_ComponentBoundEvent_OverlappedComponent_1__pf = bpp__OverlappedComponent__pf;
	b0l__K2Node_ComponentBoundEvent_OtherActor_1__pf = bpp__OtherActor__pf;
	b0l__K2Node_ComponentBoundEvent_OtherComp_1__pf = bpp__OtherComp__pf;
	b0l__K2Node_ComponentBoundEvent_OtherBodyIndex_1__pf = bpp__OtherBodyIndex__pf;
	b0l__K2Node_ComponentBoundEvent_bFromSweep__pf = bpp__bFromSweep__pf;
	b0l__K2Node_ComponentBoundEvent_SweepResult__pf = bpp__SweepResult__pf;
	bpf__ExecuteUbergraph_Spline_Pathway__pf_0(15);
}
void ASpline_Pathway_C__pf1402625666::bpf__Continue__pf()
{
	bpf__ExecuteUbergraph_Spline_Pathway__pf_2(14);
}
void ASpline_Pathway_C__pf1402625666::bpf__Pause__pf()
{
	bpf__ExecuteUbergraph_Spline_Pathway__pf_3(13);
}
void ASpline_Pathway_C__pf1402625666::bpf__ReceiveBeginPlay__pf()
{
	bpf__ExecuteUbergraph_Spline_Pathway__pf_5(6);
}
void ASpline_Pathway_C__pf1402625666::bpf__Timeline_0__UpdateFunc__pf()
{
	bpf__ExecuteUbergraph_Spline_Pathway__pf_4(9);
}
void ASpline_Pathway_C__pf1402625666::bpf__Timeline_0__FinishedFunc__pf()
{
	bpf__ExecuteUbergraph_Spline_Pathway__pf_5(12);
}
PRAGMA_DISABLE_OPTIMIZATION
void ASpline_Pathway_C__pf1402625666::__StaticDependencies_DirectlyUsedAssets(TArray<FBlueprintDependencyData>& AssetsToLoad)
{
	const FCompactBlueprintDependencyData LocCompactBlueprintDependencyData[] =
	{
		{375, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  StaticMesh /Game/Geometry/Meshes/1M_Cube.1M_Cube 
	};
	for(const FCompactBlueprintDependencyData& CompactData : LocCompactBlueprintDependencyData)
	{
		AssetsToLoad.Add(FBlueprintDependencyData(F__NativeDependencies::Get(CompactData.ObjectRefIndex), CompactData));
	}
}
PRAGMA_ENABLE_OPTIMIZATION
PRAGMA_DISABLE_OPTIMIZATION
void ASpline_Pathway_C__pf1402625666::__StaticDependenciesAssets(TArray<FBlueprintDependencyData>& AssetsToLoad)
{
	__StaticDependencies_DirectlyUsedAssets(AssetsToLoad);
	const FCompactBlueprintDependencyData LocCompactBlueprintDependencyData[] =
	{
		{5, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.SceneComponent 
		{193, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.SplineComponent 
		{6, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.StaticMeshComponent 
		{126, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.SphereComponent 
		{85, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/NavigationSystem.NavArea_Obstacle 
		{10, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  ScriptStruct /Script/Engine.HitResult 
		{25, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.PrimitiveComponent 
		{9, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.Actor 
		{16, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.TimelineComponent 
		{17, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.KismetSystemLibrary 
		{170, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  ScriptStruct /Script/Engine.LatentActionInfo 
		{14, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.KismetMathLibrary 
		{34, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  ScriptStruct /Script/Engine.PointerToUberGraphFrame 
		{35, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Enum /Script/Engine.ETimelineDirection 
		{159, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.ArrowComponent 
		{160, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  StaticMesh /Game/Mei/Material/Pickups/Tact/S_Tact.S_Tact 
		{84, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.BoxComponent 
		{71, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  ScriptStruct /Script/InputCore.Key 
		{165, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Enum /Script/InputCore.ETouchIndex 
		{144, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.AnimInstance 
		{166, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.ParticleSystemComponent 
		{11, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.DamageType 
		{12, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.Controller 
		{167, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  AnimMontage /Game/Mei/Anim/Mei/Attacked_Montage.Attacked_Montage 
		{145, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.CharacterMovementComponent 
		{56, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.Character 
		{27, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.KismetArrayLibrary 
		{26, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.KismetStringLibrary 
		{173, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  AnimMontage /Game/Mei/Anim/Mei/Sheathe_weapon_Montage.Sheathe_weapon_Montage 
		{18, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.GameplayStatics 
		{54, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.Pawn 
		{175, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/HeadMountedDisplay.HeadMountedDisplayFunctionLibrary 
		{169, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  AnimMontage /Game/Mei/Anim/Mei/Draw_weapon_Montage.Draw_weapon_Montage 
		{155, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.SkeletalMeshComponent 
		{174, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  AnimMontage /Game/Mei/Anim/Mei/Thrust_1_Montage.Thrust_1_Montage 
		{171, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  AnimMontage /Game/Mei/Anim/Mei/Thrust_combo2_Montage.Thrust_combo2_Montage 
		{168, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  AnimMontage /Game/Mei/Anim/Mei/Thrust_combo1_Montage.Thrust_combo1_Montage 
		{172, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  AnimMontage /Game/Mei/Anim/Mei/Thrust_combo3_Montage.Thrust_combo3_Montage 
		{30, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Enum /Script/Engine.EObjectTypeQuery 
		{178, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  AnimSequence /Game/Mei/Anim/Mei/A_Thrust_1.A_Thrust_1 
		{179, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/ClothingSystemRuntimeNv.ClothingSimulationFactoryNv 
		{180, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  SkeletalMesh /Game/Mei/Mesh/Character/Mei/old/SK_Mei_v2.SK_Mei_v2 
		{371, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/AIModule.AIPerceptionComponent 
		{162, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/AIModule.AISense_Sight 
		{372, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  ScriptStruct /Script/AIModule.AIStimulus 
		{373, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/AIModule.BlackboardComponent 
		{374, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  BehaviorTree /Game/Mei/NPC/NPC_BT.NPC_BT 
		{270, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/AIModule.AIBlueprintHelperLibrary 
		{156, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/AIModule.AIController 
		{138, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Skeleton /Game/Mei/Mesh/Character/Mei/SK_Mei_Skeleton.SK_Mei_Skeleton 
		{142, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  ScriptStruct /Script/Engine.AnimNode_TransitionResult 
		{141, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  ScriptStruct /Script/AnimGraphRuntime.AnimNode_BlendSpacePlayer 
		{143, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.PawnMovementComponent 
		{146, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  ScriptStruct /Script/Engine.PoseLink 
		{147, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  ScriptStruct /Script/Engine.AnimNode_SaveCachedPose 
		{148, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  ScriptStruct /Script/Engine.AnimNode_UseCachedPose 
		{149, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  ScriptStruct /Script/AnimGraphRuntime.AnimNode_LayeredBoneBlend 
		{150, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  ScriptStruct /Script/AnimGraphRuntime.AnimNode_Slot 
		{151, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  ScriptStruct /Script/AnimGraphRuntime.AnimNode_StateResult 
		{152, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  ScriptStruct /Script/Engine.AnimNode_SequencePlayer 
		{153, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  ScriptStruct /Script/Engine.AnimNode_StateMachine 
		{154, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  ScriptStruct /Script/Engine.AnimNode_Root 
		{131, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  BlendSpace /Game/Mei/Anim/Mei/BS_Mei.BS_Mei 
		{132, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  AnimSequence /Game/Mei/Anim/Mei/A_WeaponHold.A_WeaponHold 
		{133, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  BlendSpace1D /Game/Mei/Anim/Mei/BS_Mei_1D.BS_Mei_1D 
		{134, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  AnimSequence /Game/Mei/Anim/Mei/A_Jump_end.A_Jump_end 
		{135, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  AnimSequence /Game/Mei/Anim/Mei/A_Jump_loop.A_Jump_loop 
		{136, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  AnimSequence /Game/Mei/Anim/Mei/A_Jump_start.A_Jump_start 
		{72, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/UMG.ProgressBar 
		{59, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/UMG.Image 
		{39, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/UMG.UserWidget 
		{181, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.GameModeBase 
		{43, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.KismetTextLibrary 
		{63, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/UMG.TextBlock 
		{62, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Font /Engine/EngineFonts/Roboto.Roboto 
		{184, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Material /Game/Mei/UI/M_Avatar.M_Avatar 
		{185, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Material /Game/Mei/UI/M_AvatarShadow.M_AvatarShadow 
		{186, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Material /Game/Mei/UI/M_StaminaBar.M_StaminaBar 
		{187, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Material /Game/Mei/UI/M_TextFont.M_TextFont 
		{188, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Texture2D /Game/Mei/UI/T_money_icon.T_money_icon 
		{66, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  ScriptStruct /Script/SlateCore.Geometry 
		{13, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.MaterialInstanceDynamic 
		{65, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/UMG.Border 
		{157, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.SpringArmComponent 
		{158, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.CameraComponent 
		{161, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/AIModule.AIPerceptionStimuliSourceComponent 
		{163, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.SceneCaptureComponent2D 
		{164, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  TextureRenderTarget2D /Game/Mei/UI/Minimap/RT_Minimap.RT_Minimap 
		{31, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/PhysicsCore.PhysicalMaterial 
		{23, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.PlayerController 
		{46, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/UMG.WidgetBlueprintLibrary 
		{176, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  AnimMontage /Game/Mei/Anim/Mei/Backflip_Montage.Backflip_Montage 
		{177, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.CapsuleComponent 
		{140, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  ScriptStruct /Script/AnimGraphRuntime.AnimNode_BlendListByBool 
		{137, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  AnimSequence /Game/Mei/Anim/Mei/A_Guard.A_Guard 
		{189, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.GameSession 
		{37, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.PlayerState 
		{55, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.HUD 
		{182, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.SpectatorPawn 
		{183, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.ServerStatReplicator 
		{255, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  AnimSequence /Game/Mei/Anim/Mei/A_Guard_WeaponDrawn_Loop.A_Guard_WeaponDrawn_Loop 
		{256, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  AnimSequence /Game/Mei/Anim/Mei/A_Idle.A_Idle 
		{257, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  StaticMesh /Engine/EngineMeshes/MaterialSphere.MaterialSphere 
		{224, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Material /Game/Mei/BP/Pickup/self/Throw/M_PredictionEnd.M_PredictionEnd 
		{44, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  DelegateFunction /Script/Engine.TimerDynamicDelegate__DelegateSignature 
		{226, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Texture2D /Game/Mei/UI/T_Target.T_Target 
		{57, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  MaterialInstanceConstant /Game/Mei/Material/BuildingSystem/Instances/Dummy/MI_Can_Build.MI_Can_Build 
		{58, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  MaterialInstanceConstant /Game/Mei/Material/BuildingSystem/Instances/Dummy/MI_CanNot_Build.MI_CanNot_Build 
		{1, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  ScriptStruct /Script/Engine.DataTableRowHandle 
		{67, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/UMG.WidgetLayoutLibrary 
		{227, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.CheatManager 
		{69, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/UMG.UMGSequencePlayer 
		{70, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/UMG.WidgetAnimation 
		{274, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Enum /Script/Engine.ETraceTypeQuery 
		{228, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.CameraModifier_CameraShake 
		{229, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  CurveFloat /Game/AdvancedLocomotionV4/Data/Curves/CameraBlendCurves/CameraLerp_1.CameraLerp_1 
		{230, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  CurveFloat /Game/AdvancedLocomotionV4/Data/Curves/CameraBlendCurves/CameraLerp_2.CameraLerp_2 
		{231, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Skeleton /Game/Mei/BP/CameraSystem/Mei_Camera_Skeleton.Mei_Camera_Skeleton 
		{232, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  ScriptStruct /Script/AnimGraphRuntime.AnimNode_BlendListByEnum 
		{233, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  ScriptStruct /Script/AnimGraphRuntime.AnimNode_ModifyCurve 
		{190, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  StaticMesh /Game/StarterContent/Shapes/Shape_Cylinder.Shape_Cylinder 
		{191, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Material /Game/Mei/BP/Pickup/self/Throw/M_PredictionPath.M_PredictionPath 
		{192, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  StaticMesh /Game/Mei/test/umbrella/SM_Umbrella.SM_Umbrella 
		{194, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  DelegateFunction /Script/AnimGraphRuntime.OnMontagePlayDelegate__DelegateSignature 
		{195, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Enum /Script/Engine.EMoveComponentAction 
		{73, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.AnimMontage 
		{196, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/AnimGraphRuntime.PlayMontageCallbackProxy 
		{50, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Niagara.NiagaraComponent 
		{19, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.SoundBase 
		{197, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Niagara.NiagaraSystem 
		{198, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Enum /Script/Engine.EMovementMode 
		{199, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.AudioComponent 
		{200, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  AnimMontage /Game/Mei/Anim/Mei/Standing_Aim_Recoil_Montage.Standing_Aim_Recoil_Montage 
		{15, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.NetPushModelHelpers 
		{201, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  AnimMontage /Game/Mei/Anim/Mei/Rolling_Montage.Rolling_Montage 
		{3, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.Texture2D 
		{202, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  AnimMontage /Game/Mei/Anim/Mei/Attack_Charge_ChargePart_Montage.Attack_Charge_ChargePart_Montage 
		{203, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  SoundWave /Game/Mei/Sound/audio/power_charge.power_charge 
		{51, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Niagara.NiagaraFunctionLibrary 
		{204, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  NiagaraSystem /Game/Mei/VFX/Charge/FX_Charge.FX_Charge 
		{205, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  AnimMontage /Game/Mei/BP/Pickup/self/Bow/Bow_Montage.Bow_Montage 
		{68, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/UMG.Widget 
		{206, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/UMG.SlateBlueprintLibrary 
		{28, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.ActorComponent 
		{207, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  NiagaraSystem /Game/Mei/VFX/Weapon/Hit/FX_HIt.FX_Hit 
		{208, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  SoundWave /Game/Mei/Sound/audio/hit_robot1.hit_robot1 
		{209, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  NiagaraSystem /Game/Mei/VFX/Shield/FX_Shield.FX_Shield 
		{210, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  AnimMontage /Game/Mei/Anim/Mei/Braced_Hang_To_Crouch_Montage.Braced_Hang_To_Crouch_Montage 
		{211, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.SplineMeshComponent 
		{53, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Enum /Script/Engine.EDrawDebugTrace 
		{212, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.MovementComponent 
		{47, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.PlayerCameraManager 
		{45, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  ScriptStruct /Script/Engine.TimerHandle 
		{213, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  AnimMontage /Game/Mei/Anim/Mei/HeavyThrust_Montage.HeavyThrust_Montage 
		{214, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  AnimMontage /Game/Mei/Anim/Mei/Attack_Charge_AttackPart_Montage.Attack_Charge_AttackPart_Montage 
		{215, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  AnimSequence /Game/Mei/Anim/Mei/A_Glide.A_Glide 
		{216, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  SkeletalMesh /Game/Mei/Mesh/Character/Mei/SK_Mei.SK_Mei 
		{217, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.ProjectileMovementComponent 
		{218, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  StaticMesh /Game/StarterContent/Props/MaterialSphere.MaterialSphere 
		{219, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Material /Game/StarterContent/Materials/M_Tech_Hex_Tile_Pulse.M_Tech_Hex_Tile_Pulse 
		{220, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  StaticMesh /Game/Mei/BP/Pickup/self/Bow/SM_Arrow.SM_Arrow 
		{221, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Texture2D /Game/Mei/UI/crosshair.crosshair 
		{222, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  SkeletalMesh /Game/Mei/BP/Pickup/self/Bow/SK_Bow.SK_Bow 
		{223, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Skeleton /Game/Mei/BP/Pickup/self/Bow/Bow_Skeleton.Bow_Skeleton 
		{234, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Enum /Script/PhysicsCore.EPhysicalSurface 
		{235, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  ScriptStruct /Script/AnimGraphRuntime.AnimNode_ModifyBone 
		{236, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  SoundCue /Game/Mei/Sound/cue/Rock_Cue.Rock_Cue 
		{237, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  SoundCue /Game/Mei/Sound/cue/Grass_Cue.Grass_Cue 
		{238, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  SoundWave /Game/Mei/Sound/cue/Dirt_01.Dirt_01 
		{239, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  ScriptStruct /Script/AnimGraphRuntime.AnimNode_TwoBoneIK 
		{240, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  ScriptStruct /Script/AnimGraphRuntime.AnimNode_SkeletalControlBase 
		{241, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  ScriptStruct /Script/AnimGraphRuntime.AnimNode_SequenceEvaluator 
		{242, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  ScriptStruct /Script/AnimGraphRuntime.AnimNode_BlendListByInt 
		{243, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  ScriptStruct /Script/KawaiiPhysics.AnimNode_KawaiiPhysics 
		{244, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  ScriptStruct /Script/Engine.AnimNode_ConvertLocalToComponentSpace 
		{245, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  ScriptStruct /Script/Engine.AnimNode_ConvertComponentToLocalSpace 
		{246, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  AnimSequence /Game/Mei/Anim/Mei/A_Throw.A_Throw 
		{247, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  AnimSequence /Game/Mei/Anim/Mei/A_Jogging.A_Jogging 
		{248, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  AnimSequence /Game/Mei/Anim/Mei/A_Braced_Hang_Shimmy_Left.A_Braced_Hang_Shimmy_Left 
		{249, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  AnimSequence /Game/Mei/Anim/Mei/A_Braced_Hang_Shimmy_Right.A_Braced_Hang_Shimmy_Right 
		{250, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  AnimSequence /Game/Mei/Anim/Mei/A_Crouch_Walk.A_Crouch_Walk 
		{251, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  AnimSequence /Game/Mei/Anim/Mei/A_Crouch_Idle.A_Crouch_Idle 
		{252, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  AnimSequence /Game/Mei/Anim/Mei/A_Sprinting.A_Sprinting 
		{253, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  AnimSequence /Game/Mei/Anim/Mei/A_Standing_Aim_Walk_Forward.A_Standing_Aim_Walk_Forward 
		{254, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  AnimSequence /Game/Mei/Anim/Mei/A_Jogging_Old.A_Jogging_Old 
		{258, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/UMG.WidgetComponent 
		{259, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  MaterialInstanceConstant /Engine/EngineMaterials/Widget3DPassThrough_Translucent.Widget3DPassThrough_Translucent 
		{260, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  MaterialInstanceConstant /Engine/EngineMaterials/Widget3DPassThrough_Translucent_OneSided.Widget3DPassThrough_Translucent_OneSided 
		{261, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  MaterialInstanceConstant /Engine/EngineMaterials/Widget3DPassThrough_Opaque.Widget3DPassThrough_Opaque 
		{262, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  MaterialInstanceConstant /Engine/EngineMaterials/Widget3DPassThrough_Opaque_OneSided.Widget3DPassThrough_Opaque_OneSided 
		{263, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  MaterialInstanceConstant /Engine/EngineMaterials/Widget3DPassThrough_Masked.Widget3DPassThrough_Masked 
		{264, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  MaterialInstanceConstant /Engine/EngineMaterials/Widget3DPassThrough_Masked_OneSided.Widget3DPassThrough_Masked_OneSided 
		{265, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Enum /Script/AIModule.EPathFollowingResult 
		{266, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  DelegateFunction /Script/AIModule.OAISimpleDelegate__DelegateSignature 
		{267, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/AIModule.AIAsyncTaskBlueprintProxy 
		{268, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  NiagaraSystem /Game/Mei/VFX/Vanish/FX_Vanish.FX_Vanish 
		{269, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/NavigationSystem.NavigationSystemV1 
		{271, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/AIModule.PawnSensingComponent 
		{272, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.GameStateBase 
		{225, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/AIModule.DetourCrowdAIController 
		{273, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  SkeletalMesh /Game/Mei/BP/CameraSystem/Mei_Camera.Mei_Camera 
		{275, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Skeleton /Game/AdvancedLocomotionV4/Blueprints/CameraSystem/Camera_Skeleton.Camera_Skeleton 
		{40, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  ScriptStruct /Script/Engine.FormatArgumentData 
		{41, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Enum /Script/Engine.EFormatArgumentType 
		{42, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Enum /Script/Engine.ETextGender 
		{32, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.KismetNodeHelperLibrary 
		{24, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.BlueprintMapLibrary 
		{61, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  DataTable /Game/Mei/BP/BuildingSystem/DataTables/DT_Mei_BuildingObjects.DT_Mei_BuildingObjects 
		{64, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Enum /Script/UMG.ESlateVisibility 
		{4, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.StaticMesh 
		{60, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/UMG.VerticalBox 
		{38, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Landscape.Landscape 
		{86, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/ApexDestruction.DestructibleComponent 
		{87, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/ApexDestruction.DestructibleActor 
		{88, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/ApexDestruction.DestructibleMesh 
		{48, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.MaterialInterface 
		{49, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.MeshComponent 
		{52, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  NiagaraSystem /Game/Mei/VFX/BuildingSystem/Dummy/Dummy.Dummy 
		{21, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.DataTable 
		{22, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.DataTableFunctionLibrary 
		{7, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  StaticMesh /Game/Mei/Mesh/BuildingSystem/Structures/Dummy/SM_Dummy_Foundation.SM_Dummy_Foundation 
		{8, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  MaterialInstanceConstant /Game/Mei/Material/BuildingSystem/Instances/Dummy/MI_Dummy_Structures_Base.MI_Dummy_Structures_Base 
		{20, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.SaveGame 
		{29, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Enum /Script/Engine.ECollisionResponse 
		{33, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Enum /Script/Engine.ECollisionChannel 
		{36, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.BlueprintFunctionLibrary 
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
		{276, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  SoundWave /Game/Mei/Sound/audio/Elven_Harmonies.Elven_Harmonies 
		{277, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  SoundWave /Game/Mei/Sound/audio/Fantasy_Adventure.Fantasy_Adventure 
		{376, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  BlueprintGeneratedClass /Game/Mei/NPC/NPC.NPC_C 
	};
	for(const FCompactBlueprintDependencyData& CompactData : LocCompactBlueprintDependencyData)
	{
		AssetsToLoad.Add(FBlueprintDependencyData(F__NativeDependencies::Get(CompactData.ObjectRefIndex), CompactData));
	}
}
PRAGMA_ENABLE_OPTIMIZATION
struct FRegisterHelper__ASpline_Pathway_C__pf1402625666
{
	FRegisterHelper__ASpline_Pathway_C__pf1402625666()
	{
		FConvertedBlueprintsDependencies::Get().RegisterConvertedClass(TEXT("/Game/Mei/NPC/Spline_Pathway"), &ASpline_Pathway_C__pf1402625666::__StaticDependenciesAssets);
	}
	static FRegisterHelper__ASpline_Pathway_C__pf1402625666 Instance;
};
FRegisterHelper__ASpline_Pathway_C__pf1402625666 FRegisterHelper__ASpline_Pathway_C__pf1402625666::Instance;
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
