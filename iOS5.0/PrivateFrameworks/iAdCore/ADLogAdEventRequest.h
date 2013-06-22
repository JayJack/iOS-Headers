/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "PBRequest.h"

@class ADLogMetaData, NSMutableArray;

@interface ADLogAdEventRequest : PBRequest
{
    ADLogMetaData *_metaData;
    NSMutableArray *_events;
}

@property(retain, nonatomic) NSMutableArray *events; // @synthesize events=_events;
@property(retain, nonatomic) ADLogMetaData *metaData; // @synthesize metaData=_metaData;
- (Class)responseClass;
- (unsigned int)requestTypeCode;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
- (id)eventAtIndex:(unsigned int)arg1;
- (unsigned int)eventsCount;
- (void)addEvent:(id)arg1;
@property(readonly, nonatomic) BOOL hasMetaData;
- (void)dealloc;

@end
