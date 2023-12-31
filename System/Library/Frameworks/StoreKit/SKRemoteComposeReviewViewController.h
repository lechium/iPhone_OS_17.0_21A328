//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/_UIRemoteViewController.h>

@class NSString, SKComposeReviewViewController;

__attribute__((visibility("hidden")))
@interface SKRemoteComposeReviewViewController : _UIRemoteViewController
{
    SKComposeReviewViewController *_composeReviewViewController;	// 8 = 0x8
}

+ (id)serviceViewControllerInterface;	// IMP=0x0010000000037433
+ (id)exportedInterface;	// IMP=0x0010000000037413
- (void).cxx_destruct;	// IMP=0x0000000000037959
@property(nonatomic) __weak SKComposeReviewViewController *composeReviewViewController; // @synthesize composeReviewViewController=_composeReviewViewController;
- (void)promptForStarRating;	// IMP=0x0000000000037787
- (void)didPrepareWithResult:(id)arg1 error:(id)arg2;	// IMP=0x00000000000376f5
- (void)didFinishWithResult:(id)arg1 error:(id)arg2;	// IMP=0x0000000000037663
- (void)_keyboardVisibilityDidChangeNotification:(id)arg1;	// IMP=0x00000000000374b0
- (void)viewServiceDidTerminateWithError:(id)arg1;	// IMP=0x0000000000037453
- (_Bool)shouldAutorotateToInterfaceOrientation:(long long)arg1;	// IMP=0x00000000000373d5
- (void)dealloc;	// IMP=0x0000000000037333
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;	// IMP=0x0000000000037275

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

