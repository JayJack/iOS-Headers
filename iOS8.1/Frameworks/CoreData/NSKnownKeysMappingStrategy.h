//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSFastEnumeration.h"
#import "NSSecureCoding.h"

@interface NSKnownKeysMappingStrategy : NSObject <NSSecureCoding, NSFastEnumeration>
{
}

+ (id)alloc;
+ (id)allocWithZone:(struct _NSZone *)arg1;
- (unsigned int)countByEnumeratingWithState:(CDStruct_11f37819 *)arg1 objects:(id *)arg2 count:(unsigned int)arg3;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
@property(readonly, nonatomic) unsigned int length;
@property(readonly, nonatomic) id *keys;
- (unsigned int)fastIndexForKnownKey:(id)arg1;
- (unsigned int)indexForKey:(id)arg1;
- (id)initForKeys:(id)arg1;
- (id)initForKeys:(id *)arg1 count:(unsigned int)arg2;

@end
