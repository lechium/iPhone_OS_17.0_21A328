//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE, NSPredicate;

__attribute__((visibility("hidden")))
@interface SNPredicateFilterOperator : NSObject
{
    MISSING_TYPE *leakCount;	// 8 = 0x8
    MISSING_TYPE *predicate;	// 16 = 0x10
    MISSING_TYPE *leakRemaining;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00000000000ad9b6
- (void)processTerminationWithOptionalError:(id)arg1 portID:(id)arg2 downstreamHandler:(CDUnknownBlockType)arg3;	// IMP=0x00000000000ad8ef
- (void)processInput:(id)arg1 portID:(id)arg2 downstreamHandler:(CDUnknownBlockType)arg3;	// IMP=0x00000000000ad6ee
- (id)initWithPredicate:(id)arg1 leakCount:(long long)arg2;	// IMP=0x00000000000ad513
- (id)init;	// IMP=0x00000000000ad419
@property(nonatomic, readonly) NSPredicate *predicate; // @synthesize predicate;
@property(nonatomic, readonly) long long leakCount; // @synthesize leakCount;

@end

