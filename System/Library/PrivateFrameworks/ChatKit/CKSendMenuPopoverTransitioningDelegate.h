//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CKSendMenuPopoverPresentationConfiguration, CKSendMenuPopoverPresentationController, NSString;

__attribute__((visibility("hidden")))
@interface CKSendMenuPopoverTransitioningDelegate : NSObject
{
    CKSendMenuPopoverPresentationController *_presentationController;	// 8 = 0x8
    CKSendMenuPopoverPresentationConfiguration *_configuration;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000000050345a
@property(retain, nonatomic) CKSendMenuPopoverPresentationConfiguration *configuration; // @synthesize configuration=_configuration;
@property(retain, nonatomic) CKSendMenuPopoverPresentationController *presentationController; // @synthesize presentationController=_presentationController;
- (id)presentationControllerForPresentedViewController:(id)arg1 presentingViewController:(id)arg2 sourceViewController:(id)arg3;	// IMP=0x000000000050338d
- (id)animationControllerForPresentedController:(id)arg1 presentingController:(id)arg2 sourceController:(id)arg3;	// IMP=0x00000000005032da
- (id)animationControllerForDismissedController:(id)arg1;	// IMP=0x000000000050322a
- (id)init;	// IMP=0x00000000005031bd

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

