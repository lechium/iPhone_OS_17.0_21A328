//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "HDJournalEntry.h"

@class NSData, NSUUID;

__attribute__((visibility("hidden")))
@interface _HDAssociationInsertionJournalEntry : HDJournalEntry
{
    _Bool _enforceSameSource;	// 8 = 0x8
    NSUUID *_parentUUID;	// 16 = 0x10
    NSData *_childUUIDsData;	// 24 = 0x18
    long long _provenance;	// 32 = 0x20
    long long _syncIdentity;	// 40 = 0x28
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00600000001ba0bf
+ (void)applyEntries:(id)arg1 withProfile:(id)arg2;	// IMP=0x00600000001b9b9c
- (void).cxx_destruct;	// IMP=0x000000000001f94e
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000001f876
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000001ba0c7
- (id)description;	// IMP=0x00000000001b9ad5

@end

