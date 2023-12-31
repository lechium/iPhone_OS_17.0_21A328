//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "SKUIStorePageSection.h"

@class NSString, SKUIQuicklinksPageComponent, SKUIQuicklinksViewController;

__attribute__((visibility("hidden")))
@interface SKUIQuicklinksPageSection : SKUIStorePageSection
{
    SKUIQuicklinksViewController *_quicklinksViewController;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x000000000039a542
- (id)_quicklinksViewController;	// IMP=0x000000000039a39d
- (void)willTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;	// IMP=0x000000000039a30d
- (void)quicklinksViewController:(id)arg1 didSelectLink:(id)arg2 atIndex:(long long)arg3;	// IMP=0x000000000039a1bd
- (long long)numberOfCells;	// IMP=0x000000000039a1b2
- (struct CGSize)cellSizeForIndexPath:(id)arg1;	// IMP=0x000000000039a095
- (id)cellForIndexPath:(id)arg1;	// IMP=0x0000000000399f49
- (void)willAppearInContext:(id)arg1;	// IMP=0x0000000000399e39
- (void)dealloc;	// IMP=0x0000000000399dee
- (id)initWithPageComponent:(id)arg1;	// IMP=0x0000000000399d58

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) SKUIQuicklinksPageComponent *pageComponent; // @dynamic pageComponent;
@property(readonly) Class superclass;

@end

