//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MPAVItem.h"

@class NSString, RadioTrack;

@interface MPAVItem (RURadioAVItemAdditions)
- (id)_plistKeyForMPMediaItemProperty:(id)arg1;
@property(readonly, nonatomic) BOOL supportsRadioTrackActions;
@property(readonly, nonatomic) RadioTrack *radioTrack;
@property(readonly, nonatomic) BOOL isRadioItem;
- (void)addDerivedStationForArtist:(BOOL)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
@property(readonly, copy, nonatomic) NSString *albumBuyButtonText;
@property(readonly, nonatomic) int albumBuyButtonType;
@end
