//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class MISSING_TYPE, NSString;

@interface PDURLSessionProxySessionMessage : PBCodable
{
    long long _idsPriority;	// 8 = 0x8
    unsigned long long _sequenceNumber;	// 16 = 0x10
    NSString *_launchUUID;	// 24 = 0x18
    NSString *_sessionIdentifier;	// 32 = 0x20
    NSString *_uuidString;	// 40 = 0x28
    struct {
        unsigned int idsPriority:1;
        unsigned int sequenceNumber:1;
    } _has;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x002000000006d5be
@property(retain, nonatomic) NSString *launchUUID; // @synthesize launchUUID=_launchUUID;
@property(nonatomic) long long idsPriority; // @synthesize idsPriority=_idsPriority;
@property(nonatomic) unsigned long long sequenceNumber; // @synthesize sequenceNumber=_sequenceNumber;
@property(retain, nonatomic) NSString *uuidString; // @synthesize uuidString=_uuidString;
@property(retain, nonatomic) NSString *sessionIdentifier; // @synthesize sessionIdentifier=_sessionIdentifier;
- (MISSING_TYPE *)mergeFrom: /* Error: Ran out of types for this method. */;	// IMP=0x001000000006d46b
- (unsigned long long)hash;	// IMP=0x001000000006d3b7
- (_Bool)isEqual:(id)arg1;	// IMP=0x001000000006d281
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x001000000006d174
- (void)copyTo:(id)arg1;	// IMP=0x001000000006d0b2
- (void)writeTo:(id)arg1;	// IMP=0x001000000006cfe8
- (_Bool)readFrom:(id)arg1;	// IMP=0x001000000006cfdb
- (id)dictionaryRepresentation;	// IMP=0x001000000006ce6d
- (id)description;	// IMP=0x001000000006cdbe
@property(readonly, nonatomic) _Bool hasLaunchUUID;
@property(nonatomic) _Bool hasIdsPriority;
@property(nonatomic) _Bool hasSequenceNumber;
@property(readonly, nonatomic) _Bool hasUuidString;
@property(readonly, nonatomic) _Bool hasSessionIdentifier;

@end
