//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSData, NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface OPTTSTTSWordPhonemes : NSObject
{
    NSMutableDictionary *_storage;	// 8 = 0x8
    NSData *_data;	// 16 = 0x10
    const struct TTSWordPhonemes *_root;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00000000000fea79
- (id)flatbuffData;	// IMP=0x00000000000fe958
- (Offset_9874306f)addObjectToBuffer:(void *)arg1;	// IMP=0x00000000000fe5ac
- (void)phonemes_enumerateObjectsUsingBlock:(CDUnknownBlockType)arg1;	// IMP=0x00000000000fe406
- (unsigned long long)phonemes_count;	// IMP=0x00000000000fe36a
- (id)phonemes_objectAtIndex:(unsigned long long)arg1;	// IMP=0x00000000000fe248
@property(readonly, nonatomic) NSArray *phonemes;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000fe138
- (id)initWithFlatbuffData:(id)arg1 root:(const struct TTSWordPhonemes *)arg2 verify:(_Bool)arg3;	// IMP=0x00000000000fdf55
- (id)initWithFlatbuffData:(id)arg1 root:(const struct TTSWordPhonemes *)arg2;	// IMP=0x00000000000fdf40
- (id)initAndVerifyWithFlatbuffData:(id)arg1;	// IMP=0x00000000000fdf26
- (id)initWithFlatbuffData:(id)arg1;	// IMP=0x00000000000fdf0f

@end
