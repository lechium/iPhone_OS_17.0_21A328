//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSIndexSet;
@protocol EDSearchableCriterion;

__attribute__((visibility("hidden")))
@interface _EMSearchableIndexResultKey : NSObject
{
    id <EDSearchableCriterion> _criterion;	// 8 = 0x8
    NSIndexSet *_mailboxIDs;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000000014d3d6
@property(copy, nonatomic) NSIndexSet *mailboxIDs; // @synthesize mailboxIDs=_mailboxIDs;
@property(retain, nonatomic) id <EDSearchableCriterion> criterion; // @synthesize criterion=_criterion;
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000014d28d
- (unsigned long long)hash;	// IMP=0x000000000014d24e
- (id)description;	// IMP=0x000000000014d200

@end

