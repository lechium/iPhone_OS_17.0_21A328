//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class KVItemBuilder, NSDictionary, NSMutableArray, NSString;

__attribute__((visibility("hidden")))
@interface KMMapper_AppIntentVocabulary : NSObject
{
    KVItemBuilder *_builder;	// 8 = 0x8
    NSMutableArray *_items;	// 16 = 0x10
    NSDictionary *_intentSlotToFieldTypeMap;	// 24 = 0x18
}

+ (Class)externalObjectClass;	// IMP=0x0010000000010374
- (void).cxx_destruct;	// IMP=0x0000000000010341
- (id)_resolveFieldTypeFromIntentSlotName:(id)arg1;	// IMP=0x000000000001020c
- (_Bool)_addItemWithItemId:(id)arg1 fieldType:(long long)arg2 values:(id)arg3 error:(id *)arg4;	// IMP=0x000000000000ff00
- (id)itemsFromExternalObject:(id)arg1 additionalFields:(id)arg2 error:(id *)arg3;	// IMP=0x000000000000f24a
- (long long)targetItemType;	// IMP=0x000000000000f23f
- (id)init;	// IMP=0x000000000000f004

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

