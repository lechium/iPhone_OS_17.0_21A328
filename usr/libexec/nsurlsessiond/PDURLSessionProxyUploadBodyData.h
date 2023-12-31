//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class NSData, PDURLSessionProxyTaskMessage;

@interface PDURLSessionProxyUploadBodyData : PBCodable
{
    NSData *_bodyData;	// 8 = 0x8
    PDURLSessionProxyTaskMessage *_task;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0020000000067193
@property(retain, nonatomic) NSData *bodyData; // @synthesize bodyData=_bodyData;
@property(retain, nonatomic) PDURLSessionProxyTaskMessage *task; // @synthesize task=_task;
- (void)mergeFrom:(id)arg1;	// IMP=0x00100000000670d0
- (unsigned long long)hash;	// IMP=0x0010000000067083
- (_Bool)isEqual:(id)arg1;	// IMP=0x0010000000066fcb
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0010000000066f2d
- (void)copyTo:(id)arg1;	// IMP=0x0010000000066eca
- (void)writeTo:(id)arg1;	// IMP=0x0010000000066e6d
- (_Bool)readFrom:(id)arg1;	// IMP=0x0010000000066c9f
- (id)dictionaryRepresentation;	// IMP=0x0010000000066bef
- (id)description;	// IMP=0x0010000000066b40
@property(readonly, nonatomic) _Bool hasBodyData;
@property(readonly, nonatomic) _Bool hasTask;

@end

