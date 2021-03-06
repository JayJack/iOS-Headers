//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class SSSQLiteDatabase, SSSQLiteQueryDescriptor;

@interface SSSQLiteQuery : NSObject
{
    SSSQLiteDatabase *_database;
    SSSQLiteQueryDescriptor *_descriptor;
}

- (id)_newSelectSQLWithProperties:(const id *)arg1 count:(unsigned int)arg2;
@property(readonly) SSSQLiteQueryDescriptor *queryDescriptor;
- (void)enumeratePersistentIDsAndProperties:(const id *)arg1 count:(unsigned int)arg2 usingBlock:(CDUnknownBlockType)arg3;
- (void)enumeratePersistentIDsUsingBlock:(CDUnknownBlockType)arg1;
- (void)enumerateMemoryEntitiesWithProperties:(id)arg1 usingBlock:(CDUnknownBlockType)arg2;
- (void)enumerateMemoryEntitiesUsingBlock:(CDUnknownBlockType)arg1;
- (BOOL)deleteAllEntities;
@property(readonly) SSSQLiteDatabase *database;
- (BOOL)createTemporaryTableWithName:(id)arg1 properties:(const id *)arg2 count:(unsigned int)arg3;
@property(readonly) int countOfEntities;
- (id)copySelectSQLWithProperties:(const id *)arg1 count:(unsigned int)arg2;
- (id)copyEntityIdentifiers;
- (void)bindToSelectStatement:(struct sqlite3_stmt *)arg1 bindingIndex:(inout int *)arg2;
- (void)dealloc;
- (id)initWithDatabase:(id)arg1 descriptor:(id)arg2;

@end

