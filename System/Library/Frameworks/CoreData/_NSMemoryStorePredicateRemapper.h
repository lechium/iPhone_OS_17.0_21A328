//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSManagedObjectContext;

__attribute__((visibility("hidden")))
@interface _NSMemoryStorePredicateRemapper : NSObject
{
    NSManagedObjectContext *_context;	// 8 = 0x8
}

+ (id)defaultInstance;	// IMP=0x0010000000062977
- (void)visitPredicateOperator:(id)arg1;	// IMP=0x0000000000062c4f
- (void)visitPredicateExpression:(id)arg1;	// IMP=0x0000000000062c49
- (void)visitPredicate:(id)arg1;	// IMP=0x0000000000062ad4
- (id)createPredicateForFetchFromPredicate:(id)arg1 withContext:(id)arg2;	// IMP=0x0000000000062a1a
- (id)createPredicateForFetchFromPredicate:(id)arg1;	// IMP=0x0000000000062a06
- (void)dealloc;	// IMP=0x00000000000629cb
- (id)init;	// IMP=0x000000000006299c

@end
