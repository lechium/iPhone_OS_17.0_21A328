//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBRequest.h>

@interface CKDPUserPrivacySettingsBatchLookupRequest : PBRequest
{
}

+ (id)options;	// IMP=0x0010000000357908
- (void)mergeFrom:(id)arg1;	// IMP=0x0000000000357bd4
- (unsigned long long)hash;	// IMP=0x0000000000357bcc
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000357b89
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000357b50
- (void)copyTo:(id)arg1;	// IMP=0x0000000000357b4a
- (Class)responseClass;	// IMP=0x0000000000357b39
- (unsigned int)requestTypeCode;	// IMP=0x0000000000357b2e
- (void)writeTo:(id)arg1;	// IMP=0x0000000000357b28
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000357b1b
- (id)dictionaryRepresentation;	// IMP=0x0000000000357a07
- (id)description;	// IMP=0x0000000000357958

@end

