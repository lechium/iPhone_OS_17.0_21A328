//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDate, STUserID;

@interface STFamilyMemberGenesisStateItem : NSObject
{
    STUserID *_userID;	// 8 = 0x8
    long long _genesisState;	// 16 = 0x10
    NSDate *_creationDate;	// 24 = 0x18
}

+ (_Bool)supportsSecureCoding;	// IMP=0x002000000003a33e
+ (long long)_validStateFromCurrentState:(long long)arg1 desiredState:(long long)arg2;	// IMP=0x0010000000039feb
- (void).cxx_destruct;	// IMP=0x002000000003a604
@property(readonly, copy) NSDate *creationDate; // @synthesize creationDate=_creationDate;
@property(readonly) long long genesisState; // @synthesize genesisState=_genesisState;
@property(readonly, copy) STUserID *userID; // @synthesize userID=_userID;
- (unsigned long long)hash;	// IMP=0x001000000003a532
- (_Bool)isEqualToFamilyMemberGenesisStateItem:(id)arg1;	// IMP=0x001000000003a3fa
- (_Bool)isEqual:(id)arg1;	// IMP=0x001000000003a397
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x001000000003a346
- (void)encodeWithCoder:(id)arg1;	// IMP=0x001000000003a2ab
- (id)initWithCoder:(id)arg1;	// IMP=0x001000000003a191
@property(readonly) _Bool expired;
- (id)itemWithUpdatedState:(long long)arg1;	// IMP=0x0010000000039f28
- (id)description;	// IMP=0x0010000000039e40
- (id)_initWithUserID:(id)arg1 genesisState:(long long)arg2 creationDate:(id)arg3;	// IMP=0x0010000000039d82
- (id)initWithUserID:(id)arg1 genesisState:(long long)arg2;	// IMP=0x0010000000039cfe

@end

