//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, VNRequest;

__attribute__((visibility("hidden")))
@interface _VNRequestForensicsParentChildRequests : NSObject
{
    VNRequest *_parentRequest;	// 8 = 0x8
    NSArray *_orderedChildRequests;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000000003f527
@property(readonly, copy, nonatomic) NSArray *orderedChildRequests; // @synthesize orderedChildRequests=_orderedChildRequests;
@property(readonly, nonatomic) VNRequest *parentRequest; // @synthesize parentRequest=_parentRequest;
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000003f2b1
- (unsigned long long)hash;	// IMP=0x000000000003f220
- (id)description;	// IMP=0x000000000003f15f
- (id)initWithParentRequest:(id)arg1 orderedChildRequests:(id)arg2;	// IMP=0x000000000003f0a5

@end

