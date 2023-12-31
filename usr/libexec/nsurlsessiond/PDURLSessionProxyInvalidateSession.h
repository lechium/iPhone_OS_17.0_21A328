//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class PDURLSessionProxySessionMessage;

@interface PDURLSessionProxyInvalidateSession : PBCodable
{
    PDURLSessionProxySessionMessage *_session;	// 8 = 0x8
    _Bool _shouldCancel;	// 16 = 0x10
    struct {
        unsigned int shouldCancel:1;
    } _has;	// 20 = 0x14
}

- (void).cxx_destruct;	// IMP=0x0020000000053c05
@property(nonatomic) _Bool shouldCancel; // @synthesize shouldCancel=_shouldCancel;
@property(retain, nonatomic) PDURLSessionProxySessionMessage *session; // @synthesize session=_session;
- (void)mergeFrom:(id)arg1;	// IMP=0x0010000000053b57
- (unsigned long long)hash;	// IMP=0x0010000000053b04
- (_Bool)isEqual:(id)arg1;	// IMP=0x0010000000053a3a
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00100000000539a2
- (void)copyTo:(id)arg1;	// IMP=0x001000000005393f
- (void)writeTo:(id)arg1;	// IMP=0x00100000000538d8
- (_Bool)readFrom:(id)arg1;	// IMP=0x00100000000536a4
- (id)dictionaryRepresentation;	// IMP=0x00100000000535be
- (id)description;	// IMP=0x001000000005350f
@property(nonatomic) _Bool hasShouldCancel;
@property(readonly, nonatomic) _Bool hasSession;

@end

