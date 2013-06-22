/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <PhotosUI/PUFeedCell.h>

@class NSAttributedString, UIButton, UIImage, UIImageView, UILabel;

@interface PUFeedTextCell : PUFeedCell
{
    NSAttributedString *_attributedText;
    int _numberOfTextLines;
    float _textDetailTextSpacing;
    NSAttributedString *_attributedDetailText;
    int _numberOfDetailTextLines;
    int _textAlignment;
    UIImage *_iconImage;
    int _iconLocation;
    int _tappableArea;
    int _buttonType;
    int _buttonSize;
    int _buttonHorizontalAlignment;
    float _buttonPadding;
    UILabel *__label;
    UILabel *__detailLabel;
    UIImageView *__iconImageView;
    UIButton *__button;
    struct UIOffset _iconOffset;
    struct UIOffset _buttonOffset;
    struct UIEdgeInsets _contentInsets;
    struct UIEdgeInsets _iconPadding;
}

@property(retain, nonatomic, setter=_setButton:) UIButton *_button; // @synthesize _button=__button;
@property(retain, nonatomic, setter=_setIconImageView:) UIImageView *_iconImageView; // @synthesize _iconImageView=__iconImageView;
@property(retain, nonatomic, setter=_setDetailLabel:) UILabel *_detailLabel; // @synthesize _detailLabel=__detailLabel;
@property(retain, nonatomic, setter=_setLabel:) UILabel *_label; // @synthesize _label=__label;
@property(nonatomic) float buttonPadding; // @synthesize buttonPadding=_buttonPadding;
@property(nonatomic) struct UIOffset buttonOffset; // @synthesize buttonOffset=_buttonOffset;
@property(nonatomic) int buttonHorizontalAlignment; // @synthesize buttonHorizontalAlignment=_buttonHorizontalAlignment;
@property(nonatomic) int buttonSize; // @synthesize buttonSize=_buttonSize;
@property(nonatomic) int buttonType; // @synthesize buttonType=_buttonType;
@property(nonatomic) int tappableArea; // @synthesize tappableArea=_tappableArea;
@property(nonatomic) struct UIOffset iconOffset; // @synthesize iconOffset=_iconOffset;
@property(nonatomic) struct UIEdgeInsets iconPadding; // @synthesize iconPadding=_iconPadding;
@property(nonatomic) int iconLocation; // @synthesize iconLocation=_iconLocation;
@property(retain, nonatomic) UIImage *iconImage; // @synthesize iconImage=_iconImage;
@property(nonatomic) int textAlignment; // @synthesize textAlignment=_textAlignment;
@property(nonatomic) int numberOfDetailTextLines; // @synthesize numberOfDetailTextLines=_numberOfDetailTextLines;
@property(retain, nonatomic) NSAttributedString *attributedDetailText; // @synthesize attributedDetailText=_attributedDetailText;
@property(nonatomic) float textDetailTextSpacing; // @synthesize textDetailTextSpacing=_textDetailTextSpacing;
@property(nonatomic) int numberOfTextLines; // @synthesize numberOfTextLines=_numberOfTextLines;
@property(retain, nonatomic) NSAttributedString *attributedText; // @synthesize attributedText=_attributedText;
@property(nonatomic) struct UIEdgeInsets contentInsets; // @synthesize contentInsets=_contentInsets;
- (void).cxx_destruct;
- (void)_configureButton:(id)arg1 withType:(int)arg2 size:(int)arg3;
- (struct CGSize)_maximumPossibleTextSizeForButtonWithType:(int)arg1 size:(int)arg2;
- (struct CGSize)_textSizeForButtonWithType:(int)arg1 size:(int)arg2;
- (void)_handleButton:(id)arg1;
- (id)_delegate;
- (void)_updateButton;
- (void)_updateIconImageView;
- (void)_updateDetailLabel;
- (BOOL)shouldRecognizerTap:(id)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end
