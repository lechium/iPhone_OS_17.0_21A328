//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSString;

__attribute__((visibility("hidden")))
@interface HMDNetworkRouterClientControlResponse : NSObject
{
    NSMutableArray *_operationResponses;	// 8 = 0x8
}

+ (id)parsedFromData:(id)arg1 error:(id *)arg2;	// IMP=0x00100000004e2f26
- (void).cxx_destruct;	// IMP=0x00000000004e2f16
@property(retain, nonatomic) NSMutableArray *operationResponses; // @synthesize operationResponses=_operationResponses;
@property(readonly, copy) NSString *description;
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000004e2d50
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000004e2ce6
- (id)serializeWithError:(id *)arg1;	// IMP=0x00000000004e29c8
- (_Bool)parseFromData:(id)arg1 error:(id *)arg2;	// IMP=0x00000000004e26aa
- (id)initWithOperationResponses:(id)arg1;	// IMP=0x00000000004e263f
- (id)init;	// IMP=0x00000000004e2610

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

