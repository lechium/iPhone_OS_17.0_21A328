//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE;

@interface _TtC8CloudKit21LoadingRequestHandler : NSObject
{
    MISSING_TYPE *assetStreamHandle;	// 8 = 0x8
    MISSING_TYPE *type;	// 0 = 0x0
    MISSING_TYPE *taskByRequest;	// 0 = 0x0
    MISSING_TYPE *activity;	// 0 = 0x0
}

- (void).cxx_destruct;	// IMP=0x0000000000047de6
- (id)init;	// IMP=0x0000000000047db0
- (void)resourceLoader:(id)arg1 didCancelAuthenticationChallenge:(id)arg2;	// IMP=0x0000000000047d88
- (_Bool)resourceLoader:(id)arg1 shouldWaitForResponseToAuthenticationChallenge:(id)arg2;	// IMP=0x0000000000047d15
- (_Bool)resourceLoader:(id)arg1 shouldWaitForRenewalOfRequestedResource:(id)arg2;	// IMP=0x0000000000047cba
- (void)resourceLoader:(id)arg1 didCancelLoadingRequest:(id)arg2;	// IMP=0x0000000000047c3e
- (_Bool)resourceLoader:(id)arg1 shouldWaitForLoadingOfRequestedResource:(id)arg2;	// IMP=0x00000000000477fa

@end

