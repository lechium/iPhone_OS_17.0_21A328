//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE, NSString;

__attribute__((visibility("hidden")))
@interface SNKeyValueMutation : NSObject
{
    MISSING_TYPE *type;	// 8 = 0x8
    MISSING_TYPE *keyPath;	// 16 = 0x10
    MISSING_TYPE *value;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x00000000000a3eba
- (id)copyWithZone:(void *)arg1;	// IMP=0x00000000000a3e48
@property(nonatomic, readonly) long long hash;
- (_Bool)isEqualToKeyValueMutation:(id)arg1;	// IMP=0x00000000000a39ed
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000000a38f4
- (id)initAssignmentOfKeyPath:(id)arg1 value:(id)arg2;	// IMP=0x00000000000a3841
- (id)initRemovalOfKeyPath:(id)arg1;	// IMP=0x00000000000a37c5
- (id)initUpdateOfKeyPath:(id)arg1 value:(id)arg2;	// IMP=0x00000000000a370c
- (id)initAdditionOfKeyPath:(id)arg1 value:(id)arg2;	// IMP=0x00000000000a36ac
- (id)init;	// IMP=0x00000000000a36a3
@property(nonatomic, readonly) id value; // @synthesize value;
@property(nonatomic, readonly) NSString *keyPath;
@property(nonatomic, readonly) long long type; // @synthesize type;

@end
