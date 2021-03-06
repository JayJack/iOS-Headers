/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@interface XPCDetailedSignature : NSObject
{
    unsigned long long _argumentCount;
    Class *_classes;
}

+ (id)signatureWithoutArguments;
+ (id)signatureWithArgumentCount:(unsigned long long)arg1 classes:(Class)arg2;
- (Class)argumentClassAtIndex:(unsigned long long)arg1;
- (void)setClass:(Class)arg1 forArgumentAtIndex:(unsigned long long)arg2;
- (void)dealloc;
- (id)initWithArgumentCount:(unsigned long long)arg1;

@end

