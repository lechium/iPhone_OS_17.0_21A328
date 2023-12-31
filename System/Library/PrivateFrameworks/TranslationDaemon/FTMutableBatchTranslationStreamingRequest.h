//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class FTBatchTranslationFeedbackRequest, FTBatchTranslationLoggingRequest, FTBatchTranslationRequest, FTTranslationSupportedLanguagesRequest, NSObject;
@protocol FLTBFBufferAccessor><NSCopying;

__attribute__((visibility("hidden")))
@interface FTMutableBatchTranslationStreamingRequest
{
}

+ (long long)content_typeForObject:(id)arg1;	// IMP=0x0060000000196bd3
+ (long long)content_typeForMutableObject:(id)arg1;	// IMP=0x0060000000196af9
+ (Class)content_mutableClassForType:(long long)arg1;	// IMP=0x0060000000196abf
@property(copy, nonatomic) NSObject<FLTBFBufferAccessor><NSCopying> *content; // @dynamic content;
@property(copy, nonatomic) FTTranslationSupportedLanguagesRequest *contentAsFTTranslationSupportedLanguagesRequest;
@property(copy, nonatomic) FTBatchTranslationLoggingRequest *contentAsFTBatchTranslationLoggingRequest;
@property(copy, nonatomic) FTBatchTranslationFeedbackRequest *contentAsFTBatchTranslationFeedbackRequest;
@property(copy, nonatomic) FTBatchTranslationRequest *contentAsFTBatchTranslationRequest;
@property(nonatomic) long long content_type;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000196494
- (id)init;	// IMP=0x0000000000196406

@end

