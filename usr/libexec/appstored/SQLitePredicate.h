//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface SQLitePredicate : NSObject
{
}

- (_Bool)isEqual:(id)arg1;	// IMP=0x00400000001b76a8
- (unsigned long long)hash;	// IMP=0x00100000001b768e
- (id)SQLJoinClausesForEntityClass:(Class)arg1;	// IMP=0x00100000001b7686
- (id)SQLForEntityClass:(Class)arg1;	// IMP=0x00100000001b767e
- (void)applyBinding:(id)arg1 atIndex:(inout int *)arg2;	// IMP=0x00100000001b7678
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00100000001b766d

@end
