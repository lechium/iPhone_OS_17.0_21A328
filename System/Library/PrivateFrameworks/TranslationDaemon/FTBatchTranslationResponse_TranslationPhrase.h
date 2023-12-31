//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class FTTranslationPhraseMetaInfo, NSArray, NSData, NSMutableDictionary, NSString;

__attribute__((visibility("hidden")))
@interface FTBatchTranslationResponse_TranslationPhrase : NSObject
{
    NSMutableDictionary *_storage;	// 8 = 0x8
    NSData *_data;	// 16 = 0x10
    const struct TranslationPhrase *_root;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x000000000012feb8
- (id)flatbuffData;	// IMP=0x000000000012fd31
- (Offset_1d53e784)addObjectToBuffer:(void *)arg1;	// IMP=0x000000000012f7e7
@property(readonly, nonatomic) FTTranslationPhraseMetaInfo *meta_info_data;
- (void)repeated_spans_enumerateObjectsUsingBlock:(CDUnknownBlockType)arg1;	// IMP=0x000000000012f563
- (unsigned long long)repeated_spans_count;	// IMP=0x000000000012f4c7
- (id)repeated_spans_objectAtIndex:(unsigned long long)arg1;	// IMP=0x000000000012f3ce
@property(readonly, nonatomic) NSArray *repeated_spans;
@property(readonly, nonatomic) _Bool low_confidence;
@property(readonly, nonatomic) NSString *meta_info;
@property(readonly, nonatomic) NSString *translation_phrase;
@property(readonly, nonatomic) float confidence;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000012f16a
- (id)initWithFlatbuffData:(id)arg1 root:(const struct TranslationPhrase *)arg2 verify:(_Bool)arg3;	// IMP=0x000000000012efbf
- (id)initWithFlatbuffData:(id)arg1 root:(const struct TranslationPhrase *)arg2;	// IMP=0x000000000012efaa
- (id)initAndVerifyWithFlatbuffData:(id)arg1;	// IMP=0x000000000012ef90
- (id)initWithFlatbuffData:(id)arg1;	// IMP=0x000000000012ef79

@end

