//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "SUUIViewController.h"

@class NSData, NSString, NSURL, SSVLoadURLOperation, SUUICategoryController, SUUIStorePageViewController;

__attribute__((visibility("hidden")))
@interface SUUILegacyNativeViewController : SUUIViewController
{
    NSURL *_activeURL;	// 8 = 0x8
    SUUICategoryController *_categoryController;	// 16 = 0x10
    NSURL *_defaultURL;	// 24 = 0x18
    NSData *_initialData;	// 32 = 0x20
    SSVLoadURLOperation *_initialOperation;	// 40 = 0x28
    SUUIStorePageViewController *_storePageViewController;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x000000000019aa8b
- (id)_storePageViewController;	// IMP=0x000000000019a9ec
- (void)_reloadNavigationItem;	// IMP=0x000000000019a738
- (void)_finishLoadWithResult:(_Bool)arg1 error:(id)arg2;	// IMP=0x000000000019a40b
- (id)_categoryController;	// IMP=0x000000000019a323
- (id)activeMetricsController;	// IMP=0x000000000019a306
- (void)categoryController:(id)arg1 didSelectCategory:(id)arg2;	// IMP=0x000000000019a216
- (void)willAnimateRotationToInterfaceOrientation:(long long)arg1 duration:(double)arg2;	// IMP=0x000000000019a161
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x000000000019a05b
- (void)loadView;	// IMP=0x0000000000199ef7
- (void)reloadData;	// IMP=0x0000000000199b32
- (void)dealloc;	// IMP=0x0000000000199ae7
- (id)initWithData:(id)arg1 fromOperation:(id)arg2;	// IMP=0x00000000001999cc

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
