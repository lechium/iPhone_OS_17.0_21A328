//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface AWDHomeKitDatabaseCKOperationCompletionEvent : PBCodable
{
    long long _errorCode;	// 8 = 0x8
    unsigned long long _timestamp;	// 16 = 0x10
    int _containerType;	// 24 = 0x18
    NSString *_errorDomain;	// 32 = 0x20
    _Bool _didSucceed;	// 40 = 0x28
    struct {
        unsigned int errorCode:1;
        unsigned int timestamp:1;
        unsigned int containerType:1;
        unsigned int didSucceed:1;
    } _has;	// 44 = 0x2c
}

- (void).cxx_destruct;	// IMP=0x00000000008ffb6e
@property(retain, nonatomic) NSString *errorDomain; // @synthesize errorDomain=_errorDomain;
@property(nonatomic) long long errorCode; // @synthesize errorCode=_errorCode;
@property(nonatomic) _Bool didSucceed; // @synthesize didSucceed=_didSucceed;
@property(nonatomic) unsigned long long timestamp; // @synthesize timestamp=_timestamp;
- (void)mergeFrom:(id)arg1;	// IMP=0x00000000008ffa5f
- (unsigned long long)hash;	// IMP=0x00000000008ff9bf
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000008ff882
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000008ff795
- (void)copyTo:(id)arg1;	// IMP=0x00000000008ff6dd
- (void)writeTo:(id)arg1;	// IMP=0x00000000008ff60c
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000008ff255
- (id)dictionaryRepresentation;	// IMP=0x00000000008ff06d
- (id)description;	// IMP=0x00000000008fefbe
@property(readonly, nonatomic) _Bool hasErrorDomain;
- (int)StringAsContainerType:(id)arg1;	// IMP=0x00000000008feef5
- (id)containerTypeAsString:(int)arg1;	// IMP=0x00000000008feead
@property(nonatomic) _Bool hasContainerType;
@property(nonatomic) int containerType; // @synthesize containerType=_containerType;
@property(nonatomic) _Bool hasErrorCode;
@property(nonatomic) _Bool hasDidSucceed;
@property(nonatomic) _Bool hasTimestamp;

@end
