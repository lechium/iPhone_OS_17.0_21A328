//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface GKFriendSuggesterSettings : NSObject
{
    unsigned long long _mininumIDsForServiceRequest;	// 8 = 0x8
    unsigned long long _mininumIDsForContactAssociationIDsOnly;	// 16 = 0x10
    unsigned long long _suggestionsLimit;	// 24 = 0x18
}

+ (id)allBagKeys;	// IMP=0x00400000001e0396
@property(readonly, nonatomic) unsigned long long suggestionsLimit; // @synthesize suggestionsLimit=_suggestionsLimit;
@property(readonly, nonatomic) unsigned long long mininumIDsForContactAssociationIDsOnly; // @synthesize mininumIDsForContactAssociationIDsOnly=_mininumIDsForContactAssociationIDsOnly;
@property(readonly, nonatomic) unsigned long long mininumIDsForServiceRequest; // @synthesize mininumIDsForServiceRequest=_mininumIDsForServiceRequest;
- (id)description;	// IMP=0x00000000001e0413
- (id)initWithBagValues:(id)arg1;	// IMP=0x00100000001e02dd
- (id)init;	// IMP=0x00100000001e02c4

@end
