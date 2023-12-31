//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HomeUI/HUServiceGridViewController.h>

@class HFAccessoryBrowsingManager, HSDiscoveredAccessoryGridContentItemManager, NSString, UIColor;
@protocol HSDiscoveredAccessoryGridContentViewControllerDelegate;

@interface HSDiscoveredAccessoryGridContentViewController : HUServiceGridViewController
{
    UIColor *_cellContentViewBackgroundColor;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x002000000001963a
@property(retain, nonatomic) UIColor *cellContentViewBackgroundColor; // @synthesize cellContentViewBackgroundColor=_cellContentViewBackgroundColor;
- (void)_updateScrollingAttributes;	// IMP=0x00000000000195b1
- (void)_identifyAccessory:(id)arg1;	// IMP=0x00100000000193fb
- (_Bool)presentationCoordinator:(id)arg1 shouldBeginInteractivePresentationWithTouchLocation:(struct CGPoint)arg2 view:(id)arg3;	// IMP=0x00100000000193f3
- (void)itemManagerDidUpdate:(id)arg1;	// IMP=0x0010000000019326
- (id)layoutOptionsForSection:(long long)arg1;	// IMP=0x00100000000192a4
- (void)configureCell:(id)arg1 forItem:(id)arg2;	// IMP=0x001000000001911c
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;	// IMP=0x0010000000018ee4
- (_Bool)collectionView:(id)arg1 shouldHighlightItemAtIndexPath:(id)arg2;	// IMP=0x0010000000018e4d
- (id)detailsViewControllerForPresentationCoordinator:(id)arg1 item:(id)arg2;	// IMP=0x0010000000018e45
- (_Bool)hasDetailsActionForPresentationCoordinator:(id)arg1 item:(id)arg2;	// IMP=0x0010000000018e3d
- (void)setScrollDirection:(long long)arg1;	// IMP=0x0010000000018dfc
- (void)viewDidLoad;	// IMP=0x0010000000018b67
@property(readonly, nonatomic) HFAccessoryBrowsingManager *accessoryBrowsingManager;
- (id)_defaultLayoutOptionsForViewSize:(struct CGSize)arg1;	// IMP=0x0010000000018861
- (id)initWithAccessoryBrowsingManager:(id)arg1 discoveredAccessoryFilter:(id)arg2;	// IMP=0x00100000000187b7
- (id)initWithItemManager:(id)arg1;	// IMP=0x0010000000018701

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(nonatomic) __weak id <HSDiscoveredAccessoryGridContentViewControllerDelegate> delegate;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(retain, nonatomic) HSDiscoveredAccessoryGridContentItemManager *itemManager; // @dynamic itemManager;
@property(readonly) Class superclass;

@end

