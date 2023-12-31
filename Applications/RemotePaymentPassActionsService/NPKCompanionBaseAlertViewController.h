//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SpringBoardUIServices/SBUIRemoteAlertServiceViewController.h>

@class NSXPCConnection;
@protocol NPKRemotePassActionUIServicePresenterInterface, SBUIRemoteAlertHostInterface;

@interface NPKCompanionBaseAlertViewController : SBUIRemoteAlertServiceViewController
{
    NSXPCConnection *_presenterConnection;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0020000000008325
- (void)_establishPresenterConnectionWithEndpoint:(id)arg1;	// IMP=0x00100000000081f2
- (void)dismiss;	// IMP=0x001000000000810a
@property(readonly, nonatomic) id <NPKRemotePassActionUIServicePresenterInterface> viewServicePresenter;
@property(readonly, nonatomic) id <SBUIRemoteAlertHostInterface> viewServiceHost;
- (void)configureWithContext:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000007eac

@end

