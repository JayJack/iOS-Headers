/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <VoiceMemos/RCWaveform.h>

@interface RCMutableWaveform : RCWaveform
{
}

- (id)classForCoder;
- (struct _NSRange)_rangeOfSegmentsIntersectingTimeRange:(CDStruct_73a5d3ca)arg1;
- (id)_mutableSegmentsIntersectingTimeRange:(CDStruct_73a5d3ca)arg1 intersectionRange:(struct _NSRange *)arg2;
- (id)_segmentsByShiftingSegments:(id)arg1 byTimeOffset:(double)arg2;
- (void)_mergeBoundarySegmentsInArray:(id)arg1;
- (BOOL)clipToTimeRange:(CDStruct_73a5d3ca)arg1;

@end
