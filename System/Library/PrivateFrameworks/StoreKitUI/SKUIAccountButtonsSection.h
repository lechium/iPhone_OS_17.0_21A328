//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "SKUIStorePageSection.h"

@class NSString, SKUIAccountButtonsComponent, SKUIAccountButtonsViewController;

__attribute__((visibility("hidden")))
@interface SKUIAccountButtonsSection : SKUIStorePageSection
{
    SKUIAccountButtonsViewController *_accountButtonsViewController;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x00000000002bfbfd
- (id)_accountButtonsViewController;	// IMP=0x00000000002bf7e3
- (void)accountButtonsViewControllerDidTapECommerceLink:(id)arg1;	// IMP=0x00000000002bf6dd
- (void)accountButtonsViewControllerDidSignOut:(id)arg1;	// IMP=0x00000000002bf644
- (void)accountButtonsViewControllerDidSignIn:(id)arg1;	// IMP=0x00000000002bf5ae
- (void)willAppearInContext:(id)arg1;	// IMP=0x00000000002bf50a
- (long long)numberOfCells;	// IMP=0x00000000002bf4ff
- (void)collectionViewDidEndDisplayingCellForItemAtIndexPath:(id)arg1;	// IMP=0x00000000002bf408
- (void)collectionViewWillDisplayCellForItemAtIndexPath:(id)arg1;	// IMP=0x00000000002bf311
- (struct CGSize)cellSizeForIndexPath:(id)arg1;	// IMP=0x00000000002bf257
- (id)cellForIndexPath:(id)arg1;	// IMP=0x00000000002bf0d3
- (id)backgroundColorForIndexPath:(id)arg1;	// IMP=0x00000000002befa9
- (void)addImpressionsForIndexPath:(id)arg1 toSession:(id)arg2;	// IMP=0x00000000002bef22
- (void)dealloc;	// IMP=0x00000000002beed7
- (id)initWithPageComponent:(id)arg1;	// IMP=0x00000000002bee41

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) SKUIAccountButtonsComponent *pageComponent; // @dynamic pageComponent;
@property(readonly) Class superclass;

@end
