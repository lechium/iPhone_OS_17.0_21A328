//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "SUUIStorePageSection.h"

@class NSString, SUUIAccountButtonsComponent, SUUIAccountButtonsViewController;

__attribute__((visibility("hidden")))
@interface SUUIAccountButtonsSection : SUUIStorePageSection
{
    SUUIAccountButtonsViewController *_accountButtonsViewController;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x00000000000981ca
- (id)_accountButtonsViewController;	// IMP=0x0000000000097db0
- (void)accountButtonsViewControllerDidTapECommerceLink:(id)arg1;	// IMP=0x0000000000097caa
- (void)accountButtonsViewControllerDidSignOut:(id)arg1;	// IMP=0x0000000000097c11
- (void)accountButtonsViewControllerDidSignIn:(id)arg1;	// IMP=0x0000000000097b7b
- (void)willAppearInContext:(id)arg1;	// IMP=0x0000000000097ad7
- (long long)numberOfCells;	// IMP=0x0000000000097acc
- (void)collectionViewDidEndDisplayingCellForItemAtIndexPath:(id)arg1;	// IMP=0x00000000000979d5
- (void)collectionViewWillDisplayCellForItemAtIndexPath:(id)arg1;	// IMP=0x00000000000978de
- (struct CGSize)cellSizeForIndexPath:(id)arg1;	// IMP=0x0000000000097824
- (id)cellForIndexPath:(id)arg1;	// IMP=0x00000000000976a0
- (id)backgroundColorForIndexPath:(id)arg1;	// IMP=0x0000000000097576
- (void)addImpressionsForIndexPath:(id)arg1 toSession:(id)arg2;	// IMP=0x00000000000974ef
- (void)dealloc;	// IMP=0x00000000000974a4
- (id)initWithPageComponent:(id)arg1;	// IMP=0x0000000000097475

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) SUUIAccountButtonsComponent *pageComponent; // @dynamic pageComponent;
@property(readonly) Class superclass;

@end

