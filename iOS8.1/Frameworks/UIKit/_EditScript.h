//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSMutableArray, _IntArray2D;

__attribute__((visibility("hidden")))
@interface _EditScript : NSObject
{
    BOOL _orderAtomsAscending;
    _IntArray2D *_distanceMatrix;
    int _currentOperation;
    id <_EditScriptData> _itemAData;
    id <_EditScriptData> _itemBData;
    NSArray *_operationPrecedenceArray;
    NSMutableArray *_script;
}

@property(retain, nonatomic) NSMutableArray *script; // @synthesize script=_script;
@property(copy, nonatomic) NSArray *operationPrecedenceArray; // @synthesize operationPrecedenceArray=_operationPrecedenceArray;
- (void)finalizeCurrentScriptAtom;
- (void)addToCurrentScriptAtomEditOperation:(int)arg1 editIndex:(unsigned int)arg2 newText:(id)arg3 indexInArrayB:(unsigned int)arg4;
- (void)initializeCurrentScriptAtom;
- (void)computeEditsFromMatrix;
- (void)computeDistanceMatrix;
- (id)description;
- (id)initWithOperationPrecedence:(int)arg1 orderAtomsAscending:(BOOL)arg2;
- (id)operationPrecedenceArrayFromOperationPrecedence:(int)arg1;
- (void)dealloc;

@end
