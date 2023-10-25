//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSData, NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface FTAudioPacket : NSObject
{
    NSMutableDictionary *_storage;	// 8 = 0x8
    NSData *_data;	// 16 = 0x10
    const struct AudioPacket *_root;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00000000000c1244
- (id)flatbuffData;	// IMP=0x00000000000c10bd
- (Offset_a6aee705)addObjectToBuffer:(void *)arg1;	// IMP=0x00000000000c0f42
- (void)audio_bytes:(CDUnknownBlockType)arg1;	// IMP=0x00000000000c0ed3
@property(readonly, nonatomic) NSData *audio_bytes;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000c0e7d
- (id)initWithFlatbuffData:(id)arg1 root:(const struct AudioPacket *)arg2 verify:(_Bool)arg3;	// IMP=0x00000000000c0cd2
- (id)initWithFlatbuffData:(id)arg1 root:(const struct AudioPacket *)arg2;	// IMP=0x00000000000c0cbd
- (id)initAndVerifyWithFlatbuffData:(id)arg1;	// IMP=0x00000000000c0ca3
- (id)initWithFlatbuffData:(id)arg1;	// IMP=0x00000000000c0c8c

@end
