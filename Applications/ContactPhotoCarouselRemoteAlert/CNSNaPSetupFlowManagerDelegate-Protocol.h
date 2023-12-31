//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "NSObject-Protocol.h"

@class CNMeCardSharingResult, CNMutableContact, CNSNaPSetupFlowManager, CNVisualIdentity;

@protocol CNSNaPSetupFlowManagerDelegate <NSObject>

@optional
- (void)onboardingFromFlowManager:(CNSNaPSetupFlowManager *)arg1 didSelectSharingAudience:(unsigned long long)arg2;
- (void)onboardingFromFlowManager:(CNSNaPSetupFlowManager *)arg1 didUpdateSharingState:(_Bool)arg2;
- (void)onboardingFromFlowManager:(CNSNaPSetupFlowManager *)arg1 didUpdateWithSharingResult:(CNMeCardSharingResult *)arg2;
- (void)snapAvatarPosterEditorFromFlowManager:(CNSNaPSetupFlowManager *)arg1 didUpdateContact:(CNMutableContact *)arg2 withVisualIdentity:(CNVisualIdentity *)arg3;
@end

