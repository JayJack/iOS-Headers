//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"
#import "TSCHStyleOwning.h"
#import "TSCHUnretainedParent.h"

@class NSArray, NSMutableArray, NSMutableDictionary, NSString, TSCHChartDrawableInfo, TSCHChartLayoutCache, TSCHChartMediator, TSCHChartModel, TSCHChartStylePreset, TSCHChartType, TSCHLegendModel, TSDInfoGeometry, TSPLazyReference, TSSStylesheet;

__attribute__((visibility("hidden")))
@interface TSCHChartInfo : NSObject <TSCHStyleOwning, TSCHUnretainedParent, NSCopying>
{
    TSCHChartModel *mModel;
    id <TSCHStyleActAlike> mStyle;
    id <TSCHStyleActAlike> mNonStyle;
    TSCHChartType *mChartType;
    TSCHLegendModel *mLegendModel;
    TSCHChartMediator *mChartMediator;
    TSPLazyReference *mLazyPreset;
    struct CGRect mInnerChartFrame;
    id <TSCHStyleActAlike> mLegendStyle;
    id <TSCHStyleActAlike> mLegendNonStyle;
    NSMutableArray *mValueAxisStyles;
    NSMutableArray *mCategoryAxisStyles;
    NSMutableArray *mValueAxisNonStyles;
    NSMutableArray *mCategoryAxisNonStyles;
    NSMutableArray *mThemeSeriesStyles;
    NSMutableArray *mPrivateSeriesStyles;
    NSMutableArray *mSeriesNonStyles;
    NSMutableArray *mParagraphStyles;
    struct CGPoint mPreviewOrigin;
    BOOL mDisplayMessageOnRepCreation;
    NSString *mMessageString;
    double mMessageDuration;
    TSDInfoGeometry *mNonInfoGeometry;
    TSCHChartDrawableInfo *mDrawableInfo;
    BOOL mNeedsCalcEngineDependentUpgrade;
    BOOL mNeedsCalcEngineDependentImport;
    NSMutableDictionary *mStyleViewProxyMap;
    NSArray *mStyleViewProxyParagraphStyleArray;
    unsigned int mLastSeriesIndex;
}

+ (BOOL)groupedShadowsForChartModel:(id)arg1;
+ (id)paragraphStyleIdentifierForRoleIndex:(unsigned int)arg1 ordinal:(unsigned int)arg2;
+ (id)seriesStyleIdentifierForRoleIndex:(unsigned int)arg1 ordinal:(unsigned int)arg2;
+ (id)categoryAxisStyleIdentifierForRoleIndex:(unsigned int)arg1 ordinal:(unsigned int)arg2;
+ (id)valueAxisStyleIdentifierForRoleIndex:(unsigned int)arg1 ordinal:(unsigned int)arg2;
+ (id)legendStyleIdentifierForRoleIndex:(unsigned int)arg1;
+ (id)chartStyleIdentifierForRoleIndex:(unsigned int)arg1;
+ (Class)classForLegendNonstyle;
+ (Class)classForLegendStyle;
+ (Class)classForAxisNonstyle;
+ (Class)classForAxisStyle;
+ (Class)classForSeriesNonstyle;
+ (Class)classForSeriesStyle;
+ (Class)classForChartNonstyle;
+ (Class)classForChartStyle;
+ (id)paragraphStylePropertiesChartsUse;
+ (id)propertiesThatInvalidateModel;
+ (id)swapTuplesForParagraphStyleMutations:(id)arg1 forReferencingProperty:(int)arg2 forStyleOwner:(id)arg3;
+ (id)p_currentThreadSceneAreaLayoutCache;
+ (void)setCurrentThreadSceneAreaLayoutCache:(id)arg1;
+ (double)beginValueForStackedBarSeries:(id)arg1 index:(unsigned int)arg2 unitSpaceIntercept:(double)arg3 relativelyPositive:(BOOL)arg4 valueAxis:(id)arg5;
+ (id)paragraphStyleIndexProperties;
+ (id)p_stylesheetFromOrderedArrayOfSources:(id)arg1;
@property(nonatomic) double informationalMessageDuration; // @synthesize informationalMessageDuration=mMessageDuration;
@property(retain, nonatomic) NSString *informationalMessageString; // @synthesize informationalMessageString=mMessageString;
@property(nonatomic) BOOL displayMessageOnRepCreation; // @synthesize displayMessageOnRepCreation=mDisplayMessageOnRepCreation;
@property(readonly, nonatomic) TSCHChartDrawableInfo *drawableInfo; // @synthesize drawableInfo=mDrawableInfo;
@property(nonatomic) struct CGPoint previewOrigin; // @synthesize previewOrigin=mPreviewOrigin;
@property(retain, nonatomic) TSCHChartMediator *mediator; // @synthesize mediator=mChartMediator;
@property(retain, nonatomic) TSCHChartType *chartType; // @synthesize chartType=mChartType;
@property(retain, nonatomic) TSCHLegendModel *legend; // @synthesize legend=mLegendModel;
@property(retain, nonatomic) TSCHChartModel *model; // @synthesize model=mModel;
- (void)performDeferredUpgradeAndImportOperations;
@property(readonly, nonatomic) BOOL wantsDeferredUpgradeOrImport;
- (struct CGRect)chartBodyBoundsForSageImportWithSageChartType:(BOOL)arg1;
- (id)fillsForSeriesAndTheme;
- (id)commandToChangeAllChartFontsToFamilyName:(id)arg1;
- (void)p_breakUpFontName:(id)arg1 isBold:(char *)arg2 isItalic:(char *)arg3;
- (id)commandToScaleAllChartFontsBy:(float)arg1;
- (id)commandForTransformingByTransform:(struct CGAffineTransform)arg1 context:(id)arg2 transformedObjects:(id)arg3 inBounds:(struct CGRect)arg4;
- (id)scaleAllStrokesInStyle:(id)arg1 byRatio:(float)arg2;
- (id)paragraphStyleForSelectionPath:(id)arg1;
- (int)paragraphStylePropertyForSelectionPath:(id)arg1;
- (id)styleOwnerForSelectionPath:(id)arg1;
- (int)stringPropertyForSelectionPath:(id)arg1;
- (id)stringForSelectionPath:(id)arg1;
- (void)setPreset:(id)arg1;
@property(readonly, nonatomic) TSCHChartStylePreset *preset;
- (id)childCommandForApplyThemeCommand:(id)arg1;
- (id)styleOwnerFromSwapType:(int)arg1 andIndex:(unsigned int)arg2;
- (id)applyStyleSwapTuple:(id)arg1;
- (id)applyStyleSwapTuples:(id)arg1;
- (id)childInfos;
- (id)commandSetCategoryName:(id)arg1 forCategoryIndex:(unsigned int)arg2;
- (id)commandSetSeriesName:(id)arg1 forSeriesIndex:(unsigned int)arg2;
- (float)sageDepthFactorForExport;
- (void)updateTitlesForExportingModel:(id)arg1;
- (void)chartTypeDidChangeWithDetails:(id)arg1;
- (void)modelDidInvalidateWithDetails:(id)arg1;
- (void)chartDidInvalidateWithProperties:(id)arg1;
- (void)setChartNonstyle:(id)arg1;
- (void)setSeriesNonstyle:(id)arg1 atIndex:(unsigned int)arg2;
- (void)setCategoryAxisNonstyle:(id)arg1 atIndex:(unsigned int)arg2;
- (void)setValueAxisNonstyle:(id)arg1 atIndex:(unsigned int)arg2;
- (id)categoryAxisNonstyleAtIndex:(unsigned int)arg1;
- (id)valueAxisNonstyleAtIndex:(unsigned int)arg1;
- (id)categoryAxisStyleAtIndex:(unsigned int)arg1;
- (id)valueAxisStyleAtIndex:(unsigned int)arg1;
- (unsigned int)categoryAxisStyleCount;
- (unsigned int)valueAxisStyleCount;
- (id)seriesNonstyleForSeriesIndex:(unsigned int)arg1;
- (id)seriesStyleForSeriesIndex:(unsigned int)arg1;
- (id)nonStyleForAxis:(id)arg1;
- (id)styleForAxis:(id)arg1;
- (unsigned int)numberOfThemeSeriesStyles;
- (BOOL)seriesStyleIsPrivate:(id)arg1;
- (id)nonStyleForSeries:(id)arg1;
- (id)seriesStyleForSeries:(id)arg1;
- (id)legendNonStyle;
- (id)legendStyle;
- (id)newChartStylePresetByExampleWithPresetIndex:(unsigned int)arg1 withSeriesCount:(unsigned int)arg2 forTheme:(id)arg3;
- (id)newChartStylePresetByExampleWithPresetIndex:(unsigned int)arg1 forTheme:(id)arg2;
- (id)swapTuplesForParagraphStyleMutations:(id)arg1 forReferencingProperty:(int)arg2;
- (id)swapTuplesForMutationsForImport:(id)arg1;
- (id)swapTuplesForMutations:(id)arg1;
- (id)p_swapTuplesForMutations:(id)arg1 isForImport:(BOOL)arg2;
- (id)paragraphStyle;
- (id)defaultProperties;
- (id)nonstyle;
- (id)style;
- (id)chartInfo;
- (id)valueForProperty:(int)arg1;
- (id)objectValueForProperty:(int)arg1;
- (float)floatValueForProperty:(int)arg1 defaultValue:(float)arg2;
- (int)intValueForProperty:(int)arg1 defaultValue:(int)arg2;
- (BOOL)hasObjectValueForProperty:(int)arg1 value:(id *)arg2;
- (BOOL)hasFloatValueForProperty:(int)arg1 value:(float *)arg2;
- (BOOL)hasIntValueForProperty:(int)arg1 value:(int *)arg2;
- (int)defaultPropertyForGeneric:(int)arg1;
- (int)specificPropertyForGeneric:(int)arg1;
- (id)p_genericToDefaultPropertyMap;
- (id)themeStylesheet;
@property(readonly, nonatomic) TSSStylesheet *documentStylesheet;
- (unsigned int)addParagraphStyle:(id)arg1;
- (id)paragraphStyles;
- (id)paragraphStyleAtIndex:(unsigned int)arg1;
- (int)elementKind;
@property(readonly, nonatomic) BOOL isPhantom;
- (Class)editorClass;
- (Class)layoutClass;
- (Class)repClass;
- (void)setDefaultLegendPositionIfNeededWithOptionalLayout:(id)arg1;
- (float)p_dataSetNameAccomodationWithOptionalLayout:(id)arg1;
- (float)p_titleAccommodationWithLegendSize:(struct CGSize)arg1 optionalLayout:(id)arg2;
- (void)p_setChartType:(id)arg1 andSetLegendDefaults:(BOOL)arg2;
- (void)setInfoGeometryByUpdatingLegendGeometryAccommodatedForInitialLayoutGeometry:(id)arg1;
- (id)infoGeometryForDesiredLayoutGeometry:(id)arg1;
- (id)infoGeometryForVisuallyCenteringOnUnscaledCanvasPoint:(struct CGPoint)arg1;
- (void)chartMoveToPosition:(struct CGPoint)arg1 size:(struct CGSize)arg2;
- (struct CGRect)resizedLegendFrame:(struct CGRect)arg1 oldChartSize:(struct CGSize)arg2 newChartSize:(struct CGSize)arg3;
@property(readonly, nonatomic) int gridDirection;
@property(readonly, nonatomic) struct CGSize minimumChartBodySize;
- (id)modelForDataSetIndex:(unsigned int)arg1;
@property(copy, nonatomic) TSDInfoGeometry *geometry;
- (void)setGeometry:(id)arg1 clearObjectPlaceholderFlag:(BOOL)arg2;
- (void)setGeometry:(id)arg1 omitLegendResize:(BOOL)arg2 clearObjectPlaceholderFlag:(BOOL)arg3;
- (void)setGeometry:(id)arg1 omitLegendResize:(BOOL)arg2;
- (id)context;
- (void)willModify;
- (id)copyWithContext:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1 context:(id)arg2;
- (id)p_copyStyleAndNonStyleArray:(id)arg1 withZone:(struct _NSZone *)arg2 context:(id)arg3;
- (void)clearParent;
- (void)dealloc;
- (id)initWithChartType:(id)arg1 legendShowing:(id)arg2 chartBodyFrame:(id)arg3 chartAreaFrame:(id)arg4 circumscribingFrame:(id)arg5 legendFrame:(id)arg6 stylePreset:(id)arg7 privateSeriesStyles:(id)arg8 chartNonStyle:(id)arg9 legendNonStyle:(id)arg10 valueAxisNonStyles:(id)arg11 categoryAxisNonStyles:(id)arg12 seriesNonStyles:(id)arg13;
- (id)init;
- (id)p_init;
- (id)create3DSceneWithLayoutSettings:(const CDStruct_1f804ca1 *)arg1;
@property(nonatomic) CDStruct_1f804ca1 defaultLayoutSettings;
@property(readonly, nonatomic) BOOL hasSetDefaultLayoutSettings;
- (void)debugLayoutCache;
@property(readonly, nonatomic) TSCHChartLayoutCache *sceneAreaLayoutItemCache;
- (id)clamped3DRotationPropertyObject;
- (BOOL)isSingleCircleSpecialCase;
- (BOOL)isSingleCircleSpecialCaseOutSeries:(id *)arg1;
- (float)maximumExplosionOfAllSeriesExcept:(id)arg1;
- (float)maximumExplosion;
- (float)radiusForFrame:(struct CGRect)arg1 withMaxExplosion:(float)arg2;
- (float)minFrameDimensionForRadius:(float)arg1 withMaxExplosion:(float)arg2;
- (void)performUpgradeForPersistentChartInfo:(id)arg1 archiveVersion:(unsigned long long)arg2 innerChartFrame:(struct CGRect)arg3 isFromPasteboard:(BOOL)arg4;
- (void)loadFromPreUFFArchive:(const struct ChartInfoArchive *)arg1 unarchiver:(id)arg2 persistentChartInfo:(id)arg3;
- (id)g_genericToDefaultPropertyMap;
- (void)adoptStylesheet:(id)arg1 withMapper:(id)arg2;
- (void)applyChartStyleState:(id)arg1;
- (void)p_duplicatePersistableMembersOfCopiedChartUsingContext:(id)arg1;
- (void)p_setDrawableInfo:(id)arg1;
- (id)p_copyStyleArray:(id)arg1 inContext:(id)arg2;
- (id)p_copyNonStyleArray:(id)arg1 inContext:(id)arg2;
- (unsigned int)p_paragraphStyleIndexOfFirstCategoryAxisParagraphStyle;
- (id)commandToApplyViewProxiesToModel;
- (void)clearViewStyleProxyForLayouts:(id)arg1;
- (void)setViewStyleProxyParagraphStyleArray:(id)arg1 layouts:(id)arg2;
- (void)addViewStyleProxyForMutationTuples:(id)arg1 layouts:(id)arg2;
- (void)p_invalidateCachesInLayouts:(id)arg1;
- (id)viewOverrideMapForStyleOwner:(id)arg1;
- (CDStruct_f1d50d6b)styleOwnerRefForStyleOwner:(id)arg1;
- (id)styleOwnerForRef:(CDStruct_f1d50d6b)arg1;
- (id)tuplesToApplyState:(id)arg1;
- (id)chartStyleState;
- (void)saveToUnityArchive:(struct ChartArchive *)arg1 persistentChartInfo:(id)arg2 archiver:(id)arg3;
- (void)loadFromUnityArchive:(const struct ChartArchive *)arg1 unarchiver:(id)arg2 persistentChartInfo:(id)arg3;
- (id)p_swapTuplesForApplyingPreset:(id)arg1 preservingAppearance:(BOOL)arg2;
- (id)p_swapTuplesForApplyingPresetRemovingOverrides:(id)arg1;
- (id)swapTuplesForApplyingPreset:(id)arg1 withBehavior:(unsigned int)arg2;

@end
