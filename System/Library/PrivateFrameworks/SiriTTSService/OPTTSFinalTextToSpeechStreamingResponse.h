//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSData, NSMutableDictionary, NSString;

__attribute__((visibility("hidden")))
@interface OPTTSFinalTextToSpeechStreamingResponse : NSObject
{
    NSMutableDictionary *_storage;	// 8 = 0x8
    NSData *_data;	// 16 = 0x10
    const struct FinalTextToSpeechStreamingResponse *_root;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0000000000111a0f
- (id)flatbuffData;	// IMP=0x00000000001118ee
- (Offset_8cb3aebb)addObjectToBuffer:(void *)arg1;	// IMP=0x0000000000111685
@property(readonly, nonatomic) int total_pkt_number;
@property(readonly, nonatomic) NSString *stream_id;
@property(readonly, nonatomic) NSString *error_str;
@property(readonly, nonatomic) int error_code;
@property(readonly, nonatomic) NSString *session_id;
@property(readonly, nonatomic) NSString *speech_id;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000011146c
- (id)initWithFlatbuffData:(id)arg1 root:(const struct FinalTextToSpeechStreamingResponse *)arg2 verify:(_Bool)arg3;	// IMP=0x0000000000111289
- (id)initWithFlatbuffData:(id)arg1 root:(const struct FinalTextToSpeechStreamingResponse *)arg2;	// IMP=0x0000000000111274
- (id)initAndVerifyWithFlatbuffData:(id)arg1;	// IMP=0x000000000011125a
- (id)initWithFlatbuffData:(id)arg1;	// IMP=0x0000000000111243

@end

