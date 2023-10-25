//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CRDocument, NSMapTable, NSString;

__attribute__((visibility("hidden")))
@interface CRDictionary : NSObject
{
    CRDocument *_document;	// 8 = 0x8
    NSMapTable *_contents;	// 16 = 0x10
    long long _removeClock;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x000000000010161c
@property(nonatomic) long long removeClock; // @synthesize removeClock=_removeClock;
@property(retain, nonatomic) NSMapTable *contents; // @synthesize contents=_contents;
@property(nonatomic) __weak CRDocument *document; // @synthesize document=_document;
@property(readonly, copy) NSString *description;
- (id)tombstone;	// IMP=0x0000000000101112
- (void)walkGraph:(CDUnknownBlockType)arg1;	// IMP=0x0000000000100ea5
- (id)deltaSince:(id)arg1 in:(id)arg2;	// IMP=0x000000000010096d
- (void)mergeWithDictionary:(id)arg1;	// IMP=0x00000000000ffd79
- (void)mergeWith:(id)arg1;	// IMP=0x00000000000ffcd2
- (void)realizeLocalChangesIn:(id)arg1;	// IMP=0x00000000000ff82f
- (void)removeAllObjects;	// IMP=0x00000000000ff78c
- (void)removeObjectForKey:(id)arg1;	// IMP=0x00000000000ff6b8
- (void)setObject:(id)arg1 forKeyedSubscript:(id)arg2;	// IMP=0x00000000000ff6a6
- (id)objectForKeyedSubscript:(id)arg1;	// IMP=0x00000000000ff684
- (void)setObject:(id)arg1 forKey:(id)arg2;	// IMP=0x00000000000ff3b9
- (id)objectForKey:(id)arg1;	// IMP=0x00000000000ff2e9
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000000ff203
@property(readonly) unsigned long long hash;
- (void)enumerateKeysObjectsAndTimestampsUsingBlock:(CDUnknownBlockType)arg1;	// IMP=0x00000000000feee9
- (id)keyEnumerator;	// IMP=0x00000000000fee85
- (unsigned long long)countByEnumeratingWithState:(CDStruct_70511ce9 *)arg1 objects:(id *)arg2 count:(unsigned long long)arg3;	// IMP=0x00000000000fee0a
@property(readonly) unsigned long long count;
- (id)initWithCRCoder:(id)arg1 dictionary:(const void *)arg2 elementValueDecoder:(CDUnknownBlockType)arg3;	// IMP=0x00000000000fe911
- (id)initWithCRCoder:(id)arg1 dictionary:(const void *)arg2;	// IMP=0x00000000000fe81e
- (id)initWithCRCoder:(id)arg1;	// IMP=0x00000000000fe744
- (void)encodeWithCRCoder:(id)arg1 dictionary:(void *)arg2 elementValueCoder:(CDUnknownBlockType)arg3;	// IMP=0x00000000000fe37d
- (void)encodeWithCRCoder:(id)arg1 dictionary:(void *)arg2;	// IMP=0x00000000000fe21b
- (void)encodeWithCRCoder:(id)arg1;	// IMP=0x00000000000fe165
- (id)initWithDocument:(id)arg1;	// IMP=0x00000000000fe0ab
- (id)init;	// IMP=0x00000000000fe027

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end
