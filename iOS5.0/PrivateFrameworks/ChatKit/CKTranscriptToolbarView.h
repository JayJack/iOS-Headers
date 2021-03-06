/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "UIView.h"

#import "CKTranscriptButtonView-Protocol.h"

@class UIButton;

@interface CKTranscriptToolbarView : UIView <CKTranscriptButtonView>
{
    id <CKTranscriptButtonViewDelegate> _transcriptButtonDelegate;
    BOOL _cancelButtonVisible;
    BOOL _hasContact;
    BOOL _isGroupMessage;
    UIButton *_editButton;
    UIButton *_contactButton;
    UIButton *_cancelButton;
}

@property(nonatomic, getter=isCancelButtonVisible) BOOL cancelButtonVisible; // @synthesize cancelButtonVisible=_cancelButtonVisible;
@property(nonatomic) BOOL hasContact; // @synthesize hasContact=_hasContact;
- (id)initAsGroupMessage:(BOOL)arg1 hasMessages:(BOOL)arg2;
- (void)dealloc;
- (void)sizeToFit;
- (void)layoutSubviews;
- (struct CGRect)frameForButton:(short)arg1;
- (void)_buttonClicked:(id)arg1;
@property(readonly, nonatomic) BOOL isGroupMessage; // @synthesize isGroupMessage=_isGroupMessage;
@property(nonatomic) id <CKTranscriptButtonViewDelegate> transcriptButtonDelegate; // @synthesize transcriptButtonDelegate=_transcriptButtonDelegate;

@end

