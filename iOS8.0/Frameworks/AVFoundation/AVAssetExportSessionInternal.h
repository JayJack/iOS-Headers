//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class AVAsset, AVAssetTrack, AVAudioMix, AVCustomVideoCompositorSession, AVMetadataItemFilter, AVVideoComposition, AVWeakReference, NSArray, NSError, NSObject<OS_dispatch_queue>, NSObject<OS_dispatch_semaphore>, NSString, NSURL;

@interface AVAssetExportSessionInternal : NSObject
{
    AVWeakReference *weakReference;
    NSObject<OS_dispatch_queue> *readWriteQueue;
    struct OpaqueFigRemaker *remaker;
    int status;
    NSError *error;
    float progress;
    AVAsset *asset;
    AVAssetTrack *firstVideoTrack;
    NSString *preset;
    NSString *preset16x9;
    NSURL *outputURL;
    NSString *outputFileType;
    NSString *actualOutputFileType;
    NSString *audioTimePitchAlgorithm;
    AVAudioMix *audioMix;
    AVVideoComposition *videoComposition;
    void *figVideoCompositor;
    AVCustomVideoCompositorSession *customVideoCompositorSession;
    NSArray *metadata;
    AVMetadataItemFilter *metadataItemFilter;
    CDStruct_e83c9415 timeRange;
    CDStruct_1b6d18a9 minVideoFrameDuration;
    BOOL canUseFastFrameRateConversion;
    NSString *videoFrameRateConversionAlgorithm;
    BOOL waitingForFastFrameRateResponse;
    NSObject<OS_dispatch_semaphore> *canUseFastFrameRateConversionSemaphore;
    long long maxFileSize;
    CDUnknownBlockType handler;
    BOOL optimizeForNetworkUse;
    BOOL useMultiPass;
    NSURL *directoryForTemporaryFiles;
    BOOL outputFileCreatedByRemaker;
    long compatibleFileTypesDispatchOncePredicate;
    NSArray *compatibleFileTypes;
    NSObject<OS_dispatch_queue> *remakerNotificationSerializationQueue;
}

@end
