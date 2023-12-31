//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableSet, NSString;

__attribute__((visibility("hidden")))
@interface PFUbiquityToManyConflictDiff : NSObject
{
    NSMutableSet *_insertedObjectIDs;	// 8 = 0x8
    NSMutableSet *_deletedObjectIDs;	// 16 = 0x10
    NSString *_relationshipKey;	// 24 = 0x18
}

- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000031c081
- (id)description;	// IMP=0x000000000031c021
- (void)dealloc;	// IMP=0x000000000031bfbd
- (id)initForRelationshipAtKey:(id)arg1;	// IMP=0x000000000031bf89
- (id)init;	// IMP=0x000000000031bf2d

@end

