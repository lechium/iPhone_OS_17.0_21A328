//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class AKCircleRequestContext;

@interface AKPiggybackingRequestProvider
{
    AKCircleRequestContext *_circleContext;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x002000000000ce4f
- (_Bool)signRequest:(id)arg1 error:(id *)arg2;	// IMP=0x001000000000ca4c
- (id)authKitBody;	// IMP=0x001000000000c453
- (id)requestURL;	// IMP=0x001000000000c3a9
- (id)initWithCircleContext:(id)arg1;	// IMP=0x001000000000c34c

@end

