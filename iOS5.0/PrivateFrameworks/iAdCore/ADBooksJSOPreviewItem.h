/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "QLPreviewItem-Protocol.h"

@class NSString, NSURL;

@interface ADBooksJSOPreviewItem : NSObject <QLPreviewItem>
{
    NSURL *_previewItemURL;
    NSString *_previewItemTitle;
}

@property(readonly) NSString *previewItemTitle; // @synthesize previewItemTitle=_previewItemTitle;
@property(readonly) NSURL *previewItemURL; // @synthesize previewItemURL=_previewItemURL;
- (void)dealloc;
- (id)initWithURL:(id)arg1 andTitle:(id)arg2;

@end

