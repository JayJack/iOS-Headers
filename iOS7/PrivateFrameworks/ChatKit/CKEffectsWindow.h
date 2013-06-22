/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "UIAutoRotatingWindow.h"

#import <ChatKit/CKGradientReferenceView-Protocol.h>

@interface CKEffectsWindow : UIAutoRotatingWindow <CKGradientReferenceView>
{
    BOOL _shadowHidden;
    struct CGRect _gradientFrame;
}

@property(nonatomic) struct CGRect gradientFrame; // @synthesize gradientFrame=_gradientFrame;
@property(nonatomic, getter=isShadowHidden) BOOL shadowHidden; // @synthesize shadowHidden=_shadowHidden;
- (void)setBounds:(struct CGRect)arg1;
- (void)setFrame:(struct CGRect)arg1;
- (id)init;
- (void)dealloc;

@end
