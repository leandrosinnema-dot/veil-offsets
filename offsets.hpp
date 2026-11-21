#pragma once
/* =============================================================
/* getoffsets.lol
/* Roblox External Offsets
/* dumped by restinmygrave
/* -------------------------------------------------------------
/* Roblox Version : version-2c6fd5e09aaf4cfa
/* Dumped At : 16:13 21/11/2026
/* Total Offsets : 819
/* -------------------------------------------------------------
/* =============================================================
*/
#include <cstdint>
#include <string>
namespace Offsets {
inline std::string ClientVersion = "version-2c6fd5e09aaf4cfa";
namespace AirProperties {
         inline constexpr uintptr_t AirDensity = 0x18;  // kept from offsets-version-2c6fd5e09aaf4cfa.hpp - NOT re-verified by reflection
         inline constexpr uintptr_t GlobalWind = 0x3C;  // kept from offsets-version-2c6fd5e09aaf4cfa.hpp - NOT re-verified by reflection
}
namespace AnimationTrack {
         inline constexpr uintptr_t Animation = 0xA0;  // reflection (Animation min:mov)
         inline constexpr uintptr_t Animator = 0xF8;  // kept from offsets-version-2c6fd5e09aaf4cfa.hpp - NOT re-verified by reflection
         inline constexpr uintptr_t IsPlaying = 0xA40;  // kept from offsets-version-2c6fd5e09aaf4cfa.hpp - NOT re-verified by reflection
         inline constexpr uintptr_t Looped = 0xCD;  // reflection (bool movzx)
         inline constexpr uintptr_t Speed = 0xBC;  // reflection (float movss)
         inline constexpr uintptr_t TimePosition = 0xC0;  // reflection (float movss)
         inline constexpr uintptr_t VTable = 0x701B808;  // kept from offsets-version-2c6fd5e09aaf4cfa.hpp - NOT re-verified by reflection
}
namespace Animator {
         inline constexpr uintptr_t ActiveAnimations = 0x920;  // kept from offsets-version-2c6fd5e09aaf4cfa.hpp - NOT re-verified by reflection
         inline constexpr uintptr_t VTable = 0x701B300;  // kept from offsets-version-2c6fd5e09aaf4cfa.hpp - NOT re-verified by reflection
}
namespace Atmosphere {
         inline constexpr uintptr_t Color = 0xA0;  // reflection (Color3 min:lea-ret)
         inline constexpr uintptr_t Decay = 0xAC;  // reflection (Color3 min:lea-ret)
         inline constexpr uintptr_t Density = 0xB8;  // reflection (float movss)
         inline constexpr uintptr_t Glare = 0xBC;  // reflection (float movss)
         inline constexpr uintptr_t Haze = 0xC0;  // reflection (float movss)
         inline constexpr uintptr_t Offset = 0xC4;  // reflection (float movss)
         inline constexpr uintptr_t VTable = 0x70965D8;  // kept from offsets-version-2c6fd5e09aaf4cfa.hpp - NOT re-verified by reflection
}
namespace Attachment {
         inline constexpr uintptr_t Position = 0xAC;  // reflection (Vector3 min:mov)
         inline constexpr uintptr_t VTable = 0x6FA1E08;  // kept from offsets-version-2c6fd5e09aaf4cfa.hpp - NOT re-verified by reflection
}
namespace BasePart {
         inline constexpr uintptr_t CastShadow = 0x120;  // reflection (bool movzx)
         inline constexpr uintptr_t Color3 = 0x11C;  // reflection (Color3 min:movzx as BasePart.Color)
         inline constexpr uintptr_t Locked = 0x121;  // reflection (bool movzx)
         inline constexpr uintptr_t Massless = 0x122;  // reflection (bool movzx)
         inline constexpr uintptr_t Primitive = 0x178;  // measured: internals (getter chain / live structure)
         inline constexpr uintptr_t Reflectance = 0xF4;  // reflection (float movss)
         inline constexpr uintptr_t Shape = 0x1A0;  // kept from offsets-version-2c6fd5e09aaf4cfa.hpp - NOT re-verified by reflection
         inline constexpr uintptr_t Transparency = 0x118;  // reflection (float movss)
         inline constexpr uintptr_t VTable = 0x6FA0F30;  // kept from offsets-version-2c6fd5e09aaf4cfa.hpp - NOT re-verified by reflection
}
namespace Beam {
         inline constexpr uintptr_t Attachment0 = 0x148;  // reflection (Attachment weak:mov)
         inline constexpr uintptr_t Attachment1 = 0x158;  // reflection (Attachment weak:mov)
         inline constexpr uintptr_t Brightness = 0x168;  // reflection (float movss)
         inline constexpr uintptr_t CurveSize0 = 0x16C;  // reflection (float movss)
         inline constexpr uintptr_t CurveSize1 = 0x170;  // reflection (float movss)
         inline constexpr uintptr_t LightEmission = 0x174;  // reflection (float movss)
         inline constexpr uintptr_t LightInfluence = 0x178;  // reflection (float movss)
         inline constexpr uintptr_t Texture = 0x128;  // reflection (ContentId mov)
         inline constexpr uintptr_t TextureLength = 0x184;  // reflection (float movss)
         inline constexpr uintptr_t TextureSpeed = 0x18C;  // reflection (float movss)
         inline constexpr uintptr_t Width0 = 0x190;  // reflection (float movss)
         inline constexpr uintptr_t Width1 = 0x194;  // reflection (float movss)
         inline constexpr uintptr_t ZOffset = 0x198;  // reflection (float movss)
         inline constexpr uintptr_t VTable = 0x70DBEC0;  // kept from offsets-version-2c6fd5e09aaf4cfa.hpp - NOT re-verified by reflection
}
namespace BloomEffect {
         inline constexpr uintptr_t Enabled = 0x98;  // reflection (bool movzx)
         inline constexpr uintptr_t Intensity = 0xA0;  // reflection (float movss)
         inline constexpr uintptr_t Size = 0xA4;  // reflection (float movss)
         inline constexpr uintptr_t Threshold = 0xA8;  // reflection (float movss)
         inline constexpr uintptr_t VTable = 0x70602F0;  // kept from offsets-version-2c6fd5e09aaf4cfa.hpp - NOT re-verified by reflection
}
namespace BlurEffect {
         inline constexpr uintptr_t Enabled = 0x98;  // reflection (bool movzx)
         inline constexpr uintptr_t Size = 0xA0;  // reflection (float movss)
         inline constexpr uintptr_t VTable = 0x705FE20;  // kept from offsets-version-2c6fd5e09aaf4cfa.hpp - NOT re-verified by reflection
}
namespace ByteCode {
         inline constexpr uintptr_t Pointer = 0x18;  // kept from offsets-version-2c6fd5e09aaf4cfa.hpp - NOT re-verified by reflection
         inline constexpr uintptr_t Size = 0x28;  // kept from offsets-version-2c6fd5e09aaf4cfa.hpp - NOT re-verified by reflection
}
namespace CachedItem {
         inline constexpr uintptr_t FileMeshData = 0x28;  // kept from offsets-version-2c6fd5e09aaf4cfa.hpp - NOT re-verified by reflection
}
namespace Camera {
         inline constexpr uintptr_t CameraSubject = 0xB0;  // reflection (Instance min:mov)
         inline constexpr uintptr_t CameraType = 0x120;  // reflection (CameraType mov)
         inline constexpr uintptr_t FieldOfView = 0x128;  // reflection (float movss)
         inline constexpr uintptr_t ImagePlaneDepth = 0x2D4;  // kept from offsets-version-2c6fd5e09aaf4cfa.hpp - NOT re-verified by reflection
         inline constexpr uintptr_t Position = 0xE4;  // reflection (CoordinateFrame min:lea-ret as Camera.CFrame +0x24)
         inline constexpr uintptr_t Rotation = 0xC0;  // reflection (CoordinateFrame min:lea-ret as Camera.CFrame)
         inline constexpr uintptr_t Viewport = 0x284;  // kept from offsets-version-2c6fd5e09aaf4cfa.hpp - NOT re-verified by reflection
         inline constexpr uintptr_t ViewportSize = 0x2C4;  // kept from offsets-version-2c6fd5e09aaf4cfa.hpp - NOT re-verified by reflection
         inline constexpr uintptr_t VTable = 0x70A43A8;  // kept from offsets-version-2c6fd5e09aaf4cfa.hpp - NOT re-verified by reflection
}
namespace CharacterMesh {
         inline constexpr uintptr_t BaseTextureId = 0xB0;  // reflection +0x10: int64 stored as ContentId string
         inline constexpr uintptr_t BodyPart = 0x130;  // reflection (BodyPart mov)
         inline constexpr uintptr_t MeshId = 0xE0;  // reflection +0x10: int64 stored as ContentId string
         inline constexpr uintptr_t OverlayTextureId = 0x110;  // reflection +0x10: int64 stored as ContentId string
         inline constexpr uintptr_t VTable = 0x7021680;  // kept from offsets-version-2c6fd5e09aaf4cfa.hpp - NOT re-verified by reflection
}
namespace ClickDetector {
         inline constexpr uintptr_t MaxActivationDistance = 0xD0;  // reflection (float movss)
         inline constexpr uintptr_t MouseIcon = 0xB0;  // kept from offsets-version-2c6fd5e09aaf4cfa.hpp - NOT re-verified by reflection
         inline constexpr uintptr_t VTable = 0x70C20B0;  // kept from offsets-version-2c6fd5e09aaf4cfa.hpp - NOT re-verified by reflection
}
namespace Clothing {
         inline constexpr uintptr_t Color3 = 0x108;  // reflection (Color3 min:mov)
         inline constexpr uintptr_t Template = 0xE8;  // kept from offsets-version-2c6fd5e09aaf4cfa.hpp - NOT re-verified by reflection
         inline constexpr uintptr_t VTable = 0x7026D50;  // kept from offsets-version-2c6fd5e09aaf4cfa.hpp - NOT re-verified by reflection
}
namespace ColorCorrectionEffect {
         inline constexpr uintptr_t Brightness = 0xDC;  // reflection (float movss)
         inline constexpr uintptr_t Contrast = 0xE4;  // reflection (float movss)
         inline constexpr uintptr_t Enabled = 0x98;  // reflection (bool movzx)
         inline constexpr uintptr_t TintColor = 0xD0;  // reflection (Color3 min:mov)
         inline constexpr uintptr_t VTable = 0x705F6E8;  // kept from offsets-version-2c6fd5e09aaf4cfa.hpp - NOT re-verified by reflection
}
namespace ColorGradingEffect {
         inline constexpr uintptr_t Enabled = 0x98;  // reflection (bool movzx)
         inline constexpr uintptr_t TonemapperPreset = 0xA0;  // reflection (TonemapperPreset mov)
         inline constexpr uintptr_t VTable = 0x705F218;  // kept from offsets-version-2c6fd5e09aaf4cfa.hpp - NOT re-verified by reflection
}
namespace DataModel {
         inline constexpr uintptr_t CreatorId = 0x190;  // reflection (int64 mov)
         inline constexpr uintptr_t GameId = 0x198;  // reflection (int64 mov)
         inline constexpr uintptr_t GameLoaded = 0x5B8;  // kept from offsets-version-2c6fd5e09aaf4cfa.hpp - NOT re-verified by reflection
         inline constexpr uintptr_t JobId = 0x108;  // reflection (string lea-arg)
         inline constexpr uintptr_t PlaceId = 0x1A0;  // reflection (int64 mov)
         inline constexpr uintptr_t PlaceVersion = 0x1BC;  // reflection (int mov)
         inline constexpr uintptr_t PrimitiveCount = 0x430;  // kept from offsets-version-2c6fd5e09aaf4cfa.hpp - NOT re-verified by reflection
         inline constexpr uintptr_t ScriptContext = 0x440;  // kept from offsets-version-2c6fd5e09aaf4cfa.hpp - NOT re-verified by reflection
         inline constexpr uintptr_t ServerIP = 0x5A0;  // kept from offsets-version-2c6fd5e09aaf4cfa.hpp - NOT re-verified by reflection
         inline constexpr uintptr_t ToRenderView1 = 0x1D8;  // kept from offsets-version-2c6fd5e09aaf4cfa.hpp - NOT re-verified by reflection
         inline constexpr uintptr_t ToRenderView2 = 0x8;  // kept from offsets-version-2c6fd5e09aaf4cfa.hpp - NOT re-verified by reflection
         inline constexpr uintptr_t ToRenderView3 = 0x28;  // kept from offsets-version-2c6fd5e09aaf4cfa.hpp - NOT re-verified by reflection
         inline constexpr uintptr_t Workspace = 0x168;  // reflection (Workspace min:mov)
         inline constexpr uintptr_t VTable = 0x7114DD8;  // kept from offsets-version-2c6fd5e09aaf4cfa.hpp - NOT re-verified by reflection
}
namespace DepthOfFieldEffect {
         inline constexpr uintptr_t Enabled = 0x98;  // reflection (bool movzx)
         inline constexpr uintptr_t FarIntensity = 0xA0;  // reflection (float movss)
         inline constexpr uintptr_t FocusDistance = 0xA4;  // reflection (float movss)
         inline constexpr uintptr_t InFocusRadius = 0xA8;  // reflection (float movss)
         inline constexpr uintptr_t NearIntensity = 0xAC;  // reflection (float movss)
         inline constexpr uintptr_t VTable = 0x705EFB0;  // kept from offsets-version-2c6fd5e09aaf4cfa.hpp - NOT re-verified by reflection
}
namespace DragDetector {
         inline constexpr uintptr_t ActivatedCursorIcon = 0x188;  // kept from offsets-version-2c6fd5e09aaf4cfa.hpp - NOT re-verified by reflection
         inline constexpr uintptr_t CursorIcon = 0xB0;  // reflection (ContentId lea-arg)
         inline constexpr uintptr_t MaxActivationDistance = 0xD0;  // reflection (float movss)
         inline constexpr uintptr_t MaxDragAngle = 0x270;  // kept from offsets-version-2c6fd5e09aaf4cfa.hpp - NOT re-verified by reflection
         inline constexpr uintptr_t MaxDragTranslation = 0x234;  // kept from offsets-version-2c6fd5e09aaf4cfa.hpp - NOT re-verified by reflection
         inline constexpr uintptr_t MaxForce = 0x274;  // kept from offsets-version-2c6fd5e09aaf4cfa.hpp - NOT re-verified by reflection
         inline constexpr uintptr_t MaxTorque = 0x278;  // kept from offsets-version-2c6fd5e09aaf4cfa.hpp - NOT re-verified by reflection
         inline constexpr uintptr_t MinDragAngle = 0x27C;  // kept from offsets-version-2c6fd5e09aaf4cfa.hpp - NOT re-verified by reflection
         inline constexpr uintptr_t MinDragTranslation = 0x240;  // kept from offsets-version-2c6fd5e09aaf4cfa.hpp - NOT re-verified by reflection
         inline constexpr uintptr_t ReferenceInstance = 0x1B8;  // kept from offsets-version-2c6fd5e09aaf4cfa.hpp - NOT re-verified by reflection
         inline constexpr uintptr_t Responsiveness = 0x288;  // kept from offsets-version-2c6fd5e09aaf4cfa.hpp - NOT re-verified by reflection
         inline constexpr uintptr_t VTable = 0x71397C8;  // kept from offsets-version-2c6fd5e09aaf4cfa.hpp - NOT re-verified by reflection
}
namespace FakeDataModel {
         inline constexpr uintptr_t Pointer = 0x8E16368;  // measured: global_finder (RTTI + live scan)
         inline constexpr uintptr_t RealDataModel = 0x1F8;  // measured: global_finder (RTTI + live scan)
}
namespace FastClusterEntity {
         inline constexpr uintptr_t VTableRva = 0x70B42E0;  // kept from offsets-version-2c6fd5e09aaf4cfa.hpp - NOT re-verified by reflection
         inline constexpr uintptr_t ContextPtr = 0x8;  // kept from offsets-version-2c6fd5e09aaf4cfa.hpp - NOT re-verified by reflection
         inline constexpr uintptr_t RenderQueueId = 0x10;  // kept from offsets-version-2c6fd5e09aaf4cfa.hpp - NOT re-verified by reflection
         inline constexpr uintptr_t AlphaByte = 0x14;  // kept from offsets-version-2c6fd5e09aaf4cfa.hpp - NOT re-verified by reflection
         inline constexpr uintptr_t MaterialPtr = 0x20;  // kept from offsets-version-2c6fd5e09aaf4cfa.hpp - NOT re-verified by reflection
         inline constexpr uintptr_t DecalMaterialPtr = 0x48;  // kept from offsets-version-2c6fd5e09aaf4cfa.hpp - NOT re-verified by reflection
         inline constexpr uintptr_t TechniqueArrayPtr = 0x70;  // kept from offsets-version-2c6fd5e09aaf4cfa.hpp - NOT re-verified by reflection
         inline constexpr uintptr_t PrimitiveIndexArrayPtr = 0x80;  // kept from offsets-version-2c6fd5e09aaf4cfa.hpp - NOT re-verified by reflection
         inline constexpr uintptr_t BBoxMinX = 0x98;  // kept from offsets-version-2c6fd5e09aaf4cfa.hpp - NOT re-verified by reflection
         inline constexpr uintptr_t BBoxMinY = 0x9C;  // kept from offsets-version-2c6fd5e09aaf4cfa.hpp - NOT re-verified by reflection
         inline constexpr uintptr_t BBoxMinZ = 0xA0;  // kept from offsets-version-2c6fd5e09aaf4cfa.hpp - NOT re-verified by reflection
         inline constexpr uintptr_t BBoxMaxX = 0xA4;  // kept from offsets-version-2c6fd5e09aaf4cfa.hpp - NOT re-verified by reflection
         inline constexpr uintptr_t BBoxMaxY = 0xA8;  // kept from offsets-version-2c6fd5e09aaf4cfa.hpp - NOT re-verified by reflection
         inline constexpr uintptr_t BBoxMaxZ = 0xAC;  // kept from offsets-version-2c6fd5e09aaf4cfa.hpp - NOT re-verified by reflection
}
namespace FastClusterEntity {
         inline constexpr uintptr_t VTableRva = 0x70B42E0;
         inline constexpr uintptr_t ContextPtr = 0x8;
         inline constexpr uintptr_t RenderQueueId = 0x10;
         inline constexpr uintptr_t AlphaByte = 0x14;
         inline constexpr uintptr_t MaterialPtr = 0x20;
         inline constexpr uintptr_t DecalMaterialPtr = 0x48;
         inline constexpr uintptr_t TechniqueArrayPtr = 0x70;
         inline constexpr uintptr_t PrimitiveIndexArrayPtr = 0x80;
         inline constexpr uintptr_t BBoxMinX = 0x98;
         inline constexpr uintptr_t BBoxMinY = 0x9C;
         inline constexpr uintptr_t BBoxMinZ = 0xA0;
         inline constexpr uintptr_t BBoxMaxX = 0xA4;
         inline constexpr uintptr_t BBoxMaxY = 0xA8;
         inline constexpr uintptr_t BBoxMaxZ = 0xAC;
}
namespace FileMeshData {
         inline constexpr uintptr_t AABBMax = 0x18C;  // kept from offsets-version-2c6fd5e09aaf4cfa.hpp - NOT re-verified by reflection
         inline constexpr uintptr_t AABBMin = 0x180;  // kept from offsets-version-2c6fd5e09aaf4cfa.hpp - NOT re-verified by reflection
         inline constexpr uintptr_t Faces = 0x30;  // kept from offsets-version-2c6fd5e09aaf4cfa.hpp - NOT re-verified by reflection
         inline constexpr uintptr_t FacesEnd = 0x38;  // kept from offsets-version-2c6fd5e09aaf4cfa.hpp - NOT re-verified by reflection
         inline constexpr uintptr_t Vertices = 0x0;  // kept from offsets-version-2c6fd5e09aaf4cfa.hpp - NOT re-verified by reflection
         inline constexpr uintptr_t VerticesEnd = 0x8;  // kept from offsets-version-2c6fd5e09aaf4cfa.hpp - NOT re-verified by reflection
}
namespace GuiBase2D {
         inline constexpr uintptr_t AbsolutePosition = 0xF4;  // reflection (Vector2 min:movsd)
         inline constexpr uintptr_t AbsoluteRotation = 0xD0;  // reflection (float movss)
         inline constexpr uintptr_t AbsoluteSize = 0xFC;  // reflection (Vector2 min:call>movsd)
}
namespace GuiObject {
         inline constexpr uintptr_t BackgroundColor3 = 0x2D8;  // reflection (Color3 min:movss)
         inline constexpr uintptr_t BackgroundTransparency = 0x2FC;  // reflection (float movss)
         inline constexpr uintptr_t BorderColor3 = 0x2E4;  // reflection (Color3 min:movss)
         inline constexpr uintptr_t Image = 0x670;  // kept from offsets-version-2c6fd5e09aaf4cfa.hpp - NOT re-verified by reflection
         inline constexpr uintptr_t LayoutOrder = 0x314;  // reflection (int mov)
         inline constexpr uintptr_t Position = 0x2A8;  // reflection (UDim2 min:movups)
         inline constexpr uintptr_t RichText = 0x7C8;  // kept from offsets-version-2c6fd5e09aaf4cfa.hpp - NOT re-verified by reflection
         inline constexpr uintptr_t Rotation = 0x32C;  // reflection (float movss)
         inline constexpr uintptr_t ScreenGui_Enabled = 0x40D;  // kept from offsets-version-2c6fd5e09aaf4cfa.hpp - NOT re-verified by reflection
         inline constexpr uintptr_t Size = 0x2C8;  // reflection (UDim2 min:movups)
         inline constexpr uintptr_t Text = 0xA30;  // kept from offsets-version-2c6fd5e09aaf4cfa.hpp - NOT re-verified by reflection
         inline constexpr uintptr_t TextColor3 = 0xAE0;  // kept from offsets-version-2c6fd5e09aaf4cfa.hpp - NOT re-verified by reflection
         inline constexpr uintptr_t Visible = 0x345;  // reflection (bool movzx)
         inline constexpr uintptr_t ZIndex = 0x33C;  // reflection (int mov)
         inline constexpr uintptr_t VTable = 0x70FA0F0;  // kept from offsets-version-2c6fd5e09aaf4cfa.hpp - NOT re-verified by reflection
}
namespace HandleAdornment {
         inline constexpr uintptr_t CFrame = 0x100;  // reflection (CoordinateFrame min:movups)
}
namespace Humanoid {
         inline constexpr uintptr_t AutoJumpEnabled = 0x1CC;  // reflection (bool movzx)
         inline constexpr uintptr_t AutoRotate = 0x1CD;  // reflection (bool movzx)
         inline constexpr uintptr_t AutomaticScalingEnabled = 0x1CE;  // reflection (bool movzx)
         inline constexpr uintptr_t BreakJointsOnDeath = 0x1D0;  // reflection (bool movzx)
         inline constexpr uintptr_t CameraOffset = 0x110;  // reflection (Vector3 min:lea-ret)
         inline constexpr uintptr_t DisplayDistanceType = 0x174;  // reflection (HumanoidDisplayDistanceType mov)
         inline constexpr uintptr_t DisplayName = 0xA0;  // reflection (string lea-arg)
         inline constexpr uintptr_t EvaluateStateMachine = 0x1D1;  // reflection (bool movzx)
         inline constexpr uintptr_t FloorMaterial = 0x178;  // kept from offsets-version-2c6fd5e09aaf4cfa.hpp - NOT re-verified by reflection
         inline constexpr uintptr_t Health = 0x184;  // reflection (float movss)
         inline constexpr uintptr_t HealthDisplayDistance = 0x17C;  // reflection (float movss)
         inline constexpr uintptr_t HealthDisplayType = 0x180;  // reflection (HumanoidHealthDisplayType mov)
         inline constexpr uintptr_t HipHeight = 0x188;  // reflection (float movss)
         inline constexpr uintptr_t HumanoidRootPart = 0x460;  // kept from offsets-version-2c6fd5e09aaf4cfa.hpp - NOT re-verified by reflection
         inline constexpr uintptr_t HumanoidState = 0x8A8;  // measured: internals (getter chain / live structure)
         inline constexpr uintptr_t HumanoidStateID = 0x20;  // kept from offsets-version-2c6fd5e09aaf4cfa.hpp - NOT re-verified by reflection
         inline constexpr uintptr_t IsWalking = 0xA3E;  // kept from offsets-version-2c6fd5e09aaf4cfa.hpp - NOT re-verified by reflection
         inline constexpr uintptr_t Jump = 0x1D4;  // reflection (bool movzx)
         inline constexpr uintptr_t JumpHeight = 0x198;  // reflection (float movss)
         inline constexpr uintptr_t JumpPower = 0x19C;  // reflection (float movss)
         inline constexpr uintptr_t MaxHealth = 0x1A0;  // reflection (float movss)
         inline constexpr uintptr_t MaxSlopeAngle = 0x1A4;  // reflection (float movss)
         inline constexpr uintptr_t MoveDirection = 0x134;  // reflection (Vector3 min:lea-ret)
         inline constexpr uintptr_t MoveToPart = 0x100;  // kept from offsets-version-2c6fd5e09aaf4cfa.hpp - NOT re-verified by reflection
         inline constexpr uintptr_t MoveToPoint = 0x158;  // reflection (Vector3 min:lea-ret as Humanoid.WalkToPoint)
         inline constexpr uintptr_t NameDisplayDistance = 0x1A8;  // reflection (float movss)
         inline constexpr uintptr_t NameOcclusion = 0x1AC;  // reflection (NameOcclusion mov)
         inline constexpr uintptr_t PlatformStand = 0x1D5;  // reflection (bool movzx)
         inline constexpr uintptr_t PlatformStatePointer = 0x8A8;  // kept from offsets-version-2c6fd5e09aaf4cfa.hpp - NOT re-verified by reflection
         inline constexpr uintptr_t RequiresNeck = 0x1D6;  // reflection (bool movzx)
         inline constexpr uintptr_t RigType = 0x1B8;  // reflection (HumanoidRigType mov)
         inline constexpr uintptr_t SeatPart = 0xF0;  // reflection (BasePart min:mov)
         inline constexpr uintptr_t Sit = 0x1D7;  // reflection (bool movzx)
         inline constexpr uintptr_t TargetPoint = 0x140;  // reflection (Vector3 min:lea-ret)
         inline constexpr uintptr_t UseJumpPower = 0x1D9;  // reflection (bool movzx)
         inline constexpr uintptr_t WalkTimer = 0x3F0;  // carried over from offsets-version-4ea8e85481e34f46.hpp - NOT re-verified for this build
         inline constexpr uintptr_t Walkspeed = 0x1C8;  // reflection (float movss)
         inline constexpr uintptr_t WalkspeedCheck = 0x39C;  // kept from offsets-version-2c6fd5e09aaf4cfa.hpp - NOT re-verified by reflection
         inline constexpr uintptr_t VTable = 0x701EA70;  // kept from offsets-version-2c6fd5e09aaf4cfa.hpp - NOT re-verified by reflection
}
namespace Instance {
         inline constexpr uintptr_t ChildrenEnd = 0x8;  // measured: internals (getter chain / live structure)
         inline constexpr uintptr_t ChildrenStart = 0x70;  // measured: internals (getter chain / live structure)
         inline constexpr uintptr_t ClassBase = 0x1B8;  // kept from offsets-version-2c6fd5e09aaf4cfa.hpp - NOT re-verified by reflection
         inline constexpr uintptr_t ClassDescriptor = 0x18;  // measured: internals (getter chain / live structure)
         inline constexpr uintptr_t ClassName = 0x8;  // measured: internals (getter chain / live structure)
         inline constexpr uintptr_t Name = 0x0;  // measured: internals (getter chain / live structure)
         inline constexpr uintptr_t NameContainer = 0x68;  // measured: internals (getter chain / live structure)
         inline constexpr uintptr_t Parent = 0x60;  // reflection (Instance min:mov)
         inline constexpr uintptr_t This = 0x8;  // kept from offsets-version-2c6fd5e09aaf4cfa.hpp - NOT re-verified by reflection
         inline constexpr uintptr_t VTable = 0x70372F8;  // kept from offsets-version-2c6fd5e09aaf4cfa.hpp - NOT re-verified by reflection
}
namespace JointInstance {
         inline constexpr uintptr_t Part0 = 0x100;  // reflection (BasePart weak:mov)
         inline constexpr uintptr_t Part1 = 0x110;  // reflection (BasePart weak:mov)
}
namespace Lighting {
         inline constexpr uintptr_t Ambient = 0xB8;  // reflection (Color3 min:mov)
         inline constexpr uintptr_t Brightness = 0x100;  // reflection (float movss)
         inline constexpr uintptr_t ClockTime = 0xB0;  // reflection (float imul)
         inline constexpr uintptr_t ColorShift_Bottom = 0xC4;  // reflection (Color3 min:mov)
         inline constexpr uintptr_t ColorShift_Top = 0xD0;  // reflection (Color3 min:mov)
         inline constexpr uintptr_t EnvironmentDiffuseScale = 0x104;  // reflection (float movss)
         inline constexpr uintptr_t EnvironmentSpecularScale = 0x108;  // reflection (float movss)
         inline constexpr uintptr_t ExposureCompensation = 0x10C;  // reflection (float movss)
         inline constexpr uintptr_t FogColor = 0xDC;  // reflection (Color3 min:mov)
         inline constexpr uintptr_t FogEnd = 0x114;  // reflection (float movss)
         inline constexpr uintptr_t FogStart = 0x118;  // reflection (float movss)
         inline constexpr uintptr_t GeographicLatitude = 0x11C;  // reflection (float movss)
         inline constexpr uintptr_t GlobalShadows = 0x130;  // reflection (bool movzx)
         inline constexpr uintptr_t GradientBottom = 0x180;  // kept from offsets-version-2c6fd5e09aaf4cfa.hpp - NOT re-verified by reflection
         inline constexpr uintptr_t GradientTop = 0x140;  // kept from offsets-version-2c6fd5e09aaf4cfa.hpp - NOT re-verified by reflection
         inline constexpr uintptr_t LightColor = 0x14C;  // kept from offsets-version-2c6fd5e09aaf4cfa.hpp - NOT re-verified by reflection
         inline constexpr uintptr_t LightDirection = 0x158;  // kept from offsets-version-2c6fd5e09aaf4cfa.hpp - NOT re-verified by reflection
         inline constexpr uintptr_t MoonPosition = 0x174;  // kept from offsets-version-2c6fd5e09aaf4cfa.hpp - NOT re-verified by reflection
         inline constexpr uintptr_t OutdoorAmbient = 0xE8;  // reflection (Color3 min:mov)
         inline constexpr uintptr_t Sky = 0x1B8;  // kept from offsets-version-2c6fd5e09aaf4cfa.hpp - NOT re-verified by reflection
         inline constexpr uintptr_t Source = 0x164;  // kept from offsets-version-2c6fd5e09aaf4cfa.hpp - NOT re-verified by reflection
         inline constexpr uintptr_t SunPosition = 0x168;  // kept from offsets-version-2c6fd5e09aaf4cfa.hpp - NOT re-verified by reflection
         inline constexpr uintptr_t VTable = 0x70866C0;  // kept from offsets-version-2c6fd5e09aaf4cfa.hpp - NOT re-verified by reflection
}
namespace LocalScript {
         inline constexpr uintptr_t ByteCode = 0x178;  // carried over from offsets-version-4ea8e85481e34f46.hpp - NOT re-verified for this build
         inline constexpr uintptr_t GUID = 0xB8;  // kept from offsets-version-2c6fd5e09aaf4cfa.hpp - NOT re-verified by reflection
         inline constexpr uintptr_t Hash = 0x188;  // kept from offsets-version-2c6fd5e09aaf4cfa.hpp - NOT re-verified by reflection
         inline constexpr uintptr_t VTable = 0x711CD80;  // kept from offsets-version-2c6fd5e09aaf4cfa.hpp - NOT re-verified by reflection
}
namespace LRUHolder {
         inline constexpr uintptr_t MemEnforcedLRUCache = 0x20;  // kept from offsets-version-2c6fd5e09aaf4cfa.hpp - NOT re-verified by reflection
}
namespace LRUNode {
         inline constexpr uintptr_t AssetID = 0x10;  // kept from offsets-version-2c6fd5e09aaf4cfa.hpp - NOT re-verified by reflection
         inline constexpr uintptr_t CachedItem = 0x38;  // kept from offsets-version-2c6fd5e09aaf4cfa.hpp - NOT re-verified by reflection
         inline constexpr uintptr_t Next = 0x0;  // kept from offsets-version-2c6fd5e09aaf4cfa.hpp - NOT re-verified by reflection
}
namespace MaterialColors {
         inline constexpr uintptr_t Asphalt = 0x30;  // kept from offsets-version-2c6fd5e09aaf4cfa.hpp - NOT re-verified by reflection
         inline constexpr uintptr_t Basalt = 0x27;  // kept from offsets-version-2c6fd5e09aaf4cfa.hpp - NOT re-verified by reflection
         inline constexpr uintptr_t Brick = 0xF;  // kept from offsets-version-2c6fd5e09aaf4cfa.hpp - NOT re-verified by reflection
         inline constexpr uintptr_t Cobblestone = 0x33;  // kept from offsets-version-2c6fd5e09aaf4cfa.hpp - NOT re-verified by reflection
         inline constexpr uintptr_t Concrete = 0xC;  // kept from offsets-version-2c6fd5e09aaf4cfa.hpp - NOT re-verified by reflection
         inline constexpr uintptr_t CrackedLava = 0x2D;  // kept from offsets-version-2c6fd5e09aaf4cfa.hpp - NOT re-verified by reflection
         inline constexpr uintptr_t Glacier = 0x1B;  // kept from offsets-version-2c6fd5e09aaf4cfa.hpp - NOT re-verified by reflection
         inline constexpr uintptr_t Grass = 0x6;  // kept from offsets-version-2c6fd5e09aaf4cfa.hpp - NOT re-verified by reflection
         inline constexpr uintptr_t Ground = 0x2A;  // kept from offsets-version-2c6fd5e09aaf4cfa.hpp - NOT re-verified by reflection
         inline constexpr uintptr_t Ice = 0x36;  // kept from offsets-version-2c6fd5e09aaf4cfa.hpp - NOT re-verified by reflection
         inline constexpr uintptr_t LeafyGrass = 0x39;  // kept from offsets-version-2c6fd5e09aaf4cfa.hpp - NOT re-verified by reflection
         inline constexpr uintptr_t Limestone = 0x3F;  // kept from offsets-version-2c6fd5e09aaf4cfa.hpp - NOT re-verified by reflection
         inline constexpr uintptr_t Mud = 0x24;  // kept from offsets-version-2c6fd5e09aaf4cfa.hpp - NOT re-verified by reflection
         inline constexpr uintptr_t Pavement = 0x42;  // kept from offsets-version-2c6fd5e09aaf4cfa.hpp - NOT re-verified by reflection
         inline constexpr uintptr_t Rock = 0x18;  // kept from offsets-version-2c6fd5e09aaf4cfa.hpp - NOT re-verified by reflection
         inline constexpr uintptr_t Salt = 0x3C;  // kept from offsets-version-2c6fd5e09aaf4cfa.hpp - NOT re-verified by reflection
         inline constexpr uintptr_t Sand = 0x12;  // kept from offsets-version-2c6fd5e09aaf4cfa.hpp - NOT re-verified by reflection
         inline constexpr uintptr_t Sandstone = 0x21;  // kept from offsets-version-2c6fd5e09aaf4cfa.hpp - NOT re-verified by reflection
         inline constexpr uintptr_t Slate = 0x9;  // kept from offsets-version-2c6fd5e09aaf4cfa.hpp - NOT re-verified by reflection
         inline constexpr uintptr_t Snow = 0x1E;  // kept from offsets-version-2c6fd5e09aaf4cfa.hpp - NOT re-verified by reflection
         inline constexpr uintptr_t WoodPlanks = 0x15;  // kept from offsets-version-2c6fd5e09aaf4cfa.hpp - NOT re-verified by reflection
}
namespace MaterialLayer {
         inline constexpr uintptr_t Stride = 0x88;  // kept from offsets-version-2c6fd5e09aaf4cfa.hpp - NOT re-verified by reflection
         inline constexpr uintptr_t FillModeByte = 0x11;  // kept from offsets-version-2c6fd5e09aaf4cfa.hpp - NOT re-verified by reflection
         inline constexpr uintptr_t MatFlags = 0x18;  // kept from offsets-version-2c6fd5e09aaf4cfa.hpp - NOT re-verified by reflection
         inline constexpr uintptr_t Param = 0x1C;  // kept from offsets-version-2c6fd5e09aaf4cfa.hpp - NOT re-verified by reflection
         inline constexpr uintptr_t Flags2 = 0x20;  // kept from offsets-version-2c6fd5e09aaf4cfa.hpp - NOT re-verified by reflection
         inline constexpr uintptr_t ColorData = 0x24;  // kept from offsets-version-2c6fd5e09aaf4cfa.hpp - NOT re-verified by reflection
}
namespace MaterialLayer {
         inline constexpr uintptr_t Stride = 0x88;
         inline constexpr uintptr_t FillModeByte = 0x11;
         inline constexpr uintptr_t MatFlags = 0x18;
         inline constexpr uintptr_t Param = 0x1C;
         inline constexpr uintptr_t Flags2 = 0x20;
         inline constexpr uintptr_t ColorData = 0x24;
}
namespace MemEnforcedLRUCache {
         inline constexpr uintptr_t Head = 0x8;  // kept from offsets-version-2c6fd5e09aaf4cfa.hpp - NOT re-verified by reflection
}
namespace MeshContentProvider {
         inline constexpr uintptr_t LRUHolder = 0xC0;  // kept from offsets-version-2c6fd5e09aaf4cfa.hpp - NOT re-verified by reflection
         inline constexpr uintptr_t VTable = 0x6FF1640;  // kept from offsets-version-2c6fd5e09aaf4cfa.hpp - NOT re-verified by reflection
}
namespace MeshPart {
         inline constexpr uintptr_t MeshId = 0x2F8;  // reflection (ContentId lea-arg)
         inline constexpr uintptr_t MeshSize = 0x210;  // reflection (Vector3 min:mov)
         inline constexpr uintptr_t Texture = 0x328;  // reflection (ContentId lea-arg as MeshPart.TextureID)
         inline constexpr uintptr_t VTable = 0x6F92290;  // kept from offsets-version-2c6fd5e09aaf4cfa.hpp - NOT re-verified by reflection
}
namespace Misc {
         inline constexpr uintptr_t Adornee = 0xD8;  // kept from offsets-version-2c6fd5e09aaf4cfa.hpp - NOT re-verified by reflection
         inline constexpr uintptr_t AnimationId = 0xA8;  // kept from offsets-version-2c6fd5e09aaf4cfa.hpp - NOT re-verified by reflection
         inline constexpr uintptr_t StringLength = 0x10;  // kept from offsets-version-2c6fd5e09aaf4cfa.hpp - NOT re-verified by reflection
         inline constexpr uintptr_t Value = 0xA0;  // kept from offsets-version-2c6fd5e09aaf4cfa.hpp - NOT re-verified by reflection
}
namespace Model {
         inline constexpr uintptr_t PrimaryPart = 0x240;  // reflection (BasePart weak:mov)
         inline constexpr uintptr_t Scale = 0x12C;  // reflection (float movss)
}
namespace ModuleScript {
         inline constexpr uintptr_t ByteCode = 0x120;  // carried over from offsets-version-4ea8e85481e34f46.hpp - NOT re-verified for this build
         inline constexpr uintptr_t GUID = 0xB8;  // kept from offsets-version-2c6fd5e09aaf4cfa.hpp - NOT re-verified by reflection
         inline constexpr uintptr_t Hash = 0x348;  // carried over from offsets-version-4ea8e85481e34f46.hpp - NOT re-verified for this build
         inline constexpr uintptr_t IsCoreScript = 0x0;  // kept from offsets-version-2c6fd5e09aaf4cfa.hpp - NOT re-verified by reflection
         inline constexpr uintptr_t VTable = 0x711BDE8;  // kept from offsets-version-2c6fd5e09aaf4cfa.hpp - NOT re-verified by reflection
}
namespace MouseService {
         inline constexpr uintptr_t InputObject = 0xE8;  // kept from offsets-version-2c6fd5e09aaf4cfa.hpp - NOT re-verified by reflection
         inline constexpr uintptr_t InputObject2 = 0xF8;  // kept from offsets-version-2c6fd5e09aaf4cfa.hpp - NOT re-verified by reflection
         inline constexpr uintptr_t MousePosition = 0xBC;  // kept from offsets-version-2c6fd5e09aaf4cfa.hpp - NOT re-verified by reflection
         inline constexpr uintptr_t SensitivityPointer = 0x0;  // kept from offsets-version-2c6fd5e09aaf4cfa.hpp - NOT re-verified by reflection
         inline constexpr uintptr_t VTable = 0x70C0BC0;  // kept from offsets-version-2c6fd5e09aaf4cfa.hpp - NOT re-verified by reflection
}
namespace ParticleEmitter {
         inline constexpr uintptr_t Acceleration = 0x1C8;  // reflection (Vector3 min:lea-ret)
         inline constexpr uintptr_t Brightness = 0x204;  // reflection (float movss)
         inline constexpr uintptr_t Drag = 0x208;  // reflection (float movss)
         inline constexpr uintptr_t Lifetime = 0x1DC;  // reflection (NumberRange min:lea-ret)
         inline constexpr uintptr_t LightEmission = 0x220;  // reflection (float movss)
         inline constexpr uintptr_t LightInfluence = 0x224;  // reflection (float movss)
         inline constexpr uintptr_t Rate = 0x230;  // reflection (float movss)
         inline constexpr uintptr_t RotSpeed = 0x1E4;  // reflection (NumberRange min:lea-ret)
         inline constexpr uintptr_t Rotation = 0x1EC;  // reflection (NumberRange min:lea-ret)
         inline constexpr uintptr_t Speed = 0x1F4;  // reflection (NumberRange min:lea-ret)
         inline constexpr uintptr_t SpreadAngle = 0x1FC;  // reflection (Vector2 min:movsd)
         inline constexpr uintptr_t Texture = 0x1A8;  // kept from offsets-version-2c6fd5e09aaf4cfa.hpp - NOT re-verified by reflection
         inline constexpr uintptr_t TimeScale = 0x244;  // reflection (float movss)
         inline constexpr uintptr_t VelocityInheritance = 0x248;  // reflection (float movss)
         inline constexpr uintptr_t ZOffset = 0x24C;  // reflection (float movss)
         inline constexpr uintptr_t VTable = 0x70B3EC8;  // kept from offsets-version-2c6fd5e09aaf4cfa.hpp - NOT re-verified by reflection
}
namespace Player {
         inline constexpr uintptr_t AccountAge = 0x364;  // reflection (int mov)
         inline constexpr uintptr_t CameraMode = 0x378;  // reflection (CameraMode mov)
         inline constexpr uintptr_t DisplayName = 0x120;  // reflection (string lea-arg)
         inline constexpr uintptr_t HealthDisplayDistance = 0x3A0;  // reflection (float movss)
         inline constexpr uintptr_t LocalPlayer = 0x118;  // reflection (Player min:mov as Players.LocalPlayer)
         inline constexpr uintptr_t LocaleId = 0x760;  // reflection (string mov)
         inline constexpr uintptr_t MaxZoomDistance = 0x370;  // kept from offsets-version-2c6fd5e09aaf4cfa.hpp - NOT re-verified by reflection
         inline constexpr uintptr_t MinZoomDistance = 0x374;  // kept from offsets-version-2c6fd5e09aaf4cfa.hpp - NOT re-verified by reflection
         inline constexpr uintptr_t ModelInstance = 0x2A0;  // reflection (Model weak:mov as Player.Character)
         inline constexpr uintptr_t Mouse = 0x1278;  // kept from offsets-version-2c6fd5e09aaf4cfa.hpp - NOT re-verified by reflection
         inline constexpr uintptr_t NameDisplayDistance = 0x3B0;  // reflection (float movss)
         inline constexpr uintptr_t Team = 0x2E0;  // kept from offsets-version-2c6fd5e09aaf4cfa.hpp - NOT re-verified by reflection
         inline constexpr uintptr_t TeamColor = 0x3B8;  // reflection (BrickColor mov)
         inline constexpr uintptr_t UserId = 0x318;  // reflection (int64 mov)
         inline constexpr uintptr_t VTable = 0x70E3F08;  // kept from offsets-version-2c6fd5e09aaf4cfa.hpp - NOT re-verified by reflection
}
namespace PlayerConfigurer {
         inline constexpr uintptr_t Pointer = 0x0;  // kept from offsets-version-2c6fd5e09aaf4cfa.hpp - NOT re-verified by reflection
         inline constexpr uintptr_t VTable = 0x713A270;  // kept from offsets-version-2c6fd5e09aaf4cfa.hpp - NOT re-verified by reflection
}
namespace PlayerMouse {
         inline constexpr uintptr_t Icon = 0xB0;  // reflection (ContentId call>mov)
         inline constexpr uintptr_t Workspace = 0x138;  // kept from offsets-version-2c6fd5e09aaf4cfa.hpp - NOT re-verified by reflection
         inline constexpr uintptr_t VTable = 0x70E4848;  // kept from offsets-version-2c6fd5e09aaf4cfa.hpp - NOT re-verified by reflection
}
namespace Primitive {
         inline constexpr uintptr_t AssemblyAngularVelocity = 0xEC;  // measured: internals (getter chain / live structure)
         inline constexpr uintptr_t AssemblyLinearVelocity = 0xE0;  // measured: internals (getter chain / live structure)
         inline constexpr uintptr_t Flags = 0x1BE;  // measured: internals (getter chain / live structure)
         inline constexpr uintptr_t Material = 0x256;  // measured: internals (getter chain / live structure)
         inline constexpr uintptr_t Owner = 0x220;  // measured: internals (getter chain / live structure)
         inline constexpr uintptr_t Position = 0xD4;  // measured: internals (getter chain / live structure)
         inline constexpr uintptr_t Rotation = 0xB0;  // measured: internals (getter chain / live structure)
         inline constexpr uintptr_t Size = 0x1C4;  // measured: internals (getter chain / live structure)
         inline constexpr uintptr_t Validate = 0x6;  // kept from offsets-version-2c6fd5e09aaf4cfa.hpp - NOT re-verified by reflection
         inline constexpr uintptr_t VTable = 0x70085A0;  // kept from offsets-version-2c6fd5e09aaf4cfa.hpp - NOT re-verified by reflection
}
namespace PrimitiveFlags {
         inline constexpr uintptr_t Anchored = 0x2;  // measured: internals (getter chain / live structure)
         inline constexpr uintptr_t CanCollide = 0x8;  // measured: internals (getter chain / live structure)
         inline constexpr uintptr_t CanQuery = 0x20;  // measured: internals (getter chain / live structure)
         inline constexpr uintptr_t CanTouch = 0x10;  // measured: internals (getter chain / live structure)
}
namespace ProximityPrompt {
         inline constexpr uintptr_t ActionText = 0x98;  // kept from offsets-version-2c6fd5e09aaf4cfa.hpp - NOT re-verified by reflection
         inline constexpr uintptr_t Enabled = 0x11E;  // reflection (bool movzx)
         inline constexpr uintptr_t GamepadKeyCode = 0x104;  // reflection (KeyCode mov)
         inline constexpr uintptr_t HoldDuration = 0x108;  // reflection (float movss)
         inline constexpr uintptr_t KeyCode = 0x10C;  // kept from offsets-version-2c6fd5e09aaf4cfa.hpp - NOT re-verified by reflection
         inline constexpr uintptr_t MaxActivationDistance = 0x110;  // reflection (float movss)
         inline constexpr uintptr_t ObjectText = 0xB8;  // reflection (string lea-arg)
         inline constexpr uintptr_t RequiresLineOfSight = 0x11F;  // reflection (bool movzx)
         inline constexpr uintptr_t VTable = 0x707D138;  // kept from offsets-version-2c6fd5e09aaf4cfa.hpp - NOT re-verified by reflection
}
namespace RenderJob {
         inline constexpr uintptr_t FakeDataModel = 0x38;  // kept from offsets-version-2c6fd5e09aaf4cfa.hpp - NOT re-verified by reflection
         inline constexpr uintptr_t RealDataModel = 0x1F0;  // kept from offsets-version-2c6fd5e09aaf4cfa.hpp - NOT re-verified by reflection
         inline constexpr uintptr_t RenderView = 0x1E0;  // kept from offsets-version-2c6fd5e09aaf4cfa.hpp - NOT re-verified by reflection
         inline constexpr uintptr_t VTable = 0x7006CE8;  // kept from offsets-version-2c6fd5e09aaf4cfa.hpp - NOT re-verified by reflection
}
namespace RenderView {
         inline constexpr uintptr_t DeviceD3D11 = 0x10;  // measured: the RenderView slot whose object holds the D3D11 interfaces
         inline constexpr uintptr_t LightingValid = 0x0;  // kept from offsets-version-2c6fd5e09aaf4cfa.hpp - NOT re-verified by reflection
         inline constexpr uintptr_t SkyValid = 0x0;  // kept from offsets-version-2c6fd5e09aaf4cfa.hpp - NOT re-verified by reflection
         inline constexpr uintptr_t VisualEngine = 0x20;  // measured: the RenderView slot pointing back at the VisualEngine
         inline constexpr uintptr_t VTable = 0x70B0F98;  // measured: global_finder (RTTI + live scan)
}
namespace RunService {
         inline constexpr uintptr_t HeartbeatFPS = 0xBE;  // kept from offsets-version-2c6fd5e09aaf4cfa.hpp - NOT re-verified by reflection
         inline constexpr uintptr_t HeartbeatTask = 0x28E38;  // kept from offsets-version-2c6fd5e09aaf4cfa.hpp - NOT re-verified by reflection
         inline constexpr uintptr_t VTable = 0x70AA8A0;  // kept from offsets-version-2c6fd5e09aaf4cfa.hpp - NOT re-verified by reflection
}
namespace Script {
         inline constexpr uintptr_t ByteCode = 0x178;  // carried over from offsets-version-4ea8e85481e34f46.hpp - NOT re-verified for this build
         inline constexpr uintptr_t GUID = 0xB8;  // kept from offsets-version-2c6fd5e09aaf4cfa.hpp - NOT re-verified by reflection
         inline constexpr uintptr_t Hash = 0x188;  // kept from offsets-version-2c6fd5e09aaf4cfa.hpp - NOT re-verified by reflection
         inline constexpr uintptr_t VTable = 0x7119B50;  // kept from offsets-version-2c6fd5e09aaf4cfa.hpp - NOT re-verified by reflection
}
namespace ScriptContext {
         inline constexpr uintptr_t RequireBypass = 0x0;  // kept from offsets-version-2c6fd5e09aaf4cfa.hpp - NOT re-verified by reflection
         inline constexpr uintptr_t VTable = 0x71190F8;  // kept from offsets-version-2c6fd5e09aaf4cfa.hpp - NOT re-verified by reflection
}
namespace Seat {
         inline constexpr uintptr_t Occupant = 0x200;  // kept from offsets-version-2c6fd5e09aaf4cfa.hpp - NOT re-verified by reflection
         inline constexpr uintptr_t VTable = 0x6F84B38;  // kept from offsets-version-2c6fd5e09aaf4cfa.hpp - NOT re-verified by reflection
}
namespace Sky {
         inline constexpr uintptr_t MoonAngularSize = 0x22C;  // reflection (float movss)
         inline constexpr uintptr_t MoonTextureId = 0xB0;  // reflection (ContentId mov)
         inline constexpr uintptr_t SkyboxBk = 0xE0;  // reflection (ContentId mov)
         inline constexpr uintptr_t SkyboxDn = 0x110;  // reflection (ContentId mov)
         inline constexpr uintptr_t SkyboxFt = 0x140;  // kept from offsets-version-2c6fd5e09aaf4cfa.hpp - NOT re-verified by reflection
         inline constexpr uintptr_t SkyboxLf = 0x170;  // kept from offsets-version-2c6fd5e09aaf4cfa.hpp - NOT re-verified by reflection
         inline constexpr uintptr_t SkyboxOrientation = 0x220;  // reflection (Vector3 min:mov)
         inline constexpr uintptr_t SkyboxRt = 0x1A0;  // kept from offsets-version-2c6fd5e09aaf4cfa.hpp - NOT re-verified by reflection
         inline constexpr uintptr_t SkyboxUp = 0x1D0;  // kept from offsets-version-2c6fd5e09aaf4cfa.hpp - NOT re-verified by reflection
         inline constexpr uintptr_t StarCount = 0x230;  // reflection (int mov)
         inline constexpr uintptr_t SunAngularSize = 0x234;  // reflection (float movss)
         inline constexpr uintptr_t SunTextureId = 0x200;  // kept from offsets-version-2c6fd5e09aaf4cfa.hpp - NOT re-verified by reflection
         inline constexpr uintptr_t VTable = 0x70D7B00;  // kept from offsets-version-2c6fd5e09aaf4cfa.hpp - NOT re-verified by reflection
}
namespace Sound {
         inline constexpr uintptr_t IsPlaying = 0x118;  // reflection (bool movzx)
         inline constexpr uintptr_t Looped = 0x115;  // reflection (bool movzx)
         inline constexpr uintptr_t PlaybackSpeed = 0xFC;  // reflection (float movss)
         inline constexpr uintptr_t RollOffMaxDistance = 0x100;  // reflection (float movss)
         inline constexpr uintptr_t RollOffMinDistance = 0x104;  // reflection (float movss)
         inline constexpr uintptr_t SoundGroup = 0xD0;  // reflection (SoundGroup weak:mov)
         inline constexpr uintptr_t SoundId = 0xB0;  // reflection (ContentId mov)
         inline constexpr uintptr_t Volume = 0x110;  // reflection (float movss)
         inline constexpr uintptr_t VTable = 0x71252D0;  // kept from offsets-version-2c6fd5e09aaf4cfa.hpp - NOT re-verified by reflection
}
namespace SpawnLocation {
         inline constexpr uintptr_t AllowTeamChangeOnTouch = 0x1D8;  // kept from offsets-version-2c6fd5e09aaf4cfa.hpp - NOT re-verified by reflection
         inline constexpr uintptr_t Enabled = 0x1D9;  // kept from offsets-version-2c6fd5e09aaf4cfa.hpp - NOT re-verified by reflection
         inline constexpr uintptr_t ForcefieldDuration = 0x1D0;  // kept from offsets-version-2c6fd5e09aaf4cfa.hpp - NOT re-verified by reflection
         inline constexpr uintptr_t Neutral = 0x1DA;  // kept from offsets-version-2c6fd5e09aaf4cfa.hpp - NOT re-verified by reflection
         inline constexpr uintptr_t TeamColor = 0x1D4;  // kept from offsets-version-2c6fd5e09aaf4cfa.hpp - NOT re-verified by reflection
         inline constexpr uintptr_t VTable = 0x6F81E20;  // kept from offsets-version-2c6fd5e09aaf4cfa.hpp - NOT re-verified by reflection
}
namespace SpecialMesh {
         inline constexpr uintptr_t MeshId = 0xE0;  // reflection (ContentId mov)
         inline constexpr uintptr_t Scale = 0xAC;  // reflection (Vector3 min:lea-ret)
}
namespace StaticPropertyTable {
         inline constexpr uintptr_t Field_0x10 = 0x10;  // kept from offsets-version-2c6fd5e09aaf4cfa.hpp - NOT re-verified by reflection
         inline constexpr uintptr_t Field_0x11 = 0x11;  // kept from offsets-version-2c6fd5e09aaf4cfa.hpp - NOT re-verified by reflection
         inline constexpr uintptr_t Field_0x14 = 0x14;  // kept from offsets-version-2c6fd5e09aaf4cfa.hpp - NOT re-verified by reflection
         inline constexpr uintptr_t Field_0x18 = 0x18;  // kept from offsets-version-2c6fd5e09aaf4cfa.hpp - NOT re-verified by reflection
         inline constexpr uintptr_t Field_0x19 = 0x19;  // kept from offsets-version-2c6fd5e09aaf4cfa.hpp - NOT re-verified by reflection
         inline constexpr uintptr_t Field_0x1A = 0x1A;  // kept from offsets-version-2c6fd5e09aaf4cfa.hpp - NOT re-verified by reflection
         inline constexpr uintptr_t Field_0x1B = 0x1B;  // kept from offsets-version-2c6fd5e09aaf4cfa.hpp - NOT re-verified by reflection
         inline constexpr uintptr_t Field_0x1C = 0x1C;  // kept from offsets-version-2c6fd5e09aaf4cfa.hpp - NOT re-verified by reflection
         inline constexpr uintptr_t Field_0x1D = 0x1D;  // kept from offsets-version-2c6fd5e09aaf4cfa.hpp - NOT re-verified by reflection
         inline constexpr uintptr_t Field_0x1E = 0x1E;  // kept from offsets-version-2c6fd5e09aaf4cfa.hpp - NOT re-verified by reflection
         inline constexpr uintptr_t Field_0x1F = 0x1F;  // kept from offsets-version-2c6fd5e09aaf4cfa.hpp - NOT re-verified by reflection
         inline constexpr uintptr_t Field_0x20 = 0x20;  // kept from offsets-version-2c6fd5e09aaf4cfa.hpp - NOT re-verified by reflection
         inline constexpr uintptr_t Field_0x22 = 0x22;  // kept from offsets-version-2c6fd5e09aaf4cfa.hpp - NOT re-verified by reflection
         inline constexpr uintptr_t Field_0x23 = 0x23;  // kept from offsets-version-2c6fd5e09aaf4cfa.hpp - NOT re-verified by reflection
         inline constexpr uintptr_t Field_0x24 = 0x24;  // kept from offsets-version-2c6fd5e09aaf4cfa.hpp - NOT re-verified by reflection
         inline constexpr uintptr_t Field_0x25 = 0x25;  // kept from offsets-version-2c6fd5e09aaf4cfa.hpp - NOT re-verified by reflection
         inline constexpr uintptr_t Field_0x26 = 0x26;  // kept from offsets-version-2c6fd5e09aaf4cfa.hpp - NOT re-verified by reflection
         inline constexpr uintptr_t Field_0x28 = 0x28;  // kept from offsets-version-2c6fd5e09aaf4cfa.hpp - NOT re-verified by reflection
         inline constexpr uintptr_t Field_0x29 = 0x29;  // kept from offsets-version-2c6fd5e09aaf4cfa.hpp - NOT re-verified by reflection
         inline constexpr uintptr_t Field_0x2A = 0x2A;  // kept from offsets-version-2c6fd5e09aaf4cfa.hpp - NOT re-verified by reflection
         inline constexpr uintptr_t Field_0x2C = 0x2C;  // kept from offsets-version-2c6fd5e09aaf4cfa.hpp - NOT re-verified by reflection
         inline constexpr uintptr_t Field_0x30 = 0x30;  // kept from offsets-version-2c6fd5e09aaf4cfa.hpp - NOT re-verified by reflection
         inline constexpr uintptr_t Field_0x34 = 0x34;  // kept from offsets-version-2c6fd5e09aaf4cfa.hpp - NOT re-verified by reflection
         inline constexpr uintptr_t Field_0x38 = 0x38;  // kept from offsets-version-2c6fd5e09aaf4cfa.hpp - NOT re-verified by reflection
         inline constexpr uintptr_t Field_0x39 = 0x39;  // kept from offsets-version-2c6fd5e09aaf4cfa.hpp - NOT re-verified by reflection
         inline constexpr uintptr_t Field_0x3A = 0x3A;  // kept from offsets-version-2c6fd5e09aaf4cfa.hpp - NOT re-verified by reflection
         inline constexpr uintptr_t Field_0x3C = 0x3C;  // kept from offsets-version-2c6fd5e09aaf4cfa.hpp - NOT re-verified by reflection
         inline constexpr uintptr_t Field_0x3D = 0x3D;  // kept from offsets-version-2c6fd5e09aaf4cfa.hpp - NOT re-verified by reflection
         inline constexpr uintptr_t Field_0x3E = 0x3E;  // kept from offsets-version-2c6fd5e09aaf4cfa.hpp - NOT re-verified by reflection
         inline constexpr uintptr_t Field_0x40 = 0x40;  // kept from offsets-version-2c6fd5e09aaf4cfa.hpp - NOT re-verified by reflection
         inline constexpr uintptr_t Field_0x41 = 0x41;  // kept from offsets-version-2c6fd5e09aaf4cfa.hpp - NOT re-verified by reflection
         inline constexpr uintptr_t Field_0x44 = 0x44;  // kept from offsets-version-2c6fd5e09aaf4cfa.hpp - NOT re-verified by reflection
         inline constexpr uintptr_t Field_0x48 = 0x48;  // kept from offsets-version-2c6fd5e09aaf4cfa.hpp - NOT re-verified by reflection
         inline constexpr uintptr_t Field_0x4C = 0x4C;  // kept from offsets-version-2c6fd5e09aaf4cfa.hpp - NOT re-verified by reflection
         inline constexpr uintptr_t Field_0x50 = 0x50;  // kept from offsets-version-2c6fd5e09aaf4cfa.hpp - NOT re-verified by reflection
         inline constexpr uintptr_t Field_0x51 = 0x51;  // kept from offsets-version-2c6fd5e09aaf4cfa.hpp - NOT re-verified by reflection
         inline constexpr uintptr_t Field_0x52 = 0x52;  // kept from offsets-version-2c6fd5e09aaf4cfa.hpp - NOT re-verified by reflection
         inline constexpr uintptr_t Field_0x54 = 0x54;  // kept from offsets-version-2c6fd5e09aaf4cfa.hpp - NOT re-verified by reflection
         inline constexpr uintptr_t Field_0x58 = 0x58;  // kept from offsets-version-2c6fd5e09aaf4cfa.hpp - NOT re-verified by reflection
         inline constexpr uintptr_t Field_0x5C = 0x5C;  // kept from offsets-version-2c6fd5e09aaf4cfa.hpp - NOT re-verified by reflection
         inline constexpr uintptr_t Field_0x60 = 0x60;  // kept from offsets-version-2c6fd5e09aaf4cfa.hpp - NOT re-verified by reflection
         inline constexpr uintptr_t Field_0x64 = 0x64;  // kept from offsets-version-2c6fd5e09aaf4cfa.hpp - NOT re-verified by reflection
         inline constexpr uintptr_t Field_0x68 = 0x68;  // kept from offsets-version-2c6fd5e09aaf4cfa.hpp - NOT re-verified by reflection
         inline constexpr uintptr_t Field_0x6C = 0x6C;  // kept from offsets-version-2c6fd5e09aaf4cfa.hpp - NOT re-verified by reflection
         inline constexpr uintptr_t Field_0x70 = 0x70;  // kept from offsets-version-2c6fd5e09aaf4cfa.hpp - NOT re-verified by reflection
         inline constexpr uintptr_t Field_0x74 = 0x74;  // kept from offsets-version-2c6fd5e09aaf4cfa.hpp - NOT re-verified by reflection
         inline constexpr uintptr_t Field_0x78 = 0x78;  // kept from offsets-version-2c6fd5e09aaf4cfa.hpp - NOT re-verified by reflection
         inline constexpr uintptr_t Field_0x80 = 0x80;  // kept from offsets-version-2c6fd5e09aaf4cfa.hpp - NOT re-verified by reflection
         inline constexpr uintptr_t Field_0x88 = 0x88;  // kept from offsets-version-2c6fd5e09aaf4cfa.hpp - NOT re-verified by reflection
         inline constexpr uintptr_t Field_0x90 = 0x90;  // kept from offsets-version-2c6fd5e09aaf4cfa.hpp - NOT re-verified by reflection
         inline constexpr uintptr_t Field_0x98 = 0x98;  // kept from offsets-version-2c6fd5e09aaf4cfa.hpp - NOT re-verified by reflection
         inline constexpr uintptr_t Field_0xA0 = 0xA0;  // kept from offsets-version-2c6fd5e09aaf4cfa.hpp - NOT re-verified by reflection
         inline constexpr uintptr_t Field_0xA4 = 0xA4;  // kept from offsets-version-2c6fd5e09aaf4cfa.hpp - NOT re-verified by reflection
         inline constexpr uintptr_t Field_0xA8 = 0xA8;  // kept from offsets-version-2c6fd5e09aaf4cfa.hpp - NOT re-verified by reflection
         inline constexpr uintptr_t Field_0xAC = 0xAC;  // kept from offsets-version-2c6fd5e09aaf4cfa.hpp - NOT re-verified by reflection
         inline constexpr uintptr_t Field_0xB0 = 0xB0;  // kept from offsets-version-2c6fd5e09aaf4cfa.hpp - NOT re-verified by reflection
         inline constexpr uintptr_t Field_0xC0 = 0xC0;  // kept from offsets-version-2c6fd5e09aaf4cfa.hpp - NOT re-verified by reflection
         inline constexpr uintptr_t Field_0xC8 = 0xC8;  // kept from offsets-version-2c6fd5e09aaf4cfa.hpp - NOT re-verified by reflection
         inline constexpr uintptr_t Field_0x1000 = 0x1000;  // kept from offsets-version-2c6fd5e09aaf4cfa.hpp - NOT re-verified by reflection
}
namespace StaticPropertyTable {
         inline constexpr uintptr_t Field_0x10 = 0x10;
         inline constexpr uintptr_t Field_0x11 = 0x11;
         inline constexpr uintptr_t Field_0x14 = 0x14;
         inline constexpr uintptr_t Field_0x18 = 0x18;
         inline constexpr uintptr_t Field_0x19 = 0x19;
         inline constexpr uintptr_t Field_0x1A = 0x1A;
         inline constexpr uintptr_t Field_0x1B = 0x1B;
         inline constexpr uintptr_t Field_0x1C = 0x1C;
         inline constexpr uintptr_t Field_0x1D = 0x1D;
         inline constexpr uintptr_t Field_0x1E = 0x1E;
         inline constexpr uintptr_t Field_0x1F = 0x1F;
         inline constexpr uintptr_t Field_0x20 = 0x20;
         inline constexpr uintptr_t Field_0x22 = 0x22;
         inline constexpr uintptr_t Field_0x23 = 0x23;
         inline constexpr uintptr_t Field_0x24 = 0x24;
         inline constexpr uintptr_t Field_0x25 = 0x25;
         inline constexpr uintptr_t Field_0x26 = 0x26;
         inline constexpr uintptr_t Field_0x28 = 0x28;
         inline constexpr uintptr_t Field_0x29 = 0x29;
         inline constexpr uintptr_t Field_0x2A = 0x2A;
         inline constexpr uintptr_t Field_0x2C = 0x2C;
         inline constexpr uintptr_t Field_0x30 = 0x30;
         inline constexpr uintptr_t Field_0x34 = 0x34;
         inline constexpr uintptr_t Field_0x38 = 0x38;
         inline constexpr uintptr_t Field_0x39 = 0x39;
         inline constexpr uintptr_t Field_0x3A = 0x3A;
         inline constexpr uintptr_t Field_0x3C = 0x3C;
         inline constexpr uintptr_t Field_0x3D = 0x3D;
         inline constexpr uintptr_t Field_0x3E = 0x3E;
         inline constexpr uintptr_t Field_0x40 = 0x40;
         inline constexpr uintptr_t Field_0x41 = 0x41;
         inline constexpr uintptr_t Field_0x44 = 0x44;
         inline constexpr uintptr_t Field_0x48 = 0x48;
         inline constexpr uintptr_t Field_0x4C = 0x4C;
         inline constexpr uintptr_t Field_0x50 = 0x50;
         inline constexpr uintptr_t Field_0x51 = 0x51;
         inline constexpr uintptr_t Field_0x52 = 0x52;
         inline constexpr uintptr_t Field_0x54 = 0x54;
         inline constexpr uintptr_t Field_0x58 = 0x58;
         inline constexpr uintptr_t Field_0x5C = 0x5C;
         inline constexpr uintptr_t Field_0x60 = 0x60;
         inline constexpr uintptr_t Field_0x64 = 0x64;
         inline constexpr uintptr_t Field_0x68 = 0x68;
         inline constexpr uintptr_t Field_0x6C = 0x6C;
         inline constexpr uintptr_t Field_0x70 = 0x70;
         inline constexpr uintptr_t Field_0x74 = 0x74;
         inline constexpr uintptr_t Field_0x78 = 0x78;
         inline constexpr uintptr_t Field_0x80 = 0x80;
         inline constexpr uintptr_t Field_0x88 = 0x88;
         inline constexpr uintptr_t Field_0x90 = 0x90;
         inline constexpr uintptr_t Field_0x98 = 0x98;
         inline constexpr uintptr_t Field_0xA0 = 0xA0;
         inline constexpr uintptr_t Field_0xA4 = 0xA4;
         inline constexpr uintptr_t Field_0xA8 = 0xA8;
         inline constexpr uintptr_t Field_0xAC = 0xAC;
         inline constexpr uintptr_t Field_0xB0 = 0xB0;
         inline constexpr uintptr_t Field_0xC0 = 0xC0;
         inline constexpr uintptr_t Field_0xC8 = 0xC8;
         inline constexpr uintptr_t Field_0x1000 = 0x1000;
}
namespace StatsItem {
         inline constexpr uintptr_t Value = 0xB93D;  // kept from offsets-version-2c6fd5e09aaf4cfa.hpp - NOT re-verified by reflection
         inline constexpr uintptr_t VTable = 0x713B8F0;  // kept from offsets-version-2c6fd5e09aaf4cfa.hpp - NOT re-verified by reflection
}
namespace SunRaysEffect {
         inline constexpr uintptr_t Enabled = 0x98;  // reflection (bool movzx)
         inline constexpr uintptr_t Intensity = 0xA0;  // reflection (float movss)
         inline constexpr uintptr_t Spread = 0xA4;  // reflection (float movss)
         inline constexpr uintptr_t VTable = 0x705EAE0;  // kept from offsets-version-2c6fd5e09aaf4cfa.hpp - NOT re-verified by reflection
}
namespace SurfaceAppearance {
         inline constexpr uintptr_t AlphaMode = 0x1D8;  // reflection (AlphaMode mov)
         inline constexpr uintptr_t Color = 0x1C0;  // reflection (Color3 min:mov)
         inline constexpr uintptr_t ColorMap = 0xB0;  // reflection (ContentId call>mov)
         inline constexpr uintptr_t EmissiveMaskContent = 0xE0;  // reflection (Content lea-ret)
         inline constexpr uintptr_t EmissiveStrength = 0x1DC;  // reflection (float movss)
         inline constexpr uintptr_t EmissiveTint = 0x1CC;  // reflection (Color3 min:mov)
         inline constexpr uintptr_t MetalnessMap = 0x110;  // kept from offsets-version-2c6fd5e09aaf4cfa.hpp - NOT re-verified by reflection
         inline constexpr uintptr_t NormalMap = 0x140;  // kept from offsets-version-2c6fd5e09aaf4cfa.hpp - NOT re-verified by reflection
         inline constexpr uintptr_t RoughnessMap = 0x170;  // reflection (ContentId call>mov)
         inline constexpr uintptr_t VTable = 0x7071778;  // kept from offsets-version-2c6fd5e09aaf4cfa.hpp - NOT re-verified by reflection
}
namespace TaskScheduler {
         inline constexpr uintptr_t JobEnd = 0xD0;  // measured: global_finder (RTTI + live scan)
         inline constexpr uintptr_t JobName = 0x18;  // measured: global_finder (RTTI + live scan)
         inline constexpr uintptr_t JobStart = 0xC8;  // measured: global_finder (RTTI + live scan)
         inline constexpr uintptr_t MaxFPS = 0xB0;  // measured: global_finder (RTTI + live scan)
         inline constexpr uintptr_t Pointer = 0x8DA5D98;  // measured: global_finder (RTTI + live scan)
}
namespace Team {
         inline constexpr uintptr_t BrickColor = 0xA0;  // kept from offsets-version-2c6fd5e09aaf4cfa.hpp - NOT re-verified by reflection
         inline constexpr uintptr_t VTable = 0x706F568;  // kept from offsets-version-2c6fd5e09aaf4cfa.hpp - NOT re-verified by reflection
}
namespace TechniqueArray {
         inline constexpr uintptr_t BeginOffset = 0x0;  // kept from offsets-version-2c6fd5e09aaf4cfa.hpp - NOT re-verified by reflection
         inline constexpr uintptr_t EndOffset = 0x8;  // kept from offsets-version-2c6fd5e09aaf4cfa.hpp - NOT re-verified by reflection
         inline constexpr uintptr_t EntryStride = 0x88;  // kept from offsets-version-2c6fd5e09aaf4cfa.hpp - NOT re-verified by reflection
}
namespace TechniqueArray {
         inline constexpr uintptr_t BeginOffset = 0x0;
         inline constexpr uintptr_t EndOffset = 0x8;
         inline constexpr uintptr_t EntryStride = 0x88;
}
namespace Terrain {
         inline constexpr uintptr_t GrassLength = 0x1D8;  // reflection (float movss)
         inline constexpr uintptr_t MaterialColors = 0x4A0;  // kept from offsets-version-2c6fd5e09aaf4cfa.hpp - NOT re-verified by reflection
         inline constexpr uintptr_t WaterColor = 0x1C8;  // reflection (Color3 min:mov)
         inline constexpr uintptr_t WaterReflectance = 0x1E0;  // reflection (float movss)
         inline constexpr uintptr_t WaterTransparency = 0x1E4;  // reflection (float movss)
         inline constexpr uintptr_t WaterWaveSize = 0x1E8;  // reflection (float movss)
         inline constexpr uintptr_t WaterWaveSpeed = 0x1EC;  // reflection (float movss)
}
namespace Textures {
         inline constexpr uintptr_t Decal_Texture = 0x1C8;  // kept from offsets-version-2c6fd5e09aaf4cfa.hpp - NOT re-verified by reflection
         inline constexpr uintptr_t Texture_Texture = 0x1C8;  // kept from offsets-version-2c6fd5e09aaf4cfa.hpp - NOT re-verified by reflection
}
namespace Tool {
         inline constexpr uintptr_t CanBeDropped = 0x4A0;  // reflection (bool movzx)
         inline constexpr uintptr_t Enabled = 0x4A1;  // reflection (bool movzx)
         inline constexpr uintptr_t Grip = 0x470;  // reflection (CoordinateFrame min:lea-ret)
         inline constexpr uintptr_t ManualActivationOnly = 0x4A2;  // reflection (bool movzx)
         inline constexpr uintptr_t RequiresHandle = 0x4A3;  // reflection (bool movzx)
         inline constexpr uintptr_t TextureId = 0x348;  // reflection (ContentId mov)
         inline constexpr uintptr_t Tooltip = 0x450;  // reflection (string lea-ret)
         inline constexpr uintptr_t VTable = 0x706CF58;  // kept from offsets-version-2c6fd5e09aaf4cfa.hpp - NOT re-verified by reflection
}
namespace UnionOperation {
         inline constexpr uintptr_t AssetId = 0x2F8;  // reflection (ContentId mov)
         inline constexpr uintptr_t VTable = 0x6F8D900;  // kept from offsets-version-2c6fd5e09aaf4cfa.hpp - NOT re-verified by reflection
}
namespace UserInputService {
         inline constexpr uintptr_t WindowInputState = 0x288;  // kept from offsets-version-2c6fd5e09aaf4cfa.hpp - NOT re-verified by reflection
         inline constexpr uintptr_t VTable = 0x70BF950;  // kept from offsets-version-2c6fd5e09aaf4cfa.hpp - NOT re-verified by reflection
}
namespace VehicleSeat {
         inline constexpr uintptr_t MaxSpeed = 0x210;  // kept from offsets-version-2c6fd5e09aaf4cfa.hpp - NOT re-verified by reflection
         inline constexpr uintptr_t SteerFloat = 0x214;  // kept from offsets-version-2c6fd5e09aaf4cfa.hpp - NOT re-verified by reflection
         inline constexpr uintptr_t ThrottleFloat = 0x218;  // kept from offsets-version-2c6fd5e09aaf4cfa.hpp - NOT re-verified by reflection
         inline constexpr uintptr_t Torque = 0x21C;  // kept from offsets-version-2c6fd5e09aaf4cfa.hpp - NOT re-verified by reflection
         inline constexpr uintptr_t TurnSpeed = 0x220;  // kept from offsets-version-2c6fd5e09aaf4cfa.hpp - NOT re-verified by reflection
         inline constexpr uintptr_t VTable = 0x6F7BFC8;  // kept from offsets-version-2c6fd5e09aaf4cfa.hpp - NOT re-verified by reflection
}
namespace VisualEngine {
         inline constexpr uintptr_t Dimensions = 0xB10;  // measured: global_finder (RTTI + live scan)
         inline constexpr uintptr_t FakeDataModel = 0xAF0;  // measured: global_finder (RTTI + live scan)
         inline constexpr uintptr_t Pointer = 0x8896B98;  // measured: global_finder (RTTI + live scan)
         inline constexpr uintptr_t RenderView = 0xC50;  // measured: global_finder (RTTI + live scan)
         inline constexpr uintptr_t ViewMatrix = 0x1B0;  // kept from offsets-version-2c6fd5e09aaf4cfa.hpp - NOT re-verified by reflection
         inline constexpr uintptr_t VTable = 0x70AFAD8;  // kept from offsets-version-2c6fd5e09aaf4cfa.hpp - NOT re-verified by reflection
}
namespace Vtables {
         inline constexpr uintptr_t AlignOrientation = 0x6FA4330;  // kept from offsets-version-2c6fd5e09aaf4cfa.hpp - NOT re-verified by reflection
         inline constexpr uintptr_t AlignPosition = 0x6FA36B0;  // kept from offsets-version-2c6fd5e09aaf4cfa.hpp - NOT re-verified by reflection
         inline constexpr uintptr_t AppStorageService = 0x70ECF30;  // kept from offsets-version-2c6fd5e09aaf4cfa.hpp - NOT re-verified by reflection
         inline constexpr uintptr_t AvatarEditorService = 0x7021170;  // kept from offsets-version-2c6fd5e09aaf4cfa.hpp - NOT re-verified by reflection
         inline constexpr uintptr_t BadgeService = 0x70956F8;  // kept from offsets-version-2c6fd5e09aaf4cfa.hpp - NOT re-verified by reflection
         inline constexpr uintptr_t BindableEvent = 0x70949E0;  // kept from offsets-version-2c6fd5e09aaf4cfa.hpp - NOT re-verified by reflection
         inline constexpr uintptr_t BindableFunction = 0x7094C48;  // kept from offsets-version-2c6fd5e09aaf4cfa.hpp - NOT re-verified by reflection
         inline constexpr uintptr_t BodyAngularVelocity = 0x70DE478;  // kept from offsets-version-2c6fd5e09aaf4cfa.hpp - NOT re-verified by reflection
         inline constexpr uintptr_t BodyGyro = 0x70DEC00;  // kept from offsets-version-2c6fd5e09aaf4cfa.hpp - NOT re-verified by reflection
         inline constexpr uintptr_t BodyPosition = 0x70DE820;  // kept from offsets-version-2c6fd5e09aaf4cfa.hpp - NOT re-verified by reflection
         inline constexpr uintptr_t BodyVelocity = 0x70DEAE0;  // kept from offsets-version-2c6fd5e09aaf4cfa.hpp - NOT re-verified by reflection
         inline constexpr uintptr_t CanvasGroup = 0x7110500;  // kept from offsets-version-2c6fd5e09aaf4cfa.hpp - NOT re-verified by reflection
         inline constexpr uintptr_t Clouds = 0x70DB778;  // kept from offsets-version-2c6fd5e09aaf4cfa.hpp - NOT re-verified by reflection
         inline constexpr uintptr_t CollectionService = 0x7092D18;  // kept from offsets-version-2c6fd5e09aaf4cfa.hpp - NOT re-verified by reflection
         inline constexpr uintptr_t Color3 = 0x71215E0;  // kept from offsets-version-2c6fd5e09aaf4cfa.hpp - NOT re-verified by reflection
         inline constexpr uintptr_t Color3Value = 0x70EFA38;  // kept from offsets-version-2c6fd5e09aaf4cfa.hpp - NOT re-verified by reflection
         inline constexpr uintptr_t Configuration = 0x7091F98;  // kept from offsets-version-2c6fd5e09aaf4cfa.hpp - NOT re-verified by reflection
         inline constexpr uintptr_t ContentProvider = 0x6FF4C60;  // kept from offsets-version-2c6fd5e09aaf4cfa.hpp - NOT re-verified by reflection
         inline constexpr uintptr_t ContextActionService = 0x7114318;  // kept from offsets-version-2c6fd5e09aaf4cfa.hpp - NOT re-verified by reflection
         inline constexpr uintptr_t DataStoreService = 0x70EA490;  // kept from offsets-version-2c6fd5e09aaf4cfa.hpp - NOT re-verified by reflection
         inline constexpr uintptr_t DebugSettings = 0x7070448;  // kept from offsets-version-2c6fd5e09aaf4cfa.hpp - NOT re-verified by reflection
         inline constexpr uintptr_t Decal = 0x70D4028;  // kept from offsets-version-2c6fd5e09aaf4cfa.hpp - NOT re-verified by reflection
         inline constexpr uintptr_t DoubleConstrainedValue = 0x70EF7A8;  // kept from offsets-version-2c6fd5e09aaf4cfa.hpp - NOT re-verified by reflection
         inline constexpr uintptr_t Enum = 0x7169F58;  // kept from offsets-version-2c6fd5e09aaf4cfa.hpp - NOT re-verified by reflection
         inline constexpr uintptr_t Event = 0x705AFA0;  // kept from offsets-version-2c6fd5e09aaf4cfa.hpp - NOT re-verified by reflection
         inline constexpr uintptr_t Explosion = 0x6F9CF50;  // kept from offsets-version-2c6fd5e09aaf4cfa.hpp - NOT re-verified by reflection
         inline constexpr uintptr_t Fire = 0x70DB4E8;  // kept from offsets-version-2c6fd5e09aaf4cfa.hpp - NOT re-verified by reflection
         inline constexpr uintptr_t Folder = 0x705D928;  // kept from offsets-version-2c6fd5e09aaf4cfa.hpp - NOT re-verified by reflection
         inline constexpr uintptr_t ForceField = 0x6F9A738;  // kept from offsets-version-2c6fd5e09aaf4cfa.hpp - NOT re-verified by reflection
         inline constexpr uintptr_t Frame = 0x710E728;  // kept from offsets-version-2c6fd5e09aaf4cfa.hpp - NOT re-verified by reflection
         inline constexpr uintptr_t FriendService = 0x70654A8;  // kept from offsets-version-2c6fd5e09aaf4cfa.hpp - NOT re-verified by reflection
         inline constexpr uintptr_t GamePassService = 0x6FFAF60;  // kept from offsets-version-2c6fd5e09aaf4cfa.hpp - NOT re-verified by reflection
         inline constexpr uintptr_t GeometryService = 0x70BA038;  // kept from offsets-version-2c6fd5e09aaf4cfa.hpp - NOT re-verified by reflection
         inline constexpr uintptr_t Glue = 0x6F97248;  // kept from offsets-version-2c6fd5e09aaf4cfa.hpp - NOT re-verified by reflection
         inline constexpr uintptr_t GroupService = 0x708B4B0;  // kept from offsets-version-2c6fd5e09aaf4cfa.hpp - NOT re-verified by reflection
         inline constexpr uintptr_t GuiButton = 0x710D278;  // kept from offsets-version-2c6fd5e09aaf4cfa.hpp - NOT re-verified by reflection
         inline constexpr uintptr_t GuiService = 0x70F3C80;  // kept from offsets-version-2c6fd5e09aaf4cfa.hpp - NOT re-verified by reflection
         inline constexpr uintptr_t Highlight = 0x70D9630;  // kept from offsets-version-2c6fd5e09aaf4cfa.hpp - NOT re-verified by reflection
         inline constexpr uintptr_t HingeConstraint = 0x6F99978;  // kept from offsets-version-2c6fd5e09aaf4cfa.hpp - NOT re-verified by reflection
         inline constexpr uintptr_t HttpService = 0x70C4DB8;  // kept from offsets-version-2c6fd5e09aaf4cfa.hpp - NOT re-verified by reflection
         inline constexpr uintptr_t HumanoidDescription = 0x701DB70;  // kept from offsets-version-2c6fd5e09aaf4cfa.hpp - NOT re-verified by reflection
         inline constexpr uintptr_t ImageLabel = 0x710B810;  // kept from offsets-version-2c6fd5e09aaf4cfa.hpp - NOT re-verified by reflection
         inline constexpr uintptr_t InsertService = 0x70ACB30;  // kept from offsets-version-2c6fd5e09aaf4cfa.hpp - NOT re-verified by reflection
         inline constexpr uintptr_t IntConstrainedValue = 0x70EF070;  // kept from offsets-version-2c6fd5e09aaf4cfa.hpp - NOT re-verified by reflection
         inline constexpr uintptr_t IntValue = 0x70EE900;  // kept from offsets-version-2c6fd5e09aaf4cfa.hpp - NOT re-verified by reflection
         inline constexpr uintptr_t LineForce = 0x6F932F0;  // kept from offsets-version-2c6fd5e09aaf4cfa.hpp - NOT re-verified by reflection
         inline constexpr uintptr_t LocalizationService = 0x7001D48;  // kept from offsets-version-2c6fd5e09aaf4cfa.hpp - NOT re-verified by reflection
         inline constexpr uintptr_t ManualWeld = 0x6F96C68;  // kept from offsets-version-2c6fd5e09aaf4cfa.hpp - NOT re-verified by reflection
         inline constexpr uintptr_t MarketplaceService = 0x6FFA048;  // kept from offsets-version-2c6fd5e09aaf4cfa.hpp - NOT re-verified by reflection
         inline constexpr uintptr_t MessagingService = 0x70824D8;  // kept from offsets-version-2c6fd5e09aaf4cfa.hpp - NOT re-verified by reflection
         inline constexpr uintptr_t Motor = 0x6F98508;  // kept from offsets-version-2c6fd5e09aaf4cfa.hpp - NOT re-verified by reflection
         inline constexpr uintptr_t Motor6D = 0x6F955F8;  // kept from offsets-version-2c6fd5e09aaf4cfa.hpp - NOT re-verified by reflection
         inline constexpr uintptr_t ObjectValue = 0x70ED580;  // kept from offsets-version-2c6fd5e09aaf4cfa.hpp - NOT re-verified by reflection
         inline constexpr uintptr_t Part = 0x6F90088;  // kept from offsets-version-2c6fd5e09aaf4cfa.hpp - NOT re-verified by reflection
         inline constexpr uintptr_t PermissionsService = 0x707FAD0;  // kept from offsets-version-2c6fd5e09aaf4cfa.hpp - NOT re-verified by reflection
         inline constexpr uintptr_t PhysicsService = 0x6F8A220;  // kept from offsets-version-2c6fd5e09aaf4cfa.hpp - NOT re-verified by reflection
         inline constexpr uintptr_t PlayerGui = 0x71045C8;  // kept from offsets-version-2c6fd5e09aaf4cfa.hpp - NOT re-verified by reflection
         inline constexpr uintptr_t Players = 0x70E21A0;  // kept from offsets-version-2c6fd5e09aaf4cfa.hpp - NOT re-verified by reflection
         inline constexpr uintptr_t PointLight = 0x70D5490;  // kept from offsets-version-2c6fd5e09aaf4cfa.hpp - NOT re-verified by reflection
         inline constexpr uintptr_t PointsService = 0x707E990;  // kept from offsets-version-2c6fd5e09aaf4cfa.hpp - NOT re-verified by reflection
         inline constexpr uintptr_t PolicyService = 0x6FFFCF8;  // kept from offsets-version-2c6fd5e09aaf4cfa.hpp - NOT re-verified by reflection
         inline constexpr uintptr_t Ragdoll = 0x7032680;  // kept from offsets-version-2c6fd5e09aaf4cfa.hpp - NOT re-verified by reflection
         inline constexpr uintptr_t RemoteEvent = 0x70AB2D8;  // kept from offsets-version-2c6fd5e09aaf4cfa.hpp - NOT re-verified by reflection
         inline constexpr uintptr_t RemoteFunction = 0x70AADF0;  // kept from offsets-version-2c6fd5e09aaf4cfa.hpp - NOT re-verified by reflection
         inline constexpr uintptr_t ReplicatedFirst = 0x707C0C8;  // kept from offsets-version-2c6fd5e09aaf4cfa.hpp - NOT re-verified by reflection
         inline constexpr uintptr_t ReplicatedStorage = 0x70E75F8;  // kept from offsets-version-2c6fd5e09aaf4cfa.hpp - NOT re-verified by reflection
         inline constexpr uintptr_t RopeConstraint = 0x6F864A0;  // kept from offsets-version-2c6fd5e09aaf4cfa.hpp - NOT re-verified by reflection
         inline constexpr uintptr_t ScreenGui = 0x7106628;  // kept from offsets-version-2c6fd5e09aaf4cfa.hpp - NOT re-verified by reflection
         inline constexpr uintptr_t ScrollingFrame = 0x7105588;  // kept from offsets-version-2c6fd5e09aaf4cfa.hpp - NOT re-verified by reflection
         inline constexpr uintptr_t SelectionBox = 0x7079EA0;  // kept from offsets-version-2c6fd5e09aaf4cfa.hpp - NOT re-verified by reflection
         inline constexpr uintptr_t SelectionLasso = 0x7079478;  // kept from offsets-version-2c6fd5e09aaf4cfa.hpp - NOT re-verified by reflection
         inline constexpr uintptr_t SelectionSphere = 0x7078410;  // kept from offsets-version-2c6fd5e09aaf4cfa.hpp - NOT re-verified by reflection
         inline constexpr uintptr_t ServerScriptService = 0x70779D8;  // kept from offsets-version-2c6fd5e09aaf4cfa.hpp - NOT re-verified by reflection
         inline constexpr uintptr_t ServerStorage = 0x70E6470;  // kept from offsets-version-2c6fd5e09aaf4cfa.hpp - NOT re-verified by reflection
         inline constexpr uintptr_t Smoke = 0x70D7868;  // kept from offsets-version-2c6fd5e09aaf4cfa.hpp - NOT re-verified by reflection
         inline constexpr uintptr_t Snap = 0x6F97E00;  // kept from offsets-version-2c6fd5e09aaf4cfa.hpp - NOT re-verified by reflection
         inline constexpr uintptr_t SocialService = 0x70A8D10;  // kept from offsets-version-2c6fd5e09aaf4cfa.hpp - NOT re-verified by reflection
         inline constexpr uintptr_t SoundService = 0x7124F50;  // kept from offsets-version-2c6fd5e09aaf4cfa.hpp - NOT re-verified by reflection
         inline constexpr uintptr_t Sparkles = 0x7074530;  // kept from offsets-version-2c6fd5e09aaf4cfa.hpp - NOT re-verified by reflection
         inline constexpr uintptr_t SphereHandleAdornment = 0x70631C0;  // kept from offsets-version-2c6fd5e09aaf4cfa.hpp - NOT re-verified by reflection
         inline constexpr uintptr_t SpotLight = 0x70D5708;  // kept from offsets-version-2c6fd5e09aaf4cfa.hpp - NOT re-verified by reflection
         inline constexpr uintptr_t SpringConstraint = 0x6F806E0;  // kept from offsets-version-2c6fd5e09aaf4cfa.hpp - NOT re-verified by reflection
         inline constexpr uintptr_t StarterCharacterScripts = 0x70E2DE0;  // kept from offsets-version-2c6fd5e09aaf4cfa.hpp - NOT re-verified by reflection
         inline constexpr uintptr_t Stats = 0x71420B8;  // kept from offsets-version-2c6fd5e09aaf4cfa.hpp - NOT re-verified by reflection
         inline constexpr uintptr_t StringValue = 0x70ED7F8;  // kept from offsets-version-2c6fd5e09aaf4cfa.hpp - NOT re-verified by reflection
         inline constexpr uintptr_t SurfaceGui = 0x70F60C8;  // kept from offsets-version-2c6fd5e09aaf4cfa.hpp - NOT re-verified by reflection
         inline constexpr uintptr_t SurfaceLight = 0x70D5470;  // kept from offsets-version-2c6fd5e09aaf4cfa.hpp - NOT re-verified by reflection
         inline constexpr uintptr_t TeleportService = 0x70A6598;  // kept from offsets-version-2c6fd5e09aaf4cfa.hpp - NOT re-verified by reflection
         inline constexpr uintptr_t TestService = 0x70A84D8;  // kept from offsets-version-2c6fd5e09aaf4cfa.hpp - NOT re-verified by reflection
         inline constexpr uintptr_t TextBox = 0x70F5460;  // kept from offsets-version-2c6fd5e09aaf4cfa.hpp - NOT re-verified by reflection
         inline constexpr uintptr_t TextChatService = 0x714BF00;  // kept from offsets-version-2c6fd5e09aaf4cfa.hpp - NOT re-verified by reflection
         inline constexpr uintptr_t TextLabel = 0x70F6F68;  // kept from offsets-version-2c6fd5e09aaf4cfa.hpp - NOT re-verified by reflection
         inline constexpr uintptr_t Texture = 0x704DF38;  // kept from offsets-version-2c6fd5e09aaf4cfa.hpp - NOT re-verified by reflection
         inline constexpr uintptr_t Torque = 0x6F7F998;  // kept from offsets-version-2c6fd5e09aaf4cfa.hpp - NOT re-verified by reflection
         inline constexpr uintptr_t Trail = 0x70D3458;  // kept from offsets-version-2c6fd5e09aaf4cfa.hpp - NOT re-verified by reflection
         inline constexpr uintptr_t TweenService = 0x7150088;  // kept from offsets-version-2c6fd5e09aaf4cfa.hpp - NOT re-verified by reflection
         inline constexpr uintptr_t VelocityMotor = 0x6F9C420;  // kept from offsets-version-2c6fd5e09aaf4cfa.hpp - NOT re-verified by reflection
         inline constexpr uintptr_t VideoFrame = 0x70F2790;  // kept from offsets-version-2c6fd5e09aaf4cfa.hpp - NOT re-verified by reflection
         inline constexpr uintptr_t ViewportFrame = 0x70F8850;  // kept from offsets-version-2c6fd5e09aaf4cfa.hpp - NOT re-verified by reflection
         inline constexpr uintptr_t VRService = 0x7060558;  // kept from offsets-version-2c6fd5e09aaf4cfa.hpp - NOT re-verified by reflection
         inline constexpr uintptr_t Weld = 0x6F97B60;  // kept from offsets-version-2c6fd5e09aaf4cfa.hpp - NOT re-verified by reflection
}
namespace Vtables {
         inline constexpr uintptr_t AlignOrientation = 0x6FA4330;
         inline constexpr uintptr_t AlignPosition = 0x6FA36B0;
         inline constexpr uintptr_t AppStorageService = 0x70ECF30;
         inline constexpr uintptr_t AvatarEditorService = 0x7021170;
         inline constexpr uintptr_t BadgeService = 0x70956F8;
         inline constexpr uintptr_t BindableEvent = 0x70949E0;
         inline constexpr uintptr_t BindableFunction = 0x7094C48;
         inline constexpr uintptr_t BodyAngularVelocity = 0x70DE478;
         inline constexpr uintptr_t BodyGyro = 0x70DEC00;
         inline constexpr uintptr_t BodyPosition = 0x70DE820;
         inline constexpr uintptr_t BodyVelocity = 0x70DEAE0;
         inline constexpr uintptr_t CanvasGroup = 0x7110500;
         inline constexpr uintptr_t Clouds = 0x70DB778;
         inline constexpr uintptr_t CollectionService = 0x7092D18;
         inline constexpr uintptr_t Color3 = 0x71215E0;
         inline constexpr uintptr_t Color3Value = 0x70EFA38;
         inline constexpr uintptr_t Configuration = 0x7091F98;
         inline constexpr uintptr_t ContentProvider = 0x6FF4C60;
         inline constexpr uintptr_t ContextActionService = 0x7114318;
         inline constexpr uintptr_t DataStoreService = 0x70EA490;
         inline constexpr uintptr_t DebugSettings = 0x7070448;
         inline constexpr uintptr_t Decal = 0x70D4028;
         inline constexpr uintptr_t DoubleConstrainedValue = 0x70EF7A8;
         inline constexpr uintptr_t Enum = 0x7169F58;
         inline constexpr uintptr_t Event = 0x705AFA0;
         inline constexpr uintptr_t Explosion = 0x6F9CF50;
         inline constexpr uintptr_t Fire = 0x70DB4E8;
         inline constexpr uintptr_t Folder = 0x705D928;
         inline constexpr uintptr_t ForceField = 0x6F9A738;
         inline constexpr uintptr_t Frame = 0x710E728;
         inline constexpr uintptr_t FriendService = 0x70654A8;
         inline constexpr uintptr_t GamePassService = 0x6FFAF60;
         inline constexpr uintptr_t GeometryService = 0x70BA038;
         inline constexpr uintptr_t Glue = 0x6F97248;
         inline constexpr uintptr_t GroupService = 0x708B4B0;
         inline constexpr uintptr_t GuiButton = 0x710D278;
         inline constexpr uintptr_t GuiService = 0x70F3C80;
         inline constexpr uintptr_t Highlight = 0x70D9630;
         inline constexpr uintptr_t HingeConstraint = 0x6F99978;
         inline constexpr uintptr_t HttpService = 0x70C4DB8;
         inline constexpr uintptr_t HumanoidDescription = 0x701DB70;
         inline constexpr uintptr_t ImageLabel = 0x710B810;
         inline constexpr uintptr_t InsertService = 0x70ACB30;
         inline constexpr uintptr_t IntConstrainedValue = 0x70EF070;
         inline constexpr uintptr_t IntValue = 0x70EE900;
         inline constexpr uintptr_t LineForce = 0x6F932F0;
         inline constexpr uintptr_t LocalizationService = 0x7001D48;
         inline constexpr uintptr_t ManualWeld = 0x6F96C68;
         inline constexpr uintptr_t MarketplaceService = 0x6FFA048;
         inline constexpr uintptr_t MessagingService = 0x70824D8;
         inline constexpr uintptr_t Motor = 0x6F98508;
         inline constexpr uintptr_t Motor6D = 0x6F955F8;
         inline constexpr uintptr_t ObjectValue = 0x70ED580;
         inline constexpr uintptr_t Part = 0x6F90088;
         inline constexpr uintptr_t PermissionsService = 0x707FAD0;
         inline constexpr uintptr_t PhysicsService = 0x6F8A220;
         inline constexpr uintptr_t PlayerGui = 0x71045C8;
         inline constexpr uintptr_t Players = 0x70E21A0;
         inline constexpr uintptr_t PointLight = 0x70D5490;
         inline constexpr uintptr_t PointsService = 0x707E990;
         inline constexpr uintptr_t PolicyService = 0x6FFFCF8;
         inline constexpr uintptr_t Ragdoll = 0x7032680;
         inline constexpr uintptr_t RemoteEvent = 0x70AB2D8;
         inline constexpr uintptr_t RemoteFunction = 0x70AADF0;
         inline constexpr uintptr_t ReplicatedFirst = 0x707C0C8;
         inline constexpr uintptr_t ReplicatedStorage = 0x70E75F8;
         inline constexpr uintptr_t RopeConstraint = 0x6F864A0;
         inline constexpr uintptr_t ScreenGui = 0x7106628;
         inline constexpr uintptr_t ScrollingFrame = 0x7105588;
         inline constexpr uintptr_t SelectionBox = 0x7079EA0;
         inline constexpr uintptr_t SelectionLasso = 0x7079478;
         inline constexpr uintptr_t SelectionSphere = 0x7078410;
         inline constexpr uintptr_t ServerScriptService = 0x70779D8;
         inline constexpr uintptr_t ServerStorage = 0x70E6470;
         inline constexpr uintptr_t Smoke = 0x70D7868;
         inline constexpr uintptr_t Snap = 0x6F97E00;
         inline constexpr uintptr_t SocialService = 0x70A8D10;
         inline constexpr uintptr_t SoundService = 0x7124F50;
         inline constexpr uintptr_t Sparkles = 0x7074530;
         inline constexpr uintptr_t SphereHandleAdornment = 0x70631C0;
         inline constexpr uintptr_t SpotLight = 0x70D5708;
         inline constexpr uintptr_t SpringConstraint = 0x6F806E0;
         inline constexpr uintptr_t StarterCharacterScripts = 0x70E2DE0;
         inline constexpr uintptr_t Stats = 0x71420B8;
         inline constexpr uintptr_t StringValue = 0x70ED7F8;
         inline constexpr uintptr_t SurfaceGui = 0x70F60C8;
         inline constexpr uintptr_t SurfaceLight = 0x70D5470;
         inline constexpr uintptr_t TeleportService = 0x70A6598;
         inline constexpr uintptr_t TestService = 0x70A84D8;
         inline constexpr uintptr_t TextBox = 0x70F5460;
         inline constexpr uintptr_t TextChatService = 0x714BF00;
         inline constexpr uintptr_t TextLabel = 0x70F6F68;
         inline constexpr uintptr_t Texture = 0x704DF38;
         inline constexpr uintptr_t Torque = 0x6F7F998;
         inline constexpr uintptr_t Trail = 0x70D3458;
         inline constexpr uintptr_t TweenService = 0x7150088;
         inline constexpr uintptr_t VelocityMotor = 0x6F9C420;
         inline constexpr uintptr_t VideoFrame = 0x70F2790;
         inline constexpr uintptr_t ViewportFrame = 0x70F8850;
         inline constexpr uintptr_t VRService = 0x7060558;
         inline constexpr uintptr_t Weld = 0x6F97B60;
}
namespace WeldConstraint {
         inline constexpr uintptr_t Part0 = 0xA0;  // reflection (BasePart weak:mov)
         inline constexpr uintptr_t Part1 = 0xB0;  // reflection (BasePart weak:mov)
         inline constexpr uintptr_t VTable = 0x6F7A670;  // kept from offsets-version-2c6fd5e09aaf4cfa.hpp - NOT re-verified by reflection
}
namespace WindowInputState {
         inline constexpr uintptr_t CapsLock = 0x40;  // kept from offsets-version-2c6fd5e09aaf4cfa.hpp - NOT re-verified by reflection
         inline constexpr uintptr_t CurrentTextBox = 0x48;  // kept from offsets-version-2c6fd5e09aaf4cfa.hpp - NOT re-verified by reflection
}
namespace Workspace {
         inline constexpr uintptr_t CurrentCamera = 0x4A0;  // reflection (Camera min:mov)
         inline constexpr uintptr_t DistributedGameTime = 0x4C0;  // reflection (double movsd)
         inline constexpr uintptr_t ReadOnlyGravity = 0x9C8;  // kept from offsets-version-2c6fd5e09aaf4cfa.hpp - NOT re-verified by reflection
         inline constexpr uintptr_t World = 0x3F8;  // measured: internals (getter chain / live structure)
         inline constexpr uintptr_t VTable = 0x70A52C0;  // kept from offsets-version-2c6fd5e09aaf4cfa.hpp - NOT re-verified by reflection
}
namespace World {
         inline constexpr uintptr_t AirProperties = 0x230;  // kept from offsets-version-2c6fd5e09aaf4cfa.hpp - NOT re-verified by reflection
         inline constexpr uintptr_t FallenPartsDestroyHeight = 0x20C;  // measured: internals (getter chain / live structure)
         inline constexpr uintptr_t Gravity = 0x218;  // measured: internals (getter chain / live structure)
         inline constexpr uintptr_t Primitives = 0x2A0;  // measured: internals (getter chain / live structure)
         inline constexpr uintptr_t worldStepsPerSec = 0x868;  // kept from offsets-version-2c6fd5e09aaf4cfa.hpp - NOT re-verified by reflection
}
namespace WorldRoot {
         inline constexpr uintptr_t WorldRootMethodTable = 0x6EC9B40;  // kept from offsets-version-2c6fd5e09aaf4cfa.hpp - NOT re-verified by reflection
         inline constexpr uintptr_t RaycastMethodIndex = 0x1A;  // kept from offsets-version-2c6fd5e09aaf4cfa.hpp - NOT re-verified by reflection
         inline constexpr uintptr_t RaycastName = 0x71CBC78;  // kept from offsets-version-2c6fd5e09aaf4cfa.hpp - NOT re-verified by reflection
}
namespace WorldRoot {
         inline constexpr uintptr_t WorldRootMethodTable = 0x6EC9B40;
         inline constexpr uintptr_t RaycastMethodIndex = 0x1A;
         inline constexpr uintptr_t RaycastName = 0x71CBC78;
}
}
