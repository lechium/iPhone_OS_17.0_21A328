//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class HMDNetworkRouterClientConfiguration, HMDNetworkRouterControlOperationStatus, NSString;

__attribute__((visibility("hidden")))
@interface HMDNetworkRouterClientControlOperationResponse : NSObject
{
    HMDNetworkRouterControlOperationStatus *_status;	// 8 = 0x8
    HMDNetworkRouterClientConfiguration *_configuration;	// 16 = 0x10
}

+ (id)parsedFromData:(id)arg1 error:(id *)arg2;	// IMP=0x00100000005a53ef
- (void).cxx_destruct;	// IMP=0x00000000005a53c7
@property(retain, nonatomic) HMDNetworkRouterClientConfiguration *configuration; // @synthesize configuration=_configuration;
@property(retain, nonatomic) HMDNetworkRouterControlOperationStatus *status; // @synthesize status=_status;
@property(readonly, copy) NSString *description;
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000005a50d5
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000005a5047
- (id)serializeWithError:(id *)arg1;	// IMP=0x00000000005a4d6c
- (_Bool)parseFromData:(id)arg1 error:(id *)arg2;	// IMP=0x00000000005a49e5
- (id)initWithStatus:(id)arg1 configuration:(id)arg2;	// IMP=0x00000000005a494c
- (id)init;	// IMP=0x00000000005a491d

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
