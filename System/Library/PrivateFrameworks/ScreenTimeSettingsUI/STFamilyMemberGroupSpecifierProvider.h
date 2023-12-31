//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString, UIViewController;

__attribute__((visibility("hidden")))
@interface STFamilyMemberGroupSpecifierProvider
{
    _Bool _presentedAsModal;	// 8 = 0x8
    UIViewController *_rootViewController;	// 16 = 0x10
}

+ (id)providerWithCoordinator:(id)arg1 presentedAsModal:(_Bool)arg2;	// IMP=0x001000000005ed6a
+ (id)providerWithCoordinator:(id)arg1 rootViewController:(id)arg2;	// IMP=0x001000000005ecf2
- (void).cxx_destruct;	// IMP=0x00000000000603ff
@property __weak UIViewController *rootViewController; // @synthesize rootViewController=_rootViewController;
@property(nonatomic) _Bool presentedAsModal; // @synthesize presentedAsModal=_presentedAsModal;
- (void)showChildRootViewController:(id)arg1;	// IMP=0x00000000000602d1
- (void)showChildOnboardingFlow:(id)arg1;	// IMP=0x000000000005fd3d
- (void)showChildOnboardingOrChildRootViewController:(id)arg1;	// IMP=0x000000000005fa59
- (id)totalChildUsageTime:(id)arg1;	// IMP=0x000000000005fa4c
- (void)imageDidUpdate:(id)arg1;	// IMP=0x000000000005f8a2
- (id)familySpecifiers;	// IMP=0x000000000005f63d
- (id)createSpecifierForUser:(id)arg1 shouldWarn:(_Bool)arg2;	// IMP=0x000000000005f2ca
- (void)profileConnectionDidReceiveEffectiveSettingsChangedNotification:(id)arg1 userInfo:(id)arg2;	// IMP=0x000000000005f217
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;	// IMP=0x000000000005f0e6
- (void)setCoordinator:(id)arg1;	// IMP=0x000000000005efde
- (void)dealloc;	// IMP=0x000000000005ef4b
- (id)init;	// IMP=0x000000000005edc5

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

