//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class FTStreamingTranslationRequest, FTTranslationResponse, NSData, NSMutableDictionary;
@protocol FLTBFBufferAccessor><NSCopying;

__attribute__((visibility("hidden")))
@interface FTMtStreamingTranslationMessage : NSObject
{
    NSMutableDictionary *_storage;	// 8 = 0x8
    NSData *_data;	// 16 = 0x10
    const struct MtStreamingTranslationMessage *_root;	// 24 = 0x18
}

+ (long long)session_message_typeForImmutableObject:(id)arg1;	// IMP=0x001000000007ff23
+ (Class)session_message_immutableClassForType:(long long)arg1;	// IMP=0x001000000007fee3
- (void).cxx_destruct;	// IMP=0x00000000000802a3
- (id)flatbuffData;	// IMP=0x000000000008011c
- (Offset_e2b6082e)addObjectToBuffer:(void *)arg1;	// IMP=0x000000000007ffb2
@property(readonly, nonatomic) NSObject<FLTBFBufferAccessor><NSCopying> *session_message;
@property(readonly, nonatomic) FTTranslationResponse *session_messageAsFTTranslationResponse;
@property(readonly, nonatomic) FTStreamingTranslationRequest *session_messageAsFTStreamingTranslationRequest;
@property(readonly, nonatomic) long long session_message_type;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000007fc7c
- (id)initWithFlatbuffData:(id)arg1 root:(const struct MtStreamingTranslationMessage *)arg2 verify:(_Bool)arg3;	// IMP=0x000000000007fa99
- (id)initWithFlatbuffData:(id)arg1 root:(const struct MtStreamingTranslationMessage *)arg2;	// IMP=0x000000000007fa84
- (id)initAndVerifyWithFlatbuffData:(id)arg1;	// IMP=0x000000000007fa6a
- (id)initWithFlatbuffData:(id)arg1;	// IMP=0x000000000007fa53

@end

