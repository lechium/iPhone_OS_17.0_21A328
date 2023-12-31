//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SpringBoard/NSObject-Protocol.h>

@class SBApplication, SBRemoteTransientOverlayPresentationRequest, SBRemoteTransientOverlayViewController, SBWindowScene;

@protocol SBDeviceApplicationRemoteTransientOverlayViewProviding <NSObject>
@property(readonly, nonatomic) __weak SBWindowScene *windowScene;
- (_Bool)isPresentingOnBehalfOfApplication:(SBApplication *)arg1;
- (_Bool)isPresentingTransientOverlay:(SBRemoteTransientOverlayViewController *)arg1;
- (void)dismissRemoteTransientOverlayViewController:(SBRemoteTransientOverlayViewController *)arg1;
- (void)presentRemoteTransientOverlayViewController:(SBRemoteTransientOverlayViewController *)arg1 presentationRequest:(SBRemoteTransientOverlayPresentationRequest *)arg2;
@end

