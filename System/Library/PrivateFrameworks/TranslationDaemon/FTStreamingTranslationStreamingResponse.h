//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class FTTranslationResponse, NSData, NSMutableDictionary;
@protocol FLTBFBufferAccessor><NSCopying;

__attribute__((visibility("hidden")))
@interface FTStreamingTranslationStreamingResponse : NSObject
{
    NSMutableDictionary *_storage;	// 8 = 0x8
    NSData *_data;	// 16 = 0x10
    const struct StreamingTranslationStreamingResponse *_root;	// 24 = 0x18
}

+ (long long)content_typeForImmutableObject:(id)arg1;	// IMP=0x0010000000184696
+ (Class)content_immutableClassForType:(long long)arg1;	// IMP=0x0010000000184668
- (void).cxx_destruct;	// IMP=0x000000000018496d
- (id)flatbuffData;	// IMP=0x00000000001847e6
- (Offset_8c5a2d43)addObjectToBuffer:(void *)arg1;	// IMP=0x00000000001846f1
@property(readonly, nonatomic) NSObject<FLTBFBufferAccessor><NSCopying> *content;
@property(readonly, nonatomic) FTTranslationResponse *contentAsFTTranslationResponse;
@property(readonly, nonatomic) long long content_type;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000001844fe
- (id)initWithFlatbuffData:(id)arg1 root:(const struct StreamingTranslationStreamingResponse *)arg2 verify:(_Bool)arg3;	// IMP=0x000000000018431b
- (id)initWithFlatbuffData:(id)arg1 root:(const struct StreamingTranslationStreamingResponse *)arg2;	// IMP=0x0000000000184306
- (id)initAndVerifyWithFlatbuffData:(id)arg1;	// IMP=0x00000000001842ec
- (id)initWithFlatbuffData:(id)arg1;	// IMP=0x00000000001842d5

@end
