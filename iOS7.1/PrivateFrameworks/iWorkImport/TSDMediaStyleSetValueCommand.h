//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <iWorkImport/TSDStyledInfoSetStyleCommand.h>

@class TSSPropertyMap;

__attribute__((visibility("hidden")))
@interface TSDMediaStyleSetValueCommand : TSDStyledInfoSetStyleCommand
{
    TSSPropertyMap *mPropertyMap;
}

- (void)computeStyle;
- (void)saveToArchiver:(id)arg1;
- (void)saveToArchive:(struct MediaStyleSetValueCommandArchive *)arg1 archiver:(id)arg2;
- (id)initFromUnarchiver:(id)arg1;
- (void)loadFromArchive:(const struct MediaStyleSetValueCommandArchive *)arg1 unarchiver:(id)arg2;
- (void)dealloc;
- (id)initWithMedia:(id)arg1 property:(int)arg2 boxedValue:(id)arg3;

@end

