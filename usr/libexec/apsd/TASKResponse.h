//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class NSString;

@interface TASKResponse : PBCodable
{
    NSString *_errorMessage;	// 8 = 0x8
    int _status;	// 16 = 0x10
    unsigned int _taskId;	// 20 = 0x14
}

- (void).cxx_destruct;	// IMP=0x0020000000053740
@property(retain, nonatomic) NSString *errorMessage; // @synthesize errorMessage=_errorMessage;
@property(nonatomic) unsigned int taskId; // @synthesize taskId=_taskId;
@property(nonatomic) int status; // @synthesize status=_status;
- (void)mergeFrom:(id)arg1;	// IMP=0x001000000005369d
- (unsigned long long)hash;	// IMP=0x0010000000053650
- (_Bool)isEqual:(id)arg1;	// IMP=0x00100000000535a0
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x001000000005350a
- (void)copyTo:(id)arg1;	// IMP=0x00100000000534c6
- (void)writeTo:(id)arg1;	// IMP=0x0010000000053456
- (_Bool)readFrom:(id)arg1;	// IMP=0x0010000000053449
- (id)dictionaryRepresentation;	// IMP=0x00100000000530d0
- (id)description;	// IMP=0x0010000000053021
@property(readonly, nonatomic) _Bool hasErrorMessage;
- (int)StringAsStatus:(id)arg1;	// IMP=0x0010000000052f3a
- (id)statusAsString:(int)arg1;	// IMP=0x0010000000052ef1

@end
