//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface DMDRefreshStatusOperation
{
}

+ (_Bool)validateRequest:(id)arg1 error:(id *)arg2;	// IMP=0x0040000000076f2a
+ (id)requiredEntitlements;	// IMP=0x0010000000076d5d
+ (id)whitelistedClassesForRequest;	// IMP=0x0010000000076d2b
- (void)runWithRequest:(id)arg1;	// IMP=0x0040000000076d7d
- (_Bool)runOnMainThread;	// IMP=0x0010000000076d75
- (unsigned long long)queueGroup;	// IMP=0x0010000000076d6a

@end

