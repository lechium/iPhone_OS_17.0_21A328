//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class PDURLSessionProxyTaskMessage;

@interface PDURLSessionProxyCancelTask : PBCodable
{
    PDURLSessionProxyTaskMessage *_task;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0020000000060bd7
@property(retain, nonatomic) PDURLSessionProxyTaskMessage *task; // @synthesize task=_task;
- (void)mergeFrom:(id)arg1;	// IMP=0x0010000000060b59
- (unsigned long long)hash;	// IMP=0x0010000000060b3c
- (_Bool)isEqual:(id)arg1;	// IMP=0x0010000000060aac
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0010000000060a34
- (void)copyTo:(id)arg1;	// IMP=0x0010000000060a0a
- (void)writeTo:(id)arg1;	// IMP=0x00100000000609e6
- (_Bool)readFrom:(id)arg1;	// IMP=0x001000000006083c
- (id)dictionaryRepresentation;	// IMP=0x00100000000607b2
- (id)description;	// IMP=0x0010000000060703
@property(readonly, nonatomic) _Bool hasTask;

@end
