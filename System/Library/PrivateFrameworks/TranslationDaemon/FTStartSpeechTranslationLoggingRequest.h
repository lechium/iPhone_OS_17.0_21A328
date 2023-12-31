//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class FTLanguageDetected, FTTranslationLocalePair, NSArray, NSData, NSMutableDictionary, NSString;

__attribute__((visibility("hidden")))
@interface FTStartSpeechTranslationLoggingRequest : NSObject
{
    NSMutableDictionary *_storage;	// 8 = 0x8
    NSData *_data;	// 16 = 0x10
    const struct StartSpeechTranslationLoggingRequest *_root;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00000000001200ba
- (id)flatbuffData;	// IMP=0x000000000011ff33
- (Offset_a1e3ccf4)addObjectToBuffer:(void *)arg1;	// IMP=0x000000000011f5c3
- (void)user_interacted_senses_enumerateObjectsUsingBlock:(CDUnknownBlockType)arg1;	// IMP=0x000000000011f408
- (unsigned long long)user_interacted_senses_count;	// IMP=0x000000000011f36c
- (id)user_interacted_senses_objectAtIndex:(unsigned long long)arg1;	// IMP=0x000000000011f273
@property(readonly, nonatomic) NSArray *user_interacted_senses;
@property(readonly, nonatomic) NSString *user_selected_sense;
- (void)senses_enumerateObjectsUsingBlock:(CDUnknownBlockType)arg1;	// IMP=0x000000000011ef2c
- (unsigned long long)senses_count;	// IMP=0x000000000011ee90
- (id)senses_objectAtIndex:(unsigned long long)arg1;	// IMP=0x000000000011ed97
@property(readonly, nonatomic) NSArray *senses;
@property(readonly, nonatomic) NSString *user_selected_locale;
@property(readonly, nonatomic) FTLanguageDetected *detected_locale;
@property(readonly, nonatomic) FTTranslationLocalePair *translation_locale_pair;
@property(readonly, nonatomic) NSString *request_id;
@property(readonly, nonatomic) NSString *conversation_id;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000011e97e
- (id)initWithFlatbuffData:(id)arg1 root:(const struct StartSpeechTranslationLoggingRequest *)arg2 verify:(_Bool)arg3;	// IMP=0x000000000011e7d3
- (id)initWithFlatbuffData:(id)arg1 root:(const struct StartSpeechTranslationLoggingRequest *)arg2;	// IMP=0x000000000011e7be
- (id)initAndVerifyWithFlatbuffData:(id)arg1;	// IMP=0x000000000011e7a4
- (id)initWithFlatbuffData:(id)arg1;	// IMP=0x000000000011e78d

@end

