//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class FTTranslationLocalePair, NSArray, NSData, NSMutableDictionary, NSString;

__attribute__((visibility("hidden")))
@interface FTSpeechTranslationMtResponse : NSObject
{
    NSMutableDictionary *_storage;	// 8 = 0x8
    NSData *_data;	// 16 = 0x10
    const struct SpeechTranslationMtResponse *_root;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0000000000122c15
- (id)flatbuffData;	// IMP=0x0000000000122a8e
- (Offset_2d97ff7b)addObjectToBuffer:(void *)arg1;	// IMP=0x0000000000122143
- (void)alternative_descriptions_enumerateObjectsUsingBlock:(CDUnknownBlockType)arg1;	// IMP=0x0000000000121f92
- (unsigned long long)alternative_descriptions_count;	// IMP=0x0000000000121ef6
- (id)alternative_descriptions_objectAtIndex:(unsigned long long)arg1;	// IMP=0x0000000000121dfd
@property(readonly, nonatomic) NSArray *alternative_descriptions;
@property(readonly, nonatomic) _Bool is_final;
- (void)n_best_translated_phrases_enumerateObjectsUsingBlock:(CDUnknownBlockType)arg1;	// IMP=0x0000000000121afd
- (unsigned long long)n_best_translated_phrases_count;	// IMP=0x0000000000121a61
- (id)n_best_translated_phrases_objectAtIndex:(unsigned long long)arg1;	// IMP=0x0000000000121968
@property(readonly, nonatomic) NSArray *n_best_translated_phrases;
@property(readonly, nonatomic) FTTranslationLocalePair *translation_locale_pair;
@property(readonly, nonatomic) NSString *return_str;
@property(readonly, nonatomic) int return_code;
@property(readonly, nonatomic) NSString *request_id;
@property(readonly, nonatomic) NSString *conversation_id;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000001215f7
- (id)initWithFlatbuffData:(id)arg1 root:(const struct SpeechTranslationMtResponse *)arg2 verify:(_Bool)arg3;	// IMP=0x000000000012144c
- (id)initWithFlatbuffData:(id)arg1 root:(const struct SpeechTranslationMtResponse *)arg2;	// IMP=0x0000000000121437
- (id)initAndVerifyWithFlatbuffData:(id)arg1;	// IMP=0x000000000012141d
- (id)initWithFlatbuffData:(id)arg1;	// IMP=0x0000000000121406

@end

