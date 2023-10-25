//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSData, NSMutableDictionary, NSString;

__attribute__((visibility("hidden")))
@interface FTContextWithPronHints : NSObject
{
    NSMutableDictionary *_storage;	// 8 = 0x8
    NSData *_data;	// 16 = 0x10
    const struct ContextWithPronHints *_root;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00000000000be9ff
- (id)flatbuffData;	// IMP=0x00000000000be878
- (Offset_b036dfee)addObjectToBuffer:(void *)arg1;	// IMP=0x00000000000be3d0
- (void)pron_hints_enumerateObjectsUsingBlock:(CDUnknownBlockType)arg1;	// IMP=0x00000000000be215
- (unsigned long long)pron_hints_count;	// IMP=0x00000000000be179
- (id)pron_hints_objectAtIndex:(unsigned long long)arg1;	// IMP=0x00000000000be080
@property(readonly, nonatomic) NSArray *pron_hints;
@property(readonly, nonatomic) NSString *contextual_text;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000bdee9
- (id)initWithFlatbuffData:(id)arg1 root:(const struct ContextWithPronHints *)arg2 verify:(_Bool)arg3;	// IMP=0x00000000000bdd3e
- (id)initWithFlatbuffData:(id)arg1 root:(const struct ContextWithPronHints *)arg2;	// IMP=0x00000000000bdd29
- (id)initAndVerifyWithFlatbuffData:(id)arg1;	// IMP=0x00000000000bdd0f
- (id)initWithFlatbuffData:(id)arg1;	// IMP=0x00000000000bdcf8

@end
