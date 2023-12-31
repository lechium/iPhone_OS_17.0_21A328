//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class FTRecognitionResult, NSData, NSMutableDictionary, NSString;

__attribute__((visibility("hidden")))
@interface FTCorrectionsValidatorRequest : NSObject
{
    NSMutableDictionary *_storage;	// 8 = 0x8
    NSData *_data;	// 16 = 0x10
    const struct CorrectionsValidatorRequest *_root;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00000000000f6938
- (id)flatbuffData;	// IMP=0x00000000000f67b1
- (Offset_17540bad)addObjectToBuffer:(void *)arg1;	// IMP=0x00000000000f64db
@property(readonly, nonatomic) NSString *corrected_utterance;
@property(readonly, nonatomic) NSString *original_utterance;
@property(readonly, nonatomic) FTRecognitionResult *recognition_result;
@property(readonly, nonatomic) NSString *language;
@property(readonly, nonatomic) NSString *session_id;
@property(readonly, nonatomic) NSString *speech_id;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000f61d7
- (id)initWithFlatbuffData:(id)arg1 root:(const struct CorrectionsValidatorRequest *)arg2 verify:(_Bool)arg3;	// IMP=0x00000000000f602c
- (id)initWithFlatbuffData:(id)arg1 root:(const struct CorrectionsValidatorRequest *)arg2;	// IMP=0x00000000000f6017
- (id)initAndVerifyWithFlatbuffData:(id)arg1;	// IMP=0x00000000000f5ffd
- (id)initWithFlatbuffData:(id)arg1;	// IMP=0x00000000000f5fe6

@end

