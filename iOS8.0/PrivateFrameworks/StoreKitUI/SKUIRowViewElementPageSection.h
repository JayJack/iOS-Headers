//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <StoreKitUI/SKUIStorePageSection.h>

#import "SKUIArtworkRequestDelegate.h"

@class NSString, SKUIRowComponent, SKUIViewElementLayoutContext;

@interface SKUIRowViewElementPageSection : SKUIStorePageSection <SKUIArtworkRequestDelegate>
{
    SKUIViewElementLayoutContext *_cellLayoutContext;
}

- (void).cxx_destruct;
- (float)_singleColumnWidth;
- (id)_reuseIdentifierForViewElement:(id)arg1;
- (id)_reuseIdentifierForLockupViewElement:(id)arg1;
- (id)_reuseIdentifierForCardViewElement:(id)arg1;
- (void)_requestLayoutForCells;
- (float)_interiorColumnSpacing;
- (id)_firstChildForColumn:(id)arg1;
- (void)_enumerateViewElementsUsingBlock:(CDUnknownBlockType)arg1;
- (struct UIEdgeInsets)_contentInsetForIndexPath:(id)arg1;
- (Class)_cellClassForViewElement:(id)arg1;
- (Class)_cellClassForLockupViewElement:(id)arg1;
- (Class)_cellClassForCardViewElement:(id)arg1;
- (void)artworkRequest:(id)arg1 didLoadImage:(id)arg2;
- (void)willTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (void)willAppearInContext:(id)arg1;
- (BOOL)updateCellWithIndexPath:(id)arg1 itemState:(id)arg2 animated:(BOOL)arg3;
- (void)prefetchResourcesWithReason:(int)arg1;
- (int)numberOfCells;
- (void)collectionViewDidEndDisplayingCellForItemAtIndexPath:(id)arg1;
- (void)collectionViewWillDisplayCellForItemAtIndexPath:(id)arg1;
- (BOOL)collectionViewShouldSelectItemAtIndexPath:(id)arg1;
- (BOOL)collectionViewShouldHighlightItemAtIndexPath:(id)arg1;
- (void)collectionViewDidSelectItemAtIndexPath:(id)arg1;
- (struct CGSize)cellSizeForIndexPath:(id)arg1;
- (id)cellForIndexPath:(id)arg1;
- (id)backgroundColorForIndexPath:(id)arg1;
- (void)addImpressionsForIndexPath:(id)arg1 toSession:(id)arg2;
- (void)dealloc;
- (id)initWithPageComponent:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly, nonatomic) SKUIRowComponent *pageComponent; // @dynamic pageComponent;
@property(readonly) Class superclass;

@end
