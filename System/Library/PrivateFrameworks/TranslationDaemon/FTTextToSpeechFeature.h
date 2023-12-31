//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSData, NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface FTTextToSpeechFeature : NSObject
{
    NSMutableDictionary *_storage;	// 8 = 0x8
    NSData *_data;	// 16 = 0x10
    const struct TextToSpeechFeature *_root;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x000000000010216b
- (id)flatbuffData;	// IMP=0x0000000000101fe4
- (Offset_fc1e4a4a)addObjectToBuffer:(void *)arg1;	// IMP=0x0000000000100d8a
- (void)neural_phoneme_sequence_enumerateObjectsUsingBlock:(CDUnknownBlockType)arg1;	// IMP=0x0000000000100bd9
- (unsigned long long)neural_phoneme_sequence_count;	// IMP=0x0000000000100b3d
- (id)neural_phoneme_sequence_objectAtIndex:(unsigned long long)arg1;	// IMP=0x0000000000100a44
@property(readonly, nonatomic) NSArray *neural_phoneme_sequence;
- (void)replacement_enumerateObjectsUsingBlock:(CDUnknownBlockType)arg1;	// IMP=0x0000000000100775
- (unsigned long long)replacement_count;	// IMP=0x00000000001006d9
- (id)replacement_objectAtIndex:(unsigned long long)arg1;	// IMP=0x00000000001005e0
@property(readonly, nonatomic) NSArray *replacement;
- (void)prompts_enumerateObjectsUsingBlock:(CDUnknownBlockType)arg1;	// IMP=0x0000000000100311
- (unsigned long long)prompts_count;	// IMP=0x0000000000100275
- (id)prompts_objectAtIndex:(unsigned long long)arg1;	// IMP=0x000000000010017c
@property(readonly, nonatomic) NSArray *prompts;
- (void)phoneme_sequence_enumerateObjectsUsingBlock:(CDUnknownBlockType)arg1;	// IMP=0x00000000000ffead
- (unsigned long long)phoneme_sequence_count;	// IMP=0x00000000000ffe11
- (id)phoneme_sequence_objectAtIndex:(unsigned long long)arg1;	// IMP=0x00000000000ffd18
@property(readonly, nonatomic) NSArray *phoneme_sequence;
- (void)normalized_text_enumerateObjectsUsingBlock:(CDUnknownBlockType)arg1;	// IMP=0x00000000000ffa49
- (unsigned long long)normalized_text_count;	// IMP=0x00000000000ff9ad
- (id)normalized_text_objectAtIndex:(unsigned long long)arg1;	// IMP=0x00000000000ff8b4
@property(readonly, nonatomic) NSArray *normalized_text;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000ff78b
- (id)initWithFlatbuffData:(id)arg1 root:(const struct TextToSpeechFeature *)arg2 verify:(_Bool)arg3;	// IMP=0x00000000000ff5e0
- (id)initWithFlatbuffData:(id)arg1 root:(const struct TextToSpeechFeature *)arg2;	// IMP=0x00000000000ff5cb
- (id)initAndVerifyWithFlatbuffData:(id)arg1;	// IMP=0x00000000000ff5b1
- (id)initWithFlatbuffData:(id)arg1;	// IMP=0x00000000000ff59a

@end

