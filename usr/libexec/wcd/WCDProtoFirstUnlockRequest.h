//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBRequest.h>

@interface WCDProtoFirstUnlockRequest : PBRequest
{
    unsigned int _version;	// 8 = 0x8
    CDStruct_f20694ce _has;	// 12 = 0xc
}

@property(nonatomic) unsigned int version; // @synthesize version=_version;
- (void)mergeFrom:(id)arg1;	// IMP=0x001000000000b041
- (unsigned long long)hash;	// IMP=0x001000000000b017
- (_Bool)isEqual:(id)arg1;	// IMP=0x001000000000af85
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x001000000000af23
- (void)copyTo:(id)arg1;	// IMP=0x001000000000aeff
- (void)writeTo:(id)arg1;	// IMP=0x001000000000aed4
- (_Bool)readFrom:(id)arg1;	// IMP=0x001000000000aec7
- (id)dictionaryRepresentation;	// IMP=0x001000000000ac79
- (id)description;	// IMP=0x001000000000abca
@property(nonatomic) _Bool hasVersion;

@end

