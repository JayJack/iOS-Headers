//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface AVAudioSessionChannelDescription : NSObject
{
    void *_impl;
}

+ (id)privateCreateArray:(id)arg1 portUID:(id)arg2;
+ (id)privateCreate:(id)arg1 portUID:(id)arg2 channelNumber:(unsigned long)arg3;
- (struct ChannelDescriptionImpl *)privateGetImplementation;
- (id)description;
@property(readonly) unsigned long channelLabel;
@property(readonly) unsigned int channelNumber;
@property(readonly) NSString *owningPortUID;
@property(readonly) NSString *channelName;
- (unsigned int)hash;
- (BOOL)isEqualToChannel:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (void)dealloc;
- (id)init;

@end
