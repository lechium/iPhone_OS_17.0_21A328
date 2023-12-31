//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/_UIRemoteViewController.h>

@class NSString;
@protocol SKCloudServiceSetupRemoteViewControllerDelegate;

__attribute__((visibility("hidden")))
@interface SKCloudServiceSetupRemoteViewController : _UIRemoteViewController
{
    id <SKCloudServiceSetupRemoteViewControllerDelegate> _delegate;	// 8 = 0x8
}

+ (id)serviceViewControllerInterface;	// IMP=0x0010000000023400
+ (id)exportedInterface;	// IMP=0x00100000000233e7
- (void).cxx_destruct;	// IMP=0x000000000002371c
@property(nonatomic) __weak id <SKCloudServiceSetupRemoteViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)presentSafariViewControllerWithURL:(id)arg1 animated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0000000000023661
- (void)overrideRedeemCameraPerformAction:(long long)arg1 withObject:(id)arg2;	// IMP=0x00000000000235ea
- (void)overrideCreditCardPresentationWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0000000000023581
- (void)dismissSafariViewControllerAnimated:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000023509
- (void)dismissCloudServiceSetupViewControllerAnimated:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000023491
- (void)didFinishLoadingWithSuccess:(_Bool)arg1 error:(id)arg2;	// IMP=0x0000000000023419

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

