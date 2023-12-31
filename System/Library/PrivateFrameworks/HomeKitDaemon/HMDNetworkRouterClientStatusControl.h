//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class HMDNetworkRouterClientStatusControlOperation, HMDNetworkRouterClientStatusIdentifierList, NSString;

__attribute__((visibility("hidden")))
@interface HMDNetworkRouterClientStatusControl : NSObject
{
    HMDNetworkRouterClientStatusControlOperation *_operation;	// 8 = 0x8
    HMDNetworkRouterClientStatusIdentifierList *_clientStatusIdentifierList;	// 16 = 0x10
}

+ (id)parsedFromData:(id)arg1 error:(id *)arg2;	// IMP=0x00100000005aa2ba
- (void).cxx_destruct;	// IMP=0x00000000005a8a82
@property(retain, nonatomic) HMDNetworkRouterClientStatusIdentifierList *clientStatusIdentifierList; // @synthesize clientStatusIdentifierList=_clientStatusIdentifierList;
@property(retain, nonatomic) HMDNetworkRouterClientStatusControlOperation *operation; // @synthesize operation=_operation;
@property(readonly, copy) NSString *description;
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000005a8790
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000005a8702
- (id)serializeWithError:(id *)arg1;	// IMP=0x00000000005a8427
- (_Bool)parseFromData:(id)arg1 error:(id *)arg2;	// IMP=0x00000000005a80a0
- (id)initWithOperation:(id)arg1 clientStatusIdentifierList:(id)arg2;	// IMP=0x00000000005a8007
- (id)init;	// IMP=0x00000000005a7fd8

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

