//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/_UIRemoteViewController.h>

@class NSString, SKStorePageViewController;

__attribute__((visibility("hidden")))
@interface SKRemoteStorePageViewController : _UIRemoteViewController
{
    SKStorePageViewController *_storePageViewController;	// 8 = 0x8
}

+ (id)serviceViewControllerInterface;	// IMP=0x0010000000041e2c
+ (id)exportedInterface;	// IMP=0x0010000000041e0c
- (void).cxx_destruct;	// IMP=0x0000000000041e79
@property(nonatomic) __weak SKStorePageViewController *storePageViewController; // @synthesize storePageViewController=_storePageViewController;
- (void)showProductPageWithItemIdentifier:(id)arg1;	// IMP=0x0000000000041da3
- (void)didFinishWithResult:(id)arg1 error:(id)arg2;	// IMP=0x0000000000041d18

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

