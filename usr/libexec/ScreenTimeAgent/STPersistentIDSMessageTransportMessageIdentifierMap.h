//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSNumber;
@protocol STKeyValueStore;

@interface STPersistentIDSMessageTransportMessageIdentifierMap : NSObject
{
    NSMutableDictionary *_messageIdentifiersByPrimitiveIdentifier;	// 8 = 0x8
    NSMutableDictionary *_primitiveIdentifiersByMessageIdentifier;	// 16 = 0x10
    id <STKeyValueStore> _keyValueStore;	// 24 = 0x18
}

+ (id)_loadMessageIdentifiersByPrimitiveIdentifierFromKeyValueStore:(id)arg1;	// IMP=0x0020000000060da2
- (void).cxx_destruct;	// IMP=0x0020000000061618
@property(readonly) id <STKeyValueStore> keyValueStore; // @synthesize keyValueStore=_keyValueStore;
@property(readonly) NSMutableDictionary *primitiveIdentifiersByMessageIdentifier; // @synthesize primitiveIdentifiersByMessageIdentifier=_primitiveIdentifiersByMessageIdentifier;
@property(readonly) NSMutableDictionary *messageIdentifiersByPrimitiveIdentifier; // @synthesize messageIdentifiersByPrimitiveIdentifier=_messageIdentifiersByPrimitiveIdentifier;
- (id)messageIdentifierForPrimitiveMessageIdentifier:(id)arg1;	// IMP=0x0010000000061543
- (void)removeMessageIdentifier:(id)arg1;	// IMP=0x001000000006143f
- (void)removePrimitiveMessageIdentifier:(id)arg1;	// IMP=0x001000000006133b
- (void)insertMessageIdentifier:(id)arg1 forPrimitiveMessageIdentifier:(id)arg2;	// IMP=0x0010000000061231
- (void)save;	// IMP=0x0010000000060b99
@property(readonly) NSNumber *numberOfEntries;
- (id)initWithKeyValueStore:(id)arg1;	// IMP=0x00100000000609c3

@end

