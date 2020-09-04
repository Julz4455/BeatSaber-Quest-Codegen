// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include <initializer_list>
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Completed includes
// Begin il2cpp-utils forward declares
template<class T>
struct Array;
// Completed il2cpp-utils forward declares
// Type namespace: UnityEngine
namespace UnityEngine {
  // Autogenerated type: UnityEngine.Mathf
  struct Mathf : public System::ValueType {
    public:
    // Creating value type constructor for type: Mathf
    constexpr Mathf() noexcept {}
    // Get static field: static public readonly System.Single Epsilon
    static float _get_Epsilon();
    // Set static field: static public readonly System.Single Epsilon
    static void _set_Epsilon(float value);
    // static public System.Int32 NextPowerOfTwo(System.Int32 value)
    // Offset: 0x1410AC8
    static int NextPowerOfTwo(int value);
    // static public System.Single GammaToLinearSpace(System.Single value)
    // Offset: 0x1410B08
    static float GammaToLinearSpace(float value);
    // static public System.Single Sin(System.Single f)
    // Offset: 0x1410B4C
    static float Sin(float f);
    // static public System.Single Cos(System.Single f)
    // Offset: 0x1410BC0
    static float Cos(float f);
    // static public System.Single Tan(System.Single f)
    // Offset: 0x1410C34
    static float Tan(float f);
    // static public System.Single Asin(System.Single f)
    // Offset: 0x1410CA8
    static float Asin(float f);
    // static public System.Single Acos(System.Single f)
    // Offset: 0x1410D1C
    static float Acos(float f);
    // static public System.Single Atan(System.Single f)
    // Offset: 0x1410D90
    static float Atan(float f);
    // static public System.Single Atan2(System.Single y, System.Single x)
    // Offset: 0x1410E04
    static float Atan2(float y, float x);
    // static public System.Single Sqrt(System.Single f)
    // Offset: 0x1410E80
    static float Sqrt(float f);
    // static public System.Single Abs(System.Single f)
    // Offset: 0x1410F08
    static float Abs(float f);
    // static public System.Int32 Abs(System.Int32 value)
    // Offset: 0x1410F74
    static int Abs(int value);
    // static public System.Single Min(System.Single a, System.Single b)
    // Offset: 0x1410FDC
    static float Min(float a, float b);
    // static public System.Int32 Min(System.Int32 a, System.Int32 b)
    // Offset: 0x1410FE8
    static int Min(int a, int b);
    // static public System.Single Max(System.Single a, System.Single b)
    // Offset: 0x1410FF4
    static float Max(float a, float b);
    // static public System.Single Max(params System.Single[] values)
    // Offset: 0x1411000
    static float Max(::Array<float>* values);
    // Creating initializer_list -> params proxy for: System.Single Max(params System.Single[] values)
    static float Max(std::initializer_list<float> values);
    // Creating TArgs -> initializer_list proxy for: System.Single Max(params System.Single[] values)
    template<class ...TParams>
    static float Max(TParams&&... values) {
      return Max({values...});
    }
    // static public System.Int32 Max(System.Int32 a, System.Int32 b)
    // Offset: 0x1411054
    static int Max(int a, int b);
    // static public System.Single Pow(System.Single f, System.Single p)
    // Offset: 0x1411060
    static float Pow(float f, float p);
    // static public System.Single Log(System.Single f, System.Single p)
    // Offset: 0x14110E0
    static float Log(float f, float p);
    // static public System.Single Log(System.Single f)
    // Offset: 0x1411160
    static float Log(float f);
    // static public System.Single Ceil(System.Single f)
    // Offset: 0x14111D4
    static float Ceil(float f);
    // static public System.Single Floor(System.Single f)
    // Offset: 0x1411240
    static float Floor(float f);
    // static public System.Single Round(System.Single f)
    // Offset: 0x14112AC
    static float Round(float f);
    // static public System.Int32 CeilToInt(System.Single f)
    // Offset: 0x1411384
    static int CeilToInt(float f);
    // static public System.Int32 FloorToInt(System.Single f)
    // Offset: 0x14113F0
    static int FloorToInt(float f);
    // static public System.Int32 RoundToInt(System.Single f)
    // Offset: 0x141145C
    static int RoundToInt(float f);
    // static public System.Single Sign(System.Single f)
    // Offset: 0x1411534
    static float Sign(float f);
    // static public System.Single Clamp(System.Single value, System.Single min, System.Single max)
    // Offset: 0x1411548
    static float Clamp(float value, float min, float max);
    // static public System.Int32 Clamp(System.Int32 value, System.Int32 min, System.Int32 max)
    // Offset: 0x1411564
    static int Clamp(int value, int min, int max);
    // static public System.Single Clamp01(System.Single value)
    // Offset: 0x1411580
    static float Clamp01(float value);
    // static public System.Single Lerp(System.Single a, System.Single b, System.Single t)
    // Offset: 0x141159C
    static float Lerp(float a, float b, float t);
    // static public System.Single LerpUnclamped(System.Single a, System.Single b, System.Single t)
    // Offset: 0x1411634
    static float LerpUnclamped(float a, float b, float t);
    // static public System.Single MoveTowards(System.Single current, System.Single target, System.Single maxDelta)
    // Offset: 0x1411644
    static float MoveTowards(float current, float target, float maxDelta);
    // static public System.Boolean Approximately(System.Single a, System.Single b)
    // Offset: 0x1411700
    static bool Approximately(float a, float b);
    // static public System.Single SmoothDamp(System.Single current, System.Single target, ref System.Single currentVelocity, System.Single smoothTime)
    // Offset: 0x14117B0
    static float SmoothDamp(float current, float target, float& currentVelocity, float smoothTime);
    // static public System.Single SmoothDamp(System.Single current, System.Single target, ref System.Single currentVelocity, System.Single smoothTime, System.Single maxSpeed, System.Single deltaTime)
    // Offset: 0x1411854
    static float SmoothDamp(float current, float target, float& currentVelocity, float smoothTime, float maxSpeed, float deltaTime);
    // static public System.Single Repeat(System.Single t, System.Single length)
    // Offset: 0x14119A8
    static float Repeat(float t, float length);
    // static public System.Single InverseLerp(System.Single a, System.Single b, System.Single value)
    // Offset: 0x1411A38
    static float InverseLerp(float a, float b, float value);
    // static public System.Single DeltaAngle(System.Single current, System.Single target)
    // Offset: 0x1411ADC
    static float DeltaAngle(float current, float target);
    // static private System.Void .cctor()
    // Offset: 0x1411B74
    static void _cctor();
  }; // UnityEngine.Mathf
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::Mathf, "UnityEngine", "Mathf");
#pragma pack(pop)
