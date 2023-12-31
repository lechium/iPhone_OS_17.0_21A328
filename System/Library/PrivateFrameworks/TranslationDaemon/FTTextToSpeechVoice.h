//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSData, NSMutableDictionary, NSString;

__attribute__((visibility("hidden")))
@interface FTTextToSpeechVoice : NSObject
{
    NSMutableDictionary *_storage;	// 8 = 0x8
    NSData *_data;	// 16 = 0x10
    const struct TextToSpeechVoice *_root;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00000000000f8ec4
- (id)flatbuffData;	// IMP=0x00000000000f8d3d
- (Offset_b4fd9e28)addObjectToBuffer:(void *)arg1;	// IMP=0x00000000000f89c9
@property(readonly, nonatomic) NSString *identifier;
@property(readonly, nonatomic) NSString *type;
@property(readonly, nonatomic) NSString *quality;
@property(readonly, nonatomic) NSString *version;
@property(readonly, nonatomic) NSString *name;
@property(readonly, nonatomic) NSString *gender;
@property(readonly, nonatomic) NSString *language;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000f86bc
- (id)initWithFlatbuffData:(id)arg1 root:(const struct TextToSpeechVoice *)arg2 verify:(_Bool)arg3;	// IMP=0x00000000000f8511
- (id)initWithFlatbuffData:(id)arg1 root:(const struct TextToSpeechVoice *)arg2;	// IMP=0x00000000000f84fc
- (id)initAndVerifyWithFlatbuffData:(id)arg1;	// IMP=0x00000000000f84e2
- (id)initWithFlatbuffData:(id)arg1;	// IMP=0x00000000000f84cb

@end

