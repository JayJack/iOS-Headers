/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <Foundation/NSFileManager.h>

@interface NSFileManager (NSURLExtrasInternal)
- (_Bool)_web_changeFileAttributes_nowarn:(id)arg1 atPath:(id)arg2;
- (void)_web_noteFileChangedAtPath_nowarn:(id)arg1;
- (_Bool)_web_createIntermediateDirectoriesForPath_nowarn:(id)arg1 attributes:(id)arg2;
- (id)_web_startupVolumeName_nowarn;
- (id)_web_carbonPathForPath_nowarn:(id)arg1;
- (_Bool)_web_fileExistsAtPath_nowarn:(id)arg1 isDirectory:(_Bool *)arg2 traverseLink:(_Bool)arg3;
@end
