//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class FTKeywordFinderRequest, FTKeywordFinderResponse, NSData, NSMutableDictionary;
@protocol FLTBFBufferAccessor><NSCopying;

__attribute__((visibility("hidden")))
@interface FTAsrKeywordFinderMessage : NSObject
{
    NSMutableDictionary *_storage;	// 8 = 0x8
    NSData *_data;	// 16 = 0x10
    const struct AsrKeywordFinderMessage *_root;	// 24 = 0x18
}

+ (long long)session_message_typeForImmutableObject:(id)arg1;	// IMP=0x0010000000073f47
+ (Class)session_message_immutableClassForType:(long long)arg1;	// IMP=0x0010000000073f07
- (void).cxx_destruct;	// IMP=0x00000000000742c7
- (id)flatbuffData;	// IMP=0x0000000000074140
- (Offset_7acf425c)addObjectToBuffer:(void *)arg1;	// IMP=0x0000000000073fd6
@property(readonly, nonatomic) NSObject<FLTBFBufferAccessor><NSCopying> *session_message;
@property(readonly, nonatomic) FTKeywordFinderResponse *session_messageAsFTKeywordFinderResponse;
@property(readonly, nonatomic) FTKeywordFinderRequest *session_messageAsFTKeywordFinderRequest;
@property(readonly, nonatomic) long long session_message_type;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000073ca0
- (id)initWithFlatbuffData:(id)arg1 root:(const struct AsrKeywordFinderMessage *)arg2 verify:(_Bool)arg3;	// IMP=0x0000000000073abd
- (id)initWithFlatbuffData:(id)arg1 root:(const struct AsrKeywordFinderMessage *)arg2;	// IMP=0x0000000000073aa8
- (id)initAndVerifyWithFlatbuffData:(id)arg1;	// IMP=0x0000000000073a8e
- (id)initWithFlatbuffData:(id)arg1;	// IMP=0x0000000000073a77

@end

