//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Silex/NSObject-Protocol.h>

@protocol SXSubscriptionActivationEligibilityObserving;

@protocol SXSubscriptionActivationEligibilityProviding <NSObject>
@property(readonly, nonatomic) long long eligibility;
- (void)removeObserver:(id <SXSubscriptionActivationEligibilityObserving>)arg1;
- (void)addObserver:(id <SXSubscriptionActivationEligibilityObserving>)arg1;
@end

