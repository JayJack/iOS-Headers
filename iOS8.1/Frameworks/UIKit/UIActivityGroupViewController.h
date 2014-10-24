//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <UIKit/UICollectionViewController.h>

#import "UIGestureRecognizerDelegate.h"
#import "_UIActivityGroupViewDelegateFlowLayout.h"

@class NSArray, NSDictionary, NSIndexPath, NSString, UILongPressGestureRecognizer, _UIActivityUserDefaults, _UIUserDefaultsActivity;

@interface UIActivityGroupViewController : UICollectionViewController <_UIActivityGroupViewDelegateFlowLayout, UIGestureRecognizerDelegate>
{
    BOOL _darkStyleOnLegacyApp;
    BOOL _embedded;
    BOOL _picker;
    BOOL _hasActivities;
    BOOL _activityIndexDidChangeWhileDragging;
    BOOL _allowsUserCustomization;
    id <UIActivityGroupViewControllerDelegate> _delegate;
    int _activityCategory;
    NSDictionary *_customActivityTitles;
    NSArray *_activities;
    NSArray *_visibleActivities;
    _UIActivityUserDefaults *_userDefaults;
    _UIUserDefaultsActivity *_userDefaultsActivity;
    UILongPressGestureRecognizer *_editingGestureRecognizer;
    NSIndexPath *_indexPathForMenuActivity;
    struct CGPoint _initialDraggingLocation;
}

@property(nonatomic) BOOL allowsUserCustomization; // @synthesize allowsUserCustomization=_allowsUserCustomization;
@property(copy, nonatomic) NSIndexPath *indexPathForMenuActivity; // @synthesize indexPathForMenuActivity=_indexPathForMenuActivity;
@property(nonatomic) BOOL activityIndexDidChangeWhileDragging; // @synthesize activityIndexDidChangeWhileDragging=_activityIndexDidChangeWhileDragging;
@property(nonatomic) struct CGPoint initialDraggingLocation; // @synthesize initialDraggingLocation=_initialDraggingLocation;
@property(retain, nonatomic) UILongPressGestureRecognizer *editingGestureRecognizer; // @synthesize editingGestureRecognizer=_editingGestureRecognizer;
@property(retain, nonatomic) _UIUserDefaultsActivity *userDefaultsActivity; // @synthesize userDefaultsActivity=_userDefaultsActivity;
@property(retain, nonatomic) _UIActivityUserDefaults *userDefaults; // @synthesize userDefaults=_userDefaults;
@property(copy, nonatomic) NSArray *visibleActivities; // @synthesize visibleActivities=_visibleActivities;
@property(nonatomic) BOOL hasActivities; // @synthesize hasActivities=_hasActivities;
@property(nonatomic, getter=isPicker) BOOL picker; // @synthesize picker=_picker;
@property(nonatomic, getter=isEmbedded) BOOL embedded; // @synthesize embedded=_embedded;
@property(nonatomic) BOOL darkStyleOnLegacyApp; // @synthesize darkStyleOnLegacyApp=_darkStyleOnLegacyApp;
@property(copy, nonatomic) NSArray *activities; // @synthesize activities=_activities;
@property(copy, nonatomic) NSDictionary *customActivityTitles; // @synthesize customActivityTitles=_customActivityTitles;
@property(nonatomic) int activityCategory; // @synthesize activityCategory=_activityCategory;
@property(nonatomic) id <UIActivityGroupViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)activityUserDefaultsDidChange:(id)arg1;
- (void)ignoreUserDefaultsChangesWhileUsingBlock:(CDUnknownBlockType)arg1;
- (void)unregisterForActivityUserDefaultsChanges;
- (void)registerForActivityUserDefaultsChanges;
- (void)hideItemAtIndexPath:(id)arg1;
- (id)activityGroupViewLayout;
- (id)collectionView:(id)arg1 layout:(id)arg2 needsContainerViewForDraggingItemAtIndexPath:(id)arg3;
- (id)collectionView:(id)arg1 layout:(id)arg2 moveItemAtIndexPath:(id)arg3 toIndexPath:(id)arg4;
- (id)targetIndexPathForMoveFromRowAtIndexPath:(id)arg1 toProposedIndexPath:(id)arg2;
- (void)handleEditingGesture:(id)arg1;
- (BOOL)gestureRecognizerShouldBegin:(id)arg1;
- (struct UIEdgeInsets)_preferredSectionInset;
- (struct CGSize)_preferredCellSize;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 referenceSizeForFooterInSection:(int)arg3;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 referenceSizeForHeaderInSection:(int)arg3;
- (struct UIEdgeInsets)collectionView:(id)arg1 layout:(id)arg2 insetForSectionAtIndex:(int)arg3;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (BOOL)collectionView:(id)arg1 shouldSelectItemAtIndexPath:(id)arg2;
- (BOOL)collectionView:(id)arg1 shouldHighlightItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 willDisplayCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (int)collectionView:(id)arg1 numberOfItemsInSection:(int)arg2;
- (void)reloadItemForActivityOfTypeIfNeeded:(id)arg1;
- (id)activityForItemAtIndexPath:(id)arg1;
- (void)renameActivity:(id)arg1;
- (void)hideActivity:(id)arg1;
- (void)setEditing:(BOOL)arg1 animated:(BOOL)arg2;
- (BOOL)canBecomeFirstResponder;
- (void)_setVisibleActivities:(id)arg1 animated:(BOOL)arg2;
- (void)_updateVisibleActivitiesAnimated:(BOOL)arg1;
- (void)_setActivities:(id)arg1 animated:(BOOL)arg2;
- (void)setActivities:(id)arg1 animated:(BOOL)arg2;
- (void)willRotateToInterfaceOrientation:(int)arg1 duration:(double)arg2;
- (void)viewDidLoad;
- (void)dealloc;
- (id)initWithActivityCategory:(int)arg1 userDefaults:(id)arg2 userDefaultsIdentifier:(id)arg3;
- (id)initWithActivityCategory:(int)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end
