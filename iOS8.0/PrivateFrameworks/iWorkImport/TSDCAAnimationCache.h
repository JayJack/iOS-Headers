//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class CAAnimation, CALayer, NSDictionary;

__attribute__((visibility("hidden")))
@interface TSDCAAnimationCache : NSObject
{
    NSDictionary *_overrideInitialValuesDict;
    float _animationDuration;
    int _cacheValuesCount;
    struct CGPoint *_anchorPointCache;
    float *_anchorPointZCache;
    float *_borderWidthCache;
    struct CGRect *_boundsCache;
    char *_doubleSidedCache;
    char *_hiddenCache;
    float *_opacityCache;
    struct CGPoint *_positionCache;
    struct CATransform3D *_transformCache;
    float *_transformRotationCache;
    float *_transformRotationXCache;
    float *_transformRotationYCache;
    float *_transformRotationZCache;
    float *_transformScaleXCache;
    float *_transformScaleYCache;
    float *_transformScaleXYCache;
    struct CGPoint *_transformTranslationCache;
    float *_transformTranslationXCache;
    float *_transformTranslationYCache;
    float *_transformTranslationZCache;
    float *_zPositionCache;
    BOOL _anchorPointAnimationExists;
    BOOL _anchorPointZAnimationExists;
    BOOL _borderColorAnimationExists;
    BOOL _borderWidthAnimationExists;
    BOOL _boundsAnimationExists;
    BOOL _contentsAnimationExists;
    BOOL _doubleSidedAnimationExists;
    BOOL _doubleSidedInitialValue;
    BOOL _hiddenAnimationExists;
    BOOL _hiddenInitialValue;
    BOOL _opacityAnimationExists;
    BOOL _positionAnimationExists;
    BOOL _transformAnimationExists;
    BOOL _transformRotationAnimationExists;
    BOOL _transformRotationXAnimationExists;
    BOOL _transformRotationYAnimationExists;
    BOOL _transformRotationZAnimationExists;
    BOOL _transformScaleXAnimationExists;
    BOOL _transformScaleYAnimationExists;
    BOOL _transformScaleXYAnimationExists;
    BOOL _transformTranslationAnimationExists;
    BOOL _transformTranslationXAnimationExists;
    BOOL _transformTranslationYAnimationExists;
    BOOL _transformTranslationZAnimationExists;
    BOOL _zPositionAnimationExists;
    CALayer *_layer;
    CAAnimation *_animation;
    float _anchorPointZInitialValue;
    struct CGColor *_borderColorInitialValue;
    float _borderWidthInitialValue;
    struct CGImage *_contentsInitialValue;
    float _opacityInitialValue;
    float _transformRotationInitialValue;
    float _transformRotationXInitialValue;
    float _transformRotationYInitialValue;
    float _transformRotationZInitialValue;
    float _transformScaleXInitialValue;
    float _transformScaleYInitialValue;
    float _transformScaleXYInitialValue;
    float _transformTranslationXInitialValue;
    float _transformTranslationYInitialValue;
    float _transformTranslationZInitialValue;
    float _zPositionInitialValue;
    NSDictionary *_initialValues;
    struct CGPoint _anchorPointInitialValue;
    struct CGPoint _positionInitialValue;
    struct CGPoint _transformTranslationInitialValue;
    struct CGRect _boundsInitialValue;
    struct CATransform3D _transformInitialValue;
}

@property(readonly, nonatomic) NSDictionary *initialValues; // @synthesize initialValues=_initialValues;
@property(readonly, nonatomic) float zPositionInitialValue; // @synthesize zPositionInitialValue=_zPositionInitialValue;
@property(readonly, nonatomic) BOOL zPositionAnimationExists; // @synthesize zPositionAnimationExists=_zPositionAnimationExists;
@property(readonly, nonatomic) float transformTranslationZInitialValue; // @synthesize transformTranslationZInitialValue=_transformTranslationZInitialValue;
@property(readonly, nonatomic) BOOL transformTranslationZAnimationExists; // @synthesize transformTranslationZAnimationExists=_transformTranslationZAnimationExists;
@property(readonly, nonatomic) float transformTranslationYInitialValue; // @synthesize transformTranslationYInitialValue=_transformTranslationYInitialValue;
@property(readonly, nonatomic) BOOL transformTranslationYAnimationExists; // @synthesize transformTranslationYAnimationExists=_transformTranslationYAnimationExists;
@property(readonly, nonatomic) float transformTranslationXInitialValue; // @synthesize transformTranslationXInitialValue=_transformTranslationXInitialValue;
@property(readonly, nonatomic) BOOL transformTranslationXAnimationExists; // @synthesize transformTranslationXAnimationExists=_transformTranslationXAnimationExists;
@property(readonly, nonatomic) struct CGPoint transformTranslationInitialValue; // @synthesize transformTranslationInitialValue=_transformTranslationInitialValue;
@property(readonly, nonatomic) BOOL transformTranslationAnimationExists; // @synthesize transformTranslationAnimationExists=_transformTranslationAnimationExists;
@property(readonly, nonatomic) float transformScaleXYInitialValue; // @synthesize transformScaleXYInitialValue=_transformScaleXYInitialValue;
@property(readonly, nonatomic) BOOL transformScaleXYAnimationExists; // @synthesize transformScaleXYAnimationExists=_transformScaleXYAnimationExists;
@property(readonly, nonatomic) float transformScaleYInitialValue; // @synthesize transformScaleYInitialValue=_transformScaleYInitialValue;
@property(readonly, nonatomic) BOOL transformScaleYAnimationExists; // @synthesize transformScaleYAnimationExists=_transformScaleYAnimationExists;
@property(readonly, nonatomic) float transformScaleXInitialValue; // @synthesize transformScaleXInitialValue=_transformScaleXInitialValue;
@property(readonly, nonatomic) BOOL transformScaleXAnimationExists; // @synthesize transformScaleXAnimationExists=_transformScaleXAnimationExists;
@property(readonly, nonatomic) float transformRotationZInitialValue; // @synthesize transformRotationZInitialValue=_transformRotationZInitialValue;
@property(readonly, nonatomic) BOOL transformRotationZAnimationExists; // @synthesize transformRotationZAnimationExists=_transformRotationZAnimationExists;
@property(readonly, nonatomic) float transformRotationYInitialValue; // @synthesize transformRotationYInitialValue=_transformRotationYInitialValue;
@property(readonly, nonatomic) BOOL transformRotationYAnimationExists; // @synthesize transformRotationYAnimationExists=_transformRotationYAnimationExists;
@property(readonly, nonatomic) float transformRotationXInitialValue; // @synthesize transformRotationXInitialValue=_transformRotationXInitialValue;
@property(readonly, nonatomic) BOOL transformRotationXAnimationExists; // @synthesize transformRotationXAnimationExists=_transformRotationXAnimationExists;
@property(readonly, nonatomic) float transformRotationInitialValue; // @synthesize transformRotationInitialValue=_transformRotationInitialValue;
@property(readonly, nonatomic) BOOL transformRotationAnimationExists; // @synthesize transformRotationAnimationExists=_transformRotationAnimationExists;
@property(readonly, nonatomic) struct CATransform3D transformInitialValue; // @synthesize transformInitialValue=_transformInitialValue;
@property(readonly, nonatomic) BOOL transformAnimationExists; // @synthesize transformAnimationExists=_transformAnimationExists;
@property(readonly, nonatomic) struct CGPoint positionInitialValue; // @synthesize positionInitialValue=_positionInitialValue;
@property(readonly, nonatomic) BOOL positionAnimationExists; // @synthesize positionAnimationExists=_positionAnimationExists;
@property(readonly, nonatomic) float opacityInitialValue; // @synthesize opacityInitialValue=_opacityInitialValue;
@property(readonly, nonatomic) BOOL opacityAnimationExists; // @synthesize opacityAnimationExists=_opacityAnimationExists;
@property(readonly, nonatomic) BOOL hiddenInitialValue; // @synthesize hiddenInitialValue=_hiddenInitialValue;
@property(readonly, nonatomic) BOOL hiddenAnimationExists; // @synthesize hiddenAnimationExists=_hiddenAnimationExists;
@property(readonly, nonatomic) BOOL doubleSidedInitialValue; // @synthesize doubleSidedInitialValue=_doubleSidedInitialValue;
@property(readonly, nonatomic) BOOL doubleSidedAnimationExists; // @synthesize doubleSidedAnimationExists=_doubleSidedAnimationExists;
@property(readonly, nonatomic) struct CGImage *contentsInitialValue; // @synthesize contentsInitialValue=_contentsInitialValue;
@property(readonly, nonatomic) BOOL contentsAnimationExists; // @synthesize contentsAnimationExists=_contentsAnimationExists;
@property(readonly, nonatomic) struct CGRect boundsInitialValue; // @synthesize boundsInitialValue=_boundsInitialValue;
@property(readonly, nonatomic) BOOL boundsAnimationExists; // @synthesize boundsAnimationExists=_boundsAnimationExists;
@property(readonly, nonatomic) float borderWidthInitialValue; // @synthesize borderWidthInitialValue=_borderWidthInitialValue;
@property(readonly, nonatomic) BOOL borderWidthAnimationExists; // @synthesize borderWidthAnimationExists=_borderWidthAnimationExists;
@property(readonly, nonatomic) struct CGColor *borderColorInitialValue; // @synthesize borderColorInitialValue=_borderColorInitialValue;
@property(readonly, nonatomic) BOOL borderColorAnimationExists; // @synthesize borderColorAnimationExists=_borderColorAnimationExists;
@property(readonly, nonatomic) float anchorPointZInitialValue; // @synthesize anchorPointZInitialValue=_anchorPointZInitialValue;
@property(readonly, nonatomic) BOOL anchorPointZAnimationExists; // @synthesize anchorPointZAnimationExists=_anchorPointZAnimationExists;
@property(readonly, nonatomic) struct CGPoint anchorPointInitialValue; // @synthesize anchorPointInitialValue=_anchorPointInitialValue;
@property(readonly, nonatomic) BOOL anchorPointAnimationExists; // @synthesize anchorPointAnimationExists=_anchorPointAnimationExists;
@property(readonly, nonatomic) CAAnimation *animation; // @synthesize animation=_animation;
@property(readonly, nonatomic) CALayer *layer; // @synthesize layer=_layer;
- (float)zPositionCachedValueAtTime:(double)arg1 layer:(id)arg2 animation:(id)arg3;
- (float)transformTranslationZCachedValueAtTime:(double)arg1 layer:(id)arg2 animation:(id)arg3;
- (float)transformTranslationYCachedValueAtTime:(double)arg1 layer:(id)arg2 animation:(id)arg3;
- (float)transformTranslationXCachedValueAtTime:(double)arg1 layer:(id)arg2 animation:(id)arg3;
- (struct CGPoint)transformTranslationCachedValueAtTime:(double)arg1 layer:(id)arg2 animation:(id)arg3;
- (float)transformScaleXYCachedValueAtTime:(double)arg1 layer:(id)arg2 animation:(id)arg3;
- (float)transformScaleYCachedValueAtTime:(double)arg1 layer:(id)arg2 animation:(id)arg3;
- (float)transformScaleXCachedValueAtTime:(double)arg1 layer:(id)arg2 animation:(id)arg3;
- (float)transformRotationZCachedValueAtTime:(double)arg1 layer:(id)arg2 animation:(id)arg3;
- (float)transformRotationYCachedValueAtTime:(double)arg1 layer:(id)arg2 animation:(id)arg3;
- (float)transformRotationXCachedValueAtTime:(double)arg1 layer:(id)arg2 animation:(id)arg3;
- (float)transformRotationCachedValueAtTime:(double)arg1 layer:(id)arg2 animation:(id)arg3;
- (struct CATransform3D)transformCachedValueAtTime:(double)arg1 layer:(id)arg2 animation:(id)arg3;
- (struct CGPoint)positionCachedValueAtTime:(double)arg1 layer:(id)arg2 animation:(id)arg3;
- (float)opacityCachedValueAtTime:(double)arg1 layer:(id)arg2 animation:(id)arg3;
- (BOOL)hiddenCachedValueAtTime:(double)arg1 layer:(id)arg2 animation:(id)arg3;
- (BOOL)doubleSidedCachedValueAtTime:(double)arg1 layer:(id)arg2 animation:(id)arg3;
- (struct CGRect)boundsCachedValueAtTime:(double)arg1 layer:(id)arg2 animation:(id)arg3;
- (float)borderWidthCachedValueAtTime:(double)arg1 layer:(id)arg2 animation:(id)arg3;
- (float)anchorPointZCachedValueAtTime:(double)arg1 layer:(id)arg2 animation:(id)arg3;
- (struct CGPoint)anchorPointCachedValueAtTime:(double)arg1 layer:(id)arg2 animation:(id)arg3;
- (void)dealloc;
- (id)initWithLayer:(id)arg1 animation:(id)arg2 overrideInitialValues:(id)arg3 cacheAnimationValues:(BOOL)arg4;
- (BOOL)verifyCache;
- (BOOL)p_setupAndCacheAnimationValues:(BOOL)arg1 verifyOnly:(BOOL)arg2;

@end

