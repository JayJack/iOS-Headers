/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "UIControl.h"

@interface GKRibbonSegmentedControl : UIControl
{
    BOOL _settingAppearance;
    unsigned int _selectedSegment;
    id <GKRibbonSegmentedControlDelegate> _delegate;
    unsigned int _selectedSegmentIndex;
}

@property(nonatomic) id <GKRibbonSegmentedControlDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) float minimumWidth; // @dynamic minimumWidth;
@property(readonly, nonatomic) float defaultHeight; // @dynamic defaultHeight;
- (void)drawRect:(struct CGRect)arg1;
@property(nonatomic) unsigned int selectedSegmentIndex; // @synthesize selectedSegmentIndex=_selectedSegmentIndex;
- (void)_tap:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

