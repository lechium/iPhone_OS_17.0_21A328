//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SpringBoardUIServices/SBUIRemoteAlertServiceViewController.h>

@class NSString, TFFeedbackSession;

@interface ServiceTFFeedbackFormHostViewController : SBUIRemoteAlertServiceViewController
{
    TFFeedbackSession *_hostedFeedbackSession;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0020000000010bcb
@property(retain, nonatomic) TFFeedbackSession *hostedFeedbackSession; // @synthesize hostedFeedbackSession=_hostedFeedbackSession;
- (void)presentationControllerDidDismiss:(id)arg1;	// IMP=0x0010000000010b94
- (void)session:(id)arg1 didSubmitFeedbackFromViewController:(id)arg2;	// IMP=0x0010000000010b82
- (void)cancelButtonPressed:(id)arg1;	// IMP=0x0010000000010b70
- (void)_dismissViewService;	// IMP=0x0010000000010a60
- (void)_presentFormViewControllerForSession:(id)arg1;	// IMP=0x0010000000010871
- (void)handleButtonActions:(id)arg1;	// IMP=0x001000000001071e
- (void)handleHomeButtonPressed;	// IMP=0x001000000001070c
- (void)prepareForActivationWithContext:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00100000000106fa
- (void)configureWithContext:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00100000000103d9
- (_Bool)prefersStatusBarHidden;	// IMP=0x00100000000103d1
- (_Bool)_shouldRemoveViewFromHierarchyOnDisappear;	// IMP=0x00100000000103c9
- (unsigned long long)supportedInterfaceOrientations;	// IMP=0x001000000001036b
- (void)viewDidAppear:(_Bool)arg1;	// IMP=0x00100000000102c0

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
