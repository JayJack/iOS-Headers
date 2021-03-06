//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <iTunesStoreUI/SUScriptNativeObject.h>

#import "SUScriptTextFieldDelegate.h"

@class NSString, SUScriptTextFieldDelegate;

@interface SUScriptTextFieldNativeObject : SUScriptNativeObject <SUScriptTextFieldDelegate>
{
    SUScriptTextFieldDelegate *_textFieldDelegate;
}

- (void)_setNativeObjectDelegate:(id)arg1;
- (void)_sendScriptDidChange;
- (id)_nativeObjectDelegate;
- (void)_textDidEndEditingOnExit:(id)arg1;
- (void)_textDidChange:(id)arg1;
- (BOOL)textFieldShouldBeginEditing:(id)arg1;
- (void)textFieldDidEndEditing:(id)arg1;
- (void)textFieldDidBeginEditing:(id)arg1;
- (void)searchBarTextDidEndEditing:(id)arg1;
- (void)searchBarTextDidBeginEditing:(id)arg1;
- (BOOL)searchBarShouldBeginEditing:(id)arg1;
- (void)searchBarSearchButtonClicked:(id)arg1;
- (void)searchBar:(id)arg1 textDidChange:(id)arg2;
- (void)setupNativeObject;
- (void)destroyNativeObject;
@property(nonatomic) float width;
@property(copy, nonatomic) NSString *value;
@property(copy, nonatomic) NSString *placeholder;
@property(nonatomic) int keyboardType;
@property(nonatomic) int autocorrectionType;
@property(nonatomic) int autocapitalizationType;
- (BOOL)resignFirstResponder;
- (BOOL)becomeFirstResponder;
- (void)dealloc;

@end

