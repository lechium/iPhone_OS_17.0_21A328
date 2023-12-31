//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE, NSArray, NSError;
@protocol OS_dispatch_queue;

@interface FakePaymentPolygonFetcher : NSObject
{
    MISSING_TYPE *_testCallback;	// 8 = 0x8
    NSArray *_paymentPolygonMapItems;	// 16 = 0x10
    NSError *_paymentPolygonResponseError;	// 24 = 0x18
    NSObject<OS_dispatch_queue> *_queue;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x0020000000745b75
- (void)configurePaymentPolygonResponseError:(id)arg1;	// IMP=0x0010000000745b64
- (void)configurePaymentPolygonMapItems:(id)arg1;	// IMP=0x0010000000745b53
- (_Bool)paymentPolygonsAtLocation:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x001000000074579a
- (id)initWithTestCallback:(CDUnknownBlockType)arg1;	// IMP=0x00100000007456ec

@end

