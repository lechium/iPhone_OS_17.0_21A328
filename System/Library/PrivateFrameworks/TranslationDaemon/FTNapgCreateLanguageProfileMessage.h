//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class FTCreateLanguageProfileRequest, FTCreateLanguageProfileResponse, NSData, NSMutableDictionary;
@protocol FLTBFBufferAccessor><NSCopying;

__attribute__((visibility("hidden")))
@interface FTNapgCreateLanguageProfileMessage : NSObject
{
    NSMutableDictionary *_storage;	// 8 = 0x8
    NSData *_data;	// 16 = 0x10
    const struct NapgCreateLanguageProfileMessage *_root;	// 24 = 0x18
}

+ (long long)session_message_typeForImmutableObject:(id)arg1;	// IMP=0x001000000007ee33
+ (Class)session_message_immutableClassForType:(long long)arg1;	// IMP=0x001000000007edf3
- (void).cxx_destruct;	// IMP=0x000000000007f1b3
- (id)flatbuffData;	// IMP=0x000000000007f02c
- (Offset_0544be67)addObjectToBuffer:(void *)arg1;	// IMP=0x000000000007eec2
@property(readonly, nonatomic) NSObject<FLTBFBufferAccessor><NSCopying> *session_message;
@property(readonly, nonatomic) FTCreateLanguageProfileResponse *session_messageAsFTCreateLanguageProfileResponse;
@property(readonly, nonatomic) FTCreateLanguageProfileRequest *session_messageAsFTCreateLanguageProfileRequest;
@property(readonly, nonatomic) long long session_message_type;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000007eb8c
- (id)initWithFlatbuffData:(id)arg1 root:(const struct NapgCreateLanguageProfileMessage *)arg2 verify:(_Bool)arg3;	// IMP=0x000000000007e9a9
- (id)initWithFlatbuffData:(id)arg1 root:(const struct NapgCreateLanguageProfileMessage *)arg2;	// IMP=0x000000000007e994
- (id)initAndVerifyWithFlatbuffData:(id)arg1;	// IMP=0x000000000007e97a
- (id)initWithFlatbuffData:(id)arg1;	// IMP=0x000000000007e963

@end

