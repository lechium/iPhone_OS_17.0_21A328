//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SpringBoardUIServices/SBUIRemoteAlertServiceViewController.h>

@class MISSING_TYPE;

@interface BYDovePeaceRemoteViewController : SBUIRemoteAlertServiceViewController
{
    MISSING_TYPE *flowEngine;	// 8 = 0x8
    MISSING_TYPE *configurationContext;	// 16 = 0x10
    MISSING_TYPE *appleIDManager;	// 24 = 0x18
    MISSING_TYPE *assetLoader;	// 32 = 0x20
}

+ (_Bool)_isSecureForRemoteViewService;	// IMP=0x0020000000017fc0
- (void).cxx_destruct;	// IMP=0x0040000000017220
- (id)initWithCoder:(id)arg1;	// IMP=0x0010000000018f90
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;	// IMP=0x0010000000018d60
- (void)viewDidDisappear:(_Bool)arg1;	// IMP=0x0010000000018af0
- (void)viewDidAppear:(_Bool)arg1;	// IMP=0x00100000000186f0
- (void)_willAppearInRemoteViewController;	// IMP=0x0010000000018300
- (void)viewDidLoad;	// IMP=0x00100000000181f0
- (_Bool)_canShowWhileLocked;	// IMP=0x0010000000017fd0
- (void)configureWithContext:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000017f10
- (void)prepareForActivationWithContext:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000017b50
- (void)dealloc;	// IMP=0x0010000000017110

@end
