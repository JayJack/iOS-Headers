//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "IDSSessionDelegate.h"

@class IDSSession, NSData, NSString;

@protocol IDSSessionDelegatePrivate <IDSSessionDelegate>

@optional
- (void)session:(IDSSession *)arg1 receivedSessionEndFromID:(NSString *)arg2 withData:(NSData *)arg3;
- (void)session:(IDSSession *)arg1 receivedSessionMessageFromID:(NSString *)arg2 withData:(NSData *)arg3;
- (void)session:(IDSSession *)arg1 receivedInvitationCancelFromID:(NSString *)arg2 withData:(NSData *)arg3;
- (void)session:(IDSSession *)arg1 receivedInvitationDeclineFromID:(NSString *)arg2 withData:(NSData *)arg3;
- (void)session:(IDSSession *)arg1 receivedInvitationAcceptFromID:(NSString *)arg2 withData:(NSData *)arg3;
@end

