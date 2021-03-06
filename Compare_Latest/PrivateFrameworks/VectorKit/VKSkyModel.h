//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <VectorKit/VKModelObject.h>

#import "VKMapLayer.h"
#import "VKStyleManagerObserver.h"

@class NSString, VKMapModel, VKStyleManager;

__attribute__((visibility("hidden")))
@interface VKSkyModel : VKModelObject <VKMapLayer, VKStyleManagerObserver>
{
    VKMapModel *_mapModel;
    float _skyStartOffset;
    Matrix_5173352a _fillColor;
    Matrix_5173352a _horizonColor;
    struct shared_ptr<ggl::Sky::SkyUniformData> _uniformData;
    struct shared_ptr<ggl::Sky::Shader::Setup> _shaderSetup;
    struct shared_ptr<ggl::Sky::SkyMesh> _mesh;
    struct shared_ptr<ggl::IndexDataTyped<unsigned short>> _indexData;
    struct shared_ptr<ggl::RenderState> _gglRenderState;
    struct RenderItem *_renderItem;
    BOOL _needsNewStyle;
}

+ (BOOL)reloadOnStylesheetChange;
@property(nonatomic) VKMapModel *mapModel; // @synthesize mapModel=_mapModel;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)gglLayoutScene:(id)arg1 withContext:(id)arg2 renderQueue:(struct RenderQueue *)arg3;
- (void)dealloc;
- (id)init;
- (void)updateStyle;
- (void)stylesheetDidChange;
@property(readonly, nonatomic) VKStyleManager *styleManager;
- (unsigned long long)mapLayerPosition;
- (void)setHorizonColor:(Matrix_5173352a)arg1;
- (Matrix_5173352a)horizonColor;
- (void)setFillColor:(Matrix_5173352a)arg1;
- (Matrix_5173352a)fillColor;
- (BOOL)shouldLayoutWithoutStyleManager;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

