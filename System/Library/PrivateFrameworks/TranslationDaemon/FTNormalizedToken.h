//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSData, NSMutableDictionary, NSString;

__attribute__((visibility("hidden")))
@interface FTNormalizedToken : NSObject
{
    NSMutableDictionary *_storage;	// 8 = 0x8
    NSData *_data;	// 16 = 0x10
    const struct NormalizedToken *_root;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00000000000d3817
- (id)flatbuffData;	// IMP=0x00000000000d3690
- (Offset_e63aca8d)addObjectToBuffer:(void *)arg1;	// IMP=0x00000000000d31f0
- (void)nbest_variants_enumerateObjectsUsingBlock:(CDUnknownBlockType)arg1;	// IMP=0x00000000000d303f
- (unsigned long long)nbest_variants_count;	// IMP=0x00000000000d2fa3
- (id)nbest_variants_objectAtIndex:(unsigned long long)arg1;	// IMP=0x00000000000d2eaa
@property(readonly, nonatomic) NSArray *nbest_variants;
@property(readonly, nonatomic) NSString *original_token;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000d2d13
- (id)initWithFlatbuffData:(id)arg1 root:(const struct NormalizedToken *)arg2 verify:(_Bool)arg3;	// IMP=0x00000000000d2b68
- (id)initWithFlatbuffData:(id)arg1 root:(const struct NormalizedToken *)arg2;	// IMP=0x00000000000d2b53
- (id)initAndVerifyWithFlatbuffData:(id)arg1;	// IMP=0x00000000000d2b39
- (id)initWithFlatbuffData:(id)arg1;	// IMP=0x00000000000d2b22

@end

