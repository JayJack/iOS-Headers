//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "SBUIEmergencyCallServiceInterface.h"

@class UIColor;

@interface SBUIEmergencyCallServiceViewController : UIViewController <SBUIEmergencyCallServiceInterface>
{
    int _backgroundStyle;
    UIColor *_tintColor;
}

+ (id)_exportedInterface;
+ (id)_remoteViewControllerInterface;
@property(readonly, nonatomic) UIColor *tintColor; // @synthesize tintColor=_tintColor;
@property(nonatomic) int backgroundStyle; // @synthesize backgroundStyle=_backgroundStyle;
- (void)noteTintColorForBackgroundStyleChanged:(id)arg1;
- (void)backgroundStyle:(CDUnknownBlockType)arg1;
- (void)dealloc;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

@end

