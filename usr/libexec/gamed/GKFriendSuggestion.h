//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

@interface GKFriendSuggestion : NSObject
{
    NSString *_contactID;	// 8 = 0x8
    NSString *_handle;	// 16 = 0x10
    NSString *_prefixedHandle;	// 24 = 0x18
    NSString *_contactAssociationID;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x00200000000ea451
@property(copy, nonatomic) NSString *contactAssociationID; // @synthesize contactAssociationID=_contactAssociationID;
@property(copy, nonatomic) NSString *prefixedHandle; // @synthesize prefixedHandle=_prefixedHandle;
@property(copy, nonatomic) NSString *handle; // @synthesize handle=_handle;
@property(copy, nonatomic) NSString *contactID; // @synthesize contactID=_contactID;
- (id)description;	// IMP=0x00100000000ea2ab
- (id)initWithContactID:(id)arg1 handle:(id)arg2 prefixedHandle:(id)arg3 contactAssociationID:(id)arg4;	// IMP=0x00100000000ea1c3
- (id)initWithSuggestion:(id)arg1;	// IMP=0x00100000000ea04e

@end
