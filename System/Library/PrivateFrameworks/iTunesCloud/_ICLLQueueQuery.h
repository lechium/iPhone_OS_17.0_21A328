//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class NSString, _ICLLPlaybackControlSettings, _ICLLQueue;

__attribute__((visibility("hidden")))
@interface _ICLLQueueQuery : PBCodable
{
    _ICLLPlaybackControlSettings *_controlSettings;	// 8 = 0x8
    _ICLLQueue *_queue;	// 16 = 0x10
    NSString *_queueContext;	// 24 = 0x18
    int _revision;	// 32 = 0x20
    CDStruct_3e022450 _has;	// 36 = 0x24
}

- (void).cxx_destruct;	// IMP=0x000000000010dad3
- (unsigned long long)hash;	// IMP=0x000000000010da43
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000010d934
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000010d846
- (void)writeTo:(id)arg1;	// IMP=0x000000000010d7a6
- (_Bool)readFrom:(id)arg1;	// IMP=0x000000000010d799
- (id)dictionaryRepresentation;	// IMP=0x000000000010d641
- (id)description;	// IMP=0x000000000010d592

@end

