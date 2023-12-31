//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

@interface MockAPMetricNotificationRegister : NSObject
{
    CDUnknownBlockType _block;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x00200000000ffc68
@property(copy, nonatomic) CDUnknownBlockType block; // @synthesize block=_block;
- (void)callBlockWithMetric:(id)arg1;	// IMP=0x00100000000ffbf0
- (void)removeHandlerWithIdentifier:(long long)arg1;	// IMP=0x00100000000ffbea
- (long long)registerHandlerForPurpose:(long long)arg1 closure:(CDUnknownBlockType)arg2;	// IMP=0x00100000000ffbe2
- (long long)registerHandlerForPurpose:(long long)arg1 andMetric:(long long)arg2 closure:(CDUnknownBlockType)arg3;	// IMP=0x00100000000ffb98

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

