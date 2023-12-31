//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class FTRecognitionSausage, NSData, NSMutableDictionary, NSString;

__attribute__((visibility("hidden")))
@interface FTSiriPayloadTranslationInfo : NSObject
{
    NSMutableDictionary *_storage;	// 8 = 0x8
    NSData *_data;	// 16 = 0x10
    const struct SiriPayloadTranslationInfo *_root;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00000000000df7f4
- (id)flatbuffData;	// IMP=0x00000000000df66d
- (Offset_308573ba)addObjectToBuffer:(void *)arg1;	// IMP=0x00000000000df4e9
@property(readonly, nonatomic) FTRecognitionSausage *pre_sausage_payload;
@property(readonly, nonatomic) NSString *post_itn_payload;
@property(readonly, nonatomic) NSString *pre_itn_payload;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000df32f
- (id)initWithFlatbuffData:(id)arg1 root:(const struct SiriPayloadTranslationInfo *)arg2 verify:(_Bool)arg3;	// IMP=0x00000000000df184
- (id)initWithFlatbuffData:(id)arg1 root:(const struct SiriPayloadTranslationInfo *)arg2;	// IMP=0x00000000000df16f
- (id)initAndVerifyWithFlatbuffData:(id)arg1;	// IMP=0x00000000000df155
- (id)initWithFlatbuffData:(id)arg1;	// IMP=0x00000000000df13e

@end

