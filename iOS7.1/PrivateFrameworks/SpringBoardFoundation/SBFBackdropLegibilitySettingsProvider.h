//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SBFLegibilitySettingsProvider.h"
#import "_UIBackdropViewObserver.h"

@class _UIBackdropView, _UILegibilitySettings;

@interface SBFBackdropLegibilitySettingsProvider : NSObject <_UIBackdropViewObserver, SBFLegibilitySettingsProvider>
{
    _UIBackdropView *_backdropView;
    id <SBFLegibilitySettingsProviderDelegate> _delegate;
    _UILegibilitySettings *_legibilitySettings;
}

@property(readonly, nonatomic) _UILegibilitySettings *legibilitySettings; // @synthesize legibilitySettings=_legibilitySettings;
@property(nonatomic) id <SBFLegibilitySettingsProviderDelegate> delegate; // @synthesize delegate=_delegate;
- (void)backdropViewDidChange:(id)arg1;
- (void)dealloc;
- (id)initWithBackdropView:(id)arg1;

@end
