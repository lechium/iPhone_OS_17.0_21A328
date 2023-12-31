//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class FTAudioLimitExceeded, FTFinalBlazarResponse, FTFinalSpeechRecognitionResponse, FTPartialSpeechRecognitionResponse, FTRecognitionCandidate, FTRequestStatsResponse, NSData, NSMutableDictionary;
@protocol FLTBFBufferAccessor><NSCopying;

__attribute__((visibility("hidden")))
@interface FTMultilingualStreamingResponse : NSObject
{
    NSMutableDictionary *_storage;	// 8 = 0x8
    NSData *_data;	// 16 = 0x10
    const struct MultilingualStreamingResponse *_root;	// 24 = 0x18
}

+ (long long)content_typeForImmutableObject:(id)arg1;	// IMP=0x001000000017e6e1
+ (Class)content_immutableClassForType:(long long)arg1;	// IMP=0x001000000017e6a7
- (void).cxx_destruct;	// IMP=0x000000000017ecc5
- (id)flatbuffData;	// IMP=0x000000000017eb3e
- (Offset_f0c4c3ad)addObjectToBuffer:(void *)arg1;	// IMP=0x000000000017e813
@property(readonly, nonatomic) NSObject<FLTBFBufferAccessor><NSCopying> *content;
@property(readonly, nonatomic) FTFinalBlazarResponse *contentAsFTFinalBlazarResponse;
@property(readonly, nonatomic) FTAudioLimitExceeded *contentAsFTAudioLimitExceeded;
@property(readonly, nonatomic) FTRequestStatsResponse *contentAsFTRequestStatsResponse;
@property(readonly, nonatomic) FTRecognitionCandidate *contentAsFTRecognitionCandidate;
@property(readonly, nonatomic) FTPartialSpeechRecognitionResponse *contentAsFTPartialSpeechRecognitionResponse;
@property(readonly, nonatomic) FTFinalSpeechRecognitionResponse *contentAsFTFinalSpeechRecognitionResponse;
@property(readonly, nonatomic) long long content_type;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000017e09a
- (id)initWithFlatbuffData:(id)arg1 root:(const struct MultilingualStreamingResponse *)arg2 verify:(_Bool)arg3;	// IMP=0x000000000017deb7
- (id)initWithFlatbuffData:(id)arg1 root:(const struct MultilingualStreamingResponse *)arg2;	// IMP=0x000000000017dea2
- (id)initAndVerifyWithFlatbuffData:(id)arg1;	// IMP=0x000000000017de88
- (id)initWithFlatbuffData:(id)arg1;	// IMP=0x000000000017de71

@end

