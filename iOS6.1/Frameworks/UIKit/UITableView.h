/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <UIKit/UIScrollView.h>

#import "NSCoding-Protocol.h"
#import "UIGestureRecognizerDelegate-Protocol.h"

@class NSArray, NSIndexPath, NSMutableArray, NSMutableDictionary, NSTimer, UIColor, UIGestureRecognizer, UILongPressGestureRecognizer, UIRefreshControl, UISwipeGestureRecognizer, UITableViewCell, UITouch, UIView;

@interface UITableView : UIScrollView <UIGestureRecognizerDelegate, NSCoding>
{
    id <UITableViewDataSource> _dataSource;
    id _rowData;
    float _rowHeight;
    float _sectionHeaderHeight;
    float _sectionFooterHeight;
    struct CGRect _visibleBounds;
    struct _NSRange _visibleRows;
    NSMutableArray *_visibleCells;
    NSIndexPath *_firstResponderIndexPath;
    UIView *_firstResponderView;
    unsigned int _firstResponderViewType;
    NSMutableDictionary *_reusableTableCells;
    NSMutableDictionary *_nibMap;
    NSMutableDictionary *_headerFooterNibMap;
    NSMutableDictionary *_nibExternalObjectsTables;
    UITableViewCell *_topSeparatorCell;
    id _topSeparator;
    NSMutableArray *_extraSeparators;
    struct __CFDictionary *_visibleHeaderViews;
    struct __CFDictionary *_visibleFooterViews;
    NSMutableDictionary *_reusableHeaderFooterViews;
    NSMutableArray *_highlightedIndexPaths;
    NSMutableArray *_selectedIndexPaths;
    int _swipeToDeleteSection;
    int _swipeToDeleteRow;
    NSIndexPath *_pendingSelectionIndexPath;
    NSArray *_pendingDeselectionIndexPaths;
    UIView *_touchedContentView;
    UIView *_newContentView;
    id _deleteAnimationSupport;
    id _reorderingSupport;
    UIView *_backgroundView;
    UIView *_index;
    UIView *_tableHeaderBackgroundView;
    UIView *_tableHeaderView;
    UIView *_tableFooterView;
    id _countLabel;
    int _tableReloadingSuspendedCount;
    int _sectionIndexMinimumDisplayRowCount;
    NSMutableArray *_insertItems;
    NSMutableArray *_deleteItems;
    NSMutableArray *_reloadItems;
    NSMutableArray *_moveItems;
    UIColor *_separatorColor;
    UIColor *_separatorTopShadowColor;
    UIColor *_separatorBottomShadowColor;
    UIColor *_checkmarkColor;
    UIColor *_sectionBorderColor;
    UIColor *_indexColor;
    UIColor *_indexBackgroundColor;
    NSArray *_defaultSectionIndexTitles;
    UISwipeGestureRecognizer *_swipeGestureRecognizer;
    UIGestureRecognizer *_gobblerGestureRecognizer;
    int _updateCount;
    NSIndexPath *_displayingCellContentStringIndexPath;
    UILongPressGestureRecognizer *_longPressGestureRecognizer;
    NSTimer *_longPressAutoscrollTimer;
    int _longPressAutoscrollDirection;
    struct UIEdgeInsets _sectionContentInset;
    UITouch *_currentTouch;
    UIRefreshControl *_refreshControl;
    NSMutableDictionary *_cellClassDict;
    NSMutableDictionary *_headerFooterClassDict;
    float _topPadding;
    float _bottomPadding;
    id _updateCompletionHandler;
    struct {
        unsigned int dataSourceNumberOfRowsInSection:1;
        unsigned int dataSourceCellForRow:1;
        unsigned int dataSourceNumberOfSectionsInTableView:1;
        unsigned int dataSourceTitleForHeaderInSection:1;
        unsigned int dataSourceTitleForFooterInSection:1;
        unsigned int dataSourceDetailTextForHeaderInSection:1;
        unsigned int dataSourceCommitEditingStyle:1;
        unsigned int dataSourceSectionIndexTitlesForTableView:1;
        unsigned int dataSourceSectionForSectionIndexTitle:1;
        unsigned int dataSourceCanEditRow:1;
        unsigned int dataSourceCanMoveRow:1;
        unsigned int dataSourceCanUpdateRow:1;
        unsigned int dataSourceShouldShowMenu:1;
        unsigned int dataSourceCanPerformAction:1;
        unsigned int dataSourcePerformAction:1;
        unsigned int dataSourceIndexPathForSectionIndexTitle:1;
        unsigned int delegateEditingStyleForRowAtIndexPath:1;
        unsigned int delegateTitleForDeleteConfirmationButtonForRowAtIndexPath:1;
        unsigned int delegateShouldIndentWhileEditing:1;
        unsigned int dataSourceMoveRow:1;
        unsigned int delegateCellForRow:1;
        unsigned int delegateWillDisplayCell:1;
        unsigned int delegateDidEndDisplayingCell:1;
        unsigned int delegateDidEndDisplayingSectionHeader:1;
        unsigned int delegateDidEndDisplayingSectionFooter:1;
        unsigned int delegateHeightForRow:1;
        unsigned int delegateHeightForSectionHeader:1;
        unsigned int delegateTitleWidthForSectionHeader:1;
        unsigned int delegateHeightForSectionFooter:1;
        unsigned int delegateTitleWidthForSectionFooter:1;
        unsigned int delegateViewForHeaderInSection:1;
        unsigned int delegateViewForFooterInSection:1;
        unsigned int delegateDisplayedItemCountForRowCount:1;
        unsigned int delegateDisplayStringForRowCount:1;
        unsigned int delegateAccessoryTypeForRow:1;
        unsigned int delegateAccessoryButtonTappedForRow:1;
        unsigned int delegateWillSelectRow:1;
        unsigned int delegateWillDeselectRow:1;
        unsigned int delegateDidSelectRow:1;
        unsigned int delegateDidDeselectRow:1;
        unsigned int delegateWillBeginEditing:1;
        unsigned int delegateDidEndEditing:1;
        unsigned int delegateWillMoveToRow:1;
        unsigned int delegateIndentationLevelForRow:1;
        unsigned int delegateWantsHeaderForSection:1;
        unsigned int delegateHeightForRowsInSection:1;
        unsigned int delegateMargin:1;
        unsigned int delegateHeaderTitleAlignment:1;
        unsigned int delegateFooterTitleAlignment:1;
        unsigned int delegateFrameForSectionIndexGivenProposedFrame:1;
        unsigned int delegateDidFinishReload:1;
        unsigned int delegateHeightForHeader:1;
        unsigned int delegateHeightForFooter:1;
        unsigned int delegateViewForHeader:1;
        unsigned int delegateViewForFooter:1;
        unsigned int delegateCalloutTargetRectForCell;
        unsigned int delegateShouldShowMenu:1;
        unsigned int delegateCanPerformAction:1;
        unsigned int delegatePerformAction:1;
        unsigned int delegateWillBeginReordering:1;
        unsigned int delegateDidEndReordering:1;
        unsigned int delegateDidCancelReordering:1;
        unsigned int delegateWillDisplayHeaderViewForSection:1;
        unsigned int delegateWillDisplayFooterViewForSection:1;
        unsigned int delegateShouldHighlightRow:1;
        unsigned int delegateDidHighlightRow:1;
        unsigned int delegateDidUnhighlightRow:1;
        unsigned int style:1;
        unsigned int separatorStyle:3;
        unsigned int wasEditing:1;
        unsigned int isEditing:1;
        unsigned int scrollsToSelection:1;
        unsigned int reloadSkippedDuringSuspension:1;
        unsigned int updating:1;
        unsigned int displaySkippedDuringSuspension:1;
        unsigned int needsReload:1;
        unsigned int updatingVisibleCellsManually:1;
        unsigned int scheduledUpdateVisibleCells:1;
        unsigned int scheduledUpdateVisibleCellsFrames:1;
        unsigned int warnForForcedCellUpdateDisabled:1;
        unsigned int displayTopSeparator:1;
        unsigned int countStringInsignificantRowCount:4;
        unsigned int needToAdjustExtraSeparators:1;
        unsigned int overlapsSectionHeaderViews:1;
        unsigned int ignoreDragSwipe:1;
        unsigned int ignoreTouchSelect:1;
        unsigned int lastHighlightedRowActive:1;
        unsigned int reloading:1;
        unsigned int allowsSelection:1;
        unsigned int allowsSelectionDuringEditing:1;
        unsigned int allowsMultipleSelection:1;
        unsigned int allowsMultipleSelectionDuringEditing:1;
        unsigned int showsSelectionImmediatelyOnTouchBegin:1;
        unsigned int indexHidden:1;
        unsigned int indexHiddenForSearch:1;
        unsigned int defaultShowsHorizontalScrollIndicator:1;
        unsigned int defaultShowsVerticalScrollIndicator:1;
        unsigned int sectionIndexTitlesLoaded:1;
        unsigned int tableHeaderViewShouldAutoHide:1;
        unsigned int tableHeaderViewIsHidden:1;
        unsigned int tableHeaderViewWasHidden:1;
        unsigned int tableHeaderViewShouldPin:1;
        unsigned int hideScrollIndicators:1;
        unsigned int sendReloadFinished:1;
        unsigned int keepFirstResponderWhenInteractionDisabled:1;
        unsigned int keepFirstResponderVisibleOnBoundsChange:1;
        unsigned int dontDrawTopShadowInGroupedSections:1;
        unsigned int forceStaticHeadersAndFooters;
        unsigned int displaysCellContentStringsOnTapAndHold:1;
        unsigned int displayingCellContentStringCallout:1;
        unsigned int longPressAutoscrollingActive:1;
        unsigned int adjustsRowHeightsForSectionLocation:1;
        unsigned int customSectionContentInsetSet:1;
        unsigned int inInit:1;
        unsigned int inSetBackgroundColor:1;
        unsigned int usingCustomBackgroundView:1;
        unsigned int rowDataIndexPathsAreValidForCurrentCells:1;
    } _tableFlags;
}

@property(nonatomic) int sectionIndexMinimumDisplayRowCount; // @synthesize sectionIndexMinimumDisplayRowCount=_sectionIndexMinimumDisplayRowCount;
@property(retain, nonatomic) UITouch *currentTouch; // @synthesize currentTouch=_currentTouch;
@property(nonatomic, getter=_sectionContentInset, setter=_setSectionContentInset:) struct UIEdgeInsets sectionContentInset; // @synthesize sectionContentInset=_sectionContentInset;
- (BOOL)_pinsTableHeaderView;
- (void)_setPinsTableHeaderView:(BOOL)arg1;
- (void)_updatePinnedTableHeader;
- (void)_configureCellForDisplay:(id)arg1 forIndexPath:(id)arg2;
@property(nonatomic, getter=_adjustsRowHeightsForSectionLocation, setter=_setAdjustsRowHeightsForSectionLocation:) BOOL adjustsRowHeightsForSectionLocation;
@property(nonatomic) BOOL allowsMultipleSelectionDuringEditing;
@property(nonatomic) BOOL allowsMultipleSelection;
- (float)_contentWidthForCell:(id)arg1 forRowAtIndexPath:(id)arg2;
- (void)_setExternalObjectTable:(id)arg1 forNibLoadingOfCellWithReuseIdentifier:(id)arg2;
- (void)_registerThing:(id)arg1 asNib:(BOOL)arg2 forViewType:(int)arg3 withReuseIdentifer:(id)arg4;
- (void)registerClass:(Class)arg1 forHeaderFooterViewReuseIdentifier:(id)arg2;
- (void)registerClass:(Class)arg1 forCellReuseIdentifier:(id)arg2;
- (void)registerNib:(id)arg1 forHeaderFooterViewReuseIdentifier:(id)arg2;
- (void)registerNib:(id)arg1 forCellReuseIdentifier:(id)arg2;
- (void)_scrollFirstResponderCellToVisible:(BOOL)arg1;
- (void)setContentInset:(struct UIEdgeInsets)arg1;
- (void)setContentOffset:(struct CGPoint)arg1;
- (void)setShowsVerticalScrollIndicator:(BOOL)arg1;
- (void)setShowsHorizontalScrollIndicator:(BOOL)arg1;
- (void)setEditing:(BOOL)arg1 animated:(BOOL)arg2;
@property(nonatomic, getter=isEditing) BOOL editing;
- (void)didMoveToWindow;
- (BOOL)cancelTouchTracking;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)setBounds:(struct CGRect)arg1;
- (void)setFrame:(struct CGRect)arg1;
- (void)resizeSubviewsWithOldSize:(struct CGSize)arg1;
- (struct CGSize)_contentSize;
- (void)_rectChangedWithNewSize:(struct CGSize)arg1 oldSize:(struct CGSize)arg2;
- (void)layoutSubviews;
- (BOOL)_scrollsToMakeFirstResponderVisible;
- (BOOL)touchesShouldCancelInContentView:(id)arg1;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (id)hitTest:(struct CGPoint)arg1 forEvent:(struct __GSEvent *)arg2;
- (void)mouseUp:(struct __GSEvent *)arg1;
- (void)mouseDragged:(struct __GSEvent *)arg1;
- (void)mouseDown:(struct __GSEvent *)arg1;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)_scrollViewDidEndDraggingWithDeceleration:(BOOL)arg1;
- (void)_scrollViewWillEndDraggingWithVelocity:(struct CGPoint)arg1 targetContentOffset:(struct CGPoint *)arg2;
- (void)_updateTableHeaderViewForAutoHideWithVelocity:(float)arg1 targetOffset:(struct CGPoint *)arg2;
- (BOOL)_cancelContentTouchWithEvent:(id)arg1 forced:(BOOL)arg2;
- (void)_beginTouchesInContentView:(id)arg1 touches:(id)arg2 withEvent:(id)arg3;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (BOOL)_beginTrackingWithEvent:(id)arg1;
- (void)_tableViewDeferredTouchesBegan:(id)arg1;
- (BOOL)_canSelectRowContainingHitView:(id)arg1;
- (BOOL)_gestureRecognizerShouldBegin:(id)arg1;
- (void)handleSwipe:(id)arg1;
- (int)swipeCell:(int)arg1 atPoint:(struct CGPoint)arg2;
- (int)swipe:(int)arg1 withEvent:(struct __GSEvent *)arg2;
- (BOOL)canHandleSwipes;
- (id)dequeueReusableHeaderFooterViewWithIdentifier:(id)arg1;
- (id)dequeueReusableCellWithIdentifier:(id)arg1 forIndexPath:(id)arg2;
- (id)dequeueReusableCellWithIdentifier:(id)arg1;
- (id)_dequeueReusableViewOfType:(int)arg1 withIdentifier:(id)arg2;
@property(retain, nonatomic) UIView *tableFooterView;
@property(retain, nonatomic) UIView *tableHeaderView;
- (void)setBackgroundColor:(id)arg1;
- (void)_setBackgroundColor:(id)arg1 animated:(BOOL)arg2;
- (void)_backgroundColorAnimationDidStop;
@property(retain, nonatomic) UIView *backgroundView;
- (void)_configureBackgroundView;
- (float)_bottomPadding;
- (void)_setBottomPadding:(float)arg1;
- (float)_topPadding;
- (void)_setTopPadding:(float)arg1;
- (BOOL)usesVariableMargins;
- (void)setUsesVariableMargins:(BOOL)arg1;
- (id)separatorBottomShadowColor;
- (void)setSeparatorBottomShadowColor:(id)arg1;
- (id)separatorTopShadowColor;
- (void)setSeparatorTopShadowColor:(id)arg1;
@property(retain, nonatomic) UIColor *separatorColor;
@property(nonatomic) int separatorStyle;
- (unsigned int)maximumNumberOfSectionIndexTitlesWithoutTruncation;
- (BOOL)showsSelectionImmediatelyOnTouchBegin;
- (void)_selectAllSelectedRows;
- (void)setShowsSelectionImmediatelyOnTouchBegin:(BOOL)arg1;
- (void)deselectRowAtIndexPath:(id)arg1 animated:(BOOL)arg2;
- (void)selectRowAtIndexPath:(id)arg1 animated:(BOOL)arg2 scrollPosition:(int)arg3;
- (void)_userSelectRowAtPendingSelectionIndexPath:(id)arg1;
- (void)_selectRowAtIndexPath:(id)arg1 animated:(BOOL)arg2 scrollPosition:(int)arg3 notifyDelegate:(BOOL)arg4;
- (void)_reloadDataIfNeeded;
- (void)unhighlightRowAtIndexPath:(id)arg1 animated:(BOOL)arg2;
- (BOOL)highlightRowAtIndexPath:(id)arg1 animated:(BOOL)arg2 scrollPosition:(int)arg3;
- (BOOL)_shouldHighlightInsteadOfSelectRowAtIndexPath:(id)arg1;
- (BOOL)_isRowMultiSelect:(id)arg1;
- (id)indexPathsForSelectedRows;
- (id)indexPathForSelectedRow;
@property(nonatomic) BOOL allowsSelectionDuringEditing;
@property(nonatomic) BOOL allowsSelection;
- (void)moveRowAtIndexPath:(id)arg1 toIndexPath:(id)arg2;
- (void)reloadRowsAtIndexPaths:(id)arg1 withRowAnimation:(int)arg2;
- (void)deleteRowsAtIndexPaths:(id)arg1 withRowAnimation:(int)arg2;
- (void)insertRowsAtIndexPaths:(id)arg1 withRowAnimation:(int)arg2;
- (void)_updateRowsAtIndexPaths:(id)arg1 updateAction:(int)arg2 withRowAnimation:(int)arg3;
- (void)moveSection:(int)arg1 toSection:(int)arg2;
- (void)_reloadSectionHeaderFooters:(id)arg1 withRowAnimation:(int)arg2;
- (void)reloadSections:(id)arg1 withRowAnimation:(int)arg2;
- (void)deleteSections:(id)arg1 withRowAnimation:(int)arg2;
- (void)insertSections:(id)arg1 withRowAnimation:(int)arg2;
- (void)_updateSections:(id)arg1 updateAction:(int)arg2 withRowAnimation:(int)arg3 headerFooterOnly:(BOOL)arg4;
- (id)_arrayForUpdateAction:(int)arg1;
- (void)_performBatchUpdates:(id)arg1 completion:(void)arg2;
- (void)_performBatchUpdates:(id)arg1 withContext:(void)arg2 completion:(id)arg3;
- (void)endUpdates;
- (void)endUpdatesWithContext:(id)arg1;
- (void)beginUpdates;
- (void)scrollToNearestSelectedRowAtScrollPosition:(int)arg1 animated:(BOOL)arg2;
- (void)scrollToRowAtIndexPath:(id)arg1 atScrollPosition:(int)arg2 animated:(BOOL)arg3;
- (struct CGPoint)_contentOffsetForScrollingToRowAtIndexPath:(id)arg1 atScrollPosition:(int)arg2;
- (id)indexPathsForVisibleRows;
- (id)visibleCells;
- (id)_visibleCells;
- (id)footerViewForSection:(int)arg1;
- (id)headerViewForSection:(int)arg1;
- (id)cellForRowAtIndexPath:(id)arg1;
- (id)indexPathsForRowsInRect:(struct CGRect)arg1;
- (id)indexPathForCell:(id)arg1;
- (id)indexPathForRowAtPoint:(struct CGPoint)arg1;
- (struct CGRect)_rectForTableFooterView;
- (struct CGRect)_rectForTableHeaderView;
- (struct CGRect)rectForRowAtIndexPath:(id)arg1;
- (struct CGRect)rectForFooterInSection:(int)arg1;
- (struct CGRect)rectForHeaderInSection:(int)arg1;
- (struct CGRect)rectForSection:(int)arg1;
- (int)numberOfRowsInSection:(int)arg1;
- (int)numberOfSections;
- (void)setOverlapsSectionHeaderViews:(BOOL)arg1;
- (BOOL)overlapsSectionHeaderViews;
- (BOOL)tableHeaderViewShouldAutoHide;
- (void)setTableHeaderViewShouldAutoHide:(BOOL)arg1;
- (struct CGRect)indexFrame;
- (BOOL)isIndexHidden;
- (void)setIndexHidden:(BOOL)arg1 animated:(BOOL)arg2;
- (void)setIndexHiddenForSearch:(BOOL)arg1;
- (id)indexPathForRowAtGlobalRow:(int)arg1;
- (int)globalRowForRowAtIndexPath:(id)arg1;
- (void)noteNumberOfRowsChanged;
- (void)_numberOfRowsDidChange;
- (void)reloadSectionIndexTitles;
- (void)reloadData;
@property(nonatomic) float sectionFooterHeight;
@property(nonatomic) float sectionHeaderHeight;
@property(nonatomic) float rowHeight;
@property(retain, nonatomic) UIColor *sectionIndexTrackingBackgroundColor;
@property(retain, nonatomic) UIColor *sectionIndexColor;
@property(nonatomic) id <UITableViewDelegate> delegate;
@property(nonatomic) id <UITableViewDataSource> dataSource;
@property(readonly, nonatomic) int style;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)_populateArchivedSubviews:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1 style:(int)arg2;
- (void)_setupTableViewCommon;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)_scriptingInfo;
- (id)_classMapForType:(int)arg1;
- (id)_nibMapForType:(int)arg1;
- (id)_cellReuseMapForType:(int)arg1;
- (void)_setHeaderAndFooterViewsFloat:(BOOL)arg1;
- (BOOL)_headerAndFooterViewsFloat;
- (void)_setSectionIndexTrackingBackgroundColor:(id)arg1;
- (id)_sectionIndexTrackingBackgroundColor;
- (void)_setSectionIndexColor:(id)arg1;
- (id)_sectionIndexColor;
- (int)_sectionForFooterView:(id)arg1;
- (int)_sectionForHeaderView:(id)arg1;
- (id)_defaultBackgroundView;
- (void)_scrollToTopHidingTableHeaderIfNecessary:(BOOL)arg1;
- (void)_scrollToTopHidingTableHeader:(BOOL)arg1;
- (void)_scrollToTopFromTouchAtScreenLocation:(struct CGPoint)arg1 resultHandler:(id)arg2;
- (void)setDeleteConfirmationIndexPath:(id)arg1 animated:(BOOL)arg2;
- (id)deleteConfirmationIndexPath;
- (void)_sendDidEndEditingForIndexPath:(id)arg1;
- (void)_sendWillBeginEditingForIndexPath:(id)arg1;
- (void)_validateSectionHeadersAndFooters;
- (void)_validateCells;
- (void)_languageChanged;
- (BOOL)_shouldDisplayTopSeparator;
- (BOOL)_hasSwipeToDeleteRow;
- (void)_updateShowScrollIndicatorsFlag;
- (void)flashScrollIndicators;
- (void)_sectionIndexChanged:(id)arg1;
- (void)_accessoryButtonAction:(id)arg1;
- (BOOL)_canEditRowAtIndexPath:(id)arg1;
- (void)_updateAnimationDidStop:(id)arg1 finished:(id)arg2 context:(id)arg3;
- (void)_updateWithItems:(id)arg1 updateSupport:(id)arg2;
- (void)_reuseHeaderFooterView:(id)arg1 isHeader:(BOOL)arg2 forSection:(int)arg3;
- (void)_reuseTableViewCell:(id)arg1 withIndexPath:(id)arg2;
- (void)_reuseTableViewSubview:(id)arg1 viewType:(int)arg2;
- (id)_newSectionViewWithFrame:(struct CGRect)arg1 forSection:(int)arg2 isHeader:(BOOL)arg3;
- (void)_setupSectionView:(id)arg1 isHeader:(BOOL)arg2 forSection:(int)arg3;
- (id)_reorderingSupport;
- (BOOL)_canMoveRowAtIndexPath:(id)arg1;
- (int)_accessoryTypeForCell:(id)arg1 forRowAtIndexPath:(id)arg2;
- (BOOL)_shouldIndentWhileEditingForRowAtIndexPath:(id)arg1;
- (id)_titleForDeleteConfirmationButtonForRowAtIndexPath:(id)arg1;
- (int)_editingStyleForRowAtIndexPath:(id)arg1;
- (id)_tableViewCellForContentView:(id)arg1;
- (void)_addContentSubview:(id)arg1 atBack:(BOOL)arg2;
- (void)_adjustExtraSeparators;
- (BOOL)_shouldDisplayExtraSeparatorsAtOffset:(float *)arg1;
- (struct _NSRange)_visibleGlobalRowsInRect:(struct CGRect)arg1;
- (void)_updateVisibleCellsNow:(BOOL)arg1;
- (void)_updateVisibleHeadersAndFootersNow:(BOOL)arg1;
- (void)_updateTableHeadersAndFootersNow:(BOOL)arg1;
- (void)_updateVisibleCellsImmediatelyIfNecessary;
- (void)_setNeedsVisibleCellsUpdate:(BOOL)arg1 withFrames:(BOOL)arg2;
- (void)_endCellAnimationsWithContext:(id)arg1;
- (void)_setupCellAnimations;
- (void)_updateIndex;
- (void)_updateIndexTitles:(id)arg1;
- (void)_updateIndexFrameSuppressingChangeNotification:(BOOL)arg1;
- (void)_updateIndexFrame;
- (void)_updateBackgroundView;
- (void)_updateBackgroundViewFrame;
- (void)_updateContentSize;
- (void)_setDrawsTopShadowInGroupedSections:(BOOL)arg1;
- (BOOL)_drawsTopShadowInGroupedSections;
- (float)heightForTableHeaderViewHiding;
- (float)heightForAutohidingTableHeaderView;
- (void)_setHeightForTableHeaderViewHiding:(float)arg1;
- (void)_adjustTableHeaderAndFooterViews;
- (void)setSectionBorderColor:(id)arg1;
- (id)sectionBorderColor;
- (id)multiselectCheckmarkColor;
- (void)setMultiselectCheckmarkColor:(id)arg1;
- (id)tableHeaderBackgroundColor;
- (void)setTableHeaderBackgroundColor:(id)arg1;
- (void)setCountString:(id)arg1;
- (void)setCountStringInsignificantRowCount:(unsigned int)arg1;
- (void)_setRowCount:(unsigned int)arg1;
- (unsigned int)_countStringRowCount;
- (void)_resumeReloads;
- (void)_suspendReloads;
- (void)_adjustReusableTableCells;
- (void)_adjustCountLabel;
- (void)_scheduleAdjustExtraSeparators;
- (void)_updateRowData;
- (void)_ensureRowDataIsLoaded;
- (float)_animationDuration;
- (void)_setDisplaysCellContentStringsOnTapAndHold:(BOOL)arg1;
- (BOOL)_displaysCellContentStringsOnTapAndHold;
- (void)setUsesGestureRecognizers:(BOOL)arg1;
- (void)_updateTableViewGestureRecognizersForEditing;
- (void)_removeTableViewGestureRecognizers;
- (void)_installTableViewGestureRecognizers;
- (id)_swipeGestureRecognizer;
- (id)_scrollTestExtraResults;
- (void)_autoscrollForLongPress:(id)arg1;
- (struct CGRect)_visibleBoundsIncludingRowsOnly;
- (void)_stopLongPressAutoscrollTimer;
- (void)longPress:(id)arg1;
- (BOOL)longPressGestureWithinAutoscrollZone;
- (BOOL)_displayingCellContentStringCallout;
- (void)_performCellContentStringCalloutCleanupHidingMenu:(BOOL)arg1;
- (void)_endDisplayingCellContentStringCallout;
- (void)_updateCellContentStringCallout:(id)arg1;
- (void)_beginDisplayingCellContentStringCallout;
- (void)_adjustForAutomaticKeyboardInfo:(id)arg1 animated:(BOOL)arg2 lastAdjustment:(float *)arg3;
@property(nonatomic, getter=_keepsFirstResponderVisibleOnBoundsChange, setter=_setKeepsFirstResponderVisibleOnBoundsChange:) BOOL keepsFirstResponderVisibleOnBoundsChange;
- (struct CGRect)_calloutTargetRectForCell:(id)arg1;
- (float)_backgroundInset;
- (BOOL)_usesNewHeaderFooterBehavior;
- (float)_heightForSeparator;
- (void)_performAction:(SEL)arg1 forCell:(id)arg2 sender:(id)arg3;
- (BOOL)_canPerformAction:(SEL)arg1 forCell:(id)arg2 sender:(id)arg3;
- (BOOL)_shouldShowMenuForCell:(id)arg1;
- (float)_spacingForExtraSeparators;
- (id)_tableFooterView:(BOOL)arg1;
- (id)_tableHeaderView:(BOOL)arg1;
- (BOOL)_isTableHeaderViewHidden;
- (BOOL)_wantsSwipes;
- (id)_indexPathForSwipeRowAtPoint:(struct CGPoint)arg1;
- (id)_rowData;
- (void)_setIsAncestorOfFirstResponder:(BOOL)arg1;
- (BOOL)_shouldResignFirstResponderWithInteractionDisabled;
- (struct CGRect)_indexRect;
- (BOOL)_isShowingIndex;
- (void)animateDeletionOfRowWithCell:(id)arg1;
- (void)_finishedRemovingRemovalButtonForTableCell:(id)arg1;
- (void)_didInsertRowForTableCell:(id)arg1;
- (void)_removeWasCanceledForCell:(id)arg1;
- (void)_endSwipeToDeleteRowDidDelete:(BOOL)arg1;
- (void)_reorderPositionChangedForCell:(id)arg1 withScrollFactorPercentage:(float)arg2;
- (void)_reorderPositionChangedForCell:(id)arg1;
- (float)_shadowHeightOffset;
- (BOOL)_isLastRowForIndexPath:(id)arg1;
- (id)titleForDeleteConfirmationButton:(id)arg1;
- (BOOL)_isCellReorderable:(id)arg1;
- (void)_drawExtraSeparator:(struct CGRect)arg1;
- (void)_tableFooterHeightDidChangeToHeight:(float)arg1;
- (void)_tableHeaderHeightDidChangeToHeight:(float)arg1;
- (BOOL)allowsFooterViewsToFloat;
- (BOOL)allowsHeaderViewsToFloat;
- (id)_visibleFooterViewForSection:(int)arg1;
- (id)_visibleHeaderViewForSection:(int)arg1;
- (id)_createPreparedCellForRowAtIndexPath:(id)arg1;
- (id)_createPreparedCellForGlobalRow:(int)arg1;
- (id)_createPreparedCellForGlobalRow:(int)arg1 withIndexPath:(id)arg2;
- (void)_setupCell:(id)arg1 forEditing:(BOOL)arg2 atIndexPath:(id)arg3 animated:(BOOL)arg4;
- (void)_setupCell:(id)arg1 forEditing:(BOOL)arg2 canEdit:(BOOL)arg3 editingStyle:(int)arg4 shouldIndentWhileEditing:(BOOL)arg5 showsReorderControl:(BOOL)arg6 accessoryType:(int)arg7 animated:(BOOL)arg8;
- (id)_sectionFooterViewWithFrame:(struct CGRect)arg1 forSection:(int)arg2 floating:(BOOL)arg3 reuseViewIfPossible:(BOOL)arg4;
- (id)_sectionHeaderViewWithFrame:(struct CGRect)arg1 forSection:(int)arg2 floating:(BOOL)arg3 reuseViewIfPossible:(BOOL)arg4;
- (id)_sectionHeaderView:(BOOL)arg1 withFrame:(struct CGRect)arg2 forSection:(int)arg3 floating:(BOOL)arg4 reuseViewIfPossible:(BOOL)arg5;
- (id)_popReusableHeaderView:(BOOL)arg1;
- (id)_reorderingIndexPath;
- (int)_globalReorderingRow;
- (id)_reorderingCell;
- (BOOL)_isEditingWithNoSwipedCell;
- (BOOL)_isEditingRowAtIndexPath:(id)arg1;
- (BOOL)_wasEditingRowAtIndexPath:(id)arg1;
- (BOOL)_wasEditing;
- (id)_visibleCellForGlobalRow:(int)arg1;
- (struct _NSRange)_visibleGlobalRows;
- (struct CGRect)_visibleBounds;
- (BOOL)_shouldUnionVisibleBounds;
- (id)_cellAfterIndexPath:(id)arg1;
- (void)_setTopSeparatorCell:(id)arg1;
- (id)_targetIndexPathAtPoint:(struct CGPoint)arg1;
- (void)_autoscrollForReordering:(id)arg1;
- (void)_endReorderAnimations;
- (void)_beginReorderAnimationForCell:(id)arg1;
- (void)_finishedAnimatingCellReorder:(id)arg1 finished:(id)arg2 context:(id)arg3;
- (void)_endCellReorderAnimation:(BOOL)arg1;
- (void)_cancelCellReorder:(BOOL)arg1;
- (void)_endReorderingForCell:(id)arg1 wasCancelled:(BOOL)arg2 animated:(BOOL)arg3;
- (void)adjustIndexPaths:(id)arg1 forMoveOfIndexPath:(id)arg2 toIndexPath:(id)arg3;
- (void)_tableCellAnimationDidStop:(id)arg1 finished:(id)arg2;
- (void)_beginReorderingForCell:(id)arg1;
- (void)_stopAutoscrollTimer;
- (void)_deselectRowAtIndexPath:(id)arg1 animated:(BOOL)arg2 notifyDelegate:(BOOL)arg3;
- (void)_deselectAllNonMultiSelectRowsAnimated:(BOOL)arg1 notifyDelegate:(BOOL)arg2;
- (void)_deselectAllNonMultiSelectRowsAnimated:(BOOL)arg1;
- (BOOL)_delegateImplementsViewForFooterInSection;
- (BOOL)_delegateImplementsViewForHeaderInSection;
- (BOOL)_dataSourceImplementsDetailTextForHeaderInSection;
- (BOOL)_dataSourceImplementsTitleForFooterInSection;
- (BOOL)_dataSourceImplementsTitleForHeaderInSection;
- (BOOL)_delegateImplementsAlignmentForFooterInSection;
- (BOOL)_delegateImplementsTitleWidthForFooterInSection;
- (BOOL)_delegateImplementsHeightForFooterInSection;
- (BOOL)_delegateImplementsAlignmentForHeaderInSection;
- (BOOL)_delegateImplementsTitleWidthForHeaderInSection;
- (BOOL)_delegateImplementsHeightForHeaderInSection;
- (BOOL)_delegateWantsCustomFooterForSection:(int)arg1;
- (BOOL)_delegateWantsFooterTitleForSection:(int)arg1;
- (BOOL)_delegateWantsFooterForSection:(int)arg1;
- (BOOL)_delegateImplementsMarginForTableView;
- (BOOL)_delegateImplementsHeightForRowsInSection;
- (BOOL)_delegateWantsHeaderTitleForSection:(int)arg1;
- (BOOL)_delegateWantsHeaderForSection:(int)arg1;
- (BOOL)_dataSourceImplementsCanUpdateRowAtIndexPath;
- (BOOL)_delegateImplementsHeightForRowAtIndexPath;
- (BOOL)_dataSourceImplementsNumberOfSectionsInTableView;
- (struct UIEdgeInsets)_contentInset;
- (void)_endRefreshingAnimated:(BOOL)arg1;
- (void)_beginRefreshing;
@property(retain, nonatomic, setter=_setRefreshControl:) UIRefreshControl *_refreshControl;
- (float)_rubberBandOffsetForOffset:(float)arg1 maxOffset:(float)arg2 minOffset:(float)arg3 range:(float)arg4 outside:(char *)arg5;
- (float)_offsetForRubberBandOffset:(float)arg1 maxOffset:(float)arg2 minOffset:(float)arg3 range:(float)arg4;
- (void)decodeRestorableStateWithCoder:(id)arg1;
- (BOOL)_pathIsHidden:(id)arg1;
- (void)encodeRestorableStateWithCoder:(id)arg1;
- (BOOL)isElementAccessibilityExposedToInterfaceBuilder;

@end
