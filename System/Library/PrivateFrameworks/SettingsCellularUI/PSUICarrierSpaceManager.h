//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CTCarrierSpaceAppsInfo, CTCarrierSpaceCapabilities, CTCarrierSpaceClient, CTCarrierSpacePlansInfo, CTCarrierSpaceUsageInfo, CTCarrierSpaceUserConsentFlowInfo, CoreTelephonyClient, NSNumber, NSString, PSUIAppInstallController;

__attribute__((visibility("hidden")))
@interface PSUICarrierSpaceManager : NSObject
{
    CTCarrierSpaceCapabilities *_capabilities;	// 8 = 0x8
    CTCarrierSpaceUsageInfo *_usageInfo;	// 16 = 0x10
    CTCarrierSpacePlansInfo *_plansInfo;	// 24 = 0x18
    CTCarrierSpaceAppsInfo *_appsInfo;	// 32 = 0x20
    PSUIAppInstallController *_carrierAppInstallController;	// 40 = 0x28
    NSNumber *_hasUserConsent;	// 48 = 0x30
    CTCarrierSpaceUserConsentFlowInfo *_userConsentFlowInfo;	// 56 = 0x38
    NSNumber *_userConsentResponse;	// 64 = 0x40
    struct __CTServerConnection *_serverConnection;	// 72 = 0x48
    CoreTelephonyClient *_coreTelephonyClient;	// 80 = 0x50
    CTCarrierSpaceClient *_carrierSpaceClient;	// 88 = 0x58
}

+ (id)getNSURLSessionConfiguration;	// IMP=0x0010000000051e72
+ (long long)bytesFromString:(id)arg1 carrierSpaceUnits:(long long)arg2;	// IMP=0x001000000004e740
+ (_Bool)isCarrierMetricTypeValid:(int)arg1;	// IMP=0x001000000004e732
+ (int)carrierMetricTypeForString:(id)arg1;	// IMP=0x001000000004e5d9
+ (id)sharedManager;	// IMP=0x001000000004e584
- (void).cxx_destruct;	// IMP=0x0000000000051f91
@property(retain, nonatomic) CTCarrierSpaceClient *carrierSpaceClient; // @synthesize carrierSpaceClient=_carrierSpaceClient;
- (id)getLogger;	// IMP=0x0000000000051f56
- (void)userConsentFlowInfoDidChange;	// IMP=0x0000000000051cfd
- (void)appsDidChange;	// IMP=0x0000000000051ba2
- (void)plansDidChange;	// IMP=0x0000000000051a47
- (void)usageDidChange;	// IMP=0x00000000000518ec
- (void)capabilitiesDidChange:(id)arg1;	// IMP=0x000000000005179c
- (void)simStatusDidChange:(id)arg1 status:(id)arg2;	// IMP=0x00000000000516a9
- (id)localizedDataStringFromBytes:(unsigned long long)arg1;	// IMP=0x0000000000051695
- (id)descriptionForPlanMetrics:(id)arg1;	// IMP=0x000000000005102c
- (_Bool)planChangeIsRestricted;	// IMP=0x0000000000050fd3
- (id)carrierAppInstallController;	// IMP=0x0000000000050d0e
- (id)appsInfo;	// IMP=0x00000000000509ba
- (id)planMetrics;	// IMP=0x000000000005070d
- (id)subscribedDomesticPlanOptions;	// IMP=0x00000000000503ee
- (id)subscribedPlanOptions;	// IMP=0x0000000000050100
- (id)plansInfo;	// IMP=0x000000000004fe12
- (id)usageInfo;	// IMP=0x000000000004fb24
- (id)capabilities;	// IMP=0x000000000004f813
- (_Bool)supportsSweetgum;	// IMP=0x000000000004f717
- (void)refresh;	// IMP=0x000000000004f365
- (void)refreshAndReload;	// IMP=0x000000000004f250
- (void)reset;	// IMP=0x000000000004f1e0
- (void)userConsentAcknowledged:(_Bool)arg1;	// IMP=0x000000000004ef9a
- (void)setUserConsent:(_Bool)arg1;	// IMP=0x000000000004eeb5
- (id)userConsentFlowInfo;	// IMP=0x000000000004ecec
- (_Bool)hasUserConsent;	// IMP=0x000000000004ebcd
- (void)dealloc;	// IMP=0x000000000004eb85
- (id)init;	// IMP=0x000000000004e950

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
