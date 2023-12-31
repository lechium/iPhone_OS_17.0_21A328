//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface AWDHomeKitProcessMemoryPressureEvent : PBCodable
{
    unsigned long long _timestamp;	// 8 = 0x8
    NSString *_dataSyncState;	// 16 = 0x10
    NSString *_processMemoryState;	// 24 = 0x18
    CDStruct_b5306035 _has;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x00000000009c2fc0
@property(retain, nonatomic) NSString *dataSyncState; // @synthesize dataSyncState=_dataSyncState;
@property(retain, nonatomic) NSString *processMemoryState; // @synthesize processMemoryState=_processMemoryState;
@property(nonatomic) unsigned long long timestamp; // @synthesize timestamp=_timestamp;
- (void)mergeFrom:(id)arg1;	// IMP=0x00000000009c2ee1
- (unsigned long long)hash;	// IMP=0x00000000009c2e64
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000009c2d7c
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000009c2cb9
- (void)copyTo:(id)arg1;	// IMP=0x00000000009c2c35
- (void)writeTo:(id)arg1;	// IMP=0x00000000009c2bb2
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000009c29ab
- (id)dictionaryRepresentation;	// IMP=0x00000000009c28c4
- (id)description;	// IMP=0x00000000009c2815
@property(readonly, nonatomic) _Bool hasDataSyncState;
@property(readonly, nonatomic) _Bool hasProcessMemoryState;
@property(nonatomic) _Bool hasTimestamp;

@end

