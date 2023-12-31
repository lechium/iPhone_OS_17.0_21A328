//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "NSMapTable.h"

__attribute__((visibility("hidden")))
@interface NSClassicMapTable : NSMapTable
{
    struct {
        CDUnknownFunctionPointerType hash;
        CDUnknownFunctionPointerType isEqual;
        CDUnknownFunctionPointerType retain;
        CDUnknownFunctionPointerType release;
        CDUnknownFunctionPointerType describe;
        void *notAKeyMarker;
    } _keyCallBacks;	// 8 = 0x8
    struct {
        CDUnknownFunctionPointerType retain;
        CDUnknownFunctionPointerType release;
        CDUnknownFunctionPointerType describe;
    } _valueCallBacks;	// 56 = 0x38
    struct __CFBasicHash *_ht;	// 80 = 0x50
}

- (unsigned long long)getKeys:(const void **)arg1 values:(const void **)arg2;	// IMP=0x00000000006b694b
- (id)allValues;	// IMP=0x00000000006b674c
- (id)allKeys;	// IMP=0x00000000006b654d
- (id)description;	// IMP=0x00000000006b630d
- (void)_reclaim;	// IMP=0x00000000006b6307
- (unsigned long long)count;	// IMP=0x00000000006b62f2
- (void)removeObjectForKey:(id)arg1;	// IMP=0x00000000006b629c
- (void *)existingItemForSetItem:(const void *)arg1 forAbsentKey:(const void *)arg2;	// IMP=0x00000000006b61bc
- (void)setItem:(const void *)arg1 forKnownAbsentKey:(const void *)arg2;	// IMP=0x00000000006b609a
- (void)setObject:(id)arg1 forKey:(id)arg2;	// IMP=0x00000000006b6044
- (id)objectForKey:(id)arg1;	// IMP=0x00000000006b5fd7
- (_Bool)mapMember:(const void *)arg1 originalKey:(const void **)arg2 value:(const void **)arg3;	// IMP=0x00000000006b5f3f
- (id)copy;	// IMP=0x00000000006b5e4f
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000006b5e02
- (void)removeAllItems;	// IMP=0x00000000006b5de3
- (void)dealloc;	// IMP=0x00000000006b5d7f
- (id)init;	// IMP=0x00000000006b5d76

@end

